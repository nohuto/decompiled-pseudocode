/*
 * XREFs of RtlpHpAcquireLockShared @ 0x1404505D0
 * Callers:
 *     RtlpHpLfhOwnerCompact @ 0x1403C801C (RtlpHpLfhOwnerCompact.c)
 *     RtlpHpLfhSubsegmentReformatCheck @ 0x140450260 (RtlpHpLfhSubsegmentReformatCheck.c)
 *     RtlpHpLargeLockAcquireShared @ 0x1404F866C (RtlpHpLargeLockAcquireShared.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 */

KIRQL __fastcall RtlpHpAcquireLockShared(volatile LONG *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v4; // rdi

  if ( a2 )
    return ExAcquireSpinLockShared(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v4 = KeAbPreAcquire((__int64)a1, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)a1, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)a1, 0, v4, (unsigned __int64)a1);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  return -1;
}
