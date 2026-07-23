/*
 * XREFs of ExpWnfDispatchKernelSubscription @ 0x140904520
 * Callers:
 *     ExpWnfNotifyNameSubscribers @ 0x140904190 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfWorkItemRoutine @ 0x1409044C0 (ExpWnfWorkItemRoutine.c)
 *     ExpWnfStartKernelDispatcher @ 0x1409E8BD4 (ExpWnfStartKernelDispatcher.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExfReleaseRundownProtection @ 0x14020DE80 (ExfReleaseRundownProtection.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquireRundownProtection @ 0x1402F60C0 (ExfAcquireRundownProtection.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140904190 (ExpWnfNotifyNameSubscribers.c)
 *     PopWnfSprActiveSessionChangeCallback @ 0x140904920 (PopWnfSprActiveSessionChangeCallback.c)
 *     ExpWnfValidateKernelCallbackEnvironment @ 0x140904A08 (ExpWnfValidateKernelCallbackEnvironment.c)
 */

__int64 ExpWnfDispatchKernelSubscription()
{
  __int64 v0; // r15
  volatile signed __int64 *v1; // rsi
  char *v2; // rax
  char *v3; // rbx
  _QWORD **v4; // r14
  _QWORD *v5; // rdi
  ULONG_PTR v6; // rbp
  unsigned __int64 v7; // rtt
  __int64 v8; // rcx
  _QWORD *v9; // rax
  signed __int64 *v11; // r12
  unsigned int v12; // r15d
  char *v13; // rdi
  __int64 v14; // rdi
  unsigned __int64 v15; // rtt
  unsigned int v16; // eax
  __int64 v17; // rcx
  int v18; // r12d
  __int64 v19; // r9
  unsigned __int64 v20; // rtt
  char *v21; // rax
  char *v22; // rdi
  unsigned __int64 v23; // rtt
  char *v24; // rax
  char *v25; // rdi
  __int64 v26; // [rsp+48h] [rbp-50h]
  signed __int64 *v27; // [rsp+50h] [rbp-48h]
  __int64 v28; // [rsp+58h] [rbp-40h] BYREF

  v28 = 0LL;
  v0 = *(_QWORD *)&PsInitialSystemProcess[3].BasePriority;
  v26 = v0;
  v1 = (volatile signed __int64 *)(v0 + 104);
  v2 = (char *)KeAbPreAcquire(v0 + 104, 0LL);
  v3 = v2;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v0 + 104), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v0 + 104), v2, v0 + 104);
  if ( v3 )
    v3[10] = 1;
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
    v27 = (signed __int64 *)(v0 + 80);
    *(_QWORD *)(v8 + 8) = v9;
    while ( 1 )
    {
      v12 = *(_DWORD *)(v6 + 124);
      *(_DWORD *)(v6 + 124) = 0;
      if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v1);
      KeAbPostRelease((ULONG_PTR)v1);
      v13 = (char *)KeAbPreAcquire((__int64)v11, 0LL);
      if ( _InterlockedCompareExchange64(v11, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(v11, 0, v13, (__int64)v11);
      if ( v13 )
        v13[10] = 1;
      v14 = *(_QWORD *)(v6 + 48);
      if ( v14 )
      {
        _m_prefetchw((const void *)(v14 + 8));
        v15 = *(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v15 == _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 8), v15 + 2, v15)
          || ExfAcquireRundownProtection((PEX_RUNDOWN_REF)(v14 + 8)) )
        {
          goto LABEL_27;
        }
        v14 = 0LL;
      }
      v12 &= ~1u;
LABEL_27:
      if ( (v12 & 1) != 0 )
      {
        v16 = *(_DWORD *)(v14 + 96);
        if ( v16 <= *(_DWORD *)(v6 + 96) )
          v12 &= ~1u;
        else
          *(_DWORD *)(v6 + 96) = v16;
      }
      if ( v12 )
      {
        if ( _InterlockedCompareExchange64(v11, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v11);
        KeAbPostRelease((ULONG_PTR)v11);
        v28 = *(_QWORD *)(v6 + 56) ^ 0x41C64E6DA3BC0074LL;
        if ( v14 )
        {
          v17 = *(_QWORD *)(v14 + 64);
          v18 = v12 & 1;
          if ( (v12 & 1) != 0 )
          {
            v19 = *(unsigned int *)(v14 + 96);
            goto LABEL_36;
          }
        }
        else
        {
          v17 = 0LL;
          v18 = v12 & 1;
        }
        v19 = 0LL;
LABEL_36:
        if ( *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))(v6 + 80) == PopWnfSprActiveSessionChangeCallback )
          PopWnfSprActiveSessionChangeCallback(v6, &v28, v12, v19, v17, *(_QWORD *)(v6 + 88));
        else
          guard_dispatch_icall_no_overrides(v6, &v28);
        ExpWnfValidateKernelCallbackEnvironment(v6);
        if ( v18 && _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 164), 0xFFFFFFFF) == 1 )
          ExpWnfNotifyNameSubscribers(v14, 8u, 0, 0);
        if ( v14 )
        {
          _m_prefetchw((const void *)(v14 + 8));
          v20 = *(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v20 != _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 8), v20 - 2, v20) )
            ExfReleaseRundownProtection((PEX_RUNDOWN_REF)(v14 + 8));
        }
        v21 = (char *)KeAbPreAcquire((__int64)v1, 0LL);
        v22 = v21;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v1, v21, (__int64)v1);
        if ( v22 )
          v22[10] = 1;
        if ( !*(_DWORD *)(v6 + 124) )
        {
          *(_DWORD *)(v6 + 120) = 0;
          _m_prefetchw((const void *)(v6 + 8));
          v23 = *(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
          v0 = v26;
          if ( v23 != _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 8), v23 - 2, v23) )
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
        v24 = (char *)KeAbPreAcquire((__int64)v1, 0LL);
        v25 = v24;
        if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v1, v24, (__int64)v1);
        if ( v25 )
          v25[10] = 1;
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
