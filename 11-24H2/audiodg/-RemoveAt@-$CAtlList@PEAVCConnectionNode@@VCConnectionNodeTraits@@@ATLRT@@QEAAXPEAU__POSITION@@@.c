/*
 * XREFs of ?RemoveAt@?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@QEAAXPEAU__POSITION@@@Z @ 0x1400360BC
 * Callers:
 *     ?InsertAfter@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAAJPEAVCConnectionNode@@0@Z @ 0x14000C59C (-InsertAfter@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnection.c)
 *     ?RemoveEndpointFromList@CAudioProcessor@@AEAAJAEAV?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@PEAUIAudioEndpoint@@@Z @ 0x140036068 (-RemoveEndpointFromList@CAudioProcessor@@AEAAJAEAV-$CAtlList@PEAVCConnectionNode@@VCConnectionNo.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14005619C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::RemoveAt(__int64 *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v3; // rax

  v2 = (__int64)a1;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  if ( a2 != (__int64 *)*a1 )
    a1 = (__int64 *)a2[1];
  *a1 = *a2;
  v3 = a2[1];
  if ( a2 == *(__int64 **)(v2 + 8) )
    *(_QWORD *)(v2 + 8) = v3;
  else
    *(_QWORD *)(*a2 + 8) = v3;
  return ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>::FreeNode(v2, a2);
}
