/*
 * XREFs of ExpWnfCompleteThreadSubscriptions @ 0x140901A5C
 * Callers:
 *     NtGetCompleteWnfStateSubscription @ 0x1409014C0 (NtGetCompleteWnfStateSubscription.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExpCaptureWnfStateName @ 0x1409013E0 (ExpCaptureWnfStateName.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140904190 (ExpWnfNotifyNameSubscribers.c)
 */

__int64 __fastcall ExpWnfCompleteThreadSubscriptions(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, int a5)
{
  struct _EX_RUNDOWN_REF *v7; // r14
  signed __int64 *v8; // rsi
  char *v9; // rbx
  volatile signed __int64 *v10; // rbp
  char *v11; // rax
  char *v12; // rbx
  _QWORD *v13; // rcx
  _QWORD *i; // rdi
  int v15; // eax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v20[5]; // [rsp+20h] [rbp-28h] BYREF

  v20[0] = 0LL;
  v7 = 0LL;
  if ( (int)ExpCaptureWnfStateName(a2, v20, 0) < 0 )
    return 3221225485LL;
  v8 = a1 + 10;
  v9 = (char *)KeAbPreAcquire((__int64)(a1 + 10), 0LL);
  if ( _InterlockedCompareExchange64(a1 + 10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(a1 + 10, 0, v9, (__int64)(a1 + 10));
  if ( v9 )
    v9[10] = 1;
  v10 = a1 + 13;
  v11 = (char *)KeAbPreAcquire((__int64)(a1 + 13), 0LL);
  v12 = v11;
  if ( _interlockedbittestandset64((volatile signed __int32 *)a1 + 26, 0LL) )
    ExfAcquirePushLockExclusiveEx(a1 + 13, v11, (__int64)(a1 + 13));
  if ( v12 )
    v12[10] = 1;
  v13 = a1 + 14;
  for ( i = (_QWORD *)a1[14]; i != v13; i = (_QWORD *)*i )
  {
    if ( *(i - 11) == a3 && v20[0] == *(i - 6) )
    {
      if ( *((_DWORD *)i + 4) == 2 || *((_DWORD *)i + 4) == 3 )
      {
        v15 = *((_DWORD *)i + 5);
        if ( v15 )
        {
          *((_DWORD *)i + 4) = 1;
          if ( a5 == -1073741267 && (v15 & 1) == 0 )
            *((_DWORD *)i + 5) = v15 | 1;
        }
        else if ( a5 )
        {
          *((_DWORD *)i + 4) = 3;
        }
        else
        {
          *((_DWORD *)i + 4) = 0;
          v16 = *i;
          if ( *(_QWORD **)(*i + 8LL) != i || (v17 = (_QWORD *)i[1], (_QWORD *)*v17 != i) )
            __fastfail(3u);
          *v17 = v16;
          *(_QWORD *)(v16 + 8) = v17;
        }
        if ( *((_DWORD *)i + 4) != 3 )
        {
          if ( (*((_BYTE *)i + 20) & 1) == 0 && (i[3] & 1) != 0 )
          {
            v18 = *(i - 7);
            if ( v18 )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 164), 0xFFFFFFFF) == 1
                && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(*(i - 7) + 8LL)) )
              {
                v7 = (struct _EX_RUNDOWN_REF *)*(i - 7);
              }
            }
          }
          *((_DWORD *)i + 6) = 0;
        }
      }
      break;
    }
  }
  if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  if ( _InterlockedCompareExchange64(v8, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v8);
  KeAbPostRelease((ULONG_PTR)v8);
  if ( v7 )
  {
    ExpWnfNotifyNameSubscribers(v7, 8LL, 1LL);
    ExReleaseRundownProtection_0(v7 + 1);
  }
  return 0LL;
}
