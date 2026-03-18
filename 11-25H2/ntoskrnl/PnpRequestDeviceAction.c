/*
 * XREFs of PnpRequestDeviceAction @ 0x14046E128
 * Callers:
 *     PnpCheckForWaitingReportedDevice @ 0x1402A1ED4 (PnpCheckForWaitingReportedDevice.c)
 *     IoInvalidateDeviceState @ 0x14046E040 (IoInvalidateDeviceState.c)
 *     IoInvalidateDeviceRelations @ 0x1404943F0 (IoInvalidateDeviceRelations.c)
 *     PnpInitializeProcessor @ 0x1405A075C (PnpInitializeProcessor.c)
 *     PnpBootPhaseComplete @ 0x14070E4C4 (PnpBootPhaseComplete.c)
 *     IoReportRootDevice @ 0x140711200 (IoReportRootDevice.c)
 *     PipAttemptDependentStart @ 0x140712470 (PipAttemptDependentStart.c)
 *     IoRequestDeviceRemovalForReset @ 0x1407151F0 (IoRequestDeviceRemovalForReset.c)
 *     PpSystemHiveLimitCallback @ 0x140716D90 (PpSystemHiveLimitCallback.c)
 *     IopReleaseFilteredBootResources @ 0x140719818 (IopReleaseFilteredBootResources.c)
 *     PiDevCfgProcessDeviceCallback @ 0x14071E9F0 (PiDevCfgProcessDeviceCallback.c)
 *     PpDevCfgProcessDevices @ 0x140721110 (PpDevCfgProcessDevices.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x140725CA0 (PipDmgRequestRestartOnBlockedDevice.c)
 *     PipDmgRequestUpdateConsoleLockState @ 0x140725F70 (PipDmgRequestUpdateConsoleLockState.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14082FB18 (PnpProcessQueryRemoveAndEject.c)
 *     PnpInvalidateRelationsInList @ 0x1408307A0 (PnpInvalidateRelationsInList.c)
 *     PiControlGetSetDeviceStatus @ 0x1408CEC60 (PiControlGetSetDeviceStatus.c)
 *     PiCMDeviceAction @ 0x14095EA0C (PiCMDeviceAction.c)
 *     IopProcessInvalidateBusRelationsRequest @ 0x14096C15C (IopProcessInvalidateBusRelationsRequest.c)
 *     IopReleaseDeviceResources @ 0x1409A0C90 (IopReleaseDeviceResources.c)
 *     PiResetProblemDevicesWorker @ 0x140A4DEB0 (PiResetProblemDevicesWorker.c)
 *     PnpDriverObjectDereferenceComplete @ 0x140A86214 (PnpDriverObjectDereferenceComplete.c)
 *     PiQueueDeviceRequest @ 0x140AB40E8 (PiQueueDeviceRequest.c)
 *     IopResourceRequirementsChanged @ 0x140ABE80C (IopResourceRequirementsChanged.c)
 *     IopInitializeBootDrivers @ 0x140C0D35C (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 *     IopInitializeSystemDrivers @ 0x140C51698 (IopInitializeSystemDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140C52208 (PipInitializeCoreDriversByGroup.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     KeResetEvent @ 0x140329C10 (KeResetEvent.c)
 *     PnpDeviceActionWorker @ 0x14046E540 (PnpDeviceActionWorker.c)
 *     PnpLogActionQueueEvent @ 0x14046EC0C (PnpLogActionQueueEvent.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x14046EE30 (PnpIsSafeToExamineUserModeTeb.c)
 *     PopDirectedDripsSetDisengageReason @ 0x14046EEA0 (PopDirectedDripsSetDisengageReason.c)
 *     PiPdcDeactivate @ 0x14096DDBC (PiPdcDeactivate.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
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
    goto LABEL_29;
  }
  Pool2 = ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
  {
    v12 = -1073741670;
    goto LABEL_29;
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
               && KeGetPcr()->NtTib.$5225818D498B3FAE6A65DB4E37572489::$27D8BC11A01A0546FE12179A0057C7B6::Self )
        {
          v24 = *(GUID *)&KeGetPcr()->NtTib.$5225818D498B3FAE6A65DB4E37572489::$27D8BC11A01A0546FE12179A0057C7B6::Self[105].SubSystemTib;
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
  v17 = KeAcquireSpinLockRaiseToDpc(&qword_140F0D880);
  v23 = v17;
  if ( ++dword_140F0D888 == 1 )
  {
    PopDirectedDripsSetDisengageReason(4LL);
    v17 = v23;
  }
  KeReleaseSpinLock(&qword_140F0D880, v17);
  v18 = KeAcquireSpinLockRaiseToDpc(&qword_140F06090);
  v19 = MEMORY[0xFFFFF78000000008];
  ++dword_140F06098;
  ++*((_DWORD *)&PopDirectedDripsDiagSessionContext + v16 + 16);
  if ( byte_140F06110 )
  {
    ++*((_DWORD *)&PopDirectedDripsDiagSessionContext + v16 + 108);
    if ( dword_140F06098 == 1 )
      qword_140F06120 = v19;
  }
  KeReleaseSpinLock(&qword_140F06090, v18);
  v20 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v21 = (__int64 *)qword_140F89848;
  if ( *(__int64 **)qword_140F89848 != &PnpEnumerationRequestList )
    __fastfail(3u);
  *(_QWORD *)Pool2 = &PnpEnumerationRequestList;
  *(_QWORD *)(Pool2 + 8) = v21;
  *v21 = Pool2;
  qword_140F89848 = Pool2;
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
LABEL_29:
  if ( !Pool2 && a4 )
  {
    PiPdcDeactivate(*a4);
    *a4 = 0LL;
  }
  return v12;
}
