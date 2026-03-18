/*
 * XREFs of PopPowerButtonBugcheckConfigure @ 0x14075CBAC
 * Callers:
 *     PopPowerButtonBugcheckWatchCallback @ 0x14075CCC0 (PopPowerButtonBugcheckWatchCallback.c)
 *     PopInitializePowerButtonHold @ 0x140C320F0 (PopInitializePowerButtonHold.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     PopQueryPowerButtonConfiguration @ 0x1402C9F64 (PopQueryPowerButtonConfiguration.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x1406A8870 (ZwNotifyChangeKey.c)
 */

void __fastcall PopPowerButtonBugcheckConfigure(HANDLE KeyHandle, char a2, _BYTE *a3)
{
  unsigned int v5; // edi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v7; // rax
  signed __int8 v8; // cf
  _QWORD *v9; // rbp
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
    ExfAcquirePushLockExclusiveEx(&PopPowerButtonBugcheckLock, (__int64)v7, (__int64)&PopPowerButtonBugcheckLock);
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
