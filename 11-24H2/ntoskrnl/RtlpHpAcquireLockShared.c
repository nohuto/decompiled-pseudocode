/*
 * XREFs of RtlpHpAcquireLockShared @ 0x14045964C
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x1402B461C (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x140459494 (RtlpHpLfhSubsegmentReformatCheck.c)
 *     RtlpHpLargeLockAcquireShared @ 0x1404FAB0C (RtlpHpLargeLockAcquireShared.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

KIRQL __fastcall RtlpHpAcquireLockShared(volatile LONG *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v4; // rdi

  if ( a2 )
    return ExAcquireSpinLockShared(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v4 = KeAbPreAcquire((__int64)a1, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)a1, 0, v4, (__int64)a1);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  return -1;
}
