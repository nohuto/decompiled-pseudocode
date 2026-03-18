/*
 * XREFs of PipSetDevNodeState @ 0x140493D48
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1404938EC (PnpRemoveLockedDeviceNode.c)
 *     IoReportDetectedDevice @ 0x140710750 (IoReportDetectedDevice.c)
 *     PnpRestartDeviceNode @ 0x1407177C4 (PnpRestartDeviceNode.c)
 *     PnpQueryRemoveLockedDeviceNode @ 0x140717C70 (PnpQueryRemoveLockedDeviceNode.c)
 *     PiInitializeDevice @ 0x14072877C (PiInitializeDevice.c)
 *     PnpQueryStopDeviceNode @ 0x140728F9C (PnpQueryStopDeviceNode.c)
 *     PnpStopDeviceSubtree @ 0x1407293CC (PnpStopDeviceSubtree.c)
 *     PipProcessRestartPhase2 @ 0x14072A3D8 (PipProcessRestartPhase2.c)
 *     PiProcessNewDeviceNodeAsync @ 0x14082CDEC (PiProcessNewDeviceNodeAsync.c)
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 *     PnpProcessAssignResources @ 0x14082F690 (PnpProcessAssignResources.c)
 *     PipProcessStartPhase3 @ 0x1408333C4 (PipProcessStartPhase3.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140833970 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     PipEnumerateDevice @ 0x1408353E4 (PipEnumerateDevice.c)
 *     PipEnumerateCompleted @ 0x14083619C (PipEnumerateCompleted.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1409A0984 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PnpStartDeviceNode @ 0x1409A168C (PnpStartDeviceNode.c)
 *     PipCallDriverAddDevice @ 0x1409ACAC0 (PipCallDriverAddDevice.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1409AD954 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopInitializeDeviceInstanceKey @ 0x140A60B18 (IopInitializeDeviceInstanceKey.c)
 *     PipProcessStartPhase2 @ 0x140A6C1C8 (PipProcessStartPhase2.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140A753D0 (PnpRequestDeviceRemovalWorker.c)
 *     PipDeviceRemovalCheckDeviceNodeState @ 0x140A754E0 (PipDeviceRemovalCheckDeviceNodeState.c)
 *     PnpDriverLoadingFailed @ 0x140A9BB78 (PnpDriverLoadingFailed.c)
 *     IopFindLegacyDeviceNode @ 0x140AA9F88 (IopFindLegacyDeviceNode.c)
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     PnpRemoveDeviceActionRequests @ 0x14046DDC8 (PnpRemoveDeviceActionRequests.c)
 *     PipAreDriversLoaded @ 0x1404E6CA8 (PipAreDriversLoaded.c)
 *     PipIsDevNodeDNStarted @ 0x1404E6CD4 (PipIsDevNodeDNStarted.c)
 *     Feature_KernelPnP_StateRetrieval__private_IsEnabledDeviceUsageNoInline @ 0x1405A26B8 (Feature_KernelPnP_StateRetrieval__private_IsEnabledDeviceUsageNoInline.c)
 *     PpDevCfgTraceDeviceStart @ 0x140835E98 (PpDevCfgTraceDeviceStart.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1408366A8 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 */

void __fastcall PipSetDevNodeState(__int64 a1, int a2)
{
  int v4; // r12d
  int IsDevNodeDNStarted; // r14d
  char v6; // r15
  KIRQL v7; // al
  int v8; // ebp
  KIRQL v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx

  v4 = 0;
  IsDevNodeDNStarted = 0;
  v6 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v8 = *(_DWORD *)(a1 + 300);
  v9 = v7;
  v10 = *(_QWORD *)(a1 + 888);
  if ( v8 != a2 )
  {
    v4 = PipAreDriversLoaded(a1);
    IsDevNodeDNStarted = PipIsDevNodeDNStarted(a1);
    Feature_KernelPnP_StateRetrieval__private_IsEnabledDeviceUsageNoInline();
    *(_DWORD *)(a1 + 300) = a2;
    v6 = 1;
    *(_DWORD *)(a1 + 304) = v8;
    *(_QWORD *)(a1 + 888) = MEMORY[0xFFFFF78000000014];
    v11 = *(unsigned int *)(a1 + 388);
    *(_QWORD *)(a1 + 896) = v10;
    *(_DWORD *)(a1 + 4 * v11 + 308) = v8;
    *(_DWORD *)(a1 + 388) = (*(_DWORD *)(a1 + 388) + 1) % 0x14u;
  }
  KeReleaseSpinLock(&PnpSpinLock, v9);
  if ( v6 )
  {
    if ( *(_QWORD *)(a1 + 48)
      && ((unsigned int)PipAreDriversLoaded(a1) != v4 || (unsigned int)PipIsDevNodeDNStarted(a1) != IsDevNodeDNStarted) )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v13, *(_QWORD *)(a1 + 48), 11LL);
      if ( (unsigned int)PipIsDevNodeDNStarted(a1) != IsDevNodeDNStarted )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v14, *(_QWORD *)(a1 + 48), 26LL);
    }
    if ( (*(_DWORD *)(a1 + 704) & 1) != 0 )
    {
      LOBYTE(v12) = 1;
      PpDevCfgTraceDeviceStart(a1, v12);
    }
  }
  if ( a2 == 790 )
    PnpRemoveDeviceActionRequests(*(_QWORD *)(a1 + 32));
}
