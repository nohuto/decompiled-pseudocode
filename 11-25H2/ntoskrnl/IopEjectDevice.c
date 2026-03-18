/*
 * XREFs of IopEjectDevice @ 0x140727798
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14082FB18 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140359D98 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IoAllocateIrp @ 0x14035B6A0 (IoAllocateIrp.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     IovUtilWatermarkIrp @ 0x140482194 (IovUtilWatermarkIrp.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PnpQueuePendingEject @ 0x140717D94 (PnpQueuePendingEject.c)
 */

__int64 __fastcall IopEjectDevice(_QWORD *Object, __int64 a2)
{
  __int64 v3; // rcx
  struct _DEVICE_OBJECT *AttachedDeviceReferenceWithTag; // r14
  PIRP Irp; // rax
  IRP *v8; // rbp
  unsigned int v9; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _KTHREAD *CurrentThread; // rax
  struct _IO_STACK_LOCATION *v12; // rax

  v3 = *(_QWORD *)(a2 + 96);
  if ( *(_DWORD *)(a2 + 92) == 1 )
  {
    if ( v3 )
    {
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v3 + 8));
      guard_dispatch_icall_no_overrides(*(_QWORD *)(*(_QWORD *)(a2 + 96) + 8LL));
      if ( *(_BYTE *)(a2 + 89) )
        *(_BYTE *)(a2 + 89) = 0;
    }
    AttachedDeviceReferenceWithTag = (struct _DEVICE_OBJECT *)IoGetAttachedDeviceReferenceWithTag(Object, 0x69706E50u);
    Irp = IoAllocateIrp(AttachedDeviceReferenceWithTag->StackSize, 0);
    v8 = Irp;
    if ( Irp )
    {
      IovUtilWatermarkIrp((__int64)Irp, 1LL);
      CurrentStackLocation = v8->Tail.Overlay.CurrentStackLocation;
      v8->IoStatus.Information = 0LL;
      --CurrentStackLocation;
      v8->IoStatus.Status = -1073741637;
      memset_0(CurrentStackLocation, 0, sizeof(struct _IO_STACK_LOCATION));
      *(_WORD *)&CurrentStackLocation->MajorFunction = 4379;
      CurrentThread = KeGetCurrentThread();
      v8->UserIosb = 0LL;
      v8->UserEvent = 0LL;
      v8->Tail.Overlay.Thread = CurrentThread;
      v8->RequestorMode = 0;
      *(_DWORD *)(a2 + 80) = 0;
      *(_QWORD *)(a2 + 72) = v8;
      PnpQueuePendingEject((_QWORD *)a2);
      v12 = v8->Tail.Overlay.CurrentStackLocation;
      v12[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)IopDeviceEjectComplete;
      v12[-1].Context = (PVOID)a2;
      v12[-1].Control = -32;
      v9 = IofCallDriver(AttachedDeviceReferenceWithTag, v8);
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
      v9 = -1073741670;
    }
    ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x69706E50u);
    return v9;
  }
  else
  {
    if ( v3 )
      guard_dispatch_icall_no_overrides(*(_QWORD *)(v3 + 8));
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
