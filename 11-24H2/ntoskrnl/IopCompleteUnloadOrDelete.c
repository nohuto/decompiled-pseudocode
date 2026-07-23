/*
 * XREFs of IopCompleteUnloadOrDelete @ 0x1403E62B0
 * Callers:
 *     IoDetachDevice @ 0x1403E5790 (IoDetachDevice.c)
 *     IoDeleteDevice @ 0x1403E5820 (IoDeleteDevice.c)
 *     IopCheckVpbMounted @ 0x1403E5C10 (IopCheckVpbMounted.c)
 *     IopDecrementDeviceObjectRef @ 0x1403E6060 (IopDecrementDeviceObjectRef.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402CB820 (KeReleaseQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     IopGetDeviceAttachmentBase @ 0x140355DB8 (IopGetDeviceAttachmentBase.c)
 *     KeAcquireQueuedSpinLock @ 0x140357D70 (KeAcquireQueuedSpinLock.c)
 *     IopDecrementDeviceObjectRefCount @ 0x1403E5630 (IopDecrementDeviceObjectRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14040A700 (IopIncrementDeviceObjectRefCount.c)
 *     IopInsertRemoveDevice @ 0x14047E864 (IopInsertRemoveDevice.c)
 *     MmIsDriverVerifying @ 0x140499230 (MmIsDriverVerifying.c)
 *     PnpIsAnyDeviceInUse @ 0x1404A79FC (PnpIsAnyDeviceInUse.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObDereferenceSecurityDescriptor @ 0x14087E040 (ObDereferenceSecurityDescriptor.c)
 *     ObMakeTemporaryObject @ 0x1409B9330 (ObMakeTemporaryObject.c)
 *     IopLoadUnloadDriver @ 0x140A66EE0 (IopLoadUnloadDriver.c)
 *     PnpChainDereferenceComplete @ 0x140A83D94 (PnpChainDereferenceComplete.c)
 *     VfFastIoCheckState @ 0x140BAB450 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x140BAB7CC (VfFastIoSnapState.c)
 */

char __fastcall IopCompleteUnloadOrDelete(ULONG_PTR BugCheckParameter2, unsigned __int8 a2, KIRQL a3)
{
  char v3; // di
  __int64 v4; // rsi
  char v7; // r13
  char v8; // r12
  int v9; // ecx
  __int64 v10; // rdi
  __int64 v11; // rdx
  int v12; // r8d
  int IsAnyDeviceInUse; // ebx
  __int64 v15; // rax
  __int64 v16; // r13
  ULONG_PTR v17; // r13
  struct _DRIVER_OBJECT *v18; // r14
  void *v19; // r14
  __int64 v20; // rcx
  __int64 i; // rdx
  int v22; // eax
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Blink; // rbx
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  _BYTE Object[4]; // [rsp+50h] [rbp-30h] BYREF
  int v27; // [rsp+54h] [rbp-2Ch]
  _QWORD v28[5]; // [rsp+58h] [rbp-28h] BYREF
  __int64 DeviceAttachmentBase; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int8 v30; // [rsp+C8h] [rbp+48h]

  v30 = a2;
  v3 = 0;
  v4 = *(_QWORD *)(BugCheckParameter2 + 8);
  v7 = 0;
  v8 = 1;
  v9 = *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 312) + 32LL);
  if ( (v9 & 4) == 0 )
  {
    if ( (v9 & 2) != 0 )
    {
      if ( (v9 & 1) == 0 || (*(_DWORD *)(v4 + 16) & 1) != 0 )
        v8 = 0;
      v15 = *(_QWORD *)(BugCheckParameter2 + 24);
      DeviceAttachmentBase = v15;
      if ( v15 )
      {
        v16 = *(_QWORD *)(*(_QWORD *)(v15 + 8) + 80LL);
        IopIncrementDeviceObjectRefCount(BugCheckParameter2);
        KeReleaseQueuedSpinLock(0xAuLL, a3);
        if ( v16 )
        {
          if ( *(_DWORD *)v16 > 0x68u )
          {
            v17 = *(_QWORD *)(v16 + 104);
            if ( v17 )
            {
              if ( (MmVerifierData & 0x10) != 0
                && (v18 = *(struct _DRIVER_OBJECT **)(BugCheckParameter2 + 8), MmIsDriverVerifying(v18)) )
              {
                v19 = (void *)VfFastIoSnapState(v18);
              }
              else
              {
                v19 = 0LL;
              }
              guard_dispatch_icall_no_overrides(DeviceAttachmentBase, BugCheckParameter2);
              if ( v19 )
                VfFastIoCheckState(v19, v17);
            }
          }
        }
        a3 = KeAcquireQueuedSpinLock(0xAuLL);
        IopDecrementDeviceObjectRefCount(BugCheckParameter2, 0);
        if ( *(_QWORD *)(BugCheckParameter2 + 24) || *(_DWORD *)(BugCheckParameter2 + 4) )
          goto LABEL_26;
      }
      KeReleaseQueuedSpinLock(0xAuLL, a3);
      v20 = *(_QWORD *)(BugCheckParameter2 + 272);
      if ( v20 )
        ObDereferenceSecurityDescriptor(v20, 1LL);
      IopInsertRemoveDevice(*(_QWORD *)(BugCheckParameter2 + 8), BugCheckParameter2, 0LL);
      ObfDereferenceObjectWithTag((PVOID)BugCheckParameter2, 0x746C6644u);
      v7 = 1;
      if ( !v8 )
        return v7;
      a3 = KeAcquireQueuedSpinLock(0xAuLL);
      if ( (*(_DWORD *)(v4 + 16) & 1) != 0 )
      {
        v3 = 1;
LABEL_26:
        KeReleaseQueuedSpinLock(0xAuLL, a3);
        return v3;
      }
    }
    for ( i = *(_QWORD *)(v4 + 8); i; i = *(_QWORD *)(i + 16) )
    {
      if ( *(_DWORD *)(i + 4) || *(_QWORD *)(i + 24) || (*(_DWORD *)(*(_QWORD *)(i + 312) + 32LL) & 6) != 0 )
      {
        v8 = 0;
        break;
      }
    }
    v22 = *(_DWORD *)(v4 + 16);
    if ( (v22 & 0x80u) != 0 && *(_QWORD *)(v4 + 8) )
    {
      v8 = 0;
    }
    else if ( v8 )
    {
      *(_DWORD *)(v4 + 16) = v22 | 1;
    }
    KeReleaseQueuedSpinLock(0xAuLL, a3);
    if ( v8 )
    {
      memset_0(&WorkItem, 0, 0x50uLL);
      Object[2] = 6;
      v28[1] = v28;
      v27 = 0;
      v28[0] = v28;
      v28[2] = v4;
      if ( v30 )
      {
        CurrentThread = KeGetCurrentThread();
        Blink = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
        CurrentThread[1].WaitBlock[3].WaitListEntry.Blink = 0LL;
        IopLoadUnloadDriver(&WorkItem);
        KeGetCurrentThread()[1].WaitBlock[3].WaitListEntry.Blink = Blink;
      }
      else
      {
        WorkItem.List.Flink = 0LL;
        WorkItem.WorkerRoutine = (void (__fastcall *)(void *))IopLoadUnloadDriver;
        WorkItem.Parameter = &WorkItem;
        ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
        KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      }
      ObMakeTemporaryObject((PVOID)v4);
      ObfDereferenceObjectWithTag((PVOID)v4, 0x746C6644u);
    }
    return v7;
  }
  DeviceAttachmentBase = IopGetDeviceAttachmentBase(BugCheckParameter2);
  v10 = DeviceAttachmentBase;
  IsAnyDeviceInUse = PnpIsAnyDeviceInUse(&DeviceAttachmentBase, v11, 0LL);
  KeReleaseQueuedSpinLock((unsigned int)(v12 + 10), a3);
  if ( IsAnyDeviceInUse != 1 )
    PnpChainDereferenceComplete(v10, v30);
  return 0;
}
