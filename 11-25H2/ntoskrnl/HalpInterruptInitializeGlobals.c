/*
 * XREFs of HalpInterruptInitializeGlobals @ 0x14053FC48
 * Callers:
 *     HalpInterruptInitSystem @ 0x140B3D2D0 (HalpInterruptInitSystem.c)
 * Callees:
 *     <none>
 */

ULONG_PTR *HalpInterruptInitializeGlobals()
{
  ULONG_PTR *result; // rax

  HalpInterruptControllerCount = 0;
  result = &HalpRegisteredInterruptControllers;
  qword_140FC24B8 = (__int64)&HalpRegisteredInterruptControllers;
  HalpRegisteredInterruptControllers = (ULONG_PTR)&HalpRegisteredInterruptControllers;
  return result;
}
