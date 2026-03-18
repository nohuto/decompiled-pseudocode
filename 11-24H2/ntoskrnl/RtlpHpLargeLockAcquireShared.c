/*
 * XREFs of RtlpHpLargeLockAcquireShared @ 0x1404FAB0C
 * Callers:
 *     RtlpHpExtrasSetPresent @ 0x140604A24 (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     RtlpHpAcquireLockShared @ 0x14045964C (RtlpHpAcquireLockShared.c)
 */

KIRQL __fastcall RtlpHpLargeLockAcquireShared(__int64 a1)
{
  return RtlpHpAcquireLockShared((volatile LONG *)(a1 + 64), *(_DWORD *)a1 & 1);
}
