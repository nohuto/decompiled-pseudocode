/*
 * XREFs of PipSetDevNodeState @ 0x140492B28
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404926CC (PnpRemoveLockedDeviceNode.c)
 *     IoReportDetectedDevice @ 0x14071C850 (IoReportDetectedDevice.c)
 *     PnpRestartDeviceNode @ 0x1407238C4 (PnpRestartDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140723D70 (PnpQueryRemoveLockedDeviceNode.c)
 *     PiInitializeDevice @ 0x140734A0C (PiInitializeDevice.c)
 *     PnpQueryStopDeviceNode @ 0x14073522C (PnpQueryStopDeviceNode.c)
 *     PnpStopDeviceSubtree @ 0x14073565C (PnpStopDeviceSubtree.c)
 *     PipProcessRestartPhase2 @ 0x140736668 (PipProcessRestartPhase2.c)
 *     PipProcessStartPhase2 @ 0x1408B23C8 (PipProcessStartPhase2.c)
 *     PipEnumerateCompleted @ 0x1408B9260 (PipEnumerateCompleted.c)
 *     PipEnumerateDevice @ 0x1408BAFAC (PipEnumerateDevice.c)
 *     PnpProcessAssignResources @ 0x14098E760 (PnpProcessAssignResources.c)
 *     PipProcessStartPhase3 @ 0x14099006C (PipProcessStartPhase3.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1409C5C74 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PipCallDriverAddDevice @ 0x1409C6228 (PipCallDriverAddDevice.c)
 *     PnpStartDeviceNode @ 0x140A10740 (PnpStartDeviceNode.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x140A109EC (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140A113DC (PnpRequestDeviceRemovalWorker.c)
 *     PipDeviceRemovalCheckDeviceNodeState @ 0x140A114EC (PipDeviceRemovalCheckDeviceNodeState.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140A115D8 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A626D8 (IopInitializeDeviceInstanceKey.c)
 *     PiProcessNewDeviceNodeAsync @ 0x140A7C4EC (PiProcessNewDeviceNodeAsync.c)
 *     PiProcessNewDeviceNode @ 0x140A7C564 (PiProcessNewDeviceNode.c)
 *     PnpDriverLoadingFailed @ 0x140AA1408 (PnpDriverLoadingFailed.c)
 *     IopFindLegacyDeviceNode @ 0x140AAF2E8 (IopFindLegacyDeviceNode.c)
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     PipAreDriversLoadedWorker @ 0x140465318 (PipAreDriversLoadedWorker.c)
 *     PnpRemoveDeviceActionRequests @ 0x14046C600 (PnpRemoveDeviceActionRequests.c)
 *     PipIsDevNodeDNStarted @ 0x1404E6B60 (PipIsDevNodeDNStarted.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408B94C4 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PpDevCfgTraceDeviceStart @ 0x1408BAED0 (PpDevCfgTraceDeviceStart.c)
 */

void __fastcall PipSetDevNodeState(__int64 a1, int a2)
{
  int v4; // r15d
  int v5; // esi
  char v6; // r14
  int *v7; // rdi
  KIRQL v8; // r11
  int IsDevNodeDNStarted; // eax
  int v10; // r10d
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = (int *)(a1 + 304);
  v8 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  if ( *(_DWORD *)(a1 + 300) != a2 )
  {
    v4 = PipAreDriversLoadedWorker(*(_DWORD *)(a1 + 300), *v7);
    IsDevNodeDNStarted = PipIsDevNodeDNStarted(a1);
    *(_DWORD *)(a1 + 300) = a2;
    v5 = IsDevNodeDNStarted;
    *(_DWORD *)(a1 + 304) = v10;
    v6 = 1;
    v11 = *(unsigned int *)(a1 + 388);
    *(_QWORD *)(a1 + 888) = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(a1 + 896) = v12;
    *(_DWORD *)(a1 + 4 * v11 + 308) = v10;
    *(_DWORD *)(a1 + 388) = (*(_DWORD *)(a1 + 388) + 1) % 0x14u;
  }
  KeReleaseSpinLock(&PnpSpinLock, v8);
  if ( v6 )
  {
    if ( *(_QWORD *)(a1 + 48)
      && ((unsigned int)PipAreDriversLoadedWorker(*(_DWORD *)(a1 + 300), *v7) != v4
       || (unsigned int)PipIsDevNodeDNStarted(a1) != v5) )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v14, *(_QWORD *)(a1 + 48), 11LL);
      if ( (unsigned int)PipIsDevNodeDNStarted(a1) != v5 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v15, *(_QWORD *)(a1 + 48), 26LL);
    }
    if ( (*(_DWORD *)(a1 + 704) & 1) != 0 )
    {
      LOBYTE(v13) = 1;
      PpDevCfgTraceDeviceStart(a1, v13);
    }
  }
  if ( a2 == 790 )
    PnpRemoveDeviceActionRequests(*(_QWORD *)(a1 + 32));
}
