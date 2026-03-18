/*
 * XREFs of HalpInterruptInitializeGlobals @ 0x140542478
 * Callers:
 *     HalpInterruptInitSystem @ 0x140B4D2D0 (HalpInterruptInitSystem.c)
 * Callees:
 *     <none>
 */

ULONG_PTR *HalpInterruptInitializeGlobals()
{
  ULONG_PTR *result; // rax

  HalpInterruptControllerCount = 0;
  result = &HalpRegisteredInterruptControllers;
  qword_140FC2C58 = (__int64)&HalpRegisteredInterruptControllers;
  HalpRegisteredInterruptControllers = (ULONG_PTR)&HalpRegisteredInterruptControllers;
  return result;
}
