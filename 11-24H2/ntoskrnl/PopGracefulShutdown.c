/*
 * XREFs of PopGracefulShutdown @ 0x140B5BA88
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastMutex @ 0x14033E850 (ExAcquireFastMutex.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     IoAddTriageDumpDataBlock @ 0x1403F2880 (IoAddTriageDumpDataBlock.c)
 *     KeAttachProcess @ 0x14047B6B0 (KeAttachProcess.c)
 *     PopDiagTraceEventNoPayload @ 0x14048C7B4 (PopDiagTraceEventNoPayload.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x14057AEA0 (CcWaitForCurrentLazyWriterActivity.c)
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x1405DAE54 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     VfShutdownScheduleWatchdog @ 0x140613F08 (VfShutdownScheduleWatchdog.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x14072D27C (PnpWaitForEmptyDeviceActionQueue.c)
 *     ObShutdownSystem @ 0x1407432D0 (ObShutdownSystem.c)
 *     PopSetCleanShutdownMarker @ 0x1407499A0 (PopSetCleanShutdownMarker.c)
 *     SshSessionManagerFlushBuffers @ 0x1407668B8 (SshSessionManagerFlushBuffers.c)
 *     PsShutdownSystem @ 0x140778944 (PsShutdownSystem.c)
 *     PsWaitForAllProcesses @ 0x140778DC8 (PsWaitForAllProcesses.c)
 *     EtwShutdown @ 0x1407A67D0 (EtwShutdown.c)
 *     CmShutdownSystem @ 0x1407D5194 (CmShutdownSystem.c)
 *     MmZeroPageFileAtShutdown @ 0x1407E8304 (MmZeroPageFileAtShutdown.c)
 *     EtwWriteEndScenario @ 0x140A476E0 (EtwWriteEndScenario.c)
 *     PopTransitionCheckpoint @ 0x140A77528 (PopTransitionCheckpoint.c)
 *     IoShutdownSystem @ 0x140B5374C (IoShutdownSystem.c)
 *     PopDiagTraceGracefulShutdown @ 0x140B5FC14 (PopDiagTraceGracefulShutdown.c)
 *     PopShutdownSystem @ 0x140B60044 (PopShutdownSystem.c)
 *     ExShutdownSystem @ 0x140B61148 (ExShutdownSystem.c)
 *     MmShutdownSystem @ 0x140B625C0 (MmShutdownSystem.c)
 *     PopSetDevicesSystemState @ 0x140B64BCC (PopSetDevicesSystemState.c)
 *     PopBuildDeviceNotifyList @ 0x140B697C8 (PopBuildDeviceNotifyList.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __noreturn PopGracefulShutdown()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rax
  __int64 v10; // rcx
  PVOID *v11; // rbx
  char *v12; // rdx
  __int64 v13; // r8
  unsigned __int64 *v14; // r9
  struct _KPROCESS *v15; // rcx
  char *v16; // rdx
  __int64 v17; // r8
  unsigned __int64 *v18; // r9

  PopTransitionCheckpoint(10, 1);
  PopDiagTraceGracefulShutdown();
  PopAdaptivePersistSystemInitatedRebootState(v1, v0);
  *(_QWORD *)(*(_QWORD *)&qword_140F0B148 + 16LL) = KeGetCurrentThread();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_START);
  MmZeroPageFileAtShutdown();
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_ZEROPAGEFILE_STOP);
  if ( !*(_QWORD *)&qword_140F0B140 )
    guard_dispatch_icall_no_overrides(v3, v2, v4, v5);
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
      v10 = PopShutdownQueue;
      if ( (__int64 *)PopShutdownQueue == &PopShutdownQueue )
        break;
      if ( *(__int64 **)(PopShutdownQueue + 8) != &PopShutdownQueue
        || (v9 = *(_QWORD *)PopShutdownQueue, *(_QWORD *)(*(_QWORD *)PopShutdownQueue + 8LL) != PopShutdownQueue) )
      {
        __fastfail(3u);
      }
      PopShutdownQueue = *(_QWORD *)PopShutdownQueue;
      *(_QWORD *)(v9 + 8) = &PopShutdownQueue;
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v10 + 24), v6, v7, v8);
    }
    while ( 1 )
    {
      v11 = (PVOID *)PopShutdownThreadList;
      if ( !PopShutdownThreadList )
        break;
      PopShutdownThreadList = *(PVOID *)PopShutdownThreadList;
      KeWaitForSingleObject(v11[1], Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(v11[1], 0x64536F50u);
      ExFreePoolWithTag(v11, 0);
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
    ObShutdownSystem(0LL, v12, v13, v14);
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
  if ( *(_QWORD *)&qword_140F0B140 )
  {
    v15 = *(struct _KPROCESS **)(*(_QWORD *)&qword_140F0B140 + 8LL);
    if ( v15 )
      KeAttachProcess(v15);
    IoAddTriageDumpDataBlock(qword_140F0B140, (PVOID)0x48);
    KeBugCheckEx(
      *(_DWORD *)(*(_QWORD *)&qword_140F0B140 + 32LL),
      *(_QWORD *)(*(_QWORD *)&qword_140F0B140 + 40LL),
      *(_QWORD *)(*(_QWORD *)&qword_140F0B140 + 48LL),
      *(_QWORD *)(*(_QWORD *)&qword_140F0B140 + 56LL),
      *(_QWORD *)(*(_QWORD *)&qword_140F0B140 + 64LL));
  }
  PopBootStatCheckpointAvailable = 0;
  *(_DWORD *)(*(_QWORD *)&qword_140F0B148 + 448LL) = 0;
  PopBuildDeviceNotifyList((void *)(*(_QWORD *)&qword_140F0B148 + 48LL));
  PopSetDevicesSystemState();
  ExShutdownSystem(2LL);
  if ( (PopShutdownCleanly & 0x10) != 0 )
    ObShutdownSystem((PVOID *)2, v16, v17, v18);
  MmShutdownSystem(2LL);
  PopShutdownSystem((unsigned int)dword_140F0B104);
}
