/*
 * XREFs of ExRegisterExtension @ 0x1407C0470
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExpDereferenceHost @ 0x1407C09E0 (ExpDereferenceHost.c)
 *     ExpFindHost @ 0x1407C0A18 (ExpFindHost.c)
 *     ExpVerifyCallbackResult @ 0x1407C0A60 (ExpVerifyCallbackResult.c)
 */

__int64 __fastcall ExRegisterExtension(__int64 *a1, int a2, unsigned __int16 *a3)
{
  __int64 v5; // r15
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v7; // rdi
  __int64 Host; // rax
  __int16 v9; // r8
  __int16 v10; // r10
  __int64 v11; // rdi
  unsigned __int16 v12; // r9
  unsigned __int16 i; // cx
  int v14; // eax
  int v15; // esi
  struct _KTHREAD *v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // r9
  _QWORD *v19; // rbp
  PVOID v20; // rcx
  unsigned int v21; // eax
  _QWORD *v22; // rcx
  _OWORD v24[4]; // [rsp+20h] [rbp-48h] BYREF
  int v25; // [rsp+78h] [rbp+10h]

  v5 = 0LL;
  v24[0] = 0LL;
  if ( a2 == 65537 && (*((_QWORD *)a3 + 1) || !a3[3]) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = KeAbPreAcquire((__int64)&ExpHostListLock, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&ExpHostListLock, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)&ExpHostListLock, 0, v7, (__int64)&ExpHostListLock);
    if ( v7 )
      *((_BYTE *)v7 + 10) = 1;
    v25 = *(_DWORD *)(a3 + 1);
    Host = ExpFindHost(*a3);
    v11 = Host;
    if ( Host )
    {
      v12 = *(_WORD *)(Host + 48);
      for ( i = 0; i < v12; i += v10 )
      {
        v14 = *(_DWORD *)(*(_QWORD *)(v11 + 40) + 16LL * i);
        if ( (_WORD)v14 == v9 && HIWORD(v14) >= HIWORD(v25) )
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
    v17 = KeAbPreAcquire(v11 + 32, 0LL);
    v19 = v17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 32), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v11 + 32), (__int64)v17, v11 + 32);
    if ( v19 )
      *((_BYTE *)v19 + 10) = 1;
    if ( *(_QWORD *)(v11 + 96) || (*(_BYTE *)(v11 + 112) & 1) != 0 )
    {
      v15 = -1073741771;
    }
    else
    {
      DWORD1(v24[0]) = *(_DWORD *)(a3 + 1);
      *((_QWORD *)&v24[0] + 1) = v11;
      LODWORD(v24[0]) = *(_DWORD *)v5;
      if ( !*(_QWORD *)(v11 + 64)
        || (v15 = guard_dispatch_icall_no_overrides(0LL, *(_QWORD *)(v11 + 72), v24, v18), v15 >= 0) )
      {
        v20 = (PVOID)*((_QWORD *)a3 + 1);
        if ( !v20 )
          v20 = MmBadPointer;
        *(_DWORD *)(v11 + 80) = *(_DWORD *)(a3 + 1);
        *(_QWORD *)(v11 + 96) = v20;
        *(_WORD *)(v11 + 104) = a3[3];
        *(_QWORD *)(v11 + 56) = v5;
        _InterlockedExchange64((volatile __int64 *)(v11 + 88), 0LL);
        if ( *(_QWORD *)(v11 + 64) )
        {
          v21 = guard_dispatch_icall_no_overrides(1LL, *(_QWORD *)(v11 + 72), v24, v18);
          ExpVerifyCallbackResult(1LL, v21);
        }
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v11 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)(v11 + 32));
        KeAbPostRelease(v11 + 32);
        KeLeaveCriticalRegion();
        v22 = (_QWORD *)*((_QWORD *)a3 + 2);
        if ( v22 )
          *v22 = *(_QWORD *)(v5 + 8);
        *a1 = v11;
        return 0;
      }
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
