/*
 * XREFs of NormalizationList__Lock @ 0x1405F3BB0
 * Callers:
 *     RtlpGetNormalization @ 0x14078D5B0 (RtlpGetNormalization.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 NormalizationList__Lock()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  result = (__int64)KeAbPreAcquire((__int64)&NormalizationListLock, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&NormalizationListLock, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&NormalizationListLock, result, (__int64)&NormalizationListLock);
  if ( v2 )
    *(_BYTE *)(v2 + 10) = 1;
  return result;
}
