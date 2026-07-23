/*
 * XREFs of RtlpHpSegLockRelease @ 0x14035CDEC
 * Callers:
 *     RtlpHpSegContextCompact @ 0x14035E4C0 (RtlpHpSegContextCompact.c)
 * Callees:
 *     RtlpHpReleaseLockExclusive @ 0x140360D90 (RtlpHpReleaseLockExclusive.c)
 */

__int64 __fastcall RtlpHpSegLockRelease(__int64 a1)
{
  return RtlpHpReleaseLockExclusive(a1 + 64);
}
