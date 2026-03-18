/*
 * XREFs of HalpInterruptRestoreAllControllerState @ 0x140B4C140
 * Callers:
 *     HalpInterruptMaskLevelTriggeredLines @ 0x140561F60 (HalpInterruptMaskLevelTriggeredLines.c)
 *     HalpInterruptUnmaskLevelTriggeredLines @ 0x140562110 (HalpInterruptUnmaskLevelTriggeredLines.c)
 *     HalpInterruptSwapProcessorIdentifiers @ 0x140B500C0 (HalpInterruptSwapProcessorIdentifiers.c)
 * Callees:
 *     HalpInterruptRestoreController @ 0x14049CA1C (HalpInterruptRestoreController.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

ULONG_PTR *__fastcall HalpInterruptRestoreAllControllerState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR *v4; // rbx
  ULONG_PTR *result; // rax
  __int64 v6; // rcx
  int v7; // eax

  v4 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  while ( 1 )
  {
    result = &HalpRegisteredInterruptControllers;
    if ( v4 == &HalpRegisteredInterruptControllers )
      break;
    v6 = (__int64)v4;
    v4 = (ULONG_PTR *)*v4;
    v7 = HalpInterruptRestoreController(v6, 0, a3, a4);
    if ( v7 < 0 )
      KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, 3uLL, v7);
  }
  HalpInterruptPicStateIntact = 1;
  return result;
}
