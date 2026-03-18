/*
 * XREFs of CmFcpManagerSoftwareHiveReady @ 0x1407E5130
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     CmFcpSubscribeScmWnfStateChange @ 0x14066889C (CmFcpSubscribeScmWnfStateChange.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x140A360EC (CmFcpManagerDrainUsageNotifications.c)
 */

void __fastcall CmFcpManagerSoftwareHiveReady(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // rax
  _QWORD *v4; // rbp

  *(_BYTE *)(a1 + 408) = 1;
  if ( *(_BYTE *)(a1 + 1784) )
    CmFcpSubscribeScmWnfStateChange(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire(a1 + 400, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 400), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 400), (__int64)v3, a1 + 400);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  CmFcpManagerDrainUsageNotifications(a1, 0LL);
  CmFcpManagerDrainUsageNotifications(a1, 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 400), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 400));
  KeAbPostRelease(a1 + 400);
  KeLeaveCriticalRegion();
}
