/*
 * XREFs of ExRegisterExtension @ 0x1407C08C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExpDereferenceHost @ 0x1407C0E30 (ExpDereferenceHost.c)
 *     ExpFindHost @ 0x1407C0E68 (ExpFindHost.c)
 *     ExpVerifyCallbackResult @ 0x1407C0EB0 (ExpVerifyCallbackResult.c)
 */

__int64 __fastcall ExRegisterExtension(__int64 *a1, int a2, unsigned __int16 *a3)
{
  __int64 v5; // r15
  struct _KTHREAD *CurrentThread; // rax
  char *v7; // rdi
  __int64 Host; // rax
  __int16 v9; // r8
  __int16 v10; // r10
  __int64 v11; // rdi
  unsigned __int16 v12; // r9
  unsigned __int16 i; // cx
  int v14; // eax
  int v15; // esi
  struct _KTHREAD *v16; // rax
  char *v17; // rax
  char *v18; // rbp
  PVOID v19; // rcx
  unsigned int v20; // eax
  _QWORD *v21; // rcx
  int v23; // [rsp+78h] [rbp+10h]

  v5 = 0LL;
  if ( a2 == 65537 && (*((_QWORD *)a3 + 1) || !a3[3]) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = (char *)KeAbPreAcquire((__int64)&ExpHostListLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpHostListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&ExpHostListLock, 0, v7, (__int64)&ExpHostListLock);
    if ( v7 )
      v7[10] = 1;
    v23 = *(_DWORD *)(a3 + 1);
    Host = ExpFindHost(*a3);
    v11 = Host;
    if ( Host )
    {
      v12 = *(_WORD *)(Host + 48);
      for ( i = 0; i < v12; i += v10 )
      {
        v14 = *(_DWORD *)(*(_QWORD *)(v11 + 40) + 16LL * i);
        if ( (_WORD)v14 == v9 && HIWORD(v14) >= HIWORD(v23) )
        {
          v5 = *(_QWORD *)(v11 + 40) + 16LL * i;
          goto LABEL_17;
        }
      }
      ExpDereferenceHost(v11);
    }
    v11 = 0LL;
LABEL_17:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpHostListLock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&ExpHostListLock);
    KeAbPostRelease((ULONG_PTR)&ExpHostListLock);
    KeLeaveCriticalRegion();
    if ( !v11 )
      return (unsigned int)-1073741275;
    v16 = KeGetCurrentThread();
    --v16->KernelApcDisable;
    v17 = (char *)KeAbPreAcquire(v11 + 32, 0LL);
    v18 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 32), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v11 + 32), v17, v11 + 32);
    if ( v18 )
      v18[10] = 1;
    if ( *(_QWORD *)(v11 + 96) || (*(_BYTE *)(v11 + 112) & 1) != 0 )
    {
      v15 = -1073741771;
    }
    else if ( !*(_QWORD *)(v11 + 64) || (v15 = guard_dispatch_icall_no_overrides(0LL, *(_QWORD *)(v11 + 72)), v15 >= 0) )
    {
      v19 = (PVOID)*((_QWORD *)a3 + 1);
      if ( !v19 )
        v19 = MmBadPointer;
      *(_DWORD *)(v11 + 80) = *(_DWORD *)(a3 + 1);
      *(_QWORD *)(v11 + 96) = v19;
      *(_WORD *)(v11 + 104) = a3[3];
      *(_QWORD *)(v11 + 56) = v5;
      _InterlockedExchange64((volatile __int64 *)(v11 + 88), 0LL);
      if ( *(_QWORD *)(v11 + 64) )
      {
        v20 = guard_dispatch_icall_no_overrides(1LL, *(_QWORD *)(v11 + 72));
        ExpVerifyCallbackResult(1LL, v20);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v11 + 32));
      KeAbPostRelease(v11 + 32);
      KeLeaveCriticalRegion();
      v21 = (_QWORD *)*((_QWORD *)a3 + 2);
      if ( v21 )
        *v21 = *(_QWORD *)(v5 + 8);
      *a1 = v11;
      return 0;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v11 + 32));
    KeAbPostRelease(v11 + 32);
    KeLeaveCriticalRegion();
    ExpDereferenceHost(v11);
    return (unsigned int)v15;
  }
  return 3221225485LL;
}
