/*
 * XREFs of ?_LoadTopologyDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x14033E520
 * Callers:
 *     <none>
 * Callees:
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1402D8188 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 *     ?Reserve@CCD_TOPOLOGY@@QEAAGG@Z @ 0x14031BDF0 (-Reserve@CCD_TOPOLOGY@@QEAAGG@Z.c)
 *     ?GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ @ 0x14033F0C8 (-GetSetId@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAPEBVCCD_SET_STRING_ID@@XZ.c)
 */

__int64 __fastcall CCD_RECENT_TOPOLOGY_RETRIEVER::_LoadTopologyDescriptorCallback(
        struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this,
        CCD_TOPOLOGY **a2)
{
  const struct CCD_SET_STRING_ID *SetId; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  const struct CCD_SET_STRING_ID *v7; // rdx
  int v8; // eax
  __int16 v9; // ax
  CCD_TOPOLOGY *v10; // rcx
  unsigned __int16 v11; // bx
  __int64 result; // rax
  int Topology; // eax
  unsigned int v14; // ebx

  SetId = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetSetId(this);
  v7 = SetId;
  if ( !SetId )
  {
    v8 = -1073741823;
    goto LABEL_9;
  }
  v8 = *(_DWORD *)SetId;
  if ( v8 < 0 )
  {
LABEL_9:
    WdLogSingleEntry2(2LL, v7, v8);
    WdLogGlobalForLineNumber = 1060;
    return 3221225473LL;
  }
  v9 = *((_WORD *)v7 + 16);
  v10 = *a2;
  if ( !v9 )
  {
    WdLogSingleEntry4(2LL, this, v7, *a2, *((_QWORD *)v10 + 8));
    WdLogGlobalForLineNumber = 1071;
    return 3221225473LL;
  }
  *((_WORD *)a2 + 6) = v9;
  v11 = *((_WORD *)v7 + 16);
  if ( (unsigned __int16)CCD_TOPOLOGY::Reserve(v10, v11, v5, v6) < v11 )
    return 3221225507LL;
  Topology = CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::LoadTopology(this, *a2);
  v14 = Topology;
  if ( Topology >= 0 )
    return 0LL;
  WdLogSingleEntry4(2LL, Topology, this, *a2, *((_QWORD *)*a2 + 8));
  result = v14;
  WdLogGlobalForLineNumber = 1091;
  return result;
}
