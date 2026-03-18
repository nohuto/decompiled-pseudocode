/*
 * XREFs of PiPnpRtlEndOperation @ 0x1408CC158
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
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403F0610 (RtlDeleteElementGenericTableAvl.c)
 *     RtlIsGenericTableEmptyAvl @ 0x140450F90 (RtlIsGenericTableEmptyAvl.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     PiPnpRtlOperationListReleaseLock @ 0x1408CC270 (PiPnpRtlOperationListReleaseLock.c)
 *     PiPnpRtlOperationListAcquireExclusiveLock @ 0x1408CC29C (PiPnpRtlOperationListAcquireExclusiveLock.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x1408CC6EC (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PiPnpRtlObjectEventDispatch @ 0x1408CCBB0 (PiPnpRtlObjectEventDispatch.c)
 *     PiPnpRtlObjectEventRelease @ 0x1408D2A3C (PiPnpRtlObjectEventRelease.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlEndOperation(PVOID **P)
{
  PVOID *v3; // rcx
  PVOID *v4; // rax
  HANDLE *v5; // rcx
  _QWORD **v6; // rdi
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  HANDLE *Buffer; // [rsp+30h] [rbp+8h] BYREF

  Buffer = 0LL;
  if ( (*((_DWORD *)P + 36))-- == 1 )
  {
    PiPnpRtlDisableRemoveOperationDispatch();
    PiPnpRtlOperationListAcquireExclusiveLock();
    v3 = *P;
    if ( (*P)[1] != P || (v4 = P[1], *v4 != P) )
LABEL_4:
      __fastfail(3u);
    *v4 = v3;
    v3[1] = v4;
    PiPnpRtlOperationListReleaseLock();
    while ( !RtlIsGenericTableEmptyAvl((PRTL_AVL_TABLE)(P + 3)) )
    {
      v5 = (HANDLE *)P[5][4];
      Buffer = v5;
      if ( v5[2] )
      {
        ZwClose(v5[2]);
        Buffer[2] = 0LL;
        v5 = Buffer;
      }
      PiPnpRtlObjectEventDispatch(v5);
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(P + 3), &Buffer);
      PiPnpRtlObjectEventRelease(Buffer);
    }
    ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
    KeLeaveCriticalRegion();
    v6 = P + 16;
    while ( 1 )
    {
      v7 = *v6;
      if ( *v6 == v6 )
        break;
      if ( (_QWORD **)v7[1] != v6 )
        goto LABEL_4;
      v8 = (_QWORD *)*v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 )
        goto LABEL_4;
      *v6 = v8;
      v8[1] = v6;
      Buffer = (HANDLE *)(v7 - 7);
      PiPnpRtlObjectEventRelease(v7 - 7);
    }
    ExFreePoolWithTag(P, 0x41706E50u);
  }
}
