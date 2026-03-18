/*
 * XREFs of KiAcquireDpcCorralLock @ 0x140417C8C
 * Callers:
 *     KeGenericCallDpcEx @ 0x140417AB0 (KeGenericCallDpcEx.c)
 *     KiGenericCallDpcInitiatorWorker @ 0x140417C10 (KiGenericCallDpcInitiatorWorker.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *KiAcquireDpcCorralLock()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *result; // rax
  __int64 *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  result = KeAbPreAcquire((__int64)&KiDpcCorralLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&KiDpcCorralLock, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(&KiDpcCorralLock, result, (__int64)&KiDpcCorralLock);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  return result;
}
