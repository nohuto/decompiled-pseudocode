/*
 * XREFs of IopSynchronousServiceTail @ 0x1408C3300
 * Callers:
 *     IopQueueCopyWrite @ 0x140486DB0 (IopQueueCopyWrite.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1407129A0 (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x140717C10 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x140718380 (NtSetVolumeInformationFile.c)
 *     IopReadFile @ 0x1408C0610 (IopReadFile.c)
 *     IopWriteFile @ 0x1408C1630 (IopWriteFile.c)
 *     IopXxxControlFile @ 0x1408C1970 (IopXxxControlFile.c)
 *     NtQueryDirectoryFileEx @ 0x1408C4800 (NtQueryDirectoryFileEx.c)
 *     NtQueryDirectoryFile @ 0x1408C5120 (NtQueryDirectoryFile.c)
 *     IopFlushBuffersFile @ 0x14096E4A4 (IopFlushBuffersFile.c)
 *     NtQueryEaFile @ 0x14096E890 (NtQueryEaFile.c)
 *     NtQueryVolumeInformationFile @ 0x14096EFA0 (NtQueryVolumeInformationFile.c)
 *     NtUnlockFile @ 0x140972480 (NtUnlockFile.c)
 *     NtLockFile @ 0x1409D2BE0 (NtLockFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140A0BC30 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x140A60FA0 (NtSetEaFile.c)
 *     IopReadFileScatter @ 0x140A8E968 (IopReadFileScatter.c)
 *     IopWriteFileGather @ 0x140A958BC (IopWriteFileGather.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x140253C60 (IopQueueThreadIrp.c)
 *     IopCompleteRequest @ 0x1402A5AC0 (IopCompleteRequest.c)
 *     IopReleaseFileObjectLock @ 0x14031D520 (IopReleaseFileObjectLock.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x140372F00 (IoGetBaseFileSystemDeviceObject.c)
 *     IopCallDriverReference @ 0x140373E80 (IopCallDriverReference.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     IoSetDiskIoAttributionFromThread @ 0x140374220 (IoSetDiskIoAttributionFromThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x1403C5CE0 (ObDereferenceObjectDeferDelete.c)
 *     IopIoRingCompleteIrp @ 0x1403C5DA0 (IopIoRingCompleteIrp.c)
 *     IofCompleteRequest @ 0x1403DBAD0 (IofCompleteRequest.c)
 *     IopSetIrpPriorityHintFromFileObject @ 0x140409F10 (IopSetIrpPriorityHintFromFileObject.c)
 *     IoGetIoPriorityHint @ 0x14040C7C0 (IoGetIoPriorityHint.c)
 *     IoSetActivityIdThread @ 0x14045C3B0 (IoSetActivityIdThread.c)
 *     IopQueueIrpToFileObject @ 0x1404E5980 (IopQueueIrpToFileObject.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PsIsProcessAppContainer @ 0x14085D560 (PsIsProcessAppContainer.c)
 *     IopIsIosbInLockedRange @ 0x140A2151C (IopIsIosbInLockedRange.c)
 *     IopCancelAlertedRequest @ 0x140A7BD74 (IopCancelAlertedRequest.c)
 */

__int64 __fastcall IopSynchronousServiceTail(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        KPROCESSOR_MODE a5,
        unsigned __int8 a6,
        unsigned int a7)
{
  __int64 v7; // rax
  int v11; // ecx
  int v12; // r14d
  __int64 v13; // r13
  _DWORD *v14; // rax
  ULONG DeviceType; // eax
  struct _KTHREAD *v16; // rax
  unsigned int v17; // eax
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *v19; // rsi
  PVOID v20; // r13
  __int64 v21; // rbx
  struct _KTHREAD *v22; // rcx
  int v23; // ebx
  unsigned __int64 v24; // rax
  int v25; // eax
  int v26; // ebx
  unsigned int v27; // ebx
  __int64 v28; // rax
  unsigned int v29; // r12d
  PDEVICE_OBJECT v30; // rbx
  __int64 result; // rax
  int v32; // ebx
  char v33; // r8
  unsigned __int8 CurrentIrql; // bl
  KPROCESSOR_MODE v35; // r8
  NTSTATUS v36; // eax
  bool v37; // r15
  unsigned __int8 v38; // r14
  struct _LIST_ENTRY *v39; // rbx
  int v40; // ebx
  __int64 v41; // rcx
  __int64 v42; // rax
  PDEVICE_OBJECT BaseFileSystemDeviceObject; // r10
  PFAST_IO_DISPATCH FastIoDispatch; // rdx
  ULONG v45; // eax
  unsigned int v46; // r8d
  unsigned int v47; // [rsp+30h] [rbp-40h]
  PDEVICE_OBJECT DeviceObject; // [rsp+38h] [rbp-38h] BYREF
  PVOID Object; // [rsp+40h] [rbp-30h] BYREF
  __int64 v51; // [rsp+48h] [rbp-28h] BYREF
  struct _LIST_ENTRY v52; // [rsp+50h] [rbp-20h] BYREF

  v7 = *(_QWORD *)(a2 + 88);
  DeviceObject = a1;
  Object = (PVOID)a3;
  v47 = 0;
  if ( (v7 & 1) != 0 )
  {
    *(_BYTE *)(a2 + 71) |= 0x10u;
    v7 &= ~1uLL;
    *(_QWORD *)(a2 + 88) = v7;
  }
  v11 = *(_DWORD *)(a2 + 16);
  v12 = v11 & 0x200000;
  v13 = *(_QWORD *)(a3 + 176);
  v51 = v13;
  if ( (a6 || v7) && !v12 )
  {
    if ( (*(_DWORD *)(a3 + 80) & 2) != 0 )
      *(_BYTE *)(a2 + 71) |= 2u;
    goto LABEL_7;
  }
  if ( v12 )
  {
    v33 = 0;
LABEL_49:
    if ( IopQueueIrpToFileObject(a2, a3, v33) )
      goto LABEL_8;
    goto LABEL_7;
  }
  if ( *(_QWORD *)(a2 + 96) && !*(_QWORD *)(a2 + 80) && v13 )
  {
    v33 = 1;
    goto LABEL_49;
  }
  if ( (v11 & 0x10) != 0 || v13 || !*(_QWORD *)(a3 + 208) || !(unsigned __int8)IopIsIosbInLockedRange(a3) )
LABEL_7:
    IopQueueThreadIrp(a2, a2, a3);
LABEL_8:
  v14 = *(_DWORD **)(a3 + 208);
  if ( v14 && (*v14 & 4) != 0 && PsIsProcessAppContainer((__int64)KeGetCurrentThread()->ApcState.Process) )
  {
    v47 = -1073739504;
    *(_DWORD *)(a2 + 48) = -1073739504;
    IofCompleteRequest((PIRP)a2, 0);
    v29 = -1073739504;
    v19 = Object;
LABEL_31:
    v30 = DeviceObject;
    goto LABEL_32;
  }
  if ( a7 > 1 )
  {
    CurrentThread = KeGetCurrentThread();
    ++CurrentThread->OtherOperationCount;
    v17 = 12004;
  }
  else
  {
    DeviceType = a1->DeviceType;
    if ( DeviceType == 8 || DeviceType == 7 || DeviceType == 9 || DeviceType == 36 )
      IoSetDiskIoAttributionFromThread(a2, KeGetCurrentThread());
    v16 = KeGetCurrentThread();
    if ( a7 )
    {
      ++v16->WriteOperationCount;
      v17 = 12000;
    }
    else
    {
      ++v16->ReadOperationCount;
      v17 = 11996;
    }
  }
  __incgsdword(v17);
  v19 = Object;
  if ( (*((_DWORD *)Object + 20) & 0x800000) == 0
    || a7
    || (*(_BYTE *)(*((_QWORD *)Object + 2) + 4LL) & 0x40) != 0
    || (v42 = *((_QWORD *)Object + 3)) == 0
    || (*(_BYTE *)(v42 + 6) & 0x20) != 0
    || (IopSetIrpPriorityHintFromFileObject((__int64)Object, a2), IoGetIoPriorityHint((PIRP)a2) < IoPriorityNormal)
    || (BYTE12(xmmword_140FC5B10) & 4) != 0 )
  {
    v20 = Object;
    if ( !a6 )
      PsReferenceSiloContext(Object);
    v21 = *((_QWORD *)Object + 26);
    if ( v21 && (v40 = *(_DWORD *)(v21 + 88)) != 0 )
    {
      v26 = v40 << 17;
    }
    else
    {
      v22 = KeGetCurrentThread();
      v23 = (*((_DWORD *)&v22[1].SwapListEntry + 2) >> 9) & 7;
      v24 = v22->Process[1].Padding[3];
      if ( v24 )
      {
        v25 = *(_DWORD *)(v24 + 1084);
        if ( v23 >= v25 )
          v23 = v25;
      }
      if ( v23 < 2 && v22 == KeGetCurrentThread() && LODWORD(v22[1].Timer.TimerListEntry.Flink) )
        v23 = 2;
      v19 = Object;
      v26 = (v23 << 17) + 0x20000;
    }
    v27 = *(_DWORD *)(a2 + 16) & 0xFFF1FFFF | v26;
    *(_DWORD *)(a2 + 16) = v27;
    if ( IoGetIoPriorityHint((PIRP)a2) < IoPriorityNormal )
    {
      if ( *(_BYTE *)(a2 + 64)
        || (v41 = *(_QWORD *)(a2 + 152)) != 0
        && ((*(_DWORD *)(v41 + 116) & 0x400) != 0 || (*(_DWORD *)(v41 + 1444) & 0x80u) != 0) )
      {
        if ( a7 )
        {
          if ( a7 == 1 )
            ++IoLowPriorityWriteOperationCount;
        }
        else
        {
          ++IoLowPriorityReadOperationCount;
        }
      }
      else
      {
        ++IoKernelIssuedIoBoostedCount;
        *(_DWORD *)(a2 + 16) = v27 & 0xFFF1FFFF | 0x60000;
      }
    }
    if ( *(char *)(a2 + 71) >= 0 && (v28 = *(_QWORD *)(a2 + 200)) != 0 && (*(_BYTE *)v28 & 2) != 0 )
    {
      v52 = 0LL;
      v52 = *(struct _LIST_ENTRY *)(v28 + 24);
      v39 = IoSetActivityIdThread(&v52);
      v29 = IofCallDriver(DeviceObject, (PIRP)a2);
      IoSetActivityIdThread(v39);
    }
    else
    {
      v29 = IofCallDriver(DeviceObject, (PIRP)a2);
    }
    if ( !a6 )
      ObDereferenceObjectDeferDelete(v20);
    v13 = v51;
    v47 = v29;
    goto LABEL_31;
  }
  BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject((PFILE_OBJECT)Object);
  FastIoDispatch = BaseFileSystemDeviceObject->DriverObject->FastIoDispatch;
  if ( FastIoDispatch->SizeOfFastIoDispatch >= 0xF0 && *(_QWORD *)&FastIoDispatch[1].SizeOfFastIoDispatch )
  {
    v30 = DeviceObject;
    if ( (unsigned __int8)guard_dispatch_icall_no_overrides(BaseFileSystemDeviceObject, a2, a6, Object) )
    {
      v29 = 0;
    }
    else
    {
      v29 = IopCallDriverReference(DeviceObject, (PIRP)a2, a6, Object, 0);
      v47 = v29;
    }
  }
  else
  {
    v30 = DeviceObject;
    v29 = IopCallDriverReference(DeviceObject, (PIRP)a2, a6, Object, 0);
    v47 = v29;
  }
LABEL_32:
  if ( a4 && v29 != 259 )
  {
    if ( v12 )
    {
      v45 = v30->DeviceType;
      v46 = v45 == 8 || v45 == 20;
      IopIoRingCompleteIrp((PIRP)a2, (ULONG_PTR)v19, v46);
      v29 = v47;
    }
    else
    {
      DeviceObject = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1);
      IopCompleteRequest(a2 + 120, (__int64)&v51, &DeviceObject, (ULONG_PTR *)&Object, &DeviceObject);
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
      v29 = v47;
    }
  }
  if ( a6 )
  {
    if ( v29 == 259 )
    {
      v32 = v19[20] & 4;
      while ( (v19[38] & 0x7F) != 0 || !v19[39] )
      {
        v35 = a5;
        if ( !v32 )
          v35 = 0;
        v36 = KeWaitForSingleObject(v19 + 38, Executive, v35, 1u, 0LL);
        if ( v36 != 192 && v36 != 257 )
          break;
        if ( !v32 && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
        {
          v37 = 0;
          v38 = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( KiIrqlFlags )
            KiRaiseIrqlProcessIrqlFlags(v38, 1);
          if ( !v19[39] )
            v37 = *(_BYTE *)(a2 + 68) == 1;
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v38);
          __writecr8(v38);
          if ( !v37 )
            continue;
        }
        IopCancelAlertedRequest(v19 + 38, (PIRP)a2);
        break;
      }
      v19 = Object;
      v47 = *((_DWORD *)Object + 14);
    }
    IopReleaseFileObjectLock((ULONG_PTR)v19);
    return v47;
  }
  else
  {
    if ( v12 )
      return 259LL;
    result = v29;
    if ( v13 )
    {
      if ( (v29 & 0xC0000000) != 0x80000000 )
        return v29;
      return 259LL;
    }
  }
  return result;
}
