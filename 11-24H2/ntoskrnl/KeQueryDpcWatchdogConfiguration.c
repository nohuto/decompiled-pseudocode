/*
 * XREFs of KeQueryDpcWatchdogConfiguration @ 0x1405B16E8
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExSystemExceptionFilter @ 0x1407B73D0 (ExSystemExceptionFilter.c)
 */

__int64 __fastcall KeQueryDpcWatchdogConfiguration(void *a1, size_t Size, int a3)
{
  size_t v4; // rsi
  int v6; // r8d
  unsigned int v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  char *v9; // r14
  int v10; // edi
  __int128 Src; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+30h] [rbp-28h]

  v4 = (unsigned int)Size;
  Src = 0LL;
  v13 = 0LL;
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
  v9 = (char *)KeAbPreAcquire((__int64)&KiDpcWatchdogConfigurationLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&KiDpcWatchdogConfigurationLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(
      (signed __int64 *)&KiDpcWatchdogConfigurationLock,
      0,
      v9,
      (__int64)&KiDpcWatchdogConfigurationLock);
  v7 = 0;
  if ( v9 )
    v9[10] = 1;
  v10 = a3 - 228;
  if ( !v10 )
    goto LABEL_21;
  if ( v10 == 1 )
  {
    if ( KeDpcWatchdogProfileSingleDpcThresholdMs )
    {
      LODWORD(Src) = Src | 0x1000;
      DWORD1(v13) = KeDpcWatchdogProfileSingleDpcThresholdMs;
    }
    if ( KeDpcWatchdogProfileCumulativeDpcThresholdMs )
    {
      LODWORD(Src) = Src | 0x2000;
      DWORD2(v13) = KeDpcWatchdogProfileCumulativeDpcThresholdMs;
    }
    if ( KeDpcWatchdogProfileBufferSizeBytes )
    {
      LODWORD(Src) = Src | 0x4000;
      HIDWORD(v13) = KeDpcWatchdogProfileBufferSizeBytes;
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
      LODWORD(v13) = KeDpcCumulativeSoftTimeoutMs;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&KiDpcWatchdogConfigurationLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&KiDpcWatchdogConfigurationLock);
  KeAbPostRelease((ULONG_PTR)&KiDpcWatchdogConfigurationLock);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  memmove(a1, &Src, v4);
  return v7;
}
