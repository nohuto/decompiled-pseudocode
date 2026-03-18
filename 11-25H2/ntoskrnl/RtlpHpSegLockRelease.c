/*
 * XREFs of RtlpHpSegLockRelease @ 0x1403C7FF4
 * Callers:
 *     RtlpHpSegContextCompact @ 0x1403C7E20 (RtlpHpSegContextCompact.c)
 * Callees:
 *     RtlpHpReleaseLockExclusive @ 0x14031FBD0 (RtlpHpReleaseLockExclusive.c)
 */

void __fastcall RtlpHpSegLockRelease(__int64 a1, unsigned __int8 a2)
{
  RtlpHpReleaseLockExclusive(a1 + 64, *(_DWORD *)(a1 + 40) & 1, a2);
}
