/*
 * XREFs of PnpRequestDeviceRemoval @ 0x140832268
 * Callers:
 *     IopQueueDeviceResetEvent @ 0x140715594 (IopQueueDeviceResetEvent.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x140721380 (PiProfileUpdateDeviceTreeCallback.c)
 *     PipDmaGuardBlockAddDevice @ 0x140725840 (PipDmaGuardBlockAddDevice.c)
 *     PnpReallocateResources @ 0x140728444 (PnpReallocateResources.c)
 *     PnpRebalance @ 0x140729028 (PnpRebalance.c)
 *     PipProcessRestartPhase2 @ 0x14072A3D8 (PipProcessRestartPhase2.c)
 *     PiUpdateGuestAssignedState @ 0x140833A30 (PiUpdateGuestAssignedState.c)
 *     PiProcessQueryDeviceState @ 0x140833E34 (PiProcessQueryDeviceState.c)
 *     PipEnumerateCompleted @ 0x14083619C (PipEnumerateCompleted.c)
 *     PipCallDriverAddDevice @ 0x1409ACAC0 (PipCallDriverAddDevice.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140A68A14 (PnpDeleteLockedDeviceNodes.c)
 *     PipProcessStartPhase2 @ 0x140A6C1C8 (PipProcessStartPhase2.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x140AAD2B4 (PiProcessDriversLoadedOnSecureDevice.c)
 * Callees:
 *     PnpAllocateCriticalMemory @ 0x14082F488 (PnpAllocateCriticalMemory.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1408325D8 (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x140832A80 (PnpReleaseDependencyRelationsLock.c)
 *     PnpInsertEventInQueue @ 0x14096A57C (PnpInsertEventInQueue.c)
 *     PnpInitializeTargetDeviceRemoveEvent @ 0x14096B440 (PnpInitializeTargetDeviceRemoveEvent.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140A753D0 (PnpRequestDeviceRemovalWorker.c)
 */

__int64 __fastcall PnpRequestDeviceRemoval(__int64 a1, char a2, int a3, int a4)
{
  __int64 v7; // rbx
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v12; // rbx
  __int64 v14; // rcx
  unsigned int v15; // esi
  _QWORD *CriticalMemory; // rax
  _QWORD *v17; // rdi

  v7 = a1;
  if ( !a1 )
    return 3221225486LL;
  LOBYTE(a1) = 1;
  PnpAcquireDependencyRelationsLock(a1);
  LOBYTE(v8) = a2;
  PnpRequestDeviceRemovalWorker(v7, v7, v8, 2, 0);
  PnpReleaseDependencyRelationsLock(v10, v9, v11);
  v12 = *(_QWORD **)(v7 + 32);
  if ( PnpShutdownEvent.Header.SignalState
    && !_InterlockedCompareExchange64((volatile signed __int64 *)&PnpDeviceActionThread, 0LL, 0LL) )
  {
    return 3221225865LL;
  }
  if ( v12 )
    v14 = *(_QWORD *)(v12[39] + 40LL);
  else
    v14 = 0LL;
  v15 = *(unsigned __int16 *)(v14 + 40) + 202;
  CriticalMemory = (_QWORD *)PnpAllocateCriticalMemory(3, 0x100uLL);
  v17 = CriticalMemory;
  if ( !CriticalMemory )
    return 3221225626LL;
  PnpInitializeTargetDeviceRemoveEvent(CriticalMemory, v15, v12, 1, 0, 1, a3, a4, 0LL, 0LL, 0LL, 0LL);
  v17[4] = 0LL;
  v17[5] = 0LL;
  return PnpInsertEventInQueue(v17);
}
