/*
 * XREFs of PopAcquireUmpoPushLock @ 0x140A4F1FC
 * Callers:
 *     PopUmpoSendPowerMessage @ 0x140331990 (PopUmpoSendPowerMessage.c)
 *     PopUmpoProcessMessage @ 0x140A23CC8 (PopUmpoProcessMessage.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall PopAcquireUmpoPushLock(char a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v2; // rdi
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a1 )
  {
    result = (__int64)KeAbPreAcquire((__int64)&PopUmpoPushLock, 0LL);
    v2 = (_QWORD *)result;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&PopUmpoPushLock, 0LL) )
      result = ExfAcquirePushLockExclusiveEx(&PopUmpoPushLock, result, (__int64)&PopUmpoPushLock);
  }
  else
  {
    v2 = KeAbPreAcquire((__int64)&PopUmpoPushLock, 0LL);
    result = _InterlockedCompareExchange64((volatile signed __int64 *)&PopUmpoPushLock, 17LL, 0LL);
    if ( result )
      result = ExfAcquirePushLockSharedEx((signed __int64 *)&PopUmpoPushLock, 0, v2, (__int64)&PopUmpoPushLock);
  }
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  return result;
}
