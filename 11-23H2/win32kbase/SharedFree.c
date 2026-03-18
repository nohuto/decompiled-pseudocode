/*
 * XREFs of SharedFree @ 0x1C01320F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall SharedFree(PVOID BaseAddress)
{
  return RtlFreeHeap(gpvSharedAlloc, 0, BaseAddress);
}
