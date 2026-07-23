/*
 * XREFs of PfSnScenarioAlloc @ 0x140A5FCD0
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PfSnScenarioAlloc(unsigned int a1)
{
  return ExAllocatePool2(0x100uLL, a1, 0x70506343u);
}
