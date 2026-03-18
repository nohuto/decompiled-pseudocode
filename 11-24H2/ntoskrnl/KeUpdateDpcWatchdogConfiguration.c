/*
 * XREFs of KeUpdateDpcWatchdogConfiguration @ 0x1405B4998
 * Callers:
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeGenericProcessorCallback @ 0x1403390A4 (KeGenericProcessorCallback.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiCreateDpcLimitsProcessorConfiguration @ 0x1405B4BAC (KiCreateDpcLimitsProcessorConfiguration.c)
 *     KiValidateDpcWatchdogConfiguration @ 0x1405B4D98 (KiValidateDpcWatchdogConfiguration.c)
 *     KiApplyDpcVerificationScaleSettings @ 0x1405B5FA0 (KiApplyDpcVerificationScaleSettings.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall KeUpdateDpcWatchdogConfiguration(void *Src, size_t Size)
{
  unsigned int v2; // r15d
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rax
  signed __int8 v6; // cf
  _QWORD *v7; // rdi
  int v8; // edx
  int v9; // edi
  unsigned __int8 CurrentIrql; // r14
  unsigned int v11; // esi
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _OWORD v17[2]; // [rsp+40h] [rbp-30h] BYREF

  memset(v17, 0, sizeof(v17));
  v2 = Size;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((__int64)&KiDpcWatchdogConfigurationLock, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&KiDpcWatchdogConfigurationLock, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(
      &KiDpcWatchdogConfigurationLock,
      (__int64)v5,
      (__int64)&KiDpcWatchdogConfigurationLock);
  if ( v7 )
    *((_BYTE *)v7 + 10) = 1;
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
    dword_140FC43C4 = v12 >> 3;
    KiApplyDpcVerificationScaleSettings();
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    KiCreateDpcLimitsProcessorConfiguration(v17, v11, v12);
    KeGenericProcessorCallback(
      (__int64 *)&KeActiveProcessors,
      (char (__fastcall *)(__int64, __int64))KiUpdateProcessorDpcWatchdogConfiguration,
      (__int64)v17,
      2);
    v9 = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&KiDpcWatchdogConfigurationLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&KiDpcWatchdogConfigurationLock);
  KeAbPostRelease((ULONG_PTR)&KiDpcWatchdogConfigurationLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v13, v14, v15);
  return (unsigned int)v9;
}
