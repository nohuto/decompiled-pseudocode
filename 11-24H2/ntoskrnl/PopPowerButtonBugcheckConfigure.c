/*
 * XREFs of PopPowerButtonBugcheckConfigure @ 0x14075BB4C
 * Callers:
 *     PopPowerButtonBugcheckWatchCallback @ 0x14075BC60 (PopPowerButtonBugcheckWatchCallback.c)
 *     PopInitializePowerButtonHold @ 0x140C34230 (PopInitializePowerButtonHold.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     PopQueryPowerButtonConfiguration @ 0x1404B9FDC (PopQueryPowerButtonConfiguration.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x1406A9810 (ZwNotifyChangeKey.c)
 */

void __fastcall PopPowerButtonBugcheckConfigure(HANDLE KeyHandle, char a2, _BYTE *a3)
{
  unsigned int v5; // edi
  struct _KTHREAD *CurrentThread; // rax
  char *v7; // rax
  signed __int8 v8; // cf
  char *v9; // rbp
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF

  IoStatusBlock = 0LL;
  if ( a2 )
    v5 = (unsigned int)ZwNotifyChangeKey(
                         KeyHandle,
                         0LL,
                         PopPowerButtonBugcheckWatchWorkItem,
                         (PVOID)1,
                         &IoStatusBlock,
                         4u,
                         0,
                         0LL,
                         0,
                         1u) >> 31;
  else
    LOBYTE(v5) = 1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = (char *)KeAbPreAcquire((__int64)&PopPowerButtonBugcheckLock, 0LL);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&PopPowerButtonBugcheckLock, 0LL);
  v9 = v7;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&PopPowerButtonBugcheckLock, v7, (__int64)&PopPowerButtonBugcheckLock);
  if ( v9 )
    v9[10] = 1;
  PopQueryPowerButtonConfiguration(KeyHandle, a3);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPowerButtonBugcheckLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopPowerButtonBugcheckLock);
  KeAbPostRelease((ULONG_PTR)&PopPowerButtonBugcheckLock);
  KeLeaveCriticalRegion();
  if ( (_BYTE)v5 )
    ZwClose(KeyHandle);
}
