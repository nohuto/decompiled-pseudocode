/*
 * XREFs of PnpRequestDeviceRemoval @ 0x140A1132C
 * Callers:
 *     IopQueueDeviceResetEvent @ 0x140721694 (IopQueueDeviceResetEvent.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x14072D300 (PiProfileUpdateDeviceTreeCallback.c)
 *     PipDmaGuardBlockAddDevice @ 0x140731A5C (PipDmaGuardBlockAddDevice.c)
 *     PnpReallocateResources @ 0x1407346D4 (PnpReallocateResources.c)
 *     PnpRebalance @ 0x1407352B8 (PnpRebalance.c)
 *     PipProcessRestartPhase2 @ 0x140736668 (PipProcessRestartPhase2.c)
 *     PipProcessStartPhase2 @ 0x1408B23C8 (PipProcessStartPhase2.c)
 *     PipEnumerateCompleted @ 0x1408B9260 (PipEnumerateCompleted.c)
 *     PiProcessQueryDeviceState @ 0x1408BB868 (PiProcessQueryDeviceState.c)
 *     PiProcessDriversLoadedOnSecureDevice @ 0x1409C5488 (PiProcessDriversLoadedOnSecureDevice.c)
 *     PipCallDriverAddDevice @ 0x1409C6228 (PipCallDriverAddDevice.c)
 *     PiUpdateGuestAssignedState @ 0x140A63048 (PiUpdateGuestAssignedState.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140A6B488 (PnpDeleteLockedDeviceNodes.c)
 * Callees:
 *     PnpInitializeTargetDeviceRemoveEvent @ 0x1408B2D48 (PnpInitializeTargetDeviceRemoveEvent.c)
 *     PnpInsertEventInQueue @ 0x1408B3950 (PnpInsertEventInQueue.c)
 *     PnpAllocateCriticalMemory @ 0x140A0D890 (PnpAllocateCriticalMemory.c)
 *     PnpAcquireDependencyRelationsLock @ 0x140A0F188 (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x140A0F814 (PnpReleaseDependencyRelationsLock.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140A113DC (PnpRequestDeviceRemovalWorker.c)
 */

__int64 __fastcall PnpRequestDeviceRemoval(__int64 a1, char a2, int a3, int a4)
{
  int v8; // r8d
  _QWORD *v9; // rbx
  __int64 v11; // rcx
  unsigned int v12; // esi
  char *CriticalMemory; // rax
  __int64 v14; // rdi

  if ( !a1 )
    return 3221225486LL;
  PnpAcquireDependencyRelationsLock(1);
  LOBYTE(v8) = a2;
  PnpRequestDeviceRemovalWorker(a1, a1, v8, 2, 0);
  PnpReleaseDependencyRelationsLock();
  v9 = *(_QWORD **)(a1 + 32);
  if ( PnpShutdownEvent.Header.SignalState
    && !_InterlockedCompareExchange64((volatile signed __int64 *)&PnpDeviceActionThread, 0LL, 0LL) )
  {
    return 3221225865LL;
  }
  if ( v9 )
    v11 = *(_QWORD *)(v9[39] + 40LL);
  else
    v11 = 0LL;
  v12 = *(unsigned __int16 *)(v11 + 40) + 202;
  CriticalMemory = (char *)PnpAllocateCriticalMemory(3, 0x100uLL);
  v14 = (__int64)CriticalMemory;
  if ( !CriticalMemory )
    return 3221225626LL;
  PnpInitializeTargetDeviceRemoveEvent(CriticalMemory, v12, v9, 1, 1, 0, 1, a3, a4, 0LL, 0LL, 0LL, 0LL);
  *(_QWORD *)(v14 + 32) = 0LL;
  *(_QWORD *)(v14 + 40) = 0LL;
  return PnpInsertEventInQueue(v14);
}
