/*
 * XREFs of SmCompressionProcessHoldsPartitionReference @ 0x1404F4610
 * Callers:
 *     PspProcessDelete @ 0x1408FFC10 (PspProcessDelete.c)
 *     SmProcessDeleteNotification @ 0x140A4863C (SmProcessDeleteNotification.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SmCompressionProcessHoldsPartitionReference(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1880) + 24LL) + 2168LL) == 0LL;
}
