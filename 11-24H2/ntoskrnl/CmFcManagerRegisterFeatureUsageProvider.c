/*
 * XREFs of CmFcManagerRegisterFeatureUsageProvider @ 0x1407E4564
 * Callers:
 *     RtlRegisterFeatureUsageProvider @ 0x140781D80 (RtlRegisterFeatureUsageProvider.c)
 *     wil_details_RegisterFeatureUsageProvider @ 0x1407D6160 (wil_details_RegisterFeatureUsageProvider.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     CmFcpManagerAllocateUsageProviderSubscription @ 0x140ABA02C (CmFcpManagerAllocateUsageProviderSubscription.c)
 */

__int64 __fastcall CmFcManagerRegisterFeatureUsageProvider(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v5; // edi
  _QWORD *UsageProviderSubscription; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v8; // rax
  signed __int8 v9; // cf
  _QWORD *v10; // rbp
  _QWORD *v11; // rax

  v5 = 0;
  UsageProviderSubscription = (_QWORD *)CmFcpManagerAllocateUsageProviderSubscription();
  if ( UsageProviderSubscription )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = KeAbPreAcquire((__int64)&stru_140EF72C8, 0LL);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140EF72C8, 0LL);
    v10 = v8;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(&stru_140EF72C8, (__int64)v8, (__int64)&stru_140EF72C8);
    if ( v10 )
      *((_BYTE *)v10 + 10) = 1;
    v11 = (_QWORD *)qword_140EF7448;
    if ( *(__int64 **)qword_140EF7448 != &qword_140EF7440 )
      __fastfail(3u);
    *UsageProviderSubscription = &qword_140EF7440;
    UsageProviderSubscription[1] = v11;
    *v11 = UsageProviderSubscription;
    qword_140EF7448 = (__int64)UsageProviderSubscription;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF72C8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF72C8);
    KeAbPostRelease((ULONG_PTR)&stru_140EF72C8);
    KeLeaveCriticalRegion();
    *a4 = UsageProviderSubscription;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
