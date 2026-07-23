/*
 * XREFs of IopUnloadDriver @ 0x140AA3F28
 * Callers:
 *     PnpUnloadAttachedDriver @ 0x140A8BD5C (PnpUnloadAttachedDriver.c)
 *     NtUnloadDriver @ 0x140AA3F10 (NtUnloadDriver.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140C11358 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140311890 (PsIsCurrentThreadInServerSilo.c)
 *     DbgPrint @ 0x1403A9600 (DbgPrint.c)
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     PsAttachSiloToCurrentThread @ 0x14043C9E0 (PsAttachSiloToCurrentThread.c)
 *     RtlImageNtHeader @ 0x14043DFA0 (RtlImageNtHeader.c)
 *     PsDetachSiloFromCurrentThread @ 0x140443110 (PsDetachSiloFromCurrentThread.c)
 *     PnpDiagnosticTraceObject @ 0x140463B34 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x140463D80 (PnpDiagnosticTraceDeviceOperation.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x140463E64 (PnpDiagnosticTraceDriverFullInfo.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x140483BB0 (PdcCreateWatchdogAroundClientCall.c)
 *     IopCleanupNotifications @ 0x1404A559C (IopCleanupNotifications.c)
 *     IopCheckUnloadDriver @ 0x1404D2DEC (IopCheckUnloadDriver.c)
 *     Feature_DriverEntryInHostContext__private_IsEnabledDeviceUsageNoInline @ 0x140592580 (Feature_DriverEntryInHostContext__private_IsEnabledDeviceUsageNoInline.c)
 *     ZwUnloadDriver @ 0x14069EC60 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140858330 (SeSinglePrivilegeCheck.c)
 *     ObOpenObjectByName @ 0x14085AA70 (ObOpenObjectByName.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     PnpIsLegacyDriver @ 0x1409ADE44 (PnpIsLegacyDriver.c)
 *     ObMakeTemporaryObject @ 0x1409AF2C0 (ObMakeTemporaryObject.c)
 *     IopGetDriverNameFromKeyNode @ 0x1409B1F94 (IopGetDriverNameFromKeyNode.c)
 *     IopOpenRegistryKey @ 0x140A74FB0 (IopOpenRegistryKey.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140A8B820 (EtwTiLogDriverObjectUnLoad.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopUnloadDriver(UNICODE_STRING *a1, char a2)
{
  unsigned __int16 MinorImageVersion; // r14
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
  UNICODE_STRING Destination; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE v19; // [rsp+58h] [rbp-B0h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-A8h] BYREF
  PVOID P; // [rsp+70h] [rbp-98h]
  _QWORD v22[3]; // [rsp+78h] [rbp-90h] BYREF
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+90h] [rbp-78h] BYREF
  struct _KEVENT Event; // [rsp+B0h] [rbp-58h] BYREF
  PVOID v25; // [rsp+C8h] [rbp-40h]
  char v26; // [rsp+120h] [rbp+18h] BYREF
  PVOID Object; // [rsp+128h] [rbp+20h] BYREF

  *(_OWORD *)Src = 0LL;
  P = 0LL;
  HIDWORD(WorkItem.List.Flink) = 0;
  HIDWORD(WorkItem.Parameter) = 0;
  Handle = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v19 = 0LL;
  v26 = 0;
  LOBYTE(MinorImageVersion) = 0;
  v22[0] = 0x20000LL;
  v22[1] = &word_140AD8570;
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
        DriverNameFromKeyNode = ObOpenObjectByName(
                                  (__int64)&WorkItem,
                                  (__int64)IoDriverObjectType,
                                  0,
                                  0LL,
                                  1,
                                  0LL,
                                  (__int64)&v19);
        if ( DriverNameFromKeyNode >= 0 )
        {
          Object = 0LL;
          DriverNameFromKeyNode = ObReferenceObjectByHandle(v19, 0, IoDriverObjectType, 0, &Object, 0LL);
          ObCloseHandle(v19, 0);
          if ( DriverNameFromKeyNode >= 0 )
          {
            v13 = (unsigned __int16 *)Object;
            MinorImageVersion = RtlImageNtHeader(*((PVOID *)Object + 3))->OptionalHeader.MinorImageVersion;
            if ( !*((_QWORD *)v13 + 13) || !*((_QWORD *)v13 + 5) )
            {
              ObfDereferenceObject(v13);
              v5 = 1;
              goto LABEL_33;
            }
            if ( !a2 && !(unsigned int)PnpIsLegacyDriver((__int64)v13) )
            {
              ObfDereferenceObject(v14);
LABEL_33:
              DriverNameFromKeyNode = -1073741808;
              goto LABEL_34;
            }
            DriverNameFromKeyNode = IopCheckUnloadDriver(v13, &v26);
            if ( (int)(DriverNameFromKeyNode + 0x80000000) >= 0 && DriverNameFromKeyNode != -1073741808 )
            {
              if ( v26 )
              {
                if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
                {
                  if ( (unsigned int)Feature_DriverEntryInHostContext__private_IsEnabledDeviceUsageNoInline() )
                  {
                    v15 = (struct _LIST_ENTRY *)PdcCreateWatchdogAroundClientCall();
                    v16 = PsAttachSiloToCurrentThread(v15);
                    v13 = (unsigned __int16 *)Object;
                    guard_dispatch_icall_no_overrides(Object);
                    PsDetachSiloFromCurrentThread(v16);
                  }
                  else
                  {
                    v13 = (unsigned __int16 *)Object;
                    guard_dispatch_icall_no_overrides(Object);
                  }
                }
                else
                {
                  memset_0(&WorkItem, 0, 0x50uLL);
                  KeInitializeEvent(&Event, NotificationEvent, 0);
                  v13 = (unsigned __int16 *)Object;
                  v25 = Object;
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
LABEL_34:
    PnpDiagnosticTraceDriverFullInfo(
      &KMPnPEvt_DriverUnload_Stop,
      &a1->Length,
      DriverNameFromKeyNode,
      (__int64)&Destination,
      MinorImageVersion);
    if ( DriverNameFromKeyNode < 0 && !v5 )
      PnpDiagnosticTraceDeviceOperation(
        &KMPnPEvt_DriverUnload_Fail,
        (unsigned __int16 *)v22,
        DriverNameFromKeyNode,
        (__int64)&Destination,
        MinorImageVersion);
    Buffer = Destination.Buffer;
    if ( !Destination.Buffer )
      return (unsigned int)DriverNameFromKeyNode;
    goto LABEL_38;
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
LABEL_38:
  ExFreePoolWithTag(Buffer, 0);
  return (unsigned int)DriverNameFromKeyNode;
}
