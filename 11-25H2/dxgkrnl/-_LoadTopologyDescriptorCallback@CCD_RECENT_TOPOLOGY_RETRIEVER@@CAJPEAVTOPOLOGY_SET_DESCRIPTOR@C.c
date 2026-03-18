/*
 * XREFs of ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x140369680
 * Callers:
 *     <none>
 * Callees:
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1402EA610 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x14036B030 (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x140374C0C (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 */

__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::_LoadTopologyDescriptorCallback(
        struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        CCD_TOPOLOGY **a2)
{
  const struct CCD_SET_STRING_ID *SetId; // rax
  const struct CCD_SET_STRING_ID *v5; // rdx
  int v6; // eax
  __int16 v7; // ax
  CCD_TOPOLOGY *v8; // rcx
  unsigned __int16 v9; // bx
  __int64 result; // rax
  int Topology; // eax
  unsigned int v12; // ebx

  SetId = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(this);
  v5 = SetId;
  if ( !SetId )
  {
    v6 = -1073741823;
    goto LABEL_9;
  }
  v6 = *(_DWORD *)SetId;
  if ( v6 < 0 )
  {
LABEL_9:
    WdLogSingleEntry2(2LL, v5, v6);
    WdLogGlobalForLineNumber = 1060;
    return 3221225473LL;
  }
  v7 = *((_WORD *)v5 + 16);
  v8 = *a2;
  if ( !v7 )
  {
    WdLogSingleEntry4(2LL, this, v5, *a2, *((_QWORD *)v8 + 8));
    WdLogGlobalForLineNumber = 1071;
    return 3221225473LL;
  }
  *((_WORD *)a2 + 6) = v7;
  v9 = *((_WORD *)v5 + 16);
  if ( CCD_TOPOLOGY::Reserve(v8, v9) < v9 )
    return 3221225507LL;
  Topology = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::LoadTopology(this, *a2);
  v12 = Topology;
  if ( Topology >= 0 )
    return 0LL;
  WdLogSingleEntry4(2LL, Topology, this, *a2, *((_QWORD *)*a2 + 8));
  result = v12;
  WdLogGlobalForLineNumber = 1091;
  return result;
}
