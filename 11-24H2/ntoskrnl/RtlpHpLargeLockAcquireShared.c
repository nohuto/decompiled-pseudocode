/*
 * XREFs of RtlpHpLargeLockAcquireShared @ 0x1404F83EC
 * Callers:
 *     RtlpHpExtrasSetPresent @ 0x140602064 (RtlpHpExtrasSetPresent.c)
 * Callees:
 *     RtlpHpAcquireLockShared @ 0x1403D9B14 (RtlpHpAcquireLockShared.c)
 */

KIRQL __fastcall RtlpHpLargeLockAcquireShared(__int64 a1)
{
  return RtlpHpAcquireLockShared((volatile LONG *)(a1 + 64), *(_DWORD *)a1 & 1);
}
