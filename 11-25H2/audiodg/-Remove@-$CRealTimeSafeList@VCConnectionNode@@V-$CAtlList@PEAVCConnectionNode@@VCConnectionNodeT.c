/*
 * XREFs of ?Remove@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAAJPEAVCConnectionNode@@@Z @ 0x14000CA4C
 * Callers:
 *     ?EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z @ 0x14000B140 (-EvaluateConnectionOwnership@CAudioProcessor@@AEAAJPEAVCConnectionNode@@@Z.c)
 * Callees:
 *     ?SwapRTPointer@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@IEAAXXZ @ 0x14000C648 (-SwapRTPointer@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnecti.c)
 *     ?InnerRemove@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@IEAAJPEAVCConnectionNode@@I@Z @ 0x14000CBF8 (-InnerRemove@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnection.c)
 */

__int64 __fastcall CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::Remove(
        __int64 a1,
        __int64 a2)
{
  int v4; // ebx

  if ( a2 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 120));
    v4 = CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::InnerRemove(
           a1,
           a2,
           *(unsigned __int16 *)(a1 + 112) ^ 1u);
    if ( v4 >= 0 )
    {
      CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::SwapRTPointer(a1);
      v4 = CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::InnerRemove(
             a1,
             a2,
             *(unsigned __int16 *)(a1 + 112) ^ 1u);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 120));
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return (unsigned int)v4;
}
