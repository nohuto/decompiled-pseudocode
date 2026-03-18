/*
 * XREFs of PsTerminateVsmEnclave @ 0x14076BA94
 * Callers:
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 *     MiTerminateEnclave @ 0x1407E7A24 (MiTerminateEnclave.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     VslpEnterIumSecureMode @ 0x140282F50 (VslpEnterIumSecureMode.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

NTSTATUS __fastcall PsTerminateVsmEnclave(__int64 a1, int a2)
{
  signed __int64 *v2; // r14
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rbp
  int v7; // eax
  __int64 *v8; // rax
  __int64 *v9; // r15
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
  v6 = KeAbPreAcquire(a1 + 48, 0LL);
  if ( _InterlockedCompareExchange64(v2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v2, 0, v6, (unsigned __int64)v2);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
  v7 = *(_DWORD *)(a1 + 44);
  if ( v7 )
  {
    if ( (a2 & 4) == 0 && v7 == 1 )
    {
      *(_DWORD *)(a1 + 40) = 0;
      *(_DWORD *)(a1 + 44) = 2;
      v8 = KeAbPreAcquire(a1 + 112, 0LL);
      v9 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 112), 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 112), v8, a1 + 112);
      if ( v9 )
        *((_BYTE *)v9 + 10) = 1;
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
