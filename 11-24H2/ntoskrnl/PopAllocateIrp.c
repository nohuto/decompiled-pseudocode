/*
 * XREFs of PopAllocateIrp @ 0x1403A8268
 * Callers:
 *     PopRequestPowerIrp @ 0x1403A7FD0 (PopRequestPowerIrp.c)
 *     PopNotifyDevice @ 0x140B717B8 (PopNotifyDevice.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x14022B260 (KeReleaseInStackQueuedSpinLock.c)
 *     IoAllocateIrp @ 0x14025AD60 (IoAllocateIrp.c)
 *     IoReuseIrp @ 0x1402C2EB0 (IoReuseIrp.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1402E2DD0 (ExAllocateFromNPagedLookasideList.c)
 *     ExFreeToNPagedLookasideList @ 0x1402E4C00 (ExFreeToNPagedLookasideList.c)
 *     PopFxAllocatePowerIrp @ 0x1402E6A5C (PopFxAllocatePowerIrp.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140355DE8 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140357A14 (IoGetAttachedDeviceReferenceWithTag.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1403597C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PopFxLockDevice @ 0x1403A79D0 (PopFxLockDevice.c)
 *     PopFxDereferenceDevice @ 0x1403A7F58 (PopFxDereferenceDevice.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     VfIrpWatermark @ 0x140B90080 (VfIrpWatermark.c)
 */

__int64 __fastcall PopAllocateIrp(
        _QWORD *a1,
        __int64 a2,
        UCHAR a3,
        int a4,
        int a5,
        char a6,
        char a7,
        __int64 a8,
        __int64 a9,
        PIRP *a10,
        _QWORD *a11)
{
  ULONG_PTR BugCheckParameter4; // rdi
  PIRP v14; // rsi
  void *v15; // r14
  __int64 v16; // r12
  struct _DEVICE_OBJECT *AttachedDeviceReferenceWithTag; // r13
  void *DeviceAttachmentBaseRefWithTag; // rax
  void *v19; // rbx
  __int64 v20; // rcx
  int v21; // eax
  unsigned int v22; // r15d
  void *v23; // rax
  _QWORD *v24; // rdx
  PIRP v25; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _IO_STACK_LOCATION *v27; // rax
  _QWORD *v28; // rax
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  _QWORD *v32; // rbx
  unsigned int v33; // [rsp+48h] [rbp-41h]
  unsigned int v34; // [rsp+48h] [rbp-41h]
  PIRP Irp; // [rsp+50h] [rbp-39h] BYREF
  void *v36; // [rsp+58h] [rbp-31h] BYREF
  void *v37; // [rsp+60h] [rbp-29h]
  LARGE_INTEGER Interval; // [rsp+68h] [rbp-21h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-19h] BYREF
  bool v41; // [rsp+E0h] [rbp+57h]

  BugCheckParameter4 = 0LL;
  Irp = 0LL;
  v36 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  *a10 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  v41 = 0;
  *a11 = 0LL;
  AttachedDeviceReferenceWithTag = (struct _DEVICE_OBJECT *)IoGetAttachedDeviceReferenceWithTag(a1, 0x72496F50u);
  DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag((__int64)a1, 0x72496F50u);
  v37 = DeviceAttachmentBaseRefWithTag;
  v19 = DeviceAttachmentBaseRefWithTag;
  if ( DeviceAttachmentBaseRefWithTag )
  {
    v20 = *(_QWORD *)(*((_QWORD *)DeviceAttachmentBaseRefWithTag + 39) + 40LL);
    Interval.QuadPart = v20;
    if ( v20 )
    {
      if ( a3 == 2 && a4 == 1 )
      {
        v21 = PopFxAllocatePowerIrp(v20, (__int64)a1, a5, a8, a9, a7, &Irp, &v36);
        v22 = v21;
        if ( v21 < 0 && v21 != -1073741130 || v21 == 259 )
        {
          v14 = Irp;
          v15 = v36;
LABEL_36:
          v19 = v37;
LABEL_37:
          if ( v14 )
            goto LABEL_38;
          goto LABEL_28;
        }
        if ( v21 >= 0 )
        {
          v16 = *(_QWORD *)(Interval.QuadPart + 80);
          if ( AttachedDeviceReferenceWithTag->StackSize > *(_BYTE *)(*(_QWORD *)(v16 + 16) + 66LL) )
          {
            ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x72496F50u);
            ObfReferenceObjectWithTag(*(PVOID *)(v16 + 104), 0x72496F50u);
            AttachedDeviceReferenceWithTag = *(struct _DEVICE_OBJECT **)(v16 + 104);
          }
          v14 = Irp;
          v15 = v36;
LABEL_11:
          IoReuseIrp(v14, -1073741637);
          if ( IovUtilVerifierEnabled )
            VfIrpWatermark(v14, 1LL);
          v14->IoStatus.Information = 0LL;
          v14->Tail.Overlay.ListEntry.Blink = &v14->Tail.Overlay.ListEntry;
          v14->Tail.Overlay.ListEntry.Flink = &v14->Tail.Overlay.ListEntry;
          memset_0(v15, 0, 0x138uLL);
          v23 = v37;
          *((_QWORD *)v15 + 4) = AttachedDeviceReferenceWithTag;
          *((_QWORD *)v15 + 3) = v23;
          *((_BYTE *)v15 + 184) = a3;
          *((_DWORD *)v15 + 47) = a4;
          *((_DWORD *)v15 + 48) = a5;
          *((_QWORD *)v15 + 2) = v14;
          *((_QWORD *)v15 + 25) = v16;
          v24 = v36;
          v25 = Irp;
          *((_DWORD *)v36 + 53) = _InterlockedIncrement(&PopCurrentIrpSequenceID);
          v24[27] = a8;
          v24[28] = a9;
          v24[29] = a1;
          v24[36] = 0LL;
          v24[33] = PopHandleDevicePowerIrpCompletion;
          v24[34] = v24;
          v24[31] = 0LL;
          CurrentStackLocation = v25->Tail.Overlay.CurrentStackLocation;
          CurrentStackLocation[-1].Context = v24;
          CurrentStackLocation[-1].DeviceObject = 0LL;
          v27 = --v25->Tail.Overlay.CurrentStackLocation;
          --v25->CurrentLocation;
          v27[-1].MajorFunction = 22;
          v27[-1].MinorFunction = a3;
          v27[-1].DeviceObject = AttachedDeviceReferenceWithTag;
          KeAcquireInStackQueuedSpinLock(&PopIrpLock, &LockHandle);
          PopIrpLockThread = (__int64)KeGetCurrentThread();
          v28 = (_QWORD *)qword_140F0B1F8;
          if ( *(__int64 **)qword_140F0B1F8 != &PopIrpList )
            __fastfail(3u);
          v32 = v36;
          PopIrpLockThread = 0LL;
          *(_QWORD *)v36 = &PopIrpList;
          v32[1] = v28;
          *v28 = v32;
          qword_140F0B1F8 = (__int64)v32;
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          AttachedDeviceReferenceWithTag = 0LL;
          v14 = Irp;
          v15 = 0LL;
          v41 = 0;
          v22 = 0;
          *a10 = Irp;
          *a11 = v32;
          v19 = 0LL;
          goto LABEL_37;
        }
        v14 = Irp;
      }
      else
      {
        v22 = -1073741130;
        if ( !a3 )
        {
          v16 = PopFxLockDevice(v20, 0, 0);
          v41 = v16 != 0;
        }
      }
      v29 = 0;
      Interval.QuadPart = -500000LL;
      v33 = 0;
      while ( 1 )
      {
        if ( v29 && KeGetCurrentIrql() <= 1u )
        {
          KeDelayExecutionThread(0, 0, &Interval);
          v29 = v33;
        }
        v33 = v29 + 1;
        v36 = ExAllocateFromNPagedLookasideList(&PopIrpDataLookaside);
        v15 = v36;
        if ( v36 )
          break;
        if ( a6 )
        {
          v29 = v33;
          if ( v33 < 0xA )
            continue;
        }
        goto LABEL_36;
      }
      v30 = 0;
      v34 = 0;
      while ( 1 )
      {
        if ( v30 && KeGetCurrentIrql() <= 1u )
        {
          KeDelayExecutionThread(0, 0, &Interval);
          v30 = v34;
        }
        v34 = v30 + 1;
        Irp = IoAllocateIrp(AttachedDeviceReferenceWithTag->StackSize + 1, 0);
        v14 = Irp;
        if ( Irp )
          goto LABEL_11;
        if ( a6 )
        {
          v30 = v34;
          if ( v34 < 0xA )
            continue;
        }
        goto LABEL_36;
      }
    }
  }
  v22 = -1073741808;
LABEL_28:
  if ( a6 && v22 != 259 )
  {
    LOBYTE(BugCheckParameter4) = a4 != 0;
    KeBugCheckEx(0xA0u, 1uLL, 6uLL, (ULONG_PTR)AttachedDeviceReferenceWithTag, BugCheckParameter4);
  }
LABEL_38:
  if ( v15 )
    ExFreeToNPagedLookasideList(&PopIrpDataLookaside, v15);
  if ( AttachedDeviceReferenceWithTag )
    ObfDereferenceObjectWithTag(AttachedDeviceReferenceWithTag, 0x72496F50u);
  if ( v19 )
    ObfDereferenceObjectWithTag(v19, 0x72496F50u);
  if ( v41 )
    PopFxDereferenceDevice(v16, 0);
  return v22;
}
