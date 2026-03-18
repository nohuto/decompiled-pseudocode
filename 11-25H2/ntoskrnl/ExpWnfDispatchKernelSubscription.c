/*
 * XREFs of ExpWnfDispatchKernelSubscription @ 0x1408E3DC0
 * Callers:
 *     ExpWnfWorkItemRoutine @ 0x1408E3D60 (ExpWnfWorkItemRoutine.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1408E5D40 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfStartKernelDispatcher @ 0x1409F4F8C (ExpWnfStartKernelDispatcher.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExfReleaseRundownProtection @ 0x1403242B0 (ExfReleaseRundownProtection.c)
 *     ExfAcquireRundownProtection @ 0x140326BD0 (ExfAcquireRundownProtection.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x1408E41D0 (PopWnfSprActiveSessionChangeCallback.c)
 *     ExpWnfValidateKernelCallbackEnvironment @ 0x1408E42B8 (ExpWnfValidateKernelCallbackEnvironment.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1408E5D40 (ExpWnfNotifyNameSubscribers.c)
 */

__int64 ExpWnfDispatchKernelSubscription()
{
  __int64 v0; // r15
  volatile signed __int64 *v1; // rsi
  __int64 *v2; // rax
  __int64 *v3; // rbx
  _QWORD **v4; // r14
  _QWORD *v5; // rdi
  ULONG_PTR v6; // rbp
  unsigned __int64 v7; // rtt
  __int64 v8; // rcx
  _QWORD *v9; // rax
  signed __int64 *v11; // r15
  unsigned int v12; // r12d
  __int64 *v13; // rdi
  __int64 v14; // rdi
  unsigned int v15; // eax
  __int64 v16; // rcx
  int v17; // r15d
  __int64 v18; // r9
  unsigned __int64 v19; // rtt
  __int64 *v20; // rax
  __int64 *v21; // rdi
  unsigned __int64 v22; // rtt
  unsigned __int64 v23; // rtt
  __int64 *v24; // rax
  __int64 *v25; // rdi
  __int64 v26; // [rsp+48h] [rbp-50h]
  signed __int64 *v27; // [rsp+50h] [rbp-48h]
  __int64 v28; // [rsp+58h] [rbp-40h] BYREF

  v28 = 0LL;
  v0 = *(_QWORD *)&PsInitialSystemProcess[3].BasePriority;
  v26 = v0;
  v1 = (volatile signed __int64 *)(v0 + 104);
  v2 = KeAbPreAcquire(v0 + 104, 0LL);
  v3 = v2;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v0 + 104), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v0 + 104), v2, v0 + 104);
  if ( v3 )
    *((_BYTE *)v3 + 10) = 1;
  v4 = (_QWORD **)(v0 + 112);
LABEL_6:
  v5 = *v4;
  if ( *v4 != v4 )
  {
    v6 = (ULONG_PTR)(v5 - 13);
    _m_prefetchw(v5 - 12);
    v7 = *(v5 - 12) & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v7 != _InterlockedCompareExchange64(v5 - 12, v7 + 2, v7) )
      ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(v6 + 8));
    *(_DWORD *)(v6 + 120) = 2;
    v8 = *v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v9 = (_QWORD *)v5[1], (_QWORD *)*v9 != v5) )
      __fastfail(3u);
    v11 = (signed __int64 *)(v0 + 80);
    *v9 = v8;
    v27 = v11;
    *(_QWORD *)(v8 + 8) = v9;
    while ( 1 )
    {
      v12 = *(_DWORD *)(v6 + 124);
      *(_DWORD *)(v6 + 124) = 0;
      if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v1);
      KeAbPostRelease((ULONG_PTR)v1);
      v13 = KeAbPreAcquire((__int64)v11, 0LL);
      if ( _InterlockedCompareExchange64(v11, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v11, 0, v13, (unsigned __int64)v11);
      if ( v13 )
        *((_BYTE *)v13 + 10) = 1;
      v14 = *(_QWORD *)(v6 + 48);
      if ( v14 )
      {
        _m_prefetchw((const void *)(v14 + 8));
        v23 = *(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v23 == _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 8), v23 + 2, v23)
          || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(v14 + 8)) )
        {
          goto LABEL_24;
        }
        v14 = 0LL;
      }
      v12 &= ~1u;
LABEL_24:
      if ( (v12 & 1) != 0 )
      {
        v15 = *(_DWORD *)(v14 + 96);
        if ( v15 <= *(_DWORD *)(v6 + 96) )
          v12 &= ~1u;
        else
          *(_DWORD *)(v6 + 96) = v15;
      }
      if ( v12 )
      {
        if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v11);
        KeAbPostRelease((ULONG_PTR)v11);
        v28 = *(_QWORD *)(v6 + 56) ^ 0x41C64E6DA3BC0074LL;
        if ( v14 )
        {
          v16 = *(_QWORD *)(v14 + 64);
          v17 = v12 & 1;
          if ( (v12 & 1) != 0 )
          {
            v18 = *(unsigned int *)(v14 + 96);
            goto LABEL_33;
          }
        }
        else
        {
          v16 = 0LL;
          v17 = v12 & 1;
        }
        v18 = 0LL;
LABEL_33:
        if ( *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v6 + 80) == PopWnfSprActiveSessionChangeCallback )
          PopWnfSprActiveSessionChangeCallback(v6, &v28, v12, v18, v16, *(_QWORD *)(v6 + 88));
        else
          guard_dispatch_icall_no_overrides(v6);
        ExpWnfValidateKernelCallbackEnvironment(v6);
        if ( v17 && _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 164), 0xFFFFFFFF) == 1 )
          ExpWnfNotifyNameSubscribers(v14, 8LL, 0LL);
        if ( v14 )
        {
          _m_prefetchw((const void *)(v14 + 8));
          v19 = *(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v19 != _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 8), v19 - 2, v19) )
            ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(v14 + 8));
        }
        v20 = KeAbPreAcquire((__int64)v1, 0LL);
        v21 = v20;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v1, v20, (__int64)v1);
        if ( v21 )
          *((_BYTE *)v21 + 10) = 1;
        if ( !*(_DWORD *)(v6 + 124) )
        {
          *(_DWORD *)(v6 + 120) = 0;
          _m_prefetchw((const void *)(v6 + 8));
          v22 = *(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
          v0 = v26;
          if ( v22 != _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 8), v22 - 2, v22) )
            ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(v6 + 8));
          goto LABEL_6;
        }
        v11 = v27;
      }
      else
      {
        if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v11);
        KeAbPostRelease((ULONG_PTR)v11);
        if ( v14 )
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v14 + 8));
        v24 = KeAbPreAcquire((__int64)v1, 0LL);
        v25 = v24;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v1, v24, (__int64)v1);
        if ( v25 )
          *((_BYTE *)v25 + 10) = 1;
        if ( !*(_DWORD *)(v6 + 124) )
        {
          *(_DWORD *)(v6 + 120) = 0;
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v6 + 8));
          v0 = v26;
          goto LABEL_6;
        }
      }
    }
  }
  if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v1);
  return KeAbPostRelease((ULONG_PTR)v1);
}
