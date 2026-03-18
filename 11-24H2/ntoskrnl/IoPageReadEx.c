/*
 * XREFs of IoPageReadEx @ 0x140373740
 * Callers:
 *     MiPageRead @ 0x1403731B4 (MiPageRead.c)
 *     MiIssueHardFaultIo @ 0x140398DC4 (MiIssueHardFaultIo.c)
 *     MiPfIssueCoalescedSupport @ 0x14047E5A4 (MiPfIssueCoalescedSupport.c)
 *     IoPageRead @ 0x1404FB130 (IoPageRead.c)
 *     MiReadPagefilePage @ 0x14066A47C (MiReadPagefilePage.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x140246D40 (ExReleaseSpinLockShared.c)
 *     IopQueueThreadIrp @ 0x140253C60 (IopQueueThreadIrp.c)
 *     IopAllocateIrpExReturn @ 0x140253DC0 (IopAllocateIrpExReturn.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14025E950 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExAcquireSpinLockShared @ 0x14031A1A0 (ExAcquireSpinLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     IoGetRelatedDeviceObject @ 0x140373C70 (IoGetRelatedDeviceObject.c)
 *     MmIsFileObjectAPagingFile @ 0x140373D0C (MmIsFileObjectAPagingFile.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     IopSetDiskIoAttributionExtension @ 0x1403743E4 (IopSetDiskIoAttributionExtension.c)
 *     IopAllocateReserveIrp @ 0x140374518 (IopAllocateReserveIrp.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x140374A90 (IopSetDiskIoAttributionFromProcess.c)
 *     IopAllocateBackpocketIrp @ 0x140595CD8 (IopAllocateBackpocketIrp.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
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
  __int64 v22; // rdx
  struct _KTHREAD *v23; // rbx
  _QWORD *Object; // r14
  int v25; // r12d
  _KPROCESS *Process; // rbx
  __int64 Pool2; // rax
  struct _KTHREAD *v28; // rax
  struct _KTHREAD *v29; // rcx
  KIRQL v31; // al
  KIRQL v32; // r13
  KIRQL v33; // al
  unsigned __int64 UserWaitTime; // rbx
  __int64 v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // r8
  char v38; // cl
  PDEVICE_OBJECT DeviceObject; // [rsp+20h] [rbp-38h]
  int v40; // [rsp+28h] [rbp-30h]

  v40 = a6 & 1;
  v10 = (unsigned __int64)(a6 & 1) << 32;
  v11 = (v40 != 0 ? 4 : 0) | 1;
  if ( (a6 & 2) != 0 )
    v11 = v40 != 0 ? 4 : 0;
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
      Irp = IopAllocateReserveIrp(v36, (unsigned __int8)DeviceObject->StackSize, 0LL);
      if ( Irp )
        goto LABEL_10;
    }
    else
    {
      _InterlockedIncrement(&IoPageReadNonPagefileIrpAllocationFailure);
      if ( (*(_WORD *)(a2 + 10) & 0x40) != 0 && (v14 & 0x40) != 0 )
      {
        LOBYTE(v37) = 1;
        Irp = IopAllocateBackpocketIrp(v13, (unsigned __int8)DeviceObject->StackSize, v37);
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
    else if ( (v12 & 1) == 0 || (_BYTE)v40 == 1 || ((__int64)KeGetCurrentThread()[1].Queue & 0x40) != 0 )
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
  v22 = a7;
  *(_QWORD *)(Irp + 112) = *(_QWORD *)(a2 + 32) + *(unsigned int *)(a2 + 44);
  *(_QWORD *)(Irp + 192) = FileObject;
  *(_QWORD *)(Irp + 152) = KeGetCurrentThread();
  *(_BYTE *)(v16 - 72) = 3;
  *(_QWORD *)(v16 - 24) = FileObject;
  *(_DWORD *)(v16 - 64) = *(_DWORD *)(a2 + 40);
  *(_QWORD *)(v16 - 48) = *a3;
  v23 = *(struct _KTHREAD **)(Irp + 152);
  if ( a7 )
  {
    IopSetDiskIoAttributionExtension(Irp, *(_QWORD *)(a7 + 24), *(_QWORD *)(Irp + 152), 0LL);
    goto LABEL_26;
  }
  Object = v23[1].WaitBlock[1].Object;
  v25 = 0;
  if ( Object )
  {
    if ( v23 == KeGetCurrentThread() )
      goto LABEL_41;
    v31 = ExAcquireSpinLockShared(&PspThreadWorkOnBehalfLock);
    Object = v23[1].WaitBlock[1].Object;
    v32 = v31;
    if ( Object )
    {
      ObfReferenceObjectWithTag(v23[1].WaitBlock[1].Object, 0x746C6644u);
      v25 = 1;
    }
    ExReleaseSpinLockShared(&PspThreadWorkOnBehalfLock, v32);
    if ( Object )
    {
LABEL_41:
      Process = (_KPROCESS *)Object[68];
LABEL_23:
      if ( Process[3].UserWaitTime )
      {
        v33 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
        UserWaitTime = Process[3].UserWaitTime;
        if ( UserWaitTime )
        {
          v35 = *(_QWORD *)(UserWaitTime + 24);
          ExReleaseSpinLockShared(&IopDiskIoAttributionLock, v33);
          IopSetDiskIoAttributionExtension(Irp, v35, KeGetCurrentThread(), 0LL);
        }
        else
        {
          ExReleaseSpinLockShared(&IopDiskIoAttributionLock, v33);
        }
      }
      goto LABEL_24;
    }
  }
  if ( v23 != KeGetCurrentThread()
    || (v22 = (__int64)v23->ApcState.Process, (_KPROCESS *)v22 == v23->Process)
    || (int)IopSetDiskIoAttributionFromProcess(Irp) < 0 )
  {
    Process = v23->Process;
    goto LABEL_23;
  }
LABEL_24:
  if ( v25 )
    ObDereferenceObjectDeferDeleteWithTag(Object, 0x746C6644u);
LABEL_26:
  if ( !v10 )
    goto LABEL_33;
  Pool2 = *(_QWORD *)(Irp + 200);
  if ( !Pool2 )
  {
    Pool2 = ExAllocatePool2(0x40uLL);
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
  Pool2 = ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    *(_WORD *)(Pool2 + 2) = 260;
    *(_DWORD *)(Pool2 + 4) = *(_DWORD *)(Irp + 200);
    v38 = *(_BYTE *)(Irp + 71);
    *(_QWORD *)(Irp + 200) = Pool2;
    *(_BYTE *)(Irp + 71) = v38 & 0x3F | 0x40;
    *(_WORD *)Pool2 |= 1u;
    goto LABEL_32;
  }
LABEL_33:
  *(_QWORD *)(a5 + 8) = Irp;
  IopQueueThreadIrp(Irp, v22, v16);
  v28 = KeGetCurrentThread();
  if ( BYTE5(v28[1].Queue) || BYTE4(v28[1].Queue) == 1 )
  {
    v29 = KeGetCurrentThread();
    v29[1].Timer.DueTime.HighPart += (unsigned int)(*(_DWORD *)(a2 + 40) + 4095) >> 12;
  }
  return IofCallDriver(DeviceObject, (PIRP)Irp);
}
