/*
 * XREFs of PfSnScenarioAlloc @ 0x140A66EF0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 PfSnScenarioAlloc()
{
  return ExAllocatePool2(0x100uLL);
}
