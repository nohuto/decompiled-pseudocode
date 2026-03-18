/*
 * XREFs of IopMountVolume @ 0x140A29164
 * Callers:
 *     IopCheckVpbMounted @ 0x1403F1EF0 (IopCheckVpbMounted.c)
 *     IoVerifyVolume @ 0x140AB7170 (IoVerifyVolume.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     KeSetEvent @ 0x1402725A0 (KeSetEvent.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     FsRtlIsTotalDeviceFailure @ 0x1402CC0B0 (FsRtlIsTotalDeviceFailure.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     McTemplateK0jhzr1_EtwWriteTransfer @ 0x14032FAF4 (McTemplateK0jhzr1_EtwWriteTransfer.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14033FA90 (PsReferenceSiloContext.c)
 *     ExAcquireResourceSharedLite @ 0x140341E80 (ExAcquireResourceSharedLite.c)
 *     IofCallDriver @ 0x140374160 (IofCallDriver.c)
 *     IopAllocateIrpWithExtension @ 0x14037592C (IopAllocateIrpWithExtension.c)
 *     IopDecrementDeviceObjectRef @ 0x1403F2340 (IopDecrementDeviceObjectRef.c)
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14041A700 (IopIncrementDeviceObjectRefCount.c)
 *     IoGetActivityIdThread @ 0x14043F3F0 (IoGetActivityIdThread.c)
 *     IopWaitForLockAlertable @ 0x14046EB64 (IopWaitForLockAlertable.c)
 *     IopMountInitializeVpb @ 0x14048B7DC (IopMountInitializeVpb.c)
 *     IopQueryVpbFlagsSafe @ 0x1404966C0 (IopQueryVpbFlagsSafe.c)
 *     MmIsThisAnNtAsSystem @ 0x1404A8FD0 (MmIsThisAnNtAsSystem.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     McTemplateK0jhzr1d_EtwWriteTransfer @ 0x140596738 (McTemplateK0jhzr1d_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     IopLoadFileSystemDriver @ 0x1407127FC (IopLoadFileSystemDriver.c)
 *     IoVolumeDeviceToGuid @ 0x1409672A0 (IoVolumeDeviceToGuid.c)
 *     IoVolumeDeviceToDosName @ 0x140967FB0 (IoVolumeDeviceToDosName.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopMountVolume(struct _DEVICE_OBJECT *Object, char a2, char a3, char a4, ULONG_PTR *a5)
{
  __int64 v5; // r14
  char v9; // r12
  BOOLEAN v10; // bl
  struct _KTHREAD *CurrentThread; // rsi
  struct _KTHREAD *v12; // rcx
  signed int v13; // ebx
  char VpbFlagsSafe; // al
  struct _DEVICE_OBJECT *AttachedDevice; // rax
  struct _DEVICE_OBJECT *v16; // r13
  ULONG DeviceType; // eax
  __int64 **v18; // rsi
  __int64 *v19; // r15
  char v20; // dl
  int v21; // ecx
  __int64 *v22; // rax
  bool v23; // zf
  struct _DEVICE_OBJECT *v24; // rbx
  char v25; // r14
  struct _DEVICE_OBJECT *v26; // rax
  __int64 v27; // rcx
  __int64 IrpWithExtension; // rax
  IRP *v29; // r14
  __int64 v30; // rcx
  int v31; // eax
  NTSTATUS v32; // eax
  struct _DEVICE_OBJECT *v33; // r14
  ULONG_PTR v34; // rax
  PVOID v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rcx
  char v39; // al
  BOOLEAN IsThisAnNtAsSystem; // [rsp+42h] [rbp-BEh]
  char v42; // [rsp+43h] [rbp-BDh]
  char v43; // [rsp+44h] [rbp-BCh]
  int v46; // [rsp+48h] [rbp-B8h]
  struct _KTHREAD *v47; // [rsp+50h] [rbp-B0h]
  int v48; // [rsp+58h] [rbp-A8h]
  struct _LIST_ENTRY *ActivityIdThread; // [rsp+60h] [rbp-A0h]
  PVOID P[2]; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-88h]
  NTSTATUS Status[4]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v53; // [rsp+90h] [rbp-70h] BYREF
  ULONG_PTR *v54; // [rsp+A0h] [rbp-60h]
  __int64 *v55; // [rsp+A8h] [rbp-58h]
  struct _KEVENT Event; // [rsp+B0h] [rbp-50h] BYREF
  GUID v57; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v58[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v59; // [rsp+F8h] [rbp-8h]
  int v60; // [rsp+100h] [rbp+0h]

  v54 = a5;
  v5 = 0LL;
  v42 = 0;
  memset(&Event, 0, sizeof(Event));
  ActivityIdThread = 0LL;
  v9 = 0;
  *(_OWORD *)Status = 0LL;
  v53 = 0LL;
  v57 = 0LL;
  *(_OWORD *)P = 0LL;
  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  v10 = IsThisAnNtAsSystem;
  v59 = 0LL;
  v60 = 0;
  memset(v58, 0, sizeof(v58));
  CurrentThread = KeGetCurrentThread();
  v47 = CurrentThread;
  if ( ExAcquireRundownProtection(&IopFilesystemDatabaseShutdownRundown) )
  {
    if ( IsThisAnNtAsSystem )
    {
      ActivityIdThread = IoGetActivityIdThread();
      v5 = (__int64)ActivityIdThread;
      IoVolumeDeviceToGuid(Object, &v57);
      IoVolumeDeviceToDosName(Object, (PUNICODE_STRING)P);
    }
    if ( !a3 )
    {
      v12 = KeGetCurrentThread();
      --v12->KernelApcDisable;
      v13 = IopWaitForLockAlertable(&Object->DeviceLock, CurrentThread->PreviousMode, a4);
      if ( v13 < 0 )
      {
        KeLeaveCriticalRegion();
        if ( P[1] )
          ExFreePoolWithTag(P[1], 0);
LABEL_42:
        ExReleaseRundownProtection_0(&IopFilesystemDatabaseShutdownRundown);
        return (unsigned int)v13;
      }
      v10 = IsThisAnNtAsSystem;
      v9 = 1;
    }
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
    VpbFlagsSafe = IopQueryVpbFlagsSafe((__int64)Object);
    if ( (VpbFlagsSafe & 9) == 0 )
    {
      if ( v10 )
      {
        if ( MmIsThisAnNtAsSystem() && (Microsoft_Windows_Kernel_IOEnableBits & 1) != 0 )
          McTemplateK0jhzr1_EtwWriteTransfer(
            LOWORD(P[0]) >> 1,
            (__int64)IoMgr_MountBegin,
            v5,
            (__int64)&v57,
            LOWORD(P[0]) >> 1,
            (__int64)P[1]);
        v42 = 1;
      }
      KeInitializeEvent(&Event, NotificationEvent, 0);
      Object->Flags &= ~2u;
      v13 = -1073741823;
      AttachedDevice = Object->AttachedDevice;
      v16 = Object;
      while ( AttachedDevice )
      {
        v16 = AttachedDevice;
        AttachedDevice = AttachedDevice->AttachedDevice;
      }
      PsReferenceSiloContext(v16);
      DeviceType = Object->DeviceType;
      if ( DeviceType == 7 || DeviceType == 36 )
      {
        v18 = (__int64 **)IopDiskFileSystemQueueHead;
        v19 = &IopDiskFileSystemQueueHead;
      }
      else if ( DeviceType == 2 )
      {
        v18 = (__int64 **)IopCdRomFileSystemQueueHead;
        v19 = &IopCdRomFileSystemQueueHead;
      }
      else
      {
        v18 = (__int64 **)IopTapeFileSystemQueueHead;
        v19 = &IopTapeFileSystemQueueHead;
      }
      v20 = a2;
      v21 = Object->Vpb->Flags & 0x10;
      v46 = v21;
      while ( 1 )
      {
        if ( v18 == (__int64 **)v19 )
        {
LABEL_35:
          if ( v13 >= 0 )
            goto LABEL_37;
          goto LABEL_36;
        }
        if ( v13 >= 0 )
          goto LABEL_37;
        v22 = *v18;
        v23 = *v18 == v19;
        v55 = *v18;
        v43 = v23;
        if ( !v20 && v22 == v19 && v18 != (__int64 **)*v19 )
          goto LABEL_36;
        if ( !v21 || v22 == v19 )
          break;
LABEL_20:
        v18 = (__int64 **)*v18;
      }
      v24 = (struct _DEVICE_OBJECT *)(v18 - 10);
      v25 = 1;
      v26 = (struct _DEVICE_OBJECT *)*(v18 - 7);
      BugCheckParameter2 = (ULONG_PTR)(v18 - 10);
      while ( v26 )
      {
        v24 = v26;
        ++v25;
        v26 = v26->AttachedDevice;
      }
      KeResetEvent(&Event);
      IrpWithExtension = IopAllocateIrpWithExtension(v27, v16->StackSize + v25, 0);
      v29 = (IRP *)IrpWithExtension;
      if ( !IrpWithExtension )
      {
        v13 = -1073741670;
LABEL_36:
        ObfDereferenceObject(v16);
        goto LABEL_37;
      }
      v30 = *(_QWORD *)(IrpWithExtension + 184);
      *(_DWORD *)(IrpWithExtension + 16) = 66;
      *(_QWORD *)(IrpWithExtension + 24) = v58;
      *(_QWORD *)(IrpWithExtension + 80) = &Event;
      *(_QWORD *)(IrpWithExtension + 72) = Status;
      *(_QWORD *)(IrpWithExtension + 152) = v47;
      *(_BYTE *)(IrpWithExtension + 64) = 0;
      *(_BYTE *)(v30 - 70) = a2;
      *(_WORD *)(v30 - 72) = 269;
      *(_QWORD *)(v30 - 64) = Object->Vpb;
      v31 = IopFsRegistrationOps;
      *(_QWORD *)(v30 - 56) = v16;
      *(_DWORD *)(v30 - 48) = 44;
      v48 = v31;
      PsReferenceSiloContext(v24);
      IopIncrementDeviceObjectRefCount(BugCheckParameter2, 1);
      _InterlockedIncrement(&IopMountsInProgress);
      ExReleaseResourceLite(&IopDatabaseResource);
      v32 = IofCallDriver(v24, v29);
      if ( v32 == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      }
      else
      {
        *(_QWORD *)&Status[2] = 0LL;
        Status[0] = v32;
      }
      ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
      _InterlockedAdd(&IopMountsInProgress, 0xFFFFFFFF);
      if ( IopMountCompletionWaiters )
        KeSetEvent(&IopMountCompletionEvent, 0, 0);
      ObfDereferenceObject(v24);
      v33 = (struct _DEVICE_OBJECT *)BugCheckParameter2;
      IopDecrementDeviceObjectRef(BugCheckParameter2, 0);
      v13 = Status[0];
      if ( Status[0] < 0 )
      {
        if ( ((unsigned int)(Status[0] + 1073741662) <= 1
           || Status[0] == -1073741806
           || (unsigned int)(Status[0] + 1073741805) <= 1
           || Status[0] == -2147483626
           || Status[0] == -1073741643)
          && *(_QWORD *)&Status[2] == 1LL )
        {
          goto LABEL_35;
        }
        if ( v48 == IopFsRegistrationOps )
        {
          if ( Status[0] == -1073741412 )
          {
            IopIncrementDeviceObjectRefCount((ULONG_PTR)v33, 1);
            ExReleaseResourceLite(&IopDatabaseResource);
            if ( !a3 )
            {
              KeSetEvent(&Object->DeviceLock, 0, 0);
              v9 = 0;
            }
            KeLeaveCriticalRegionThread();
            IopLoadFileSystemDriver(v33);
            if ( !a3 )
            {
              v13 = IopWaitForLockAlertable(&Object->DeviceLock, v47->PreviousMode, a4);
              if ( v13 < 0 )
              {
                ObfDereferenceObject(v16);
                KeLeaveCriticalRegion();
                goto LABEL_38;
              }
              v9 = 1;
            }
            --v47->KernelApcDisable;
            ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
            v39 = IopQueryVpbFlagsSafe((__int64)Object);
            if ( (v39 & 8) != 0 )
            {
              v13 = -1073741632;
              goto LABEL_36;
            }
            if ( (v39 & 1) != 0 )
            {
              ObfDereferenceObject(v16);
              v13 = 0;
              goto LABEL_37;
            }
            v18 = (__int64 **)&v53;
            *(_QWORD *)&v53 = *v19;
            v13 = -1073741489;
            goto LABEL_31;
          }
        }
        else
        {
          v18 = (__int64 **)&v53;
          *(_QWORD *)&v53 = *v19;
          v13 = -1073741489;
        }
        if ( v13 != -1073741489 && FsRtlIsTotalDeviceFailure(v13) )
        {
          if ( !a2 || v55 == v19 )
            goto LABEL_35;
          v18 = *(__int64 ***)(v19[1] + 8);
        }
      }
      else
      {
        v34 = IopMountInitializeVpb((__int64)Object, (__int64)v16, v46, v43);
        *v54 = v34;
      }
LABEL_31:
      v21 = v46;
      v20 = a2;
      goto LABEL_20;
    }
    v13 = (VpbFlagsSafe & 8) != 0 ? 0xC00000C0 : 0;
LABEL_37:
    ExReleaseResourceLite(&IopDatabaseResource);
LABEL_38:
    if ( v9 )
    {
      KeSetEvent(&Object->DeviceLock, 0, 0);
      KeLeaveCriticalRegion();
    }
    KeLeaveCriticalRegionThread();
    if ( IsThisAnNtAsSystem )
    {
      v36 = P[1];
      if ( v42 && MmIsThisAnNtAsSystem() )
      {
        if ( v13 < 0 )
        {
          if ( (Microsoft_Windows_Kernel_IOEnableBits & 2) != 0 )
            McTemplateK0jhzr1d_EtwWriteTransfer(
              v38,
              v37,
              (const GUID *)ActivityIdThread,
              (__int64)&v57,
              LOWORD(P[0]) >> 1,
              (__int64)v36,
              v13);
        }
        else if ( (Microsoft_Windows_Kernel_IOEnableBits & 1) != 0 )
        {
          McTemplateK0jhzr1_EtwWriteTransfer(
            v38,
            (__int64)IoMgr_MountSucceeded,
            (__int64)ActivityIdThread,
            (__int64)&v57,
            LOWORD(P[0]) >> 1,
            (__int64)v36);
        }
      }
      if ( v36 )
        ExFreePoolWithTag(v36, 0);
    }
    if ( v13 < 0 && (Object->Flags & 0x100) != 0 && (unsigned int)InitializationPhase < 2 )
      KeBugCheckEx(0xEDu, (ULONG_PTR)Object, v13, 0LL, 0LL);
    goto LABEL_42;
  }
  return 3221225865LL;
}
