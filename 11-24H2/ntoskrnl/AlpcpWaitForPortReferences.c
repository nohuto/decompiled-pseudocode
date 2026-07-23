/*
 * XREFs of AlpcpWaitForPortReferences @ 0x140995308
 * Callers:
 *     NtAlpcQueryInformation @ 0x140994E70 (NtAlpcQueryInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 */

__int64 __fastcall AlpcpWaitForPortReferences(__int64 a1, _DWORD *a2, int a3, _DWORD *a4, char a5)
{
  __int64 v6; // rax
  volatile signed __int64 *v8; // rdi
  char *v9; // rax
  char *v10; // rbx
  unsigned int v11; // esi
  char *v12; // rax
  char *v13; // r15
  __int128 Event; // [rsp+30h] [rbp-28h] BYREF
  __int128 Event_16; // [rsp+40h] [rbp-18h]

  Event = 0LL;
  Event_16 = 0LL;
  if ( !a1 || a3 != 4 )
    return 3221225485LL;
  if ( a5 )
  {
    v6 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v6 = (__int64)a2;
    DWORD2(Event_16) = *(_DWORD *)v6;
    if ( a4 )
      *a4 = 0;
  }
  else
  {
    DWORD2(Event_16) = *a2;
    if ( a4 )
      *a4 = 0;
  }
  if ( *(_DWORD *)(a1 + 404) == DWORD2(Event_16) )
    return 0LL;
  KeInitializeEvent((PRKEVENT)&Event, SynchronizationEvent, 0);
  v8 = (volatile signed __int64 *)(a1 + 352);
  v9 = (char *)KeAbPreAcquire(a1 + 352, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 352), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), v9, a1 + 352);
  if ( v10 )
    v10[10] = 1;
  if ( *(_QWORD *)(a1 + 408) )
  {
    v11 = -1073741811;
  }
  else if ( *(_DWORD *)(a1 + 404) == DWORD2(Event_16) )
  {
    v11 = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 408) = &Event;
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
    KeAbPostRelease(a1 + 352);
    while ( 1 )
    {
      v11 = KeWaitForSingleObject(&Event, WrUserRequest, 0, 1u, 0LL);
      if ( !v11 )
        break;
      if ( (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) != 0 )
      {
        v11 = -1073741749;
        break;
      }
    }
    v12 = (char *)KeAbPreAcquire(a1 + 352, 0LL);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), v12, a1 + 352);
    if ( v13 )
      v13[10] = 1;
    *(_QWORD *)(a1 + 408) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
  KeAbPostRelease(a1 + 352);
  return v11;
}
