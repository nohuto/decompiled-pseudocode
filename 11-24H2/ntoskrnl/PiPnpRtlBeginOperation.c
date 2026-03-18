/*
 * XREFs of PiPnpRtlBeginOperation @ 0x1408CBF78
 * Callers:
 *     IoReportDetectedDevice @ 0x14071C850 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14071D300 (IoReportRootDevice.c)
 *     PipMergeDependencyEdgeList @ 0x14071E8CC (PipMergeDependencyEdgeList.c)
 *     PiProcessAddBootDevices @ 0x140723F94 (PiProcessAddBootDevices.c)
 *     PiProcessSetDeviceProblem @ 0x1407241C8 (PiProcessSetDeviceProblem.c)
 *     PiPnpRtlEnsureObjectCached @ 0x1407264C8 (PiPnpRtlEnsureObjectCached.c)
 *     PpDevCfgProcessDevices @ 0x14072D090 (PpDevCfgProcessDevices.c)
 *     PiCMDeleteDeviceWorker @ 0x1407310F0 (PiCMDeleteDeviceWorker.c)
 *     PiInitializeDevice @ 0x140734A0C (PiInitializeDevice.c)
 *     IopRegisterDeviceInterface @ 0x1408B3B2C (IopRegisterDeviceInterface.c)
 *     PiSwPropertySet @ 0x1408B80F0 (PiSwPropertySet.c)
 *     PipEnumerateCompleted @ 0x1408B9260 (PipEnumerateCompleted.c)
 *     PiPnpRtlObjectEventWorker @ 0x1408B9D40 (PiPnpRtlObjectEventWorker.c)
 *     PiProcessQueryDeviceState @ 0x1408BB868 (PiProcessQueryDeviceState.c)
 *     PiDqQueryEvaluateFilter @ 0x1408CBE00 (PiDqQueryEvaluateFilter.c)
 *     PiDqActionDataGetRequestedProperties @ 0x1408D4180 (PiDqActionDataGetRequestedProperties.c)
 *     PipSetDevNodeProblem @ 0x14098FC24 (PipSetDevNodeProblem.c)
 *     PipProcessStartPhase3 @ 0x14099006C (PipProcessStartPhase3.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x140990834 (PiDcUpdateDeviceContainerMembership.c)
 *     PiProcessClearDeviceProblem @ 0x1409C5564 (PiProcessClearDeviceProblem.c)
 *     PipClearDevNodeProblem @ 0x1409C5678 (PipClearDevNodeProblem.c)
 *     PnpProcessTargetDeviceEvent @ 0x1409ED604 (PnpProcessTargetDeviceEvent.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1409EEF24 (PiDcHandleCustomDeviceEvent.c)
 *     PiDqIrpPropertySet @ 0x1409FA620 (PiDqIrpPropertySet.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x140A0ECA8 (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140A0EDE0 (PnpUnlinkDeviceRemovalRelations.c)
 *     IopRemoveDevice @ 0x140A10084 (IopRemoveDevice.c)
 *     PiDqActionDataGetChangedProperties @ 0x140A499C4 (PiDqActionDataGetChangedProperties.c)
 *     PiProcessNewDeviceNode @ 0x140A7C564 (PiProcessNewDeviceNode.c)
 *     PiCMCreateDevice @ 0x140AB4970 (PiCMCreateDevice.c)
 *     PiCMDeleteClassKey @ 0x140AC0780 (PiCMDeleteClassKey.c)
 *     PiCMDeleteObject @ 0x140AC08B0 (PiCMDeleteObject.c)
 * Callees:
 *     RtlInitializeGenericTableAvl @ 0x14045C170 (RtlInitializeGenericTableAvl.c)
 *     PiPnpRtlGetCurrentOperation @ 0x1408CC0A0 (PiPnpRtlGetCurrentOperation.c)
 *     PiPnpRtlOperationListReleaseLock @ 0x1408CC270 (PiPnpRtlOperationListReleaseLock.c)
 *     PiPnpRtlOperationListAcquireExclusiveLock @ 0x1408CC29C (PiPnpRtlOperationListAcquireExclusiveLock.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
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
