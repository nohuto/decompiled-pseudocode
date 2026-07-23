/*
 * XREFs of CmFcManagerRegisterFeatureUsageProvider @ 0x1407E4AB4
 * Callers:
 *     RtlRegisterFeatureUsageProvider @ 0x140781CB0 (RtlRegisterFeatureUsageProvider.c)
 *     wil_details_RegisterFeatureUsageProvider @ 0x1407D66A0 (wil_details_RegisterFeatureUsageProvider.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     CmFcpManagerAllocateUsageProviderSubscription @ 0x140AB5048 (CmFcpManagerAllocateUsageProviderSubscription.c)
 */

__int64 __fastcall CmFcManagerRegisterFeatureUsageProvider(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v5; // edi
  _QWORD *UsageProviderSubscription; // rsi
  struct _KTHREAD *CurrentThread; // rax
  char *v8; // rax
  signed __int8 v9; // cf
  char *v10; // rbp
  _QWORD *v11; // rax

  v5 = 0;
  UsageProviderSubscription = (_QWORD *)CmFcpManagerAllocateUsageProviderSubscription();
  if ( UsageProviderSubscription )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = (char *)KeAbPreAcquire((__int64)&stru_140EF7508, 0LL);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140EF7508, 0LL);
    v10 = v8;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140EF7508, v8, (__int64)&stru_140EF7508);
    if ( v10 )
      v10[10] = 1;
    v11 = (_QWORD *)qword_140EF76D0;
    if ( *(__int64 **)qword_140EF76D0 != &qword_140EF76C8 )
      __fastfail(3u);
    *UsageProviderSubscription = &qword_140EF76C8;
    UsageProviderSubscription[1] = v11;
    *v11 = UsageProviderSubscription;
    qword_140EF76D0 = (__int64)UsageProviderSubscription;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF7508, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF7508);
    KeAbPostRelease((ULONG_PTR)&stru_140EF7508);
    KeLeaveCriticalRegion();
    *a4 = UsageProviderSubscription;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
