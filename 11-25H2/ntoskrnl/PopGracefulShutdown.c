/*
 * XREFs of PopGracefulShutdown @ 0x140B4BB18
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeAttachProcess @ 0x140203A10 (KeAttachProcess.c)
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     IoAddTriageDumpDataBlock @ 0x14041F7F0 (IoAddTriageDumpDataBlock.c)
 *     PopDiagTraceEventNoPayload @ 0x140488BD4 (PopDiagTraceEventNoPayload.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140577B90 (CcWaitForCurrentLazyWriterActivity.c)
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x1405D632C (PopAdaptivePersistSystemInitatedRebootState.c)
 *     VfShutdownScheduleWatchdog @ 0x140607F48 (VfShutdownScheduleWatchdog.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1407212FC (PnpWaitForEmptyDeviceActionQueue.c)
 *     ObShutdownSystem @ 0x1407372B0 (ObShutdownSystem.c)
 *     PopSetCleanShutdownMarker @ 0x14073D924 (PopSetCleanShutdownMarker.c)
 *     SshSessionManagerFlushBuffers @ 0x1407568A8 (SshSessionManagerFlushBuffers.c)
 *     PsShutdownSystem @ 0x140768C94 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x140769118 (PsWaitForAllProcesses.c)
 *     EtwShutdown @ 0x140797400 (EtwShutdown.c)
 *     CmShutdownSystem @ 0x1407C5A50 (CmShutdownSystem.c)
 *     MmZeroPageFileAtShutdown @ 0x1407D8444 (MmZeroPageFileAtShutdown.c)
 *     PopTransitionCheckpoint @ 0x140A1C604 (PopTransitionCheckpoint.c)
 *     EtwWriteEndScenario @ 0x140A42A90 (EtwWriteEndScenario.c)
 *     IoShutdownSystem @ 0x140B4374C (IoShutdownSystem.c)
 *     PopDiagTraceGracefulShutdown @ 0x140B4FAD4 (PopDiagTraceGracefulShutdown.c)
 *     PopShutdownSystem @ 0x140B4FF14 (PopShutdownSystem.c)
 *     ExShutdownSystem @ 0x140B51018 (ExShutdownSystem.c)
 *     MmShutdownSystem @ 0x140B52490 (MmShutdownSystem.c)
 *     PopSetDevicesSystemState @ 0x140B54ABC (PopSetDevicesSystemState.c)
 *     PopBuildDeviceNotifyList @ 0x140B59988 (PopBuildDeviceNotifyList.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __noreturn PopGracefulShutdown()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  PVOID *v5; // rbx
  char *v6; // rdx
  __int64 v7; // r8
  unsigned __int64 *v8; // r9
  struct _KPROCESS *v9; // rcx
  char *v10; // rdx
  __int64 v11; // r8
  unsigned __int64 *v12; // r9

  PopTransitionCheckpoint(10, 1);
  PopDiagTraceGracefulShutdown();
  PopAdaptivePersistSystemInitatedRebootState(v1, v0);
  *(_QWORD *)(*(_QWORD *)&qword_140F0AEA8 + 16LL) = KeGetCurrentThread();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_START);
  MmZeroPageFileAtShutdown();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_STOP);
  if ( !*(_QWORD *)&qword_140F0AEA0 )
    guard_dispatch_icall_no_overrides(v2);
  VfShutdownScheduleWatchdog();
  if ( PopShutdownCleanly )
  {
    PsShutdownSystem();
    KeSetEvent(&PopShutdownEvent, 0, 0);
    ExAcquireFastMutex(&PopShutdownListMutex);
    PopShutdownListAvailable = 0;
    KeReleaseGuardedMutex(&PopShutdownListMutex);
    while ( 1 )
    {
      v4 = PopShutdownQueue;
      if ( (__int64 *)PopShutdownQueue == &PopShutdownQueue )
        break;
      if ( *(__int64 **)(PopShutdownQueue + 8) != &PopShutdownQueue
        || (v3 = *(_QWORD *)PopShutdownQueue, *(_QWORD *)(*(_QWORD *)PopShutdownQueue + 8LL) != PopShutdownQueue) )
      {
        __fastfail(3u);
      }
      PopShutdownQueue = *(_QWORD *)PopShutdownQueue;
      *(_QWORD *)(v3 + 8) = &PopShutdownQueue;
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v4 + 24));
    }
    while ( 1 )
    {
      v5 = (PVOID *)PopShutdownThreadList;
      if ( !PopShutdownThreadList )
        break;
      PopShutdownThreadList = *(PVOID *)PopShutdownThreadList;
      KeWaitForSingleObject(v5[1], Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(v5[1], 0x64536F50u);
      ExFreePoolWithTag(v5, 0);
    }
  }
  TmShutdownSystem();
  CmShutdownSystem();
  ExShutdownSystem(0LL);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWNSYSTEM_START);
  IoShutdownSystem(0);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWNSYSTEM_STOP);
  if ( PopShutdownCleanly )
  {
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_WAITFORPROCESSES_START);
    PsWaitForAllProcesses();
    PopDiagTraceEventNoPayload(&POP_ETW_EVENT_WAITFORPROCESSES_STOP);
  }
  if ( (PopShutdownCleanly & 0x10) != 0 )
    ObShutdownSystem(0LL, v6, v7, v8);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_CMSHUTDOWNSYSTEM_START);
  CmShutdownSystem();
  CmShutdownSystem();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_CMSHUTDOWNSYSTEM_STOP);
  if ( PopDiagHandleRegistered )
    EtwWriteEndScenario(
      (PVOID *)PopDiagHandle,
      &POP_ETW_EVENT_GRACEFULSHUTDOWN_STOP,
      &PopShutdownDiagnosticsScenarioGuid,
      0,
      0LL);
  SshSessionManagerFlushBuffers();
  EtwShutdown(0);
  ExShutdownSystem(1LL);
  MmShutdownSystem(0LL);
  PopSetCleanShutdownMarker();
  PopTransitionCheckpoint(10, 2);
  PnpWaitForEmptyDeviceActionQueue();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWN_FILE_SYSTEMS_START);
  IoShutdownSystem(1);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_IOSHUTDOWN_FILE_SYSTEMS_STOP);
  CcWaitForCurrentLazyWriterActivity();
  if ( *(_QWORD *)&qword_140F0AEA0 )
  {
    v9 = *(struct _KPROCESS **)(*(_QWORD *)&qword_140F0AEA0 + 8LL);
    if ( v9 )
      KeAttachProcess(v9);
    IoAddTriageDumpDataBlock(qword_140F0AEA0, (PVOID)0x48);
    KeBugCheckEx(
      *(_DWORD *)(*(_QWORD *)&qword_140F0AEA0 + 32LL),
      *(_QWORD *)(*(_QWORD *)&qword_140F0AEA0 + 40LL),
      *(_QWORD *)(*(_QWORD *)&qword_140F0AEA0 + 48LL),
      *(_QWORD *)(*(_QWORD *)&qword_140F0AEA0 + 56LL),
      *(_QWORD *)(*(_QWORD *)&qword_140F0AEA0 + 64LL));
  }
  PopBootStatCheckpointAvailable = 0;
  *(_DWORD *)(*(_QWORD *)&qword_140F0AEA8 + 448LL) = 0;
  PopBuildDeviceNotifyList((void *)(*(_QWORD *)&qword_140F0AEA8 + 48LL));
  PopSetDevicesSystemState();
  ExShutdownSystem(2LL);
  if ( (PopShutdownCleanly & 0x10) != 0 )
    ObShutdownSystem((PVOID *)2, v10, v11, v12);
  MmShutdownSystem(2LL);
  PopShutdownSystem((unsigned int)dword_140F0AE64);
}
