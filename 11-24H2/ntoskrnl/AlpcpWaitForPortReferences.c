/*
 * XREFs of AlpcpWaitForPortReferences @ 0x1409AB608
 * Callers:
 *     NtAlpcQueryInformation @ 0x1409AB170 (NtAlpcQueryInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 */

__int64 __fastcall AlpcpWaitForPortReferences(__int64 a1, _DWORD *a2, int a3, _DWORD *a4, char a5)
{
  __int64 v6; // rax
  volatile signed __int64 *v8; // rdi
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  unsigned int v11; // esi
  _QWORD *v12; // rax
  _QWORD *v13; // r15
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
  v9 = KeAbPreAcquire(a1 + 352, 0LL);
  v10 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 352), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), (__int64)v9, a1 + 352);
  if ( v10 )
    *((_BYTE *)v10 + 10) = 1;
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
    v12 = KeAbPreAcquire(a1 + 352, 0LL);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 352), (__int64)v12, a1 + 352);
    if ( v13 )
      *((_BYTE *)v13 + 10) = 1;
    *(_QWORD *)(a1 + 408) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 352));
  KeAbPostRelease(a1 + 352);
  return v11;
}
