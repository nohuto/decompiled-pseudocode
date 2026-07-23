/*
 * XREFs of EmPowerPagingEnabled @ 0x140AB04E0
 * Callers:
 *     PoBroadcastSystemState @ 0x140B66DA4 (PoBroadcastSystemState.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 */

__int64 __fastcall EmPowerPagingEnabled(char a1)
{
  char v2; // di
  char *v3; // rax
  signed __int8 v4; // cf
  char *v5; // rbx
  __int64 result; // rax
  char *v7; // rax
  char *v8; // rdi
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  v2 = 0;
  v3 = (char *)KeAbPreAcquire((__int64)&EmpPagingLock, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&EmpPagingLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&EmpPagingLock, v3, (__int64)&EmpPagingLock);
  if ( v5 )
    v5[10] = 1;
  if ( a1 )
  {
    dword_140F8E628 |= 0x80000000;
  }
  else
  {
    dword_140F8E628 &= ~0x80000000;
    if ( dword_140F8E628 )
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v2 = 1;
      EmpPagingStatus = &Event;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
  result = KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
  if ( v2 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v7 = (char *)KeAbPreAcquire((__int64)&EmpPagingLock, 0LL);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&EmpPagingLock, 0LL);
    v8 = v7;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(&EmpPagingLock, v7, (__int64)&EmpPagingLock);
    if ( v8 )
      v8[10] = 1;
    EmpPagingStatus = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
    return KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
  }
  return result;
}
