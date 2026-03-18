/*
 * XREFs of _anonymous_namespace_::_UpdateConnectedSetCallback @ 0x140367E50
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z @ 0x140368EA0 (-QueryTopologyClass@CCD_TOPOLOGY@@QEAAJPEAW4CCD_TOPOLOGY_CLASS@@@Z.c)
 *     ?GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ @ 0x14036D0C0 (-GetModalitySetId@CCD_TOPOLOGY@@QEBAAEBVCCD_SET_STRING_ID@@XZ.c)
 *     ?SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TOPOLOGY_CLASS@@@Z @ 0x1403E34F8 (-SetRecentTopologySetId@CONNECTED_SET_DESCRIPTOR@CCD_STORE@@QEAAJAEBVCCD_SET_STRING_ID@@W4CCD_TO.c)
 */

__int64 __fastcall anonymous_namespace_::_UpdateConnectedSetCallback(__int64 a1, CCD_TOPOLOGY *a2)
{
  int TopologyClass; // eax
  unsigned int v5; // edi
  const struct CCD_SET_STRING_ID *ModalitySetId; // rax
  __int64 result; // rax
  int v8; // eax
  unsigned int v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = 0;
  TopologyClass = CCD_TOPOLOGY::QueryTopologyClass(a2, (enum CCD_TOPOLOGY_CLASS *)&v9);
  v5 = TopologyClass;
  if ( TopologyClass >= 0 )
  {
    ModalitySetId = CCD_TOPOLOGY::GetModalitySetId(a2);
    if ( !*((_WORD *)ModalitySetId + 4) )
    {
      WdLogSingleEntry3(2LL, a2, *((_QWORD *)a2 + 8), *(int *)ModalitySetId);
      result = 3221225473LL;
      WdLogGlobalForLineNumber = 3087;
      return result;
    }
    v8 = CCD_STORE::CONNECTED_SET_DESCRIPTOR::SetRecentTopologySetId(a1, ModalitySetId, v9);
    v5 = v8;
    if ( v8 < 0 )
    {
      WdLogSingleEntry3(2LL, v8, a2, *((_QWORD *)a2 + 8));
      WdLogGlobalForLineNumber = 3099;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, TopologyClass, a2, *((_QWORD *)a2 + 8));
    WdLogGlobalForLineNumber = 3076;
  }
  return v5;
}
