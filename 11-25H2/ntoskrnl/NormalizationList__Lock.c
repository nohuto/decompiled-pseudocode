/*
 * XREFs of NormalizationList__Lock @ 0x1405E7868
 * Callers:
 *     RtlpGetNormalization @ 0x14077E2FC (RtlpGetNormalization.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *NormalizationList__Lock()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *result; // rax
  __int64 *v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = KeAbPreAcquire((__int64)&NormalizationListLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&NormalizationListLock, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(&NormalizationListLock, result, (__int64)&NormalizationListLock);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  return result;
}
