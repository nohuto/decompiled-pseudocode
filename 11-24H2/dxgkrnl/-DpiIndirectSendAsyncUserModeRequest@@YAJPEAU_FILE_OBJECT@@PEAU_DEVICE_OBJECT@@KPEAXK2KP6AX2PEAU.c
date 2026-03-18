/*
 * XREFs of ?DpiIndirectSendAsyncUserModeRequest@@YAJPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@KPEAXK2KP6AX2PEAU_IO_STATUS_BLOCK@@@Z2PEA_NPEAPEAU_IRP@@@Z @ 0x1403D6588
 * Callers:
 *     DpiIndirectCbSendMessage @ 0x1403D6480 (DpiIndirectCbSendMessage.c)
 * Callees:
 *     ?Free@?$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ @ 0x14004BC44 (-Free@-$AUTO_FREE_POOL@PEAUIDD_COMPLETION_CONTEXT@@@@QEAAXXZ.c)
 *     memmove @ 0x1400A1D00 (memmove.c)
 */

__int64 __fastcall DpiIndirectSendAsyncUserModeRequest(
        struct _FILE_OBJECT *Object,
        PDEVICE_OBJECT DeviceObject,
        __int64 a3,
        void *a4,
        size_t Size,
        void *a6,
        unsigned int a7,
        void (*a8)(void *, struct _IO_STATUS_BLOCK *),
        void *a9)
{
  void *v9; // r12
  unsigned int v11; // ebp
  size_t v13; // rdi
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 Pool2; // rax
  _QWORD *v17; // rbx
  NTSTATUS v18; // esi
  PIRP Irp; // rsi
  __int64 result; // rax
  unsigned int v21; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  struct _IO_STACK_LOCATION *v23; // rax
  void *v24; // [rsp+60h] [rbp+8h] BYREF
  void *Src; // [rsp+78h] [rbp+20h]

  Src = a4;
  v9 = a6;
  v11 = a7;
  v13 = (unsigned int)Size;
  if ( Object )
  {
    v14 = Size;
    if ( (unsigned int)Size <= a7 )
      v14 = a7;
    v15 = v14 + 56;
    if ( v15 < 0x38 )
    {
      v21 = -1073741675;
      WdLogSingleEntry1(2LL, -1073741675LL);
      WdLogGlobalForLineNumber = 721;
      return v21;
    }
    Pool2 = ExAllocatePool2(64LL, v15, 1953656900LL);
    v17 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)Pool2 = Object;
      *(_QWORD *)(Pool2 + 24) = a8;
      *(_QWORD *)(Pool2 + 32) = a9;
      *(_DWORD *)(Pool2 + 48) = 1;
      v18 = ObReferenceObjectByPointer(Object, 0x10000000u, (POBJECT_TYPE)IoFileObjectType, 0);
      if ( v18 < 0 )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 747;
        goto LABEL_9;
      }
      Irp = IoAllocateIrp(DeviceObject->StackSize, 0);
      if ( !Irp )
      {
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 759;
        ObfDereferenceObject(Object);
        v18 = -1073741801;
LABEL_9:
        ExFreePoolWithTag(v17, 0);
        return (unsigned int)v18;
      }
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      if ( !v11 )
        v9 = 0LL;
      CurrentStackLocation[-1].MajorFunction = 14;
      CurrentStackLocation[-1].Parameters.Read.Length = v11;
      CurrentStackLocation[-1].Parameters.Create.Options = v13;
      CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2296832;
      Irp->UserBuffer = v9;
      v17[5] = v9;
      if ( (_DWORD)v13 || v11 )
      {
        Irp->AssociatedIrp.MasterIrp = (struct _IRP *)(v17 + 7);
        if ( (_DWORD)v13 )
          memmove(v17 + 7, Src, v13);
      }
      CurrentStackLocation[-1].FileObject = Object;
      v24 = 0LL;
      v23 = Irp->Tail.Overlay.CurrentStackLocation;
      v23[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)DpiIndirectIoCompleteRoutine;
      v23[-1].Context = v17;
      v23[-1].Control = -32;
      v21 = IofCallDriver(DeviceObject, Irp);
      AUTO_FREE_POOL<IDD_COMPLETION_CONTEXT *>::Free(&v24);
      return v21;
    }
    WdLogSingleEntry1(6LL, -1073741801LL);
    result = 3221225495LL;
    WdLogGlobalForLineNumber = 734;
  }
  else
  {
    WdLogSingleEntry1(3LL, DeviceObject);
    result = 3221226166LL;
    WdLogGlobalForLineNumber = 706;
  }
  return result;
}
