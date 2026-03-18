/*
 * XREFs of HalpInterruptLookupController @ 0x1403B9D14
 * Callers:
 *     HalDisableInterrupt @ 0x1403B8EA0 (HalDisableInterrupt.c)
 *     HalpInterruptFindControllerAndLineState @ 0x1403B9540 (HalpInterruptFindControllerAndLineState.c)
 *     HalpInterruptFindLines @ 0x1403B97B4 (HalpInterruptFindLines.c)
 *     HalpMaskInterrupt @ 0x1403B99F0 (HalpMaskInterrupt.c)
 *     HalpUnmaskInterrupt @ 0x1403B9B20 (HalpUnmaskInterrupt.c)
 *     HalpInterruptLineToGsi @ 0x1403BAFE0 (HalpInterruptLineToGsi.c)
 *     HalpInterruptSetDestinationInternal @ 0x1403BB048 (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptFindBestRouting @ 0x1403BB29C (HalpInterruptFindBestRouting.c)
 *     ExtEnvSetVpptTarget @ 0x1403BB428 (ExtEnvSetVpptTarget.c)
 *     HalpInterruptSetLineState @ 0x1403BBB90 (HalpInterruptSetLineState.c)
 *     HalpInterruptEnableNmi @ 0x1404A356C (HalpInterruptEnableNmi.c)
 *     HalpInterruptRemap @ 0x140540EC4 (HalpInterruptRemap.c)
 *     HalpInterruptRequestInterrupt @ 0x1405427A0 (HalpInterruptRequestInterrupt.c)
 *     HalpInterruptRestoreClock @ 0x1405428C0 (HalpInterruptRestoreClock.c)
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x140543FC8 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x14054403C (HalpInterruptServiceActiveBoth.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x14054A1C4 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpInterruptRegisterController @ 0x140562AC0 (HalpInterruptRegisterController.c)
 *     HalpInterruptRegisterLine @ 0x140562F80 (HalpInterruptRegisterLine.c)
 *     HalpInterruptUnmap @ 0x1406FDA28 (HalpInterruptUnmap.c)
 *     HalpInterruptMaskAcpi @ 0x140B6C718 (HalpInterruptMaskAcpi.c)
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
