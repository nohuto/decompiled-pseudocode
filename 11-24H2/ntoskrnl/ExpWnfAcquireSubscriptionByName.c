/*
 * XREFs of ExpWnfAcquireSubscriptionByName @ 0x140900E08
 * Callers:
 *     NtUnsubscribeWnfStateChange @ 0x140901320 (NtUnsubscribeWnfStateChange.c)
 * Callees:
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 */

__int64 __fastcall ExpWnfAcquireSubscriptionByName(__int64 a1, __int64 a2, struct _EX_RUNDOWN_REF **a3)
{
  signed __int64 *v3; // rdi
  char *v7; // rsi
  _QWORD *i; // rax
  struct _EX_RUNDOWN_REF *v9; // rsi
  __int64 result; // rax

  v3 = (signed __int64 *)(a2 + 80);
  v7 = (char *)KeAbPreAcquire(a2 + 80, 0LL);
  if ( _InterlockedCompareExchange64(v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, 0, v7, (__int64)v3);
  if ( v7 )
    v7[10] = 1;
  for ( i = *(_QWORD **)(a2 + 88); i != (_QWORD *)(a2 + 88); i = (_QWORD *)*i )
  {
    v9 = (struct _EX_RUNDOWN_REF *)(i - 3);
    if ( i[4] == a1 )
    {
      ExAcquireRundownProtection_0(v9 + 1);
      if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared(v3);
      KeAbPostRelease((ULONG_PTR)v3);
      result = 0LL;
      *a3 = v9;
      return result;
    }
  }
  if ( _InterlockedCompareExchange64(v3, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return 3221225524LL;
}
