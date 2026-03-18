/*
 * XREFs of EmPowerPagingEnabled @ 0x140AB1450
 * Callers:
 *     PoBroadcastSystemState @ 0x140B54B5C (PoBroadcastSystemState.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 */

__int64 __fastcall EmPowerPagingEnabled(char a1)
{
  char v2; // di
  __int64 *v3; // rax
  signed __int8 v4; // cf
  __int64 *v5; // rbx
  __int64 result; // rax
  __int64 *v7; // rax
  __int64 *v8; // rdi
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  v2 = 0;
  v3 = KeAbPreAcquire((__int64)&EmpPagingLock, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&EmpPagingLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&EmpPagingLock, v3, (__int64)&EmpPagingLock);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  if ( a1 )
  {
    dword_140F8DC98 |= 0x80000000;
  }
  else
  {
    dword_140F8DC98 &= ~0x80000000;
    if ( dword_140F8DC98 )
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
    v7 = KeAbPreAcquire((__int64)&EmpPagingLock, 0LL);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&EmpPagingLock, 0LL);
    v8 = v7;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(&EmpPagingLock, v7, (__int64)&EmpPagingLock);
    if ( v8 )
      *((_BYTE *)v8 + 10) = 1;
    EmpPagingStatus = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
    return KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
  }
  return result;
}
