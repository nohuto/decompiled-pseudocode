/*
 * XREFs of PiPnpRtlBeginOperation @ 0x1408D0818
 * Callers:
 *     IoReportDetectedDevice @ 0x140710750 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140711200 (IoReportRootDevice.c)
 *     PipMergeDependencyEdgeList @ 0x1407127CC (PipMergeDependencyEdgeList.c)
 *     PiProcessAddBootDevices @ 0x140717E94 (PiProcessAddBootDevices.c)
 *     PiProcessSetDeviceProblem @ 0x1407180C8 (PiProcessSetDeviceProblem.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14071A548 (PiPnpRtlEnsureObjectCached.c)
 *     PpDevCfgProcessDevices @ 0x140721110 (PpDevCfgProcessDevices.c)
 *     PiCMDeleteDeviceWorker @ 0x140724ED4 (PiCMDeleteDeviceWorker.c)
 *     PiInitializeDevice @ 0x14072877C (PiInitializeDevice.c)
 *     PiProcessNewDeviceNode @ 0x14082CE68 (PiProcessNewDeviceNode.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x140830FBC (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1408313BC (PnpUnlinkDeviceRemovalRelations.c)
 *     PipSetDevNodeProblem @ 0x140831BCC (PipSetDevNodeProblem.c)
 *     PipProcessStartPhase3 @ 0x1408333C4 (PipProcessStartPhase3.c)
 *     PiProcessQueryDeviceState @ 0x140833E34 (PiProcessQueryDeviceState.c)
 *     PipEnumerateCompleted @ 0x14083619C (PipEnumerateCompleted.c)
 *     PiPnpRtlObjectEventWorker @ 0x140836F20 (PiPnpRtlObjectEventWorker.c)
 *     PiDqActionDataGetChangedProperties @ 0x14083A250 (PiDqActionDataGetChangedProperties.c)
 *     PiDqQueryEvaluateFilter @ 0x1408D06A0 (PiDqQueryEvaluateFilter.c)
 *     PiDqActionDataGetRequestedProperties @ 0x1408D1F44 (PiDqActionDataGetRequestedProperties.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140950B3C (PiDcUpdateDeviceContainerMembership.c)
 *     PiSwPropertySet @ 0x1409550B8 (PiSwPropertySet.c)
 *     IopRegisterDeviceInterface @ 0x14095C574 (IopRegisterDeviceInterface.c)
 *     PiDqIrpPropertySet @ 0x14095E610 (PiDqIrpPropertySet.c)
 *     PiDcHandleCustomDeviceEvent @ 0x14096D434 (PiDcHandleCustomDeviceEvent.c)
 *     IopRemoveDevice @ 0x1409A1004 (IopRemoveDevice.c)
 *     PipClearDevNodeProblem @ 0x1409AD2C0 (PipClearDevNodeProblem.c)
 *     PiProcessClearDeviceProblem @ 0x1409AD5D0 (PiProcessClearDeviceProblem.c)
 *     PnpProcessTargetDeviceEvent @ 0x140A1B0C8 (PnpProcessTargetDeviceEvent.c)
 *     PiCMCreateDevice @ 0x140AAF980 (PiCMCreateDevice.c)
 *     PiCMDeleteClassKey @ 0x140ABC48C (PiCMDeleteClassKey.c)
 *     PiCMDeleteObject @ 0x140ABC5BC (PiCMDeleteObject.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x14045CC60 (RtlInitializeGenericTableAvl.c)
 *     PiPnpRtlGetCurrentOperation @ 0x1408D0940 (PiPnpRtlGetCurrentOperation.c)
 *     PiPnpRtlOperationListReleaseLock @ 0x1408D0B10 (PiPnpRtlOperationListReleaseLock.c)
 *     PiPnpRtlOperationListAcquireExclusiveLock @ 0x1408D0B3C (PiPnpRtlOperationListAcquireExclusiveLock.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiPnpRtlBeginOperation(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  int CurrentOperation; // eax
  unsigned int v4; // edi
  _QWORD *v5; // rbx
  __int64 Pool2; // rax
  __int64 v7; // rax
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  *a1 = 0LL;
  v9 = 0LL;
  CurrentOperation = PiPnpRtlGetCurrentOperation(&v9);
  v4 = CurrentOperation;
  if ( CurrentOperation == -1073741275 )
  {
    v4 = 0;
  }
  else if ( CurrentOperation < 0 )
  {
    return v4;
  }
  v5 = (_QWORD *)v9;
  if ( v9 )
  {
    ++*(_DWORD *)(v9 + 144);
  }
  else
  {
    Pool2 = ExAllocatePool2(0x100uLL);
    v5 = (_QWORD *)Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741670;
    *(_DWORD *)(Pool2 + 144) = 1;
    *(_QWORD *)(Pool2 + 16) = CurrentThread;
    RtlInitializeGenericTableAvl(
      (PRTL_AVL_TABLE)(Pool2 + 24),
      PiPnpRtlObjectEventCompareObjects,
      PiPnpRtlOperationAllocateGenericTableEntry,
      PiPnpRtlOperationFreeGenericTableEntry,
      0LL);
    v5[17] = v5 + 16;
    v5[16] = v5 + 16;
    PiPnpRtlOperationListAcquireExclusiveLock();
    v7 = PiPnpRtlActiveOperations;
    if ( *(__int64 **)(PiPnpRtlActiveOperations + 8) != &PiPnpRtlActiveOperations )
      __fastfail(3u);
    *v5 = PiPnpRtlActiveOperations;
    v5[1] = &PiPnpRtlActiveOperations;
    *(_QWORD *)(v7 + 8) = v5;
    PiPnpRtlActiveOperations = (__int64)v5;
    PiPnpRtlOperationListReleaseLock();
  }
  *a1 = v5;
  return v4;
}
