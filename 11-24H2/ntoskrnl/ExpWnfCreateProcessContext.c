/*
 * XREFs of ExpWnfCreateProcessContext @ 0x140A302C4
 * Callers:
 *     ExpWnfResolveScopeInstance @ 0x1409032C0 (ExpWnfResolveScopeInstance.c)
 *     NtSetWnfProcessNotificationEvent @ 0x140A301F0 (NtSetWnfProcessNotificationEvent.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExpWnfDeleteProcessContext @ 0x1409002F0 (ExpWnfDeleteProcessContext.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall ExpWnfCreateProcessContext(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // r14d
  void *Pool2; // rax
  signed __int64 v7; // rdi
  char *v8; // rax
  signed __int8 v9; // cf
  char *v10; // rbp
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // rcx

  v4 = 0;
  v5 = 0;
  Pool2 = (void *)ExAllocatePool2(0x100uLL, 0x88uLL, 0x20666E57u);
  v7 = (signed __int64)Pool2;
  if ( Pool2 )
  {
    memset_0(Pool2, 0, 0x88uLL);
    *(_DWORD *)v7 = 8915206;
    *(_QWORD *)(v7 + 72) = v7 + 64;
    *(_QWORD *)(v7 + 64) = v7 + 64;
    *(_QWORD *)(v7 + 96) = v7 + 88;
    *(_QWORD *)(v7 + 88) = v7 + 88;
    *(_QWORD *)(v7 + 120) = v7 + 112;
    *(_QWORD *)(v7 + 112) = v7 + 112;
    *(_QWORD *)(v7 + 128) = 0LL;
    *(_QWORD *)(v7 + 8) = a1;
    v8 = (char *)KeAbPreAcquire((__int64)&ExpWnfProcessesListLock, 0LL);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&ExpWnfProcessesListLock, 0LL);
    v10 = v8;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(&ExpWnfProcessesListLock, v8, (__int64)&ExpWnfProcessesListLock);
    if ( v10 )
      v10[10] = 1;
    v11 = off_140FD85F0;
    v12 = (_QWORD *)(v7 + 16);
    if ( *off_140FD85F0 != (_UNKNOWN *)&ExpWnfProcessesListHead )
      __fastfail(3u);
    *v12 = &ExpWnfProcessesListHead;
    *(_QWORD *)(v7 + 24) = v11;
    *v11 = v12;
    off_140FD85F0 = (_UNKNOWN **)(v7 + 16);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWnfProcessesListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&ExpWnfProcessesListLock);
    KeAbPostRelease((ULONG_PTR)&ExpWnfProcessesListLock);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 1512), v7, 0LL) )
      ExpWnfDeleteProcessContext((unsigned __int64 *)v7, 1);
  }
  else
  {
    v5 = -1073741670;
  }
  v13 = *(_QWORD *)(a1 + 1512);
  *a2 = v13;
  if ( !v13 )
    return v5;
  return v4;
}
