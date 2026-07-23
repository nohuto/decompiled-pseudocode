/*
 * XREFs of IopEjectDevice @ 0x140731964
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1409BBF7C (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     IoAllocateIrp @ 0x14025AD60 (IoAllocateIrp.c)
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140357A14 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IovUtilWatermarkIrp @ 0x14047E134 (IovUtilWatermarkIrp.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PnpQueuePendingEject @ 0x140721A24 (PnpQueuePendingEject.c)
 */

__int64 __fastcall IopEjectDevice(_QWORD *Object, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v6; // rdx
  struct _DEVICE_OBJECT *AttachedDeviceReferenceWithTag; // r14
  PIRP Irp; // rax
  IRP *v9; // rbp
  unsigned int v10; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _IO_STACK_LOCATION *v13; // rax

  v3 = *(_QWORD *)(a2 + 96);
  if ( *(_DWORD *)(a2 + 92) == 1 )
  {
    if ( v3 )
    {
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v3 + 8), 3LL);
      guard_dispatch_icall_no_overrides(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 8LL), v6);
      if ( *(_BYTE *)(a2 + 89) )
        *(_BYTE *)(a2 + 89) = 0;
    }
    AttachedDeviceReferenceWithTag = (struct _DEVICE_OBJECT *)IoGetAttachedDeviceReferenceWithTag(Object, 0x69706E50u);
    Irp = IoAllocateIrp(AttachedDeviceReferenceWithTag->StackSize, 0);
    v9 = Irp;
    if ( Irp )
    {
      IovUtilWatermarkIrp((__int64)Irp, 1LL);
      CurrentStackLocation = v9->Tail.Overlay.CurrentStackLocation;
      v9->IoStatus.Information = 0LL;
      --CurrentStackLocation;
      v9->IoStatus.Status = -1073741637;
      memset_0(CurrentStackLocation, 0, sizeof(struct _IO_STACK_LOCATION));
      *(_WORD *)&CurrentStackLocation->MajorFunction = 4379;
      CurrentThread = KeGetCurrentThread();
      v9->UserIosb = 0LL;
      v9->UserEvent = 0LL;
      v9->Tail.Overlay.Thread = CurrentThread;
      v9->RequestorMode = 0;
      *(_DWORD *)(a2 + 80) = 0;
      *(_QWORD *)(a2 + 72) = v9;
      PnpQueuePendingEject((_QWORD *)a2);
      v13 = v9->Tail.Overlay.CurrentStackLocation;
      v13[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)IopDeviceEjectComplete;
      v13[-1].Context = (PVOID)a2;
      v13[-1].Control = -32;
      v10 = IofCallDriver(AttachedDeviceReferenceWithTag, v9);
    }
    else
    {
      *(_QWORD *)(a2 + 72) = 0LL;
      *(_QWORD *)(a2 + 8) = a2;
      *(_QWORD *)a2 = a2;
      PnpQueuePendingEject((_QWORD *)a2);
      *(_QWORD *)(a2 + 16) = 0LL;
      *(_QWORD *)(a2 + 32) = PnpProcessCompletedEject;
      *(_QWORD *)(a2 + 40) = a2;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 16), DelayedWorkQueue);
      v10 = -1073741670;
    }
    ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x69706E50u);
    return v10;
  }
  else
  {
    if ( v3 )
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v3 + 8), 4LL);
    *(_QWORD *)(a2 + 72) = 0LL;
    *(_QWORD *)(a2 + 8) = a2;
    *(_QWORD *)a2 = a2;
    PnpQueuePendingEject((_QWORD *)a2);
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 32) = PnpProcessCompletedEject;
    *(_QWORD *)(a2 + 40) = a2;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 16), DelayedWorkQueue);
    return 0LL;
  }
}
