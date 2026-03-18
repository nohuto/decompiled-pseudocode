/*
 * XREFs of PopPowerButtonBugcheckConfigure @ 0x14075027C
 * Callers:
 *     PopPowerButtonBugcheckWatchCallback @ 0x140750390 (PopPowerButtonBugcheckWatchCallback.c)
 *     PopInitializePowerButtonHold @ 0x140C20FEC (PopInitializePowerButtonHold.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     PopQueryPowerButtonConfiguration @ 0x1404C039C (PopQueryPowerButtonConfiguration.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x14069D5A0 (ZwNotifyChangeKey.c)
 */

void __fastcall PopPowerButtonBugcheckConfigure(HANDLE KeyHandle, char a2, _BYTE *a3)
{
  unsigned int v5; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v7; // rax
  signed __int8 v8; // cf
  __int64 *v9; // rbp
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
  v7 = KeAbPreAcquire((__int64)&PopPowerButtonBugcheckLock, 0LL);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&PopPowerButtonBugcheckLock, 0LL);
  v9 = v7;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&PopPowerButtonBugcheckLock, v7, (__int64)&PopPowerButtonBugcheckLock);
  if ( v9 )
    *((_BYTE *)v9 + 10) = 1;
  PopQueryPowerButtonConfiguration(KeyHandle, a3);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopPowerButtonBugcheckLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopPowerButtonBugcheckLock);
  KeAbPostRelease((ULONG_PTR)&PopPowerButtonBugcheckLock);
  KeLeaveCriticalRegion();
  if ( (_BYTE)v5 )
    ZwClose(KeyHandle);
}
