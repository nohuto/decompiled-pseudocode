/*
 * XREFs of RtlpHpSegLockAcquire @ 0x1402E129C
 * Callers:
 *     RtlpHpSegPageRangeCoalesce @ 0x1402E0A40 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegPageRangeShrink @ 0x1402E0DA0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1402F8BBC (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegContextCompact @ 0x1403C7E20 (RtlpHpSegContextCompact.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140212CB0 (RtlpHpAcquireLockExclusive.c)
 */

char __fastcall RtlpHpSegLockAcquire(__int64 a1)
{
  return RtlpHpAcquireLockExclusive((int *)(a1 + 64), *(_DWORD *)(a1 + 40) & 1);
}
