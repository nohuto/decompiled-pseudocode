/*
 * XREFs of KeQueryDpcWatchdogConfiguration @ 0x1405B4764
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExSystemExceptionFilter @ 0x1407B6F80 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall KeQueryDpcWatchdogConfiguration(void *a1, size_t Size, int a3)
{
  size_t v4; // rsi
  int v6; // r8d
  unsigned int v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v9; // r14
  int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int128 Src; // [rsp+20h] [rbp-38h] BYREF
  __int128 v16; // [rsp+30h] [rbp-28h]

  v4 = (unsigned int)Size;
  Src = 0LL;
  v16 = 0LL;
  v6 = a3 - 228;
  if ( v6 )
  {
    if ( v6 != 1 )
      return (unsigned int)-1073741811;
    if ( (_DWORD)Size == 32 )
    {
      LODWORD(Src) = 2;
      goto LABEL_9;
    }
    return (unsigned int)-1073741820;
  }
  if ( (_DWORD)Size != 20 )
    return (unsigned int)-1073741820;
  LODWORD(Src) = 1;
LABEL_9:
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = KeAbPreAcquire((__int64)&KiDpcWatchdogConfigurationLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&KiDpcWatchdogConfigurationLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&KiDpcWatchdogConfigurationLock,
      0,
      v9,
      (__int64)&KiDpcWatchdogConfigurationLock);
  v7 = 0;
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  v10 = a3 - 228;
  if ( !v10 )
    goto LABEL_21;
  if ( v10 == 1 )
  {
    if ( KeDpcWatchdogProfileSingleDpcThresholdMs )
    {
      LODWORD(Src) = Src | 0x1000;
      DWORD1(v16) = KeDpcWatchdogProfileSingleDpcThresholdMs;
    }
    if ( KeDpcWatchdogProfileCumulativeDpcThresholdMs )
    {
      LODWORD(Src) = Src | 0x2000;
      DWORD2(v16) = KeDpcWatchdogProfileCumulativeDpcThresholdMs;
    }
    if ( KeDpcWatchdogProfileBufferSizeBytes )
    {
      LODWORD(Src) = Src | 0x4000;
      HIDWORD(v16) = KeDpcWatchdogProfileBufferSizeBytes;
    }
LABEL_21:
    if ( KeDpcTimeoutMs )
    {
      LODWORD(Src) = Src | 0x100;
      DWORD1(Src) = KeDpcTimeoutMs;
    }
    if ( KeDpcWatchdogPeriodMs )
    {
      LODWORD(Src) = Src | 0x200;
      DWORD2(Src) = KeDpcWatchdogPeriodMs;
    }
    if ( KeDpcSoftTimeoutMs )
    {
      LODWORD(Src) = Src | 0x400;
      HIDWORD(Src) = KeDpcSoftTimeoutMs;
    }
    if ( KeDpcCumulativeSoftTimeoutMs )
    {
      LODWORD(Src) = Src | 0x800;
      LODWORD(v16) = KeDpcCumulativeSoftTimeoutMs;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&KiDpcWatchdogConfigurationLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&KiDpcWatchdogConfigurationLock);
  KeAbPostRelease((ULONG_PTR)&KiDpcWatchdogConfigurationLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v11, v12, v13);
  memmove(a1, &Src, v4);
  return v7;
}
