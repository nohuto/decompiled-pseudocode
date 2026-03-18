/*
 * XREFs of RtlpHpLargeLockAcquireShared @ 0x1404F866C
 * Callers:
 *     RtlpHpExtrasSetPresent @ 0x1405F86E4 (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     RtlpHpAcquireLockShared @ 0x1404505D0 (RtlpHpAcquireLockShared.c)
 */

KIRQL __fastcall RtlpHpLargeLockAcquireShared(__int64 a1)
{
  return RtlpHpAcquireLockShared((volatile LONG *)(a1 + 64), *(_DWORD *)a1 & 1);
}
