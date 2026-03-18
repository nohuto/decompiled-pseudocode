/*
 * XREFs of IopSynchronousServiceTail @ 0x1408C5420
 * Callers:
 *     IopQueueCopyWrite @ 0x140487690 (IopQueueCopyWrite.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1407068A0 (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x14070BB10 (NtQueryQuotaInformationFile.c)
 *     NtSetVolumeInformationFile @ 0x14070C280 (NtSetVolumeInformationFile.c)
 *     IopWriteFile @ 0x1408C3790 (IopWriteFile.c)
 *     IopXxxControlFile @ 0x1408C3AD0 (IopXxxControlFile.c)
 *     NtQueryDirectoryFileEx @ 0x1408C6930 (NtQueryDirectoryFileEx.c)
 *     NtQueryDirectoryFile @ 0x1408C7280 (NtQueryDirectoryFile.c)
 *     NtQueryEaFile @ 0x140935870 (NtQueryEaFile.c)
 *     IopReadFile @ 0x140935F80 (IopReadFile.c)
 *     NtQueryVolumeInformationFile @ 0x140936F60 (NtQueryVolumeInformationFile.c)
 *     IopFlushBuffersFile @ 0x140938E14 (IopFlushBuffersFile.c)
 *     NtLockFile @ 0x1409869D0 (NtLockFile.c)
 *     NtUnlockFile @ 0x140989F40 (NtUnlockFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x14098A4B0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtSetEaFile @ 0x140A5F1F0 (NtSetEaFile.c)
 *     IopReadFileScatter @ 0x140A89998 (IopReadFileScatter.c)
 *     IopWriteFileGather @ 0x140A9170C (IopWriteFileGather.c)
 * Callees:
 *     IofCompleteRequest @ 0x140251700 (IofCompleteRequest.c)
 *     IopQueueThreadIrp @ 0x140253BB0 (IopQueueThreadIrp.c)
 *     IopReleaseFileObjectLock @ 0x140285FF0 (IopReleaseFileObjectLock.c)
 *     PsReferenceSiloContext @ 0x14029A8F0 (PsReferenceSiloContext.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 *     IopCompleteRequest @ 0x14029FD20 (IopCompleteRequest.c)
 *     IopIoRingCompleteIrp @ 0x1402A2964 (IopIoRingCompleteIrp.c)
 *     IoGetBaseFileSystemDeviceObject @ 0x14035C100 (IoGetBaseFileSystemDeviceObject.c)
 *     IopCallDriverReference @ 0x14035D040 (IopCallDriverReference.c)
 *     IofCallDriver @ 0x14035D320 (IofCallDriver.c)
 *     IoSetDiskIoAttributionFromThread @ 0x14035D5D0 (IoSetDiskIoAttributionFromThread.c)
 *     ObDereferenceObjectDeferDelete @ 0x1403F2E60 (ObDereferenceObjectDeferDelete.c)
 *     IopSetIrpPriorityHintFromFileObject @ 0x140401D80 (IopSetIrpPriorityHintFromFileObject.c)
 *     IoGetIoPriorityHint @ 0x140404E50 (IoGetIoPriorityHint.c)
 *     IoSetActivityIdThread @ 0x14045CC40 (IoSetActivityIdThread.c)
 *     IopQueueIrpToFileObject @ 0x1404E68A0 (IopQueueIrpToFileObject.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PsIsProcessAppContainer @ 0x140969C10 (PsIsProcessAppContainer.c)
 *     IopCancelAlertedRequest @ 0x1409868F0 (IopCancelAlertedRequest.c)
 *     IopIsIosbInLockedRange @ 0x140A183D4 (IopIsIosbInLockedRange.c)
 */

__int64 __fastcall IopSynchronousServiceTail(
        struct _DEVICE_OBJECT *a1,
        __int64 a2,
        __int64 a3,
        char a4,
        KPROCESSOR_MODE a5,
        char a6,
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
  PDEVICE_OBJECT v29; // rbx
  unsigned int v30; // r12d
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
LABEL_48:
    if ( IopQueueIrpToFileObject(a2, a3, v33) )
      goto LABEL_8;
    goto LABEL_7;
  }
  if ( *(_QWORD *)(a2 + 96) && !*(_QWORD *)(a2 + 80) && v13 )
  {
    v33 = 1;
    goto LABEL_48;
  }
  if ( (v11 & 0x10) != 0 || v13 || !*(_QWORD *)(a3 + 208) || !(unsigned __int8)IopIsIosbInLockedRange(a3) )
LABEL_7:
    IopQueueThreadIrp(a2);
LABEL_8:
  v14 = *(_DWORD **)(a3 + 208);
  if ( v14 && (*v14 & 4) != 0 && (unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
  {
    v47 = -1073739504;
    *(_DWORD *)(a2 + 48) = -1073739504;
    IofCompleteRequest((PIRP)a2, 0);
    v30 = -1073739504;
    v19 = Object;
    v29 = DeviceObject;
  }
  else
  {
    if ( a7 > 1 )
    {
      CurrentThread = KeGetCurrentThread();
      ++CurrentThread->OtherOperationCount;
      v17 = 12004;
    }
    else
    {
      DeviceType = a1->DeviceType;
      if ( DeviceType == 8 || DeviceType == 36 || DeviceType == 7 || DeviceType == 9 )
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
        v30 = IofCallDriver(DeviceObject, (PIRP)a2);
        IoSetActivityIdThread(v39);
        v29 = DeviceObject;
      }
      else
      {
        v29 = DeviceObject;
        v30 = IofCallDriver(DeviceObject, (PIRP)a2);
      }
      if ( !a6 )
        ObDereferenceObjectDeferDelete(v20);
      v13 = v51;
      v47 = v30;
    }
    else
    {
      BaseFileSystemDeviceObject = IoGetBaseFileSystemDeviceObject((PFILE_OBJECT)Object);
      FastIoDispatch = BaseFileSystemDeviceObject->DriverObject->FastIoDispatch;
      if ( FastIoDispatch->SizeOfFastIoDispatch >= 0xF0 && *(_QWORD *)&FastIoDispatch[1].SizeOfFastIoDispatch )
      {
        v29 = DeviceObject;
        if ( (unsigned __int8)guard_dispatch_icall_no_overrides(BaseFileSystemDeviceObject) )
        {
          v30 = 0;
        }
        else
        {
          v30 = IopCallDriverReference(DeviceObject, (PIRP)a2, a6, Object, 0);
          v47 = v30;
        }
      }
      else
      {
        v29 = DeviceObject;
        v30 = IopCallDriverReference(DeviceObject, (PIRP)a2, a6, Object, 0);
        v47 = v30;
      }
    }
  }
  if ( a4 && v30 != 259 )
  {
    if ( v12 )
    {
      v45 = v29->DeviceType;
      v46 = v45 == 8 || v45 == 20;
      IopIoRingCompleteIrp((PIRP)a2, (ULONG_PTR)v19, v46);
      v30 = v47;
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
      v30 = v47;
    }
  }
  if ( a6 )
  {
    if ( v30 == 259 )
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
    result = v30;
    if ( v13 )
    {
      if ( (v30 & 0xC0000000) != 0x80000000 )
        return v30;
      return 259LL;
    }
  }
  return result;
}
