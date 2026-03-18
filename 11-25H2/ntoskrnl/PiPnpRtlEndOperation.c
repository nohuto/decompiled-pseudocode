/*
 * XREFs of PiPnpRtlEndOperation @ 0x1408D09F8
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
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403EAAD0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlIsGenericTableEmptyAvl @ 0x14044F790 (RtlIsGenericTableEmptyAvl.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     PiPnpRtlObjectEventRelease @ 0x140838F9C (PiPnpRtlObjectEventRelease.c)
 *     PiPnpRtlOperationListReleaseLock @ 0x1408D0B10 (PiPnpRtlOperationListReleaseLock.c)
 *     PiPnpRtlOperationListAcquireExclusiveLock @ 0x1408D0B3C (PiPnpRtlOperationListAcquireExclusiveLock.c)
 *     PiPnpRtlDisableRemoveOperationDispatch @ 0x1408D0F84 (PiPnpRtlDisableRemoveOperationDispatch.c)
 *     PiPnpRtlObjectEventDispatch @ 0x1408D1334 (PiPnpRtlObjectEventDispatch.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PiPnpRtlEndOperation(PVOID **P)
{
  PVOID *v3; // rcx
  PVOID *v4; // rax
  char *v5; // rcx
  char **v6; // rdi
  char *v7; // rcx
  char *v8; // rax
  char *Buffer; // [rsp+30h] [rbp+8h] BYREF

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
      v5 = (char *)P[5][4];
      Buffer = v5;
      if ( *((_QWORD *)v5 + 2) )
      {
        ZwClose(*((HANDLE *)v5 + 2));
        *((_QWORD *)Buffer + 2) = 0LL;
        v5 = Buffer;
      }
      PiPnpRtlObjectEventDispatch(v5);
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(P + 3), &Buffer);
      PiPnpRtlObjectEventRelease(Buffer);
    }
    ExReleaseResourceLite(&PiPnpRtlRemoveOperationDispatchLock);
    KeLeaveCriticalRegion();
    v6 = (char **)(P + 16);
    while ( 1 )
    {
      v7 = *v6;
      if ( *v6 == (char *)v6 )
        break;
      if ( *((char ***)v7 + 1) != v6 )
        goto LABEL_4;
      v8 = *(char **)v7;
      if ( *(char **)(*(_QWORD *)v7 + 8LL) != v7 )
        goto LABEL_4;
      *v6 = v8;
      *((_QWORD *)v8 + 1) = v6;
      Buffer = v7 - 56;
      PiPnpRtlObjectEventRelease(v7 - 56);
    }
    ExFreePoolWithTag(P, 0x41706E50u);
  }
}
