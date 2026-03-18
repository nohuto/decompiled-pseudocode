/*
 * XREFs of HalpInterruptLookupController @ 0x140445B74
 * Callers:
 *     HalpInterruptEnableNmi @ 0x140443DC4 (HalpInterruptEnableNmi.c)
 *     HalpInterruptSetLineState @ 0x140443F50 (HalpInterruptSetLineState.c)
 *     ExtEnvSetVpptTarget @ 0x140444404 (ExtEnvSetVpptTarget.c)
 *     HalpInterruptFindBestRouting @ 0x14044478C (HalpInterruptFindBestRouting.c)
 *     HalpInterruptLineToGsi @ 0x140444838 (HalpInterruptLineToGsi.c)
 *     HalDisableInterrupt @ 0x140444D30 (HalDisableInterrupt.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1404453D0 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptFindLines @ 0x140445644 (HalpInterruptFindLines.c)
 *     HalpMaskInterrupt @ 0x140445850 (HalpMaskInterrupt.c)
 *     HalpUnmaskInterrupt @ 0x140445980 (HalpUnmaskInterrupt.c)
 *     HalpInterruptSetDestinationInternal @ 0x140446EB8 (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptRemap @ 0x14053E694 (HalpInterruptRemap.c)
 *     HalpInterruptRequestInterrupt @ 0x14053FF70 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptRestoreClock @ 0x140540090 (HalpInterruptRestoreClock.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x140541798 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x14054180C (HalpInterruptServiceActiveBoth.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x1405478D4 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptRegisterController @ 0x1405601C0 (HalpInterruptRegisterController.c)
 *     HalpInterruptRegisterLine @ 0x140560680 (HalpInterruptRegisterLine.c)
 *     HalpInterruptUnmap @ 0x1406F1C38 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x140B5D638 (HalpInterruptMaskAcpi.c)
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
