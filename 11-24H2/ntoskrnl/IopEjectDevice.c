/*
 * XREFs of IopEjectDevice @ 0x140733A30
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140A0DB78 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1402D6794 (IoGetAttachedDeviceReferenceWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     IoAllocateIrp @ 0x1403724A0 (IoAllocateIrp.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     IovUtilWatermarkIrp @ 0x140482F44 (IovUtilWatermarkIrp.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PnpQueuePendingEject @ 0x140723E94 (PnpQueuePendingEject.c)
 */

__int64 __fastcall IopEjectDevice(_QWORD *Object, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _DEVICE_OBJECT *AttachedDeviceReferenceWithTag; // r14
  PIRP Irp; // rax
  IRP *v13; // rbp
  unsigned int v14; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _IO_STACK_LOCATION *v17; // rax

  v5 = *(_QWORD *)(a2 + 96);
  if ( *(_DWORD *)(a2 + 92) == 1 )
  {
    if ( v5 )
    {
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 8), 3LL, a3, a4);
      guard_dispatch_icall_no_overrides(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 8LL), v8, v9, v10);
      if ( *(_BYTE *)(a2 + 89) )
        *(_BYTE *)(a2 + 89) = 0;
    }
    AttachedDeviceReferenceWithTag = (struct _DEVICE_OBJECT *)IoGetAttachedDeviceReferenceWithTag(Object, 0x69706E50u);
    Irp = IoAllocateIrp(AttachedDeviceReferenceWithTag->StackSize, 0);
    v13 = Irp;
    if ( Irp )
    {
      IovUtilWatermarkIrp((__int64)Irp, 1LL);
      CurrentStackLocation = v13->Tail.Overlay.CurrentStackLocation;
      v13->IoStatus.Information = 0LL;
      --CurrentStackLocation;
      v13->IoStatus.Status = -1073741637;
      memset_0(CurrentStackLocation, 0, sizeof(struct _IO_STACK_LOCATION));
      *(_WORD *)&CurrentStackLocation->MajorFunction = 4379;
      CurrentThread = KeGetCurrentThread();
      v13->UserIosb = 0LL;
      v13->UserEvent = 0LL;
      v13->Tail.Overlay.Thread = CurrentThread;
      v13->RequestorMode = 0;
      *(_DWORD *)(a2 + 80) = 0;
      *(_QWORD *)(a2 + 72) = v13;
      PnpQueuePendingEject((_QWORD *)a2);
      v17 = v13->Tail.Overlay.CurrentStackLocation;
      v17[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)IopDeviceEjectComplete;
      v17[-1].Context = (PVOID)a2;
      v17[-1].Control = -32;
      v14 = IofCallDriver(AttachedDeviceReferenceWithTag, v13);
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
      v14 = -1073741670;
    }
    ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x69706E50u);
    return v14;
  }
  else
  {
    if ( v5 )
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v5 + 8), 4LL, a3, a4);
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
