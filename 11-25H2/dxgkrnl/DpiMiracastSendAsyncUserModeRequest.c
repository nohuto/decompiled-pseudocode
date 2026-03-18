/*
 * XREFs of DpiMiracastSendAsyncUserModeRequest @ 0x140245258
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x14007F470 (DpiMiracastStopMiracastSessionSync.c)
 *     DxgkMiracastStartMiracastSession @ 0x140080698 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastCbSendUserModeMessage @ 0x1402442B0 (DpiMiracastCbSendUserModeMessage.c)
 * Callees:
 *     McTemplateK0pqtqq_EtwWriteTransfer @ 0x14003ECE0 (McTemplateK0pqtqq_EtwWriteTransfer.c)
 *     memmove @ 0x14009F9C0 (memmove.c)
 */

__int64 __fastcall DpiMiracastSendAsyncUserModeRequest(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        const void *a4,
        size_t Size,
        void *a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9,
        PDEVICE_OBJECT DeviceObject,
        IRP **a11)
{
  unsigned int v12; // r12d
  char v13; // r14
  struct _FILE_OBJECT *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned int v18; // ebx
  unsigned int v19; // eax
  unsigned int v20; // eax
  __int64 Pool2; // rax
  _QWORD *v22; // r14
  PIRP Irp; // rax
  IRP *v24; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r12
  struct _IO_STACK_LOCATION *v27; // rax
  __int64 v29; // [rsp+20h] [rbp-58h]
  __int64 v30; // [rsp+28h] [rbp-50h]
  __int64 v31; // [rsp+30h] [rbp-48h]
  __int64 v32; // [rsp+38h] [rbp-40h]
  DWORD v33; // [rsp+90h] [rbp+18h]
  PDEVICE_OBJECT DeviceObjecta; // [rsp+C8h] [rbp+50h]

  v33 = a3;
  v12 = a7;
  v13 = 0;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000000LL) != 0 )
    McTemplateK0pqtqq_EtwWriteTransfer(0LL, &EventEnterMiracastSendUserModeRequest, a3, a1[12], 0, Size, a7, 0);
  if ( DeviceObject )
    LOBYTE(DeviceObject->Type) = 0;
  if ( a11 )
    *a11 = 0LL;
  if ( (struct _KTHREAD *)a1[11] != KeGetCurrentThread() )
  {
    v13 = 1;
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(a1 + 4);
    a1[11] = KeGetCurrentThread();
  }
  v15 = (struct _FILE_OBJECT *)a1[22];
  DeviceObjecta = (PDEVICE_OBJECT)a1[23];
  if ( v15 )
    ObfReferenceObject(v15);
  if ( v13 )
  {
    a1[11] = 0LL;
    ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(a1 + 4);
  }
  if ( !v15 )
  {
    WdLogSingleEntry1(3LL, a1);
    WdLogGlobalForLineNumber = 3373;
    v18 = -1073741130;
    goto LABEL_34;
  }
  v19 = Size;
  if ( (unsigned int)Size <= a7 )
    v19 = a7;
  v20 = v19 + 64;
  if ( v20 < 0x40 )
  {
    v18 = -1073741675;
    WdLogSingleEntry1(2LL, -1073741675LL);
    WdLogGlobalForLineNumber = 3394;
    goto LABEL_33;
  }
  Pool2 = ExAllocatePool2(64LL, v20, 1953656900LL, a4);
  v22 = (_QWORD *)Pool2;
  if ( !Pool2 )
  {
    v18 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 3415;
LABEL_33:
    ObfDereferenceObject(v15);
    goto LABEL_34;
  }
  *(_QWORD *)Pool2 = v15;
  *(_QWORD *)(Pool2 + 8) = a1[12];
  *(_QWORD *)(Pool2 + 32) = a8;
  *(_QWORD *)(Pool2 + 40) = a9;
  *(_DWORD *)(Pool2 + 56) = a11 == 0LL;
  Irp = IoAllocateIrp(DeviceObjecta->StackSize, 0);
  v24 = Irp;
  if ( !Irp )
  {
    v18 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    WdLogGlobalForLineNumber = 3440;
    ExFreePoolWithTag(v22, 0);
    goto LABEL_33;
  }
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = v33;
  if ( !a7 )
    a6 = 0LL;
  CurrentStackLocation[-1].MajorFunction = 14;
  CurrentStackLocation[-1].Parameters.Read.Length = a7;
  CurrentStackLocation[-1].Parameters.Create.Options = Size;
  Irp->UserBuffer = a6;
  v22[6] = a6;
  if ( (_DWORD)Size || a7 )
  {
    Irp->AssociatedIrp.MasterIrp = (struct _IRP *)(v22 + 8);
    if ( (_DWORD)Size )
      memmove(v22 + 8, a4, (unsigned int)Size);
  }
  CurrentStackLocation[-1].FileObject = v15;
  v27 = v24->Tail.Overlay.CurrentStackLocation;
  v27[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiMiracastIoCompleteRoutine;
  v27[-1].Context = v22;
  v27[-1].Control = -32;
  if ( a11 )
    *a11 = v24;
  v12 = a7;
  v18 = IofCallDriver(DeviceObjecta, v24);
  if ( DeviceObject )
    LOBYTE(DeviceObject->Type) = 1;
LABEL_34:
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000000000LL) != 0 )
  {
    LODWORD(v32) = v18;
    LODWORD(v31) = v12;
    LODWORD(v30) = Size;
    LODWORD(v29) = 0;
    McTemplateK0pqtqq_EtwWriteTransfer(v16, &EventLeaveMiracastSendUserModeRequest, v17, a1[12], v29, v30, v31, v32);
  }
  return v18;
}
