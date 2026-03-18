/*
 * XREFs of ?FindKey@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEBAHAEBI@Z @ 0x1800FAD00
 * Callers:
 *     ?OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@Z @ 0x1800F9BEC (-OnUp@CManipulationManager@@IEAAXPEAVCInteraction@@IW4InputType@@PEAVCManipulationContext@@_N33@.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180238940 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 *     ?OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z @ 0x180261CDC (-OnCapturePointer@CManipulationManager@@IEAAXIPEAVCInteraction@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMap<unsigned int,TargetingInfo,CMapEqualHelper<unsigned int,TargetingInfo>>::FindKey(
        __int64 a1,
        _DWORD *a2)
{
  unsigned int v2; // r9d
  __int64 i; // r10

  v2 = 0;
  for ( i = 0LL; i < *(int *)(a1 + 16); ++i )
  {
    if ( *(_DWORD *)(*(_QWORD *)a1 + 4 * i) == *a2 )
      return v2;
    ++v2;
  }
  return 0xFFFFFFFFLL;
}
