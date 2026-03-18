/*
 * XREFs of ExpWnfAcquireSubscriptionByName @ 0x1408AABA8
 * Callers:
 *     NtUnsubscribeWnfStateChange @ 0x1408AB0C0 (NtUnsubscribeWnfStateChange.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

__int64 __fastcall ExpWnfAcquireSubscriptionByName(__int64 a1, __int64 a2, struct _EX_RUNDOWN_REF **a3)
{
  signed __int64 *v3; // rdi
  _QWORD *v7; // rsi
  _QWORD *i; // rax
  struct _EX_RUNDOWN_REF *v9; // rsi
  __int64 result; // rax

  v3 = (signed __int64 *)(a2 + 80);
  v7 = KeAbPreAcquire(a2 + 80, 0LL);
  if ( _InterlockedCompareExchange64(v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, 0, v7, (__int64)v3);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
  for ( i = *(_QWORD **)(a2 + 88); i != (_QWORD *)(a2 + 88); i = (_QWORD *)*i )
  {
    v9 = (struct _EX_RUNDOWN_REF *)(i - 3);
    if ( i[4] == a1 )
    {
      ExAcquireRundownProtection(v9 + 1);
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
