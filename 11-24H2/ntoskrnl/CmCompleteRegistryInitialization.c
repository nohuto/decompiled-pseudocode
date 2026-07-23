/*
 * XREFs of CmCompleteRegistryInitialization @ 0x1407CF6FC
 * Callers:
 *     NtInitializeRegistry @ 0x1407D01A0 (NtInitializeRegistry.c)
 * Callees:
 *     PopReleaseRwLock @ 0x1402AE8FC (PopReleaseRwLock.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140326710 (PsGetCurrentServerSiloGlobals.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     PopAcquireRwLockExclusive @ 0x14041C564 (PopAcquireRwLockExclusive.c)
 *     PopQueueWorkItem @ 0x140491E08 (PopQueueWorkItem.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     IopCopyBootLogRegistryToFile @ 0x14070FA0C (IopCopyBootLogRegistryToFile.c)
 *     PnpBootPhaseComplete @ 0x140718154 (PnpBootPhaseComplete.c)
 *     PoInitHiberServices @ 0x140746E14 (PoInitHiberServices.c)
 *     PoClearTransitionMarker @ 0x1407472C8 (PoClearTransitionMarker.c)
 *     PsBootPhaseComplete @ 0x1407719D8 (PsBootPhaseComplete.c)
 *     EtwInitialize @ 0x1407A65A0 (EtwInitialize.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x1407B4648 (ExNotifyPlatformBinaryExecuted.c)
 *     ExpRefreshSystemTime @ 0x1407B6CB4 (ExpRefreshSystemTime.c)
 *     CmpInitializeSystemHivesLoad @ 0x1407CB18C (CmpInitializeSystemHivesLoad.c)
 *     CmpCmdInit @ 0x1407D5C78 (CmpCmdInit.c)
 *     CmpCreateRegistryThread @ 0x1407D86F0 (CmpCreateRegistryThread.c)
 *     CmpLockRegistryExclusive @ 0x140881C30 (CmpLockRegistryExclusive.c)
 *     RtlLockBootStatusData @ 0x140A76500 (RtlLockBootStatusData.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x140AB6670 (PopCancelIgnoreBatteryStatusChange.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
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
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopThermalStateTransitionContext);
    byte_140F0AF74 = 1;
    PopReleaseRwLock(&PopThermalStateTransitionContext);
    PopQueueWorkItem((__int64)&PopThermalStateTransitionWorkItem, DelayedWorkQueue);
    PopCancelIgnoreBatteryStatusChange();
    PsGetCurrentServerSiloGlobals()[64].Flink->Blink = (struct _LIST_ENTRY *)1;
    ExNotifyPlatformBinaryExecuted();
    byte_140E67D08 = 1;
    if ( a1 != 1 )
      IopCopyBootLogRegistryToFile();
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return v1;
}
