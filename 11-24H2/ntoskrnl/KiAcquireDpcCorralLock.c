/*
 * XREFs of KiAcquireDpcCorralLock @ 0x140270CCC
 * Callers:
 *     KeGenericCallDpcEx @ 0x140270AE8 (KeGenericCallDpcEx.c)
 *     KiGenericCallDpcInitiatorWorker @ 0x140270C50 (KiGenericCallDpcInitiatorWorker.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

__int64 KiAcquireDpcCorralLock()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  result = KeAbPreAcquire(&KiDpcCorralLock, 0LL, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&KiDpcCorralLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&KiDpcCorralLock, result, &KiDpcCorralLock);
  if ( v2 )
    *(_BYTE *)(v2 + 10) = 1;
  return result;
}
