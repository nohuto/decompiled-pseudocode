/*
 * XREFs of IopUnloadDriver @ 0x140AA4068
 * Callers:
 *     PnpUnloadAttachedDriver @ 0x140A8D55C (PnpUnloadAttachedDriver.c)
 *     NtUnloadDriver @ 0x140AA4050 (NtUnloadDriver.c)
 *     PipUnloadEarlyLaunchDrivers @ 0x140C244F8 (PipUnloadEarlyLaunchDrivers.c)
 * Callees:
 *     DbgPrint @ 0x140274290 (DbgPrint.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     PnpDiagnosticTraceObject @ 0x1402F0484 (PnpDiagnosticTraceObject.c)
 *     PnpDiagnosticTraceDeviceOperation @ 0x1402F0878 (PnpDiagnosticTraceDeviceOperation.c)
 *     PnpDiagnosticTraceDriverFullInfo @ 0x1402F095C (PnpDiagnosticTraceDriverFullInfo.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140421410 (PsIsCurrentThreadInServerSilo.c)
 *     PsAttachSiloToCurrentThread @ 0x14042FBB0 (PsAttachSiloToCurrentThread.c)
 *     RtlImageNtHeader @ 0x140432E80 (RtlImageNtHeader.c)
 *     PsDetachSiloFromCurrentThread @ 0x14043A1F0 (PsDetachSiloFromCurrentThread.c)
 *     PdcCreateWatchdogAroundClientCall @ 0x14047F700 (PdcCreateWatchdogAroundClientCall.c)
 *     IopCleanupNotifications @ 0x1404A0DB4 (IopCleanupNotifications.c)
 *     IopCheckUnloadDriver @ 0x1404CBE7C (IopCheckUnloadDriver.c)
 *     ZwUnloadDriver @ 0x1406AAED0 (ZwUnloadDriver.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ObOpenObjectByName @ 0x1408A38B0 (ObOpenObjectByName.c)
 *     ObCloseHandle @ 0x1408AB1B0 (ObCloseHandle.c)
 *     PnpIsLegacyDriver @ 0x140983408 (PnpIsLegacyDriver.c)
 *     IopGetDriverNameFromKeyNode @ 0x1409B6410 (IopGetDriverNameFromKeyNode.c)
 *     ObMakeTemporaryObject @ 0x1409B9330 (ObMakeTemporaryObject.c)
 *     IopOpenRegistryKey @ 0x140A71460 (IopOpenRegistryKey.c)
 *     EtwTiLogDriverObjectUnLoad @ 0x140A8CCB0 (EtwTiLogDriverObjectUnLoad.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopUnloadDriver(UNICODE_STRING *a1, char a2)
{
  unsigned __int16 MinorImageVersion; // r14
  char v5; // r12
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v8; // rax
  int v9; // edx
  void *v10; // rcx
  void *Pool2; // rdi
  int DriverNameFromKeyNode; // ebx
  wchar_t *Buffer; // rcx
  unsigned __int16 *v14; // rdi
  void *v15; // rcx
  struct _LIST_ENTRY *v16; // rax
  struct _LIST_ENTRY *v17; // rbx
  __int64 v18; // rdx
  UNICODE_STRING Destination; // [rsp+40h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE v21; // [rsp+58h] [rbp-B0h] BYREF
  void *Src[2]; // [rsp+60h] [rbp-A8h] BYREF
  PVOID P; // [rsp+70h] [rbp-98h]
  _QWORD v24[3]; // [rsp+78h] [rbp-90h] BYREF
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+90h] [rbp-78h] BYREF
  struct _KEVENT Event; // [rsp+B0h] [rbp-58h] BYREF
  PVOID v27; // [rsp+C8h] [rbp-40h]
  char v28; // [rsp+120h] [rbp+18h] BYREF
  PVOID Object; // [rsp+128h] [rbp+20h] BYREF

  *(_OWORD *)Src = 0LL;
  P = 0LL;
  HIDWORD(WorkItem.List.Flink) = 0;
  HIDWORD(WorkItem.Parameter) = 0;
  Handle = 0LL;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v21 = 0LL;
  v28 = 0;
  LOBYTE(MinorImageVersion) = 0;
  v24[0] = 0x20000LL;
  v24[1] = &word_140AEDAC0;
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
        DriverNameFromKeyNode = ObOpenObjectByName((int)&WorkItem, (int)IoDriverObjectType, 0, 0, 1, 0LL, (__int64)&v21);
        if ( DriverNameFromKeyNode >= 0 )
        {
          Object = 0LL;
          DriverNameFromKeyNode = ObReferenceObjectByHandle(v21, 0, IoDriverObjectType, 0, &Object, 0LL);
          ObCloseHandle(v21, 0);
          if ( DriverNameFromKeyNode >= 0 )
          {
            v14 = (unsigned __int16 *)Object;
            MinorImageVersion = RtlImageNtHeader(*((PVOID *)Object + 3))->OptionalHeader.MinorImageVersion;
            if ( !*((_QWORD *)v14 + 13) || !*((_QWORD *)v14 + 5) )
            {
              ObfDereferenceObject(v14);
              v5 = 1;
              goto LABEL_31;
            }
            if ( !a2 && !(unsigned int)PnpIsLegacyDriver((__int64)v14) )
            {
              ObfDereferenceObject(v15);
LABEL_31:
              DriverNameFromKeyNode = -1073741808;
              goto LABEL_32;
            }
            DriverNameFromKeyNode = IopCheckUnloadDriver(v14, &v28);
            if ( (int)(DriverNameFromKeyNode + 0x80000000) >= 0 && DriverNameFromKeyNode != -1073741808 )
            {
              if ( v28 )
              {
                if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
                {
                  v16 = (struct _LIST_ENTRY *)PdcCreateWatchdogAroundClientCall();
                  v17 = PsAttachSiloToCurrentThread(v16);
                  v14 = (unsigned __int16 *)Object;
                  guard_dispatch_icall_no_overrides(Object, v18);
                  PsDetachSiloFromCurrentThread(v17);
                }
                else
                {
                  memset_0(&WorkItem, 0, 0x50uLL);
                  KeInitializeEvent(&Event, NotificationEvent, 0);
                  v14 = (unsigned __int16 *)Object;
                  v27 = Object;
                  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopLoadUnloadDriver;
                  WorkItem.Parameter = &WorkItem;
                  WorkItem.List.Flink = 0LL;
                  ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
                  KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
                }
                EtwTiLogDriverObjectUnLoad(v14 + 28);
                IopCleanupNotifications(v14, v14);
                ObMakeTemporaryObject(v14);
                ObfDereferenceObject(v14);
              }
              ObfDereferenceObject(v14);
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
      MinorImageVersion);
    if ( DriverNameFromKeyNode < 0 && !v5 )
      PnpDiagnosticTraceDeviceOperation(
        &KMPnPEvt_DriverUnload_Fail,
        (unsigned __int16 *)v24,
        DriverNameFromKeyNode,
        (__int64)&Destination,
        MinorImageVersion);
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
  v9 = *(_DWORD *)v8;
  LODWORD(Src[0]) = v9;
  v10 = *(void **)(v8 + 8);
  Src[1] = v10;
  if ( !(_WORD)v9 )
    return 3221225485LL;
  if ( ((unsigned __int8)v10 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  Pool2 = (void *)ExAllocatePool2(0x121uLL, (unsigned __int16)v9, 0x324E6F49u);
  P = Pool2;
  memmove(Pool2, Src[1], LOWORD(Src[0]));
  Src[1] = Pool2;
  DriverNameFromKeyNode = ZwUnloadDriver((PUNICODE_STRING)Src);
  Buffer = (wchar_t *)Pool2;
LABEL_36:
  ExFreePoolWithTag(Buffer, 0);
  return (unsigned int)DriverNameFromKeyNode;
}
