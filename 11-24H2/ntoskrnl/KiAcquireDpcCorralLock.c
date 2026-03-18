/*
 * XREFs of KiAcquireDpcCorralLock @ 0x140414E6C
 * Callers:
 *     KeGenericCallDpcEx @ 0x140414C8C (KeGenericCallDpcEx.c)
 *     KiGenericCallDpcInitiatorWorker @ 0x140414DF0 (KiGenericCallDpcInitiatorWorker.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 KiAcquireDpcCorralLock()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  result = (__int64)KeAbPreAcquire((__int64)&KiDpcCorralLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&KiDpcCorralLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&KiDpcCorralLock, result, (__int64)&KiDpcCorralLock);
  if ( v2 )
    *(_BYTE *)(v2 + 10) = 1;
  return result;
}
