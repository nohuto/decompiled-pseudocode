/*
 * XREFs of RtlpHpSegLockAcquire @ 0x1403640F4
 * Callers:
 *     RtlpHpSegPageRangeAllocate @ 0x14035DE94 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextCompact @ 0x14035E4C0 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x140360140 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegPageRangeShrink @ 0x140363BF0 (RtlpHpSegPageRangeShrink.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140336AF0 (RtlpHpAcquireLockExclusive.c)
 */

char __fastcall RtlpHpSegLockAcquire(__int64 a1)
{
  return RtlpHpAcquireLockExclusive((int *)(a1 + 64), *(_DWORD *)(a1 + 40) & 1);
}
