/*
 * XREFs of IopUnloadDriver @ 0x140AA8FB8
 * Callers:
 *     PnpUnloadAttachedDriver @ 0x140A90E60 (PnpUnloadAttachedDriver.c)
 *     NtUnloadDriver @ 0x140AA8FA0 (NtUnloadDriver.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140C224B8 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     DbgPrint @ 0x1402CB260 (DbgPrint.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     PsIsCurrentThreadInServerSilo @ 0x14042F240 (PsIsCurrentThreadInServerSilo.c)
 *     PnpDiagnosticTraceObject @ 0x14043B204 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x14043B5F8 (PnpDiagnosticTraceDeviceOperation.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x14043B6DC (PnpDiagnosticTraceDriverFullInfo.c)
 *     PsAttachSiloToCurrentThread @ 0x14043CF50 (PsAttachSiloToCurrentThread.c)
 *     RtlImageNtHeader @ 0x14043E310 (RtlImageNtHeader.c)
 *     PsDetachSiloFromCurrentThread @ 0x140444750 (PsDetachSiloFromCurrentThread.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140484160 (PdcCreateWatchdogAroundClientCall.c)
 *     IopCleanupNotifications @ 0x1404A60A8 (IopCleanupNotifications.c)
 *     IopCheckUnloadDriver @ 0x1404D2CBC (IopCheckUnloadDriver.c)
 *     ZwUnloadDriver @ 0x1406A9F30 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ObOpenObjectByName @ 0x14089B210 (ObOpenObjectByName.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     PnpIsLegacyDriver @ 0x1409C6164 (PnpIsLegacyDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x1409CA314 (IopGetDriverNameFromKeyNode.c)
 *     ObMakeTemporaryObject @ 0x140A68350 (ObMakeTemporaryObject.c)
 *     IopOpenRegistryKey @ 0x140A77340 (IopOpenRegistryKey.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140A905B4 (EtwTiLogDriverObjectUnLoad.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopUnloadDriver(UNICODE_STRING *a1, char a2)
{
  __int16 v4; // r14
  char v5; // r12
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v8; // rax
  void *v9; // rcx
  void *Pool2; // rdi
  int DriverNameFromKeyNode; // ebx
  wchar_t *Buffer; // rcx
  unsigned __int16 *v13; // rdi
  void *v14; // rcx
  struct _LIST_ENTRY *v15; // rax
  struct _LIST_ENTRY *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  UNICODE_STRING Destination; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE v22; // [rsp+58h] [rbp-B0h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-A8h] BYREF
  PVOID P; // [rsp+70h] [rbp-98h]
  _QWORD v25[3]; // [rsp+78h] [rbp-90h] BYREF
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+90h] [rbp-78h] BYREF
  struct _KEVENT Event; // [rsp+B0h] [rbp-58h] BYREF
  PVOID v28; // [rsp+C8h] [rbp-40h]
  char v29; // [rsp+120h] [rbp+18h] BYREF
  PVOID Object; // [rsp+128h] [rbp+20h] BYREF

  *(_OWORD *)Src = 0LL;
  P = 0LL;
  HIDWORD(WorkItem.List.Flink) = 0;
  HIDWORD(WorkItem.Parameter) = 0;
  Handle = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v22 = 0LL;
  v29 = 0;
  LOBYTE(v4) = 0;
  v25[0] = 0x20000LL;
  v25[1] = &word_140AEA890;
  v5 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode || a2 )
  {
    PnpDiagnosticTraceObject(&KMPnPEvt_DriverUnload_Start, &a1->Length);
    Destination.Buffer = 0LL;
    *(_DWORD *)&Destination.Length = 0;
    if ( PsIsCurrentThreadInServerSilo() )
    {
      DbgPrint("Server Silo attempting to unload driver %wZ\n", a1);
      return 3221225569LL;
    }
    DriverNameFromKeyNode = IopOpenRegistryKey(&Handle, 0LL, a1, 0x20019u, 0);
    if ( DriverNameFromKeyNode >= 0 )
    {
      DriverNameFromKeyNode = IopGetDriverNameFromKeyNode(Handle, &Destination);
      ObCloseHandle(Handle, 0);
      if ( DriverNameFromKeyNode >= 0 )
      {
        LODWORD(WorkItem.List.Flink) = 48;
        WorkItem.List.Blink = 0LL;
        LODWORD(WorkItem.Parameter) = 576;
        WorkItem.WorkerRoutine = (void (__fastcall *)(void *))&Destination;
        *(_OWORD *)&Event.Header.Lock = 0LL;
        DriverNameFromKeyNode = ObOpenObjectByName((int)&WorkItem, (int)IoDriverObjectType, 0, 0, 1, 0LL, (__int64)&v22);
        if ( DriverNameFromKeyNode >= 0 )
        {
          Object = 0LL;
          DriverNameFromKeyNode = ObReferenceObjectByHandle(v22, 0, IoDriverObjectType, 0, &Object, 0LL);
          ObCloseHandle(v22, 0);
          if ( DriverNameFromKeyNode >= 0 )
          {
            v13 = (unsigned __int16 *)Object;
            v4 = *(_WORD *)(RtlImageNtHeader(*((_QWORD *)Object + 3)) + 70);
            if ( !*((_QWORD *)v13 + 13) || !*((_QWORD *)v13 + 5) )
            {
              ObfDereferenceObject(v13);
              v5 = 1;
              goto LABEL_31;
            }
            if ( !a2 && !(unsigned int)PnpIsLegacyDriver((__int64)v13) )
            {
              ObfDereferenceObject(v14);
LABEL_31:
              DriverNameFromKeyNode = -1073741808;
              goto LABEL_32;
            }
            DriverNameFromKeyNode = IopCheckUnloadDriver(v13, &v29);
            if ( (int)(DriverNameFromKeyNode + 0x80000000) >= 0 && DriverNameFromKeyNode != -1073741808 )
            {
              if ( v29 )
              {
                if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
                {
                  v15 = (struct _LIST_ENTRY *)PdcCreateWatchdogAroundClientCall();
                  v16 = PsAttachSiloToCurrentThread(v15);
                  v13 = (unsigned __int16 *)Object;
                  guard_dispatch_icall_no_overrides(Object, v17, v18, v19);
                  PsDetachSiloFromCurrentThread(v16);
                }
                else
                {
                  memset_0(&WorkItem, 0, 0x50uLL);
                  KeInitializeEvent(&Event, NotificationEvent, 0);
                  v13 = (unsigned __int16 *)Object;
                  v28 = Object;
                  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopLoadUnloadDriver;
                  WorkItem.Parameter = &WorkItem;
                  WorkItem.List.Flink = 0LL;
                  ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
                  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                }
                EtwTiLogDriverObjectUnLoad(v13 + 28);
                IopCleanupNotifications(v13, v13);
                ObMakeTemporaryObject(v13);
                ObfDereferenceObject(v13);
              }
              ObfDereferenceObject(v13);
              DriverNameFromKeyNode = 0;
            }
          }
        }
      }
    }
LABEL_32:
    PnpDiagnosticTraceDriverFullInfo(
      &KMPnPEvt_DriverUnload_Stop,
      &a1->Length,
      DriverNameFromKeyNode,
      (__int64)&Destination,
      v4);
    if ( DriverNameFromKeyNode < 0 && !v5 )
      PnpDiagnosticTraceDeviceOperation(
        &KMPnPEvt_DriverUnload_Fail,
        (unsigned __int16 *)v25,
        DriverNameFromKeyNode,
        (__int64)&Destination,
        v4);
    Buffer = Destination.Buffer;
    if ( !Destination.Buffer )
      return (unsigned int)DriverNameFromKeyNode;
    goto LABEL_36;
  }
  if ( !SeSinglePrivilegeCheck(SeLoadDriverPrivilege, PreviousMode) )
    return 3221225569LL;
  v8 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
    v8 = (__int64)a1;
  LODWORD(Src[0]) = *(_DWORD *)v8;
  v9 = *(void **)(v8 + 8);
  Src[1] = v9;
  if ( !LOWORD(Src[0]) )
    return 3221225485LL;
  if ( ((unsigned __int8)v9 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  Pool2 = (void *)ExAllocatePool2(0x121uLL);
  P = Pool2;
  memmove(Pool2, Src[1], LOWORD(Src[0]));
  Src[1] = Pool2;
  DriverNameFromKeyNode = ZwUnloadDriver((PUNICODE_STRING)Src);
  Buffer = (wchar_t *)Pool2;
LABEL_36:
  ExFreePoolWithTag(Buffer, 0);
  return (unsigned int)DriverNameFromKeyNode;
}
