/*
 * XREFs of PopAcquireUmpoPushLock @ 0x140A45FAC
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x1402BB090 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessage @ 0x140A180D8 (PopUmpoProcessMessage.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 */

char *__fastcall PopAcquireUmpoPushLock(char a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char *v2; // rdi
  char *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a1 )
  {
    result = (char *)KeAbPreAcquire((__int64)&PopUmpoPushLock, 0LL);
    v2 = result;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&PopUmpoPushLock, 0LL) )
      result = (char *)ExfAcquirePushLockExclusiveEx(&PopUmpoPushLock, result, (__int64)&PopUmpoPushLock);
  }
  else
  {
    v2 = (char *)KeAbPreAcquire((__int64)&PopUmpoPushLock, 0LL);
    result = (char *)_InterlockedCompareExchange64((volatile signed __int64 *)&PopUmpoPushLock, 17LL, 0LL);
    if ( result )
      result = (char *)ExfAcquirePushLockSharedEx((signed __int64 *)&PopUmpoPushLock, 0, v2, (__int64)&PopUmpoPushLock);
  }
  if ( v2 )
    v2[10] = 1;
  return result;
}
