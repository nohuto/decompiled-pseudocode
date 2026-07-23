/*
 * XREFs of HalpInterruptLookupController @ 0x1403726E4
 * Callers:
 *     HalpInterruptSetLineState @ 0x1402B4E20 (HalpInterruptSetLineState.c)
 *     HalpMaskInterrupt @ 0x1403723C0 (HalpMaskInterrupt.c)
 *     HalpUnmaskInterrupt @ 0x1403724F0 (HalpUnmaskInterrupt.c)
 *     HalpInterruptFindLines @ 0x140373298 (HalpInterruptFindLines.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1403735D0 (HalpInterruptFindControllerAndLineState.c)
 *     HalDisableInterrupt @ 0x140373FF0 (HalDisableInterrupt.c)
 *     HalpInterruptSetDestinationInternal @ 0x1403747D8 (HalpInterruptSetDestinationInternal.c)
 *     ExtEnvSetVpptTarget @ 0x140374B64 (ExtEnvSetVpptTarget.c)
 *     HalpInterruptFindBestRouting @ 0x1403752D0 (HalpInterruptFindBestRouting.c)
 *     HalpInterruptLineToGsi @ 0x14049A1F8 (HalpInterruptLineToGsi.c)
 *     HalpInterruptEnableNmi @ 0x14049E4CC (HalpInterruptEnableNmi.c)
 *     HalpInterruptRemap @ 0x14053E7C4 (HalpInterruptRemap.c)
 *     HalpInterruptRequestInterrupt @ 0x1405400F0 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptRestoreClock @ 0x140540210 (HalpInterruptRestoreClock.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x140541918 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x14054198C (HalpInterruptServiceActiveBoth.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x140547A84 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptRegisterController @ 0x1405606F0 (HalpInterruptRegisterController.c)
 *     HalpInterruptRegisterLine @ 0x140560BB0 (HalpInterruptRegisterLine.c)
 *     HalpInterruptUnmap @ 0x1406FB668 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x140B6DFB8 (HalpInterruptMaskAcpi.c)
 * Callees:
 *     <none>
 */

ULONG_PTR *__fastcall HalpInterruptLookupController(int a1)
{
  ULONG_PTR *v1; // rdx
  ULONG_PTR *result; // rax

  v1 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  while ( v1 != &HalpRegisteredInterruptControllers )
  {
    result = v1;
    v1 = (ULONG_PTR *)*v1;
    if ( *((_DWORD *)result + 64) == a1 )
      return result;
  }
  return 0LL;
}
