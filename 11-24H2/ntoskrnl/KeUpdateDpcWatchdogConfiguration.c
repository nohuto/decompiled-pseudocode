/*
 * XREFs of KeUpdateDpcWatchdogConfiguration @ 0x1405B191C
 * Callers:
 *     NtSetSystemInformation @ 0x140AE2BE0 (NtSetSystemInformation.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     KeGenericProcessorCallback @ 0x140318580 (KeGenericProcessorCallback.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiCreateDpcLimitsProcessorConfiguration @ 0x1405B1B30 (KiCreateDpcLimitsProcessorConfiguration.c)
 *     KiValidateDpcWatchdogConfiguration @ 0x1405B1D28 (KiValidateDpcWatchdogConfiguration.c)
 *     KiApplyDpcVerificationScaleSettings @ 0x1405B3268 (KiApplyDpcVerificationScaleSettings.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall KeUpdateDpcWatchdogConfiguration(void *Src, size_t Size)
{
  unsigned int v2; // r15d
  struct _KTHREAD *CurrentThread; // rax
  char *v5; // rax
  signed __int8 v6; // cf
  char *v7; // rdi
  int v8; // edx
  int v9; // edi
  unsigned __int8 CurrentIrql; // r14
  unsigned int v11; // esi
  unsigned int v12; // edi
  _OWORD v14[2]; // [rsp+40h] [rbp-30h] BYREF

  memset(v14, 0, sizeof(v14));
  v2 = Size;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (char *)KeAbPreAcquire((__int64)&KiDpcWatchdogConfigurationLock, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&KiDpcWatchdogConfigurationLock, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&KiDpcWatchdogConfigurationLock, v5, (__int64)&KiDpcWatchdogConfigurationLock);
  if ( v7 )
    v7[10] = 1;
  v9 = KiValidateDpcWatchdogConfiguration(Src, v2);
  if ( v9 >= 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v8) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v8);
    }
    v11 = KeDpcWatchdogProfileBufferSizeBytes;
    v12 = KeDpcWatchdogProfileBufferSizeBytes;
    if ( !KeDpcWatchdogProfileBufferSizeBytes
      && (KeDpcWatchdogProfileSingleDpcThresholdMs || KeDpcWatchdogProfileCumulativeDpcThresholdMs) )
    {
      v12 = 266240;
    }
    KeDpcWatchdogProfileBufferSizeBytes = v12;
    dword_140FC53D4 = v12 >> 3;
    KiApplyDpcVerificationScaleSettings();
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    KiCreateDpcLimitsProcessorConfiguration(v14, v11, v12);
    KeGenericProcessorCallback(
      (__int64 *)&KeActiveProcessors,
      (char (__fastcall *)(__int64, __int64))KiUpdateProcessorDpcWatchdogConfiguration,
      (__int64)v14,
      2);
    v9 = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiDpcWatchdogConfigurationLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KiDpcWatchdogConfigurationLock);
  KeAbPostRelease((ULONG_PTR)&KiDpcWatchdogConfigurationLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v9;
}
