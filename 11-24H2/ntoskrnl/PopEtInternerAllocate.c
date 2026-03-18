/*
 * XREFs of PopEtInternerAllocate @ 0x140A72220
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 PopEtInternerAllocate()
{
  return ExAllocatePool2(0x100uLL);
}
