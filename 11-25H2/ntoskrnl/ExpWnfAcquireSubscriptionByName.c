/*
 * XREFs of ExpWnfAcquireSubscriptionByName @ 0x1408E23F0
 * Callers:
 *     NtUnsubscribeWnfStateChange @ 0x1408E2920 (NtUnsubscribeWnfStateChange.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 */

__int64 __fastcall ExpWnfAcquireSubscriptionByName(__int64 a1, __int64 a2, struct _EX_RUNDOWN_REF **a3)
{
  signed __int64 *v3; // rdi
  __int64 *v7; // rsi
  _QWORD *i; // rax
  struct _EX_RUNDOWN_REF *v9; // rsi
  __int64 result; // rax

  v3 = (signed __int64 *)(a2 + 80);
  v7 = KeAbPreAcquire(a2 + 80, 0LL);
  if ( _InterlockedCompareExchange64(v3, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v3, 0, v7, (unsigned __int64)v3);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
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
