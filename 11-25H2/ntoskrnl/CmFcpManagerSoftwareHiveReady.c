/*
 * XREFs of CmFcpManagerSoftwareHiveReady @ 0x1407D52C0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     CmFcpSubscribeScmWnfStateChange @ 0x14065CDCC (CmFcpSubscribeScmWnfStateChange.c)
 *     CmFcpManagerDrainUsageNotifications @ 0x140A3082C (CmFcpManagerDrainUsageNotifications.c)
 */

void __fastcall CmFcpManagerSoftwareHiveReady(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v3; // rax
  __int64 *v4; // rbp

  *(_BYTE *)(a1 + 408) = 1;
  if ( *(_BYTE *)(a1 + 1784) )
    CmFcpSubscribeScmWnfStateChange(a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire(a1 + 400, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 400), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 400), v3, a1 + 400);
  if ( v4 )
    *((_BYTE *)v4 + 10) = 1;
  CmFcpManagerDrainUsageNotifications(a1, 0LL);
  CmFcpManagerDrainUsageNotifications(a1, 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 400), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 400));
  KeAbPostRelease(a1 + 400);
  KeLeaveCriticalRegion();
}
