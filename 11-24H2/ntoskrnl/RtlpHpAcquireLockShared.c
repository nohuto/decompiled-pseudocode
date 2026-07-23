/*
 * XREFs of RtlpHpAcquireLockShared @ 0x1403D9B14
 * Callers:
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x1403D8038 (RtlpHpLfhSubsegmentReformatCheck.c)
 *     RtlpHpLfhOwnerCompact @ 0x1404322C0 (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLargeLockAcquireShared @ 0x1404F83EC (RtlpHpLargeLockAcquireShared.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 */

KIRQL __fastcall RtlpHpAcquireLockShared(volatile LONG *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v4; // rdi

  if ( a2 )
    return ExAcquireSpinLockShared(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v4 = (char *)KeAbPreAcquire((__int64)a1, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)a1, 0, v4, (__int64)a1);
  if ( v4 )
    v4[10] = 1;
  return -1;
}
