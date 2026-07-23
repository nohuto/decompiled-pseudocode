/*
 * XREFs of PopGracefulShutdown @ 0x140B5DAF8
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     IoAddTriageDumpDataBlock @ 0x1403E65A0 (IoAddTriageDumpDataBlock.c)
 *     KeAttachProcess @ 0x140477330 (KeAttachProcess.c)
 *     PopDiagTraceEventNoPayload @ 0x1404874D4 (PopDiagTraceEventNoPayload.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140578330 (CcWaitForCurrentLazyWriterActivity.c)
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x1405D8174 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     VfShutdownScheduleWatchdog @ 0x1406124C8 (VfShutdownScheduleWatchdog.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x14072B290 (PnpWaitForEmptyDeviceActionQueue.c)
 *     ObShutdownSystem @ 0x140741200 (ObShutdownSystem.c)
 *     PopSetCleanShutdownMarker @ 0x140747CD0 (PopSetCleanShutdownMarker.c)
 *     SshSessionManagerFlushBuffers @ 0x140766288 (SshSessionManagerFlushBuffers.c)
 *     PsShutdownSystem @ 0x140778A44 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x140778EC8 (PsWaitForAllProcesses.c)
 *     EtwShutdown @ 0x1407A6910 (EtwShutdown.c)
 *     CmShutdownSystem @ 0x1407D5684 (CmShutdownSystem.c)
 *     MmZeroPageFileAtShutdown @ 0x1407E88D4 (MmZeroPageFileAtShutdown.c)
 *     EtwWriteEndScenario @ 0x140A3D500 (EtwWriteEndScenario.c)
 *     PopTransitionCheckpoint @ 0x140A71648 (PopTransitionCheckpoint.c)
 *     IoShutdownSystem @ 0x140B5579C (IoShutdownSystem.c)
 *     PopDiagTraceGracefulShutdown @ 0x140B61C94 (PopDiagTraceGracefulShutdown.c)
 *     PopShutdownSystem @ 0x140B62104 (PopShutdownSystem.c)
 *     ExShutdownSystem @ 0x140B63218 (ExShutdownSystem.c)
 *     MmShutdownSystem @ 0x140B64690 (MmShutdownSystem.c)
 *     PopSetDevicesSystemState @ 0x140B66D04 (PopSetDevicesSystemState.c)
 *     PopBuildDeviceNotifyList @ 0x140B6AED8 (PopBuildDeviceNotifyList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __noreturn PopGracefulShutdown()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  PVOID *v7; // rbx
  char *v8; // rdx
  __int64 v9; // r8
  unsigned __int64 *v10; // r9
  struct _KPROCESS *v11; // rcx
  char *v12; // rdx
  __int64 v13; // r8
  unsigned __int64 *v14; // r9

  PopTransitionCheckpoint(10, 1);
  PopDiagTraceGracefulShutdown();
  PopAdaptivePersistSystemInitatedRebootState(v1, v0);
  *(_QWORD *)(*(_QWORD *)&qword_140F0B9C8 + 16LL) = KeGetCurrentThread();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_START);
  MmZeroPageFileAtShutdown();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_STOP);
  if ( !*(_QWORD *)&qword_140F0B9C0 )
    guard_dispatch_icall_no_overrides(v3, v2);
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
      v6 = PopShutdownQueue;
      if ( (__int64 *)PopShutdownQueue == &PopShutdownQueue )
        break;
      if ( *(__int64 **)(PopShutdownQueue + 8) != &PopShutdownQueue
        || (v5 = *(_QWORD *)PopShutdownQueue, *(_QWORD *)(*(_QWORD *)PopShutdownQueue + 8LL) != PopShutdownQueue) )
      {
        __fastfail(3u);
      }
      PopShutdownQueue = *(_QWORD *)PopShutdownQueue;
      *(_QWORD *)(v5 + 8) = &PopShutdownQueue;
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v6 + 24), v4);
    }
    while ( 1 )
    {
      v7 = (PVOID *)PopShutdownThreadList;
      if ( !PopShutdownThreadList )
        break;
      PopShutdownThreadList = *(PVOID *)PopShutdownThreadList;
      KeWaitForSingleObject(v7[1], Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(v7[1], 0x64536F50u);
      ExFreePoolWithTag(v7, 0);
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
    ObShutdownSystem(0LL, v8, v9, v10);
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_CMSHUTDOWNSYSTEM_START);
  CmShutdownSystem();
  CmShutdownSystem();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_CMSHUTDOWNSYSTEM_STOP);
  if ( PopDiagHandleRegistered )
    EtwWriteEndScenario(
      (ULONG_PTR *)PopDiagHandle,
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
  if ( *(_QWORD *)&qword_140F0B9C0 )
  {
    v11 = *(struct _KPROCESS **)(*(_QWORD *)&qword_140F0B9C0 + 8LL);
    if ( v11 )
      KeAttachProcess(v11);
    IoAddTriageDumpDataBlock(qword_140F0B9C0, (PVOID)0x48);
    KeBugCheckEx(
      *(_DWORD *)(*(_QWORD *)&qword_140F0B9C0 + 32LL),
      *(_QWORD *)(*(_QWORD *)&qword_140F0B9C0 + 40LL),
      *(_QWORD *)(*(_QWORD *)&qword_140F0B9C0 + 48LL),
      *(_QWORD *)(*(_QWORD *)&qword_140F0B9C0 + 56LL),
      *(_QWORD *)(*(_QWORD *)&qword_140F0B9C0 + 64LL));
  }
  PopBootStatCheckpointAvailable = 0;
  *(_DWORD *)(*(_QWORD *)&qword_140F0B9C8 + 448LL) = 0;
  PopBuildDeviceNotifyList((void *)(*(_QWORD *)&qword_140F0B9C8 + 48LL));
  PopSetDevicesSystemState();
  ExShutdownSystem(2LL);
  if ( (PopShutdownCleanly & 0x10) != 0 )
    ObShutdownSystem((PVOID *)2, v12, v13, v14);
  MmShutdownSystem(2LL);
  PopShutdownSystem((unsigned int)dword_140F0B984);
}
