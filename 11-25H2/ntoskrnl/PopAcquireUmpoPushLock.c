/*
 * XREFs of PopAcquireUmpoPushLock @ 0x140A4C844
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140426264 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessage @ 0x140A1899C (PopUmpoProcessMessage.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 */

__int64 *__fastcall PopAcquireUmpoPushLock(char a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v2; // rdi
  __int64 *result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a1 )
  {
    result = KeAbPreAcquire((__int64)&PopUmpoPushLock, 0LL);
    v2 = result;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&PopUmpoPushLock, 0LL) )
      result = (__int64 *)ExfAcquirePushLockExclusiveEx(&PopUmpoPushLock, result, (__int64)&PopUmpoPushLock);
  }
  else
  {
    v2 = KeAbPreAcquire((__int64)&PopUmpoPushLock, 0LL);
    result = (__int64 *)_InterlockedCompareExchange64((volatile signed __int64 *)&PopUmpoPushLock, 17LL, 0LL);
    if ( result )
      result = (__int64 *)ExfAcquirePushLockSharedEx(
                            (signed __int64 *)&PopUmpoPushLock,
                            0,
                            v2,
                            (unsigned __int64)&PopUmpoPushLock);
  }
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  return result;
}
