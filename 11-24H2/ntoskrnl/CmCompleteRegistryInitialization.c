/*
 * XREFs of CmCompleteRegistryInitialization @ 0x1407CF20C
 * Callers:
 *     NtInitializeRegistry @ 0x1407CFCB0 (NtInitializeRegistry.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347D10 (PsGetCurrentServerSiloGlobals.c)
 *     PopReleaseRwLock @ 0x1403B5EC8 (PopReleaseRwLock.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     PopAcquireRwLockExclusive @ 0x1404283D4 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x140497478 (PopQueueWorkItem.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     IopCopyBootLogRegistryToFile @ 0x140711E7C (IopCopyBootLogRegistryToFile.c)
 *     PnpBootPhaseComplete @ 0x14071A5C4 (PnpBootPhaseComplete.c)
 *     PoInitHiberServices @ 0x140748B24 (PoInitHiberServices.c)
 *     PoClearTransitionMarker @ 0x140748F9C (PoClearTransitionMarker.c)
 *     PsBootPhaseComplete @ 0x1407717B8 (PsBootPhaseComplete.c)
 *     EtwInitialize @ 0x1407A6460 (EtwInitialize.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x1407B41F8 (ExNotifyPlatformBinaryExecuted.c)
 *     ExpRefreshSystemTime @ 0x1407B6864 (ExpRefreshSystemTime.c)
 *     CmpInitializeSystemHivesLoad @ 0x1407CAC9C (CmpInitializeSystemHivesLoad.c)
 *     CmpCmdInit @ 0x1407D5788 (CmpCmdInit.c)
 *     CmpCreateRegistryThread @ 0x1407D819C (CmpCreateRegistryThread.c)
 *     CmpLockRegistryExclusive @ 0x14087DD80 (CmpLockRegistryExclusive.c)
 *     RtlLockBootStatusData @ 0x140A7C200 (RtlLockBootStatusData.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x140ABB650 (PopCancelIgnoreBatteryStatusChange.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmCompleteRegistryInitialization(__int16 a1)
{
  unsigned int v1; // ebx
  bool v3; // di
  __int64 v4; // rcx
  __int64 v5; // rcx
  char v6; // di
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+10h] BYREF

  v1 = 0;
  Handle = 0LL;
  memset(&Event, 0, sizeof(Event));
  v3 = a1 == 1;
  if ( _InterlockedExchange(&CmFirstTime, 0) )
  {
    EtwInitialize(3u, 0LL);
    CmCompleteInitMachineConfig(&IopAutoReboot);
    if ( !CmNtSkipRegistryInit )
      CmpInitializeSystemHivesLoad();
    CmpLockRegistryExclusive();
    LOBYTE(v4) = v3;
    CmpCmdInit(v4);
    CmpUnlockRegistry(v5);
    if ( a1 != 1 && !CmNtSkipRegistryInit )
    {
      CmpLoadingSystemHivesActive = 1;
      if ( CmpInitRmLogOnLoad || (v6 = 0, CmpForceSynchronousMachineHiveLoad) )
        v6 = 1;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v8 = CmpCreateRegistryThread(
             &Handle,
             v7,
             CmpFinishSystemHivesLoad,
             (unsigned __int64)&Event & -(__int64)(v6 != 0));
      if ( v8 < 0 )
        KeBugCheckEx(0x74u, 2uLL, 3uLL, 3uLL, v8);
      if ( v6 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      ZwClose(Handle);
      Handle = 0LL;
    }
    if ( !CmFastBoot )
    {
      ExpRefreshSystemTime();
      PsBootPhaseComplete(v10, v9, v11);
    }
    RtlLockBootStatusData(0LL);
    PnpBootPhaseComplete();
    PoInitHiberServices();
    PoClearTransitionMarker();
    PopAcquireRwLockExclusive(&PopThermalStateTransitionContext);
    byte_140F0AB34 = 1;
    PopReleaseRwLock((signed __int64 *)&PopThermalStateTransitionContext);
    PopQueueWorkItem((__int64)&PopThermalStateTransitionWorkItem, DelayedWorkQueue);
    PopCancelIgnoreBatteryStatusChange();
    PsGetCurrentServerSiloGlobals()[64].Flink->Blink = (struct _LIST_ENTRY *)1;
    ExNotifyPlatformBinaryExecuted();
    byte_140E67B12 = 1;
    if ( a1 != 1 )
      IopCopyBootLogRegistryToFile();
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v1;
}
