/*
 * XREFs of PsTerminateVsmEnclave @ 0x14077B4E4
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     MiTerminateEnclave @ 0x1407F8028 (MiTerminateEnclave.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     VslpEnterIumSecureMode @ 0x1403AADB0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

NTSTATUS __fastcall PsTerminateVsmEnclave(__int64 a1, int a2)
{
  signed __int64 *v2; // r14
  struct _KTHREAD *CurrentThread; // rax
  char *v6; // rbp
  int v7; // eax
  char *v8; // rax
  char *v9; // r15
  _QWORD *v10; // r15
  _QWORD *v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // rax
  NTSTATUS result; // eax
  __int64 v15; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v16[8]; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+48h] [rbp-A0h]

  v2 = (signed __int64 *)(a1 + 48);
  v15 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (char *)KeAbPreAcquire(a1 + 48, 0LL);
  if ( _InterlockedCompareExchange64(v2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v2, 0, v6, (__int64)v2);
  if ( v6 )
    v6[10] = 1;
  v7 = *(_DWORD *)(a1 + 44);
  if ( v7 )
  {
    if ( (a2 & 4) == 0 && v7 == 1 )
    {
      *(_DWORD *)(a1 + 40) = 0;
      *(_DWORD *)(a1 + 44) = 2;
      v8 = (char *)KeAbPreAcquire(a1 + 112, 0LL);
      v9 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 112), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 112), v8, a1 + 112);
      if ( v9 )
        v9[10] = 1;
      *(_DWORD *)(a1 + 72) = 0;
      v10 = (_QWORD *)(a1 + 56);
      while ( 1 )
      {
        v11 = (_QWORD *)*v10;
        if ( (_QWORD *)*v10 == v10 )
          break;
        v12 = *v11;
        if ( *(_QWORD **)(*v11 + 8LL) != v11 || (v13 = (_QWORD *)v11[1], (_QWORD *)*v13 != v11) )
          __fastfail(3u);
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
        *v11 = 0LL;
        *((_DWORD *)v11 + 10) = -1073740526;
        KeSetEvent((PRKEVENT)(v11 + 2), 0, 0);
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
      KeAbPostRelease(a1 + 112);
      if ( a2 >= 0 )
      {
        memset_0(v16, 0, 0x68uLL);
        v17 = *(_QWORD *)(a1 + 24);
        VslpEnterIumSecureMode(2u, 0x33u, 0, (__int64)v16);
      }
    }
  }
  else
  {
    *(_DWORD *)(a1 + 44) = 2;
    KeSetEvent((PRKEVENT)(a1 + 80), 0, 0);
  }
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegion();
  if ( a2 < 0 )
    return 0;
  result = KeWaitForSingleObject(
             (PVOID)(a1 + 80),
             Executive,
             KeGetCurrentThread()->PreviousMode,
             0,
             (PLARGE_INTEGER)((unsigned __int64)&v15 & -(__int64)((a2 & 5) != 0)));
  if ( result == 258 )
    return (a2 & 4) != 0 ? -1073740527 : 259;
  return result;
}
