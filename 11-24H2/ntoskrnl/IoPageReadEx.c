/*
 * XREFs of IoPageReadEx @ 0x14025C000
 * Callers:
 *     MiPageRead @ 0x14025BA74 (MiPageRead.c)
 *     MiIssueHardFaultIo @ 0x140351514 (MiIssueHardFaultIo.c)
 *     MiPfIssueCoalescedSupport @ 0x1403DAF90 (MiPfIssueCoalescedSupport.c)
 *     IoPageRead @ 0x1404F8A10 (IoPageRead.c)
 *     MiReadPagefilePage @ 0x14066B64C (MiReadPagefilePage.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1402195E0 (ExReleaseSpinLockShared.c)
 *     IoGetRelatedDeviceObject @ 0x14025C530 (IoGetRelatedDeviceObject.c)
 *     MmIsFileObjectAPagingFile @ 0x14025C5CC (MmIsFileObjectAPagingFile.c)
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IopSetDiskIoAttributionExtension @ 0x14025CCA4 (IopSetDiskIoAttributionExtension.c)
 *     IopAllocateReserveIrp @ 0x14025CDD8 (IopAllocateReserveIrp.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x14025D350 (IopSetDiskIoAttributionFromProcess.c)
 *     IopQueueThreadIrp @ 0x140284270 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x1402843D0 (IopAllocateIrpExReturn.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14028EF60 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExAcquireSpinLockShared @ 0x1402C2D30 (ExAcquireSpinLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     IopAllocateBackpocketIrp @ 0x140592D08 (IopAllocateBackpocketIrp.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

NTSTATUS __fastcall IoPageReadEx(
        PFILE_OBJECT FileObject,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __int64 a7)
{
  unsigned __int64 v10; // rsi
  unsigned __int8 v11; // cl
  unsigned __int8 v12; // r15
  __int64 v13; // r12
  int v14; // ebx
  __int64 Irp; // rdi
  __int64 v16; // r8
  struct _KTHREAD *CurrentThread; // rcx
  int v18; // edx
  unsigned __int64 v19; // rax
  int v20; // eax
  unsigned int v21; // eax
  struct _KTHREAD *v22; // rbx
  _QWORD *Object; // r14
  int v24; // r12d
  _KPROCESS *Process; // rbx
  __int64 Pool2; // rax
  struct _KTHREAD *v27; // rax
  struct _KTHREAD *v28; // rcx
  KIRQL v30; // al
  KIRQL v31; // r13
  KIRQL v32; // al
  unsigned __int64 UserWaitTime; // rbx
  __int64 v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // r8
  char v37; // cl
  PDEVICE_OBJECT DeviceObject; // [rsp+20h] [rbp-38h]
  int v39; // [rsp+28h] [rbp-30h]

  v39 = a6 & 1;
  v10 = (unsigned __int64)(a6 & 1) << 32;
  v11 = (v39 != 0 ? 4 : 0) | 1;
  if ( (a6 & 2) != 0 )
    v11 = v39 != 0 ? 4 : 0;
  v12 = v11 | 2;
  if ( (a6 & 8) == 0 )
    v12 = v11;
  DeviceObject = IoGetRelatedDeviceObject(FileObject);
  v13 = (__int64)DeviceObject;
  v14 = 1027;
  if ( (a6 & 4) == 0 )
    v14 = 67;
  if ( v12 >= 4u )
    v13 = -1LL;
  Irp = IopAllocateIrpExReturn(v13, (unsigned __int8)DeviceObject->StackSize, 0LL);
  if ( !Irp )
  {
    if ( (unsigned int)MmIsFileObjectAPagingFile(FileObject) )
    {
      _InterlockedIncrement(&IoPageReadIrpAllocationFailure);
      Irp = IopAllocateReserveIrp(v35, (unsigned __int8)DeviceObject->StackSize, 0LL);
      if ( Irp )
        goto LABEL_10;
    }
    else
    {
      _InterlockedIncrement(&IoPageReadNonPagefileIrpAllocationFailure);
      if ( (*(_WORD *)(a2 + 10) & 0x40) != 0 && (v14 & 0x40) != 0 )
      {
        LOBYTE(v36) = 1;
        Irp = IopAllocateBackpocketIrp(v13, (unsigned __int8)DeviceObject->StackSize, v36);
        if ( Irp )
          goto LABEL_10;
      }
    }
    return -1073741670;
  }
LABEL_10:
  if ( (unsigned int)MmIsFileObjectAPagingFile(FileObject) || (*(_WORD *)(a2 + 10) & 0x40) != 0 && (v14 & 0x40) != 0 )
    *(_BYTE *)(Irp + 71) |= 0x20u;
  v16 = *(_QWORD *)(Irp + 184);
  *(_DWORD *)(Irp + 16) = v14;
  CurrentThread = KeGetCurrentThread();
  v18 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 2) >> 9) & 7;
  v19 = CurrentThread->Process[1].Padding[3];
  if ( v19 )
  {
    v20 = *(_DWORD *)(v19 + 1084);
    if ( v18 >= v20 )
      v18 = v20;
  }
  if ( v18 < 2 )
  {
    if ( CurrentThread == KeGetCurrentThread() && LODWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
    {
      v18 = 2;
    }
    else if ( (v12 & 1) == 0 || (_BYTE)v39 == 1 || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
    {
      ++IoPagingReadLowPriorityCount;
    }
    else
    {
      ++IoPagingReadLowPriorityBumpedCount;
      v18 = 2;
    }
  }
  if ( (v12 & 2) != 0 && v18 == 2 )
    v18 = 3;
  v21 = *(_DWORD *)(Irp + 16) & 0xFFF1FFFF;
  *(_QWORD *)(Irp + 8) = a2;
  *(_BYTE *)(Irp + 64) = 0;
  *(_QWORD *)(Irp + 72) = a5;
  *(_QWORD *)(Irp + 80) = a4;
  *(_DWORD *)(Irp + 16) = v21 | ((v18 << 17) + 0x20000);
  *(_QWORD *)(Irp + 112) = *(_QWORD *)(a2 + 32) + *(unsigned int *)(a2 + 44);
  *(_QWORD *)(Irp + 192) = FileObject;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_BYTE *)(v16 - 72) = 3;
  *(_QWORD *)(v16 - 24) = FileObject;
  *(_DWORD *)(v16 - 64) = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(v16 - 48) = *a3;
  v22 = *(struct _KTHREAD **)(Irp + 152);
  if ( a7 )
  {
    IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a7 + 24), *(_QWORD *)(Irp + 152), 0LL);
    goto LABEL_26;
  }
  Object = v22[1].WaitBlock[1].Object;
  v24 = 0;
  if ( Object )
  {
    if ( v22 == KeGetCurrentThread() )
      goto LABEL_41;
    v30 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
    Object = v22[1].WaitBlock[1].Object;
    v31 = v30;
    if ( Object )
    {
      ObfReferenceObjectWithTag(v22[1].WaitBlock[1].Object, 0x746C6644u);
      v24 = 1;
    }
    ExReleaseSpinLockShared(&PspThreadWorkOnBehalfLock, v31);
    if ( Object )
    {
LABEL_41:
      Process = (_KPROCESS *)Object[68];
LABEL_23:
      if ( Process[3].UserWaitTime )
      {
        v32 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
        UserWaitTime = Process[3].UserWaitTime;
        if ( UserWaitTime )
        {
          v34 = *(_QWORD *)(UserWaitTime + 24);
          ExReleaseSpinLockShared(&IopDiskIoAttributionLock, v32);
          IopSetDiskIoAttributionExtension(Irp, v34, KeGetCurrentThread(), 0LL);
        }
        else
        {
          ExReleaseSpinLockShared(&IopDiskIoAttributionLock, v32);
        }
      }
      goto LABEL_24;
    }
  }
  if ( v22 != KeGetCurrentThread()
    || v22->ApcState.Process == v22->Process
    || (int)IopSetDiskIoAttributionFromProcess(Irp) < 0 )
  {
    Process = v22->Process;
    goto LABEL_23;
  }
LABEL_24:
  if ( v24 )
    ObDereferenceObjectDeferDeleteWithTag(Object, 0x746C6644u);
LABEL_26:
  if ( !v10 )
    goto LABEL_33;
  Pool2 = *(_QWORD *)(Irp + 200);
  if ( !Pool2 )
  {
    Pool2 = ExAllocatePool2(0x40uLL, 0x50uLL, 0x58707249u);
    if ( !Pool2 )
      goto LABEL_33;
    *(_WORD *)(Pool2 + 2) = 256;
    *(_BYTE *)(Irp + 71) |= 0x40u;
    *(_QWORD *)(Irp + 200) = Pool2;
    *(_WORD *)Pool2 |= 1u;
    goto LABEL_32;
  }
  if ( *(char *)(Irp + 71) >= 0 )
  {
    *(_WORD *)(Pool2 + 2) |= 0x100u;
LABEL_32:
    *(_QWORD *)(Pool2 + 56) = v10;
    goto LABEL_33;
  }
  Pool2 = ExAllocatePool2(0x40uLL, 0x50uLL, 0x58707249u);
  if ( Pool2 )
  {
    *(_WORD *)(Pool2 + 2) = 260;
    *(_DWORD *)(Pool2 + 4) = *(_DWORD *)(Irp + 200);
    v37 = *(_BYTE *)(Irp + 71);
    *(_QWORD *)(Irp + 200) = Pool2;
    *(_BYTE *)(Irp + 71) = v37 & 0x3F | 0x40;
    *(_WORD *)Pool2 |= 1u;
    goto LABEL_32;
  }
LABEL_33:
  *(_QWORD *)(a5 + 8) = Irp;
  IopQueueThreadIrp(Irp);
  v27 = KeGetCurrentThread();
  if ( BYTE5(v27[1].Queue) || BYTE4(v27[1].Queue) == 1 )
  {
    v28 = KeGetCurrentThread();
    v28[1].Timer.DueTime.HighPart += (unsigned int)(*(_DWORD *)(a2 + 40) + 4095) >> 12;
  }
  return IofCallDriver(DeviceObject, (PIRP)Irp);
}
