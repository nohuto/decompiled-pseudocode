/*
 * XREFs of SmCompressionProcessHoldsPartitionReference @ 0x1404F4434
 * Callers:
 *     PspProcessDelete @ 0x1408E1310 (PspProcessDelete.c)
 *     SmProcessDeleteNotification @ 0x140A4DE0C (SmProcessDeleteNotification.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall SmCompressionProcessHoldsPartitionReference(__int64 a1)
{
  return *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1880) + 24LL) + 2168LL) == 0LL;
}
