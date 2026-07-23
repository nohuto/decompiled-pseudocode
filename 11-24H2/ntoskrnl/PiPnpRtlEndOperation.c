/*
 * XREFs of PiPnpRtlEndOperation @ 0x1408C9B88
 * Callers:
 *     IoReportDetectedDevice @ 0x14071A3E0 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x14071AE90 (IoReportRootDevice.c)
 *     PipMergeDependencyEdgeList @ 0x14071C45C (PipMergeDependencyEdgeList.c)
 *     PiProcessAddBootDevices @ 0x140721B24 (PiProcessAddBootDevices.c)
 *     PiProcessSetDeviceProblem @ 0x140721D58 (PiProcessSetDeviceProblem.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140724058 (PiPnpRtlEnsureObjectCached.c)
 *     PpDevCfgProcessDevices @ 0x14072B0A4 (PpDevCfgProcessDevices.c)
 *     PiCMDeleteDeviceWorker @ 0x14072F100 (PiCMDeleteDeviceWorker.c)
 *     PiInitializeDevice @ 0x14073293C (PiInitializeDevice.c)
 *     IopRegisterDeviceInterface @ 0x1408B141C (IopRegisterDeviceInterface.c)
 *     PiSwPropertySet @ 0x1408B5A60 (PiSwPropertySet.c)
 *     PipEnumerateCompleted @ 0x1408B6C08 (PipEnumerateCompleted.c)
 *     PiPnpRtlObjectEventWorker @ 0x1408B76F0 (PiPnpRtlObjectEventWorker.c)
 *     PiProcessQueryDeviceState @ 0x1408B91C4 (PiProcessQueryDeviceState.c)
 *     PiDqQueryEvaluateFilter @ 0x1408C9830 (PiDqQueryEvaluateFilter.c)
 *     PiDqActionDataGetRequestedProperties @ 0x1408D1B70 (PiDqActionDataGetRequestedProperties.c)
 *     PipSetDevNodeProblem @ 0x14097AC5C (PipSetDevNodeProblem.c)
 *     PipProcessStartPhase3 @ 0x14097B0A4 (PipProcessStartPhase3.c)
 *     PiDcUpdateDeviceContainerMembership @ 0x14097B874 (PiDcUpdateDeviceContainerMembership.c)
 *     PipClearDevNodeProblem @ 0x14098187C (PipClearDevNodeProblem.c)
 *     PiProcessClearDeviceProblem @ 0x140981B8C (PiProcessClearDeviceProblem.c)
 *     PnpNewDeviceNodeDependencyCheck @ 0x1409BD0AC (PnpNewDeviceNodeDependencyCheck.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1409BD1E4 (PnpUnlinkDeviceRemovalRelations.c)
 *     IopRemoveDevice @ 0x1409BE494 (IopRemoveDevice.c)
 *     PnpProcessTargetDeviceEvent @ 0x1409EB044 (PnpProcessTargetDeviceEvent.c)
 *     PiDcHandleCustomDeviceEvent @ 0x1409EC964 (PiDcHandleCustomDeviceEvent.c)
 *     PiDqIrpPropertySet @ 0x1409F2F90 (PiDqIrpPropertySet.c)
 *     PiDqActionDataGetChangedProperties @ 0x140A406E4 (PiDqActionDataGetChangedProperties.c)
 *     PiProcessNewDeviceNode @ 0x140A76864 (PiProcessNewDeviceNode.c)
 *     PiCMCreateDevice @ 0x140AB39A4 (PiCMCreateDevice.c)
 *     PiCMDeleteClassKey @ 0x140ABB8E4 (PiCMDeleteClassKey.c)
 *     PiCMDeleteObject @ 0x140ABBA14 (PiCMDeleteObject.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403E4330 (RtlDeleteElementGenericTableAvl.c)
 *     RtlIsGenericTableEmptyAvl @ 0x140446200 (RtlIsGenericTableEmptyAvl.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     PiPnpRtlOperationListReleaseLock @ 0x1408C9CA0 (PiPnpRtlOperationListReleaseLock.c)
 *     PiPnpRtlOperationListAcquireExclusiveLock @ 0x1408C9CCC (PiPnpRtlOperationListAcquireExclusiveLock.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x1408CA11C (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PiPnpRtlObjectEventDispatch @ 0x1408CA5A8 (PiPnpRtlObjectEventDispatch.c)
 *     PiPnpRtlObjectEventRelease @ 0x1408D042C (PiPnpRtlObjectEventRelease.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
