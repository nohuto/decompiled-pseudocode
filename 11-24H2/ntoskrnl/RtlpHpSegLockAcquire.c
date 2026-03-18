/*
 * XREFs of RtlpHpSegLockAcquire @ 0x1402BC9B4
 * Callers:
 *     RtlpHpSegContextCompact @ 0x1402B4260 (RtlpHpSegContextCompact.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x1402B8A00 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegPageRangeShrink @ 0x1402BC4B0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1402C17F4 (RtlpHpSegPageRangeAllocate.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14020D790 (RtlpHpAcquireLockExclusive.c)
 */

char __fastcall RtlpHpSegLockAcquire(__int64 a1, __int64 a2, __int64 a3)
{
  return RtlpHpAcquireLockExclusive((int *)(a1 + 64), *(_DWORD *)(a1 + 40) & 1, a3);
}
