/*
 * XREFs of HalpInterruptRestoreAllControllerState @ 0x140B4E180
 * Callers:
 *     HalpInterruptMaskLevelTriggeredLines @ 0x14055FB90 (HalpInterruptMaskLevelTriggeredLines.c)
 *     HalpInterruptUnmaskLevelTriggeredLines @ 0x14055FD40 (HalpInterruptUnmaskLevelTriggeredLines.c)
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140B52110 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     HalpInterruptRestoreController @ 0x1404976C4 (HalpInterruptRestoreController.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

ULONG_PTR *HalpInterruptRestoreAllControllerState()
{
  ULONG_PTR *v0; // rbx
  ULONG_PTR *result; // rax
  __int64 v2; // rcx
  int v3; // eax

  v0 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  while ( 1 )
  {
    result = &HalpRegisteredInterruptControllers;
    if ( v0 == &HalpRegisteredInterruptControllers )
      break;
    v2 = (__int64)v0;
    v0 = (ULONG_PTR *)*v0;
    v3 = HalpInterruptRestoreController(v2, 0);
    if ( v3 < 0 )
      KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, 3uLL, v3);
  }
  HalpInterruptPicStateIntact = 1;
  return result;
}
