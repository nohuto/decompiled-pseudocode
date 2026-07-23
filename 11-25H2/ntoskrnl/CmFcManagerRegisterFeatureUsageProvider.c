/*
 * XREFs of CmFcManagerRegisterFeatureUsageProvider @ 0x1407D4C84
 * Callers:
 *     RtlRegisterFeatureUsageProvider @ 0x140772B30 (RtlRegisterFeatureUsageProvider.c)
 *     wil_details_RegisterFeatureUsageProvider @ 0x1407C6A00 (wil_details_RegisterFeatureUsageProvider.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     CmFcpManagerAllocateUsageProviderSubscription @ 0x140AB5CEC (CmFcpManagerAllocateUsageProviderSubscription.c)
 */

__int64 __fastcall CmFcManagerRegisterFeatureUsageProvider(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v5; // edi
  _QWORD *UsageProviderSubscription; // rsi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v8; // rax
  signed __int8 v9; // cf
  __int64 *v10; // rbp
  _QWORD *v11; // rax

  v5 = 0;
  UsageProviderSubscription = (_QWORD *)CmFcpManagerAllocateUsageProviderSubscription();
  if ( UsageProviderSubscription )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = KeAbPreAcquire((__int64)&stru_140EF6F28, 0LL);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&stru_140EF6F28, 0LL);
    v10 = v8;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140EF6F28, v8, (__int64)&stru_140EF6F28);
    if ( v10 )
      *((_BYTE *)v10 + 10) = 1;
    v11 = (_QWORD *)qword_140EF70A8;
    if ( *(__int64 **)qword_140EF70A8 != &qword_140EF70A0 )
      __fastfail(3u);
    *UsageProviderSubscription = &qword_140EF70A0;
    UsageProviderSubscription[1] = v11;
    *v11 = UsageProviderSubscription;
    qword_140EF70A8 = (__int64)UsageProviderSubscription;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&stru_140EF6F28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&stru_140EF6F28);
    KeAbPostRelease((ULONG_PTR)&stru_140EF6F28);
    KeLeaveCriticalRegion();
    *a4 = UsageProviderSubscription;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
