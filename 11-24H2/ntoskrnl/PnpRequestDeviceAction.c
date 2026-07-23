/*
 * XREFs of PnpRequestDeviceAction @ 0x140467508
 * Callers:
 *     PnpCheckForWaitingReportedDevice @ 0x1403B3BD4 (PnpCheckForWaitingReportedDevice.c)
 *     IoInvalidateDeviceState @ 0x140467420 (IoInvalidateDeviceState.c)
 *     IoInvalidateDeviceRelations @ 0x14048DB00 (IoInvalidateDeviceRelations.c)
 *     PnpInitializeProcessor @ 0x1405A0E0C (PnpInitializeProcessor.c)
 *     PnpBootPhaseComplete @ 0x140718154 (PnpBootPhaseComplete.c)
 *     IoReportRootDevice @ 0x14071AE90 (IoReportRootDevice.c)
 *     PipAttemptDependentStart @ 0x14071C100 (PipAttemptDependentStart.c)
 *     IoRequestDeviceRemovalForReset @ 0x14071EE80 (IoRequestDeviceRemovalForReset.c)
 *     PpSystemHiveLimitCallback @ 0x140720A20 (PpSystemHiveLimitCallback.c)
 *     IopReleaseFilteredBootResources @ 0x140723328 (IopReleaseFilteredBootResources.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140728690 (PiDevCfgProcessDeviceCallback.c)
 *     PpDevCfgProcessDevices @ 0x14072B0A4 (PpDevCfgProcessDevices.c)
 *     PipDmgRequestRestartOnBlockedDevice @ 0x14072FEC0 (PipDmgRequestRestartOnBlockedDevice.c)
 *     PipDmgRequestUpdateConsoleLockState @ 0x140730190 (PipDmgRequestUpdateConsoleLockState.c)
 *     PiControlGetSetDeviceStatus @ 0x1408CED40 (PiControlGetSetDeviceStatus.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1409BBF7C (PnpProcessQueryRemoveAndEject.c)
 *     PnpInvalidateRelationsInList @ 0x1409BCC04 (PnpInvalidateRelationsInList.c)
 *     IopReleaseDeviceResources @ 0x1409BF108 (IopReleaseDeviceResources.c)
 *     IopProcessInvalidateBusRelationsRequest @ 0x1409EB6A8 (IopProcessInvalidateBusRelationsRequest.c)
 *     PiResetProblemDevicesWorker @ 0x140A48930 (PiResetProblemDevicesWorker.c)
 *     PiCMDeviceAction @ 0x140A80158 (PiCMDeviceAction.c)
 *     PnpDriverObjectDereferenceComplete @ 0x140A87004 (PnpDriverObjectDereferenceComplete.c)
 *     PiQueueDeviceRequest @ 0x140AB2974 (PiQueueDeviceRequest.c)
 *     IopResourceRequirementsChanged @ 0x140ABD8E4 (IopResourceRequirementsChanged.c)
 *     IopInitializeBootDrivers @ 0x140C20504 (IopInitializeBootDrivers.c)
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 *     IopInitializeSystemDrivers @ 0x140C64B58 (IopInitializeSystemDrivers.c)
 *     PipInitializeCoreDriversByGroup @ 0x140C65698 (PipInitializeCoreDriversByGroup.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     PnpDeviceActionWorker @ 0x140467910 (PnpDeviceActionWorker.c)
 *     PnpLogActionQueueEvent @ 0x140467FDC (PnpLogActionQueueEvent.c)
 *     PnpIsSafeToExamineUserModeTeb @ 0x140468200 (PnpIsSafeToExamineUserModeTeb.c)
 *     PopDirectedDripsSetDisengageReason @ 0x140468270 (PopDirectedDripsSetDisengageReason.c)
 *     PiPdcDeactivate @ 0x1409ED014 (PiPdcDeactivate.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
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
  Pool2 = ExAllocatePool2(0x40uLL, 0x68uLL, 0x32706E50u);
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
  v17 = KeAcquireSpinLockRaiseToDpc(&qword_140F0E200);
  v23 = v17;
  if ( ++dword_140F0E208 == 1 )
  {
    PopDirectedDripsSetDisengageReason(4LL);
    v17 = v23;
  }
  KeReleaseSpinLock(&qword_140F0E200, v17);
  v18 = KeAcquireSpinLockRaiseToDpc(&qword_140F06950);
  v19 = MEMORY[0xFFFFF78000000008];
  ++dword_140F06958;
  ++*((_DWORD *)&PopDirectedDripsDiagSessionContext + v16 + 16);
  if ( byte_140F069D0 )
  {
    ++*((_DWORD *)&PopDirectedDripsDiagSessionContext + v16 + 108);
    if ( dword_140F06958 == 1 )
      qword_140F069E0 = v19;
  }
  KeReleaseSpinLock(&qword_140F06950, v18);
  v20 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v21 = (__int64 *)qword_140F8A228;
  if ( *(__int64 **)qword_140F8A228 != &PnpEnumerationRequestList )
    __fastfail(3u);
  *(_QWORD *)Pool2 = &PnpEnumerationRequestList;
  *(_QWORD *)(Pool2 + 8) = v21;
  *v21 = Pool2;
  qword_140F8A228 = Pool2;
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
