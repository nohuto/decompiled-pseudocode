/*
 * XREFs of PnpRequestDeviceAction @ 0x14046C968
 * Callers:
 *     PnpCheckForWaitingReportedDevice @ 0x1403C5014 (PnpCheckForWaitingReportedDevice.c)
 *     IoInvalidateDeviceState @ 0x14046C880 (IoInvalidateDeviceState.c)
 *     IoInvalidateDeviceRelations @ 0x1404931D0 (IoInvalidateDeviceRelations.c)
 *     PnpInitializeProcessor @ 0x1405A3ECC (PnpInitializeProcessor.c)
 *     PnpBootPhaseComplete @ 0x14071A5C4 (PnpBootPhaseComplete.c)
 *     IoReportRootDevice @ 0x14071D300 (IoReportRootDevice.c)
 *     PipAttemptDependentStart @ 0x14071E570 (PipAttemptDependentStart.c)
 *     IoRequestDeviceRemovalForReset @ 0x1407212F0 (IoRequestDeviceRemovalForReset.c)
 *     PpSystemHiveLimitCallback @ 0x140722E90 (PpSystemHiveLimitCallback.c)
 *     IopReleaseFilteredBootResources @ 0x140725798 (IopReleaseFilteredBootResources.c)
 *     PiDevCfgProcessDeviceCallback @ 0x14072A970 (PiDevCfgProcessDeviceCallback.c)
 *     PpDevCfgProcessDevices @ 0x14072D090 (PpDevCfgProcessDevices.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x140731EB0 (PipDmgRequestRestartOnBlockedDevice.c)
 *     PipDmgRequestUpdateConsoleLockState @ 0x140732180 (PipDmgRequestUpdateConsoleLockState.c)
 *     PiControlGetSetDeviceStatus @ 0x1408D1350 (PiControlGetSetDeviceStatus.c)
 *     IopProcessInvalidateBusRelationsRequest @ 0x1409EDC68 (IopProcessInvalidateBusRelationsRequest.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140A0DB78 (PnpProcessQueryRemoveAndEject.c)
 *     PnpInvalidateRelationsInList @ 0x140A0E800 (PnpInvalidateRelationsInList.c)
 *     IopReleaseDeviceResources @ 0x140A10CF8 (IopReleaseDeviceResources.c)
 *     PiResetProblemDevicesWorker @ 0x140A51860 (PiResetProblemDevicesWorker.c)
 *     PiCMDeviceAction @ 0x140A85618 (PiCMDeviceAction.c)
 *     PnpDriverObjectDereferenceComplete @ 0x140A8ACC4 (PnpDriverObjectDereferenceComplete.c)
 *     PiQueueDeviceRequest @ 0x140AB84B0 (PiQueueDeviceRequest.c)
 *     IopResourceRequirementsChanged @ 0x140AC25FC (IopResourceRequirementsChanged.c)
 *     IopInitializeBootDrivers @ 0x140C1E4C4 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C1F07C (IopInitializePlugPlayServices.c)
 *     IopInitializeSystemDrivers @ 0x140C629DC (IopInitializeSystemDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140C6351C (PipInitializeCoreDriversByGroup.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     PnpDeviceActionWorker @ 0x14046CD70 (PnpDeviceActionWorker.c)
 *     PnpLogActionQueueEvent @ 0x14046D43C (PnpLogActionQueueEvent.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x14046D660 (PnpIsSafeToExamineUserModeTeb.c)
 *     PopDirectedDripsSetDisengageReason @ 0x14046D6D0 (PopDirectedDripsSetDisengageReason.c)
 *     PiPdcDeactivate @ 0x1409EF744 (PiPdcDeactivate.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall PnpRequestDeviceAction(
        PVOID Object,
        unsigned int a2,
        char a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  __int64 Pool2; // rdi
  unsigned int v12; // r13d
  char v13; // al
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v15; // rcx
  __int64 v16; // rsi
  KIRQL v17; // al
  KIRQL v18; // r9
  __int64 v19; // r8
  KIRQL v20; // si
  __int64 *v21; // rax
  KIRQL v23; // [rsp+20h] [rbp-58h]
  GUID v24; // [rsp+40h] [rbp-38h]

  v24 = CPER_EMPTY_GUID;
  Pool2 = 0LL;
  v12 = 0;
  if ( PnpShutdownEvent.Header.SignalState )
  {
    v12 = -1073741431;
    goto LABEL_32;
  }
  Pool2 = ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
  {
    v12 = -1073741670;
    goto LABEL_32;
  }
  if ( !Object )
    Object = (PVOID)*((_QWORD *)IopRootDeviceNode + 4);
  ObfReferenceObjectWithTag(Object, 0x746C6644u);
  *(_QWORD *)(Pool2 + 16) = Object;
  *(_DWORD *)(Pool2 + 24) = a2;
  *(_BYTE *)(Pool2 + 28) = a3;
  if ( a4 )
    *(_OWORD *)(Pool2 + 32) = *(_OWORD *)a4;
  *(_QWORD *)(Pool2 + 48) = a5;
  *(_QWORD *)(Pool2 + 56) = a6;
  *(_DWORD *)(Pool2 + 80) = 1;
  *(_BYTE *)(Pool2 + 84) = 0;
  *(_BYTE *)(Pool2 + 96) = 0;
  *(_QWORD *)(Pool2 + 88) = 0LL;
  if ( !a2 )
    goto LABEL_41;
  if ( a2 != 6 && a2 != 9 && a2 != 10 && a2 != 14 )
  {
    if ( a2 - 17 >= 2 )
    {
      v13 = 1;
LABEL_14:
      if ( v13 && (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
      {
        Flink = KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink;
        if ( Flink )
        {
          v24 = (GUID)*Flink;
        }
        else if ( (unsigned __int8)PnpIsSafeToExamineUserModeTeb()
               && KeGetPcr()->NtTib.$F9182C7BBDA5465159379F5666D1C81A::$B2F89C67BE96B06D3F6044187E462952::Self )
        {
          v24 = *(GUID *)&KeGetPcr()->NtTib.$F9182C7BBDA5465159379F5666D1C81A::$B2F89C67BE96B06D3F6044187E462952::Self[105].SubSystemTib;
        }
      }
      goto LABEL_18;
    }
LABEL_41:
    v13 = 0;
    goto LABEL_14;
  }
LABEL_18:
  *(GUID *)(Pool2 + 64) = v24;
  if ( Object )
    v15 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  else
    v15 = 0LL;
  PnpLogActionQueueEvent(v15, a2, 0LL, 0LL);
  v16 = *(unsigned int *)(Pool2 + 24);
  v17 = KeAcquireSpinLockRaiseToDpc(&qword_140F0DF60);
  v23 = v17;
  if ( ++dword_140F0DF68 == 1 )
  {
    PopDirectedDripsSetDisengageReason(4LL);
    v17 = v23;
  }
  KeReleaseSpinLock(&qword_140F0DF60, v17);
  v18 = KeAcquireSpinLockRaiseToDpc(&qword_140F06650);
  v19 = MEMORY[0xFFFFF78000000008];
  ++dword_140F06658;
  ++*((_DWORD *)&PopDirectedDripsDiagSessionContext + v16 + 16);
  if ( byte_140F066D0 )
  {
    ++*((_DWORD *)&PopDirectedDripsDiagSessionContext + v16 + 108);
    if ( dword_140F06658 == 1 )
      qword_140F066E0 = v19;
  }
  KeReleaseSpinLock(&qword_140F06650, v18);
  v20 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v21 = (__int64 *)qword_140F89FD8;
  if ( *(__int64 **)qword_140F89FD8 != &PnpEnumerationRequestList )
    __fastfail(3u);
  *(_QWORD *)Pool2 = &PnpEnumerationRequestList;
  *(_QWORD *)(Pool2 + 8) = v21;
  *v21 = Pool2;
  qword_140F89FD8 = Pool2;
  if ( a7 )
  {
    ++*(_DWORD *)(Pool2 + 80);
    *a7 = Pool2;
  }
  if ( a2 == 7 || a2 == 10 )
  {
    PnpEnumerationInProgress = 1;
    KeResetEvent(&PnpEnumerationLock);
    KeReleaseSpinLock(&PnpSpinLock, v20);
    PnpDeviceActionWorker(0LL);
  }
  else if ( PnpEnumerationInProgress || !PnPBootDriversLoaded )
  {
    KeReleaseSpinLock(&PnpSpinLock, v20);
  }
  else
  {
    PnpEnumerationInProgress = 1;
    KeResetEvent(&PnpEnumerationLock);
    KeReleaseSpinLock(&PnpSpinLock, v20);
    PnpDeviceEnumerationWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PnpDeviceActionWorker;
    PnpDeviceEnumerationWorkItem.Parameter = 0LL;
    PnpDeviceEnumerationWorkItem.List.Flink = 0LL;
    ExQueueWorkItem(&PnpDeviceEnumerationWorkItem, DelayedWorkQueue);
  }
LABEL_32:
  if ( !Pool2 && a4 )
  {
    PiPdcDeactivate(*a4);
    *a4 = 0LL;
  }
  return v12;
}
