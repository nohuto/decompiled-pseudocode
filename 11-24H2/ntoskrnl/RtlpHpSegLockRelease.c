/*
 * XREFs of RtlpHpSegLockRelease @ 0x1402B4434
 * Callers:
 *     RtlpHpSegContextCompact @ 0x1402B4260 (RtlpHpSegContextCompact.c)
 * Callees:
 *     RtlpHpReleaseLockExclusive @ 0x1402B9650 (RtlpHpReleaseLockExclusive.c)
 */

__int64 __fastcall RtlpHpSegLockRelease(__int64 a1)
{
  return RtlpHpReleaseLockExclusive(a1 + 64);
}
