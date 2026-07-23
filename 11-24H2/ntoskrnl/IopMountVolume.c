/*
 * XREFs of IopMountVolume @ 0x140A1DB24
 * Callers:
 *     IopCheckVpbMounted @ 0x1403E5C10 (IopCheckVpbMounted.c)
 *     IoVerifyVolume @ 0x140AB1440 (IoVerifyVolume.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     IofCallDriver @ 0x14025CA20 (IofCallDriver.c)
 *     IopAllocateIrpWithExtension @ 0x14025E1EC (IopAllocateIrpWithExtension.c)
 *     FsRtlIsTotalDeviceFailure @ 0x140260640 (FsRtlIsTotalDeviceFailure.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     McTemplateK0jhzr1_EtwWriteTransfer @ 0x1402B836C (McTemplateK0jhzr1_EtwWriteTransfer.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     PsReferenceSiloContext @ 0x14031EF70 (PsReferenceSiloContext.c)
 *     ExAcquireResourceSharedLite @ 0x140321360 (ExAcquireResourceSharedLite.c)
 *     IopDecrementDeviceObjectRef @ 0x1403E6060 (IopDecrementDeviceObjectRef.c)
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14040A700 (IopIncrementDeviceObjectRefCount.c)
 *     IoGetActivityIdThread @ 0x140435520 (IoGetActivityIdThread.c)
 *     IopWaitForLockAlertable @ 0x140469278 (IopWaitForLockAlertable.c)
 *     IopMountInitializeVpb @ 0x1404865B0 (IopMountInitializeVpb.c)
 *     IopQueryVpbFlagsSafe @ 0x140491050 (IopQueryVpbFlagsSafe.c)
 *     MmIsThisAnNtAsSystem @ 0x1404A33F0 (MmIsThisAnNtAsSystem.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     McTemplateK0jhzr1d_EtwWriteTransfer @ 0x140593768 (McTemplateK0jhzr1d_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     IopLoadFileSystemDriver @ 0x14071038C (IopLoadFileSystemDriver.c)
 *     IoVolumeDeviceToGuid @ 0x14094FD30 (IoVolumeDeviceToGuid.c)
 *     IoVolumeDeviceToDosName @ 0x140950A40 (IoVolumeDeviceToDosName.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 IrpWithExtension; // rax
  IRP *v30; // r14
  __int64 v31; // rcx
  int v32; // eax
  NTSTATUS v33; // eax
  struct _DEVICE_OBJECT *v34; // r14
  ULONG_PTR v35; // rax
  PVOID v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rcx
  char v40; // al
  BOOLEAN IsThisAnNtAsSystem; // [rsp+42h] [rbp-BEh]
  char v43; // [rsp+43h] [rbp-BDh]
  char v44; // [rsp+44h] [rbp-BCh]
  int v47; // [rsp+48h] [rbp-B8h]
  struct _KTHREAD *v48; // [rsp+50h] [rbp-B0h]
  int v49; // [rsp+58h] [rbp-A8h]
  struct _LIST_ENTRY *ActivityIdThread; // [rsp+60h] [rbp-A0h]
  PVOID P[2]; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-88h]
  NTSTATUS Status[4]; // [rsp+80h] [rbp-80h] BYREF
  __int128 v54; // [rsp+90h] [rbp-70h] BYREF
  ULONG_PTR *v55; // [rsp+A0h] [rbp-60h]
  __int64 *v56; // [rsp+A8h] [rbp-58h]
  struct _KEVENT Event; // [rsp+B0h] [rbp-50h] BYREF
  GUID v58; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v59[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v60; // [rsp+F8h] [rbp-8h]
  int v61; // [rsp+100h] [rbp+0h]

  v55 = a5;
  v5 = 0LL;
  v43 = 0;
  memset(&Event, 0, sizeof(Event));
  ActivityIdThread = 0LL;
  v9 = 0;
  *(_OWORD *)Status = 0LL;
  v54 = 0LL;
  v58 = 0LL;
  *(_OWORD *)P = 0LL;
  IsThisAnNtAsSystem = MmIsThisAnNtAsSystem();
  v10 = IsThisAnNtAsSystem;
  v60 = 0LL;
  v61 = 0;
  memset(v59, 0, sizeof(v59));
  CurrentThread = KeGetCurrentThread();
  v48 = CurrentThread;
  if ( ExAcquireRundownProtection_0(&IopFilesystemDatabaseShutdownRundown) )
  {
    if ( IsThisAnNtAsSystem )
    {
      ActivityIdThread = IoGetActivityIdThread();
      v5 = (__int64)ActivityIdThread;
      IoVolumeDeviceToGuid(Object, &v58);
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
            (__int64)&v58,
            LOWORD(P[0]) >> 1,
            (__int64)P[1]);
        v43 = 1;
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
      v47 = v21;
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
        v56 = *v18;
        v44 = v23;
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
      LOBYTE(v27) = v16->StackSize + v25;
      IrpWithExtension = IopAllocateIrpWithExtension(v28, v27, 0LL);
      v30 = (IRP *)IrpWithExtension;
      if ( !IrpWithExtension )
      {
        v13 = -1073741670;
LABEL_36:
        ObfDereferenceObject(v16);
        goto LABEL_37;
      }
      v31 = *(_QWORD *)(IrpWithExtension + 184);
      *(_DWORD *)(IrpWithExtension + 16) = 66;
      *(_QWORD *)(IrpWithExtension + 24) = v59;
      *(_QWORD *)(IrpWithExtension + 80) = &Event;
      *(_QWORD *)(IrpWithExtension + 72) = Status;
      *(_QWORD *)(IrpWithExtension + 152) = v48;
      *(_BYTE *)(IrpWithExtension + 64) = 0;
      *(_BYTE *)(v31 - 70) = a2;
      *(_WORD *)(v31 - 72) = 269;
      *(_QWORD *)(v31 - 64) = Object->Vpb;
      v32 = IopFsRegistrationOps;
      *(_QWORD *)(v31 - 56) = v16;
      *(_DWORD *)(v31 - 48) = 44;
      v49 = v32;
      PsReferenceSiloContext(v24);
      IopIncrementDeviceObjectRefCount(BugCheckParameter2, 1);
      _InterlockedIncrement(&IopMountsInProgress);
      ExReleaseResourceLite(&IopDatabaseResource);
      v33 = IofCallDriver(v24, v30);
      if ( v33 == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      }
      else
      {
        *(_QWORD *)&Status[2] = 0LL;
        Status[0] = v33;
      }
      ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
      _InterlockedAdd(&IopMountsInProgress, 0xFFFFFFFF);
      if ( IopMountCompletionWaiters )
        KeSetEvent(&IopMountCompletionEvent, 0, 0);
      ObfDereferenceObject(v24);
      v34 = (struct _DEVICE_OBJECT *)BugCheckParameter2;
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
        if ( v49 == IopFsRegistrationOps )
        {
          if ( Status[0] == -1073741412 )
          {
            IopIncrementDeviceObjectRefCount((ULONG_PTR)v34, 1);
            ExReleaseResourceLite(&IopDatabaseResource);
            if ( !a3 )
            {
              KeSetEvent(&Object->DeviceLock, 0, 0);
              v9 = 0;
            }
            KeLeaveCriticalRegionThread();
            IopLoadFileSystemDriver(v34);
            if ( !a3 )
            {
              v13 = IopWaitForLockAlertable(&Object->DeviceLock, v48->PreviousMode, a4);
              if ( v13 < 0 )
              {
                ObfDereferenceObject(v16);
                KeLeaveCriticalRegion();
                goto LABEL_38;
              }
              v9 = 1;
            }
            --v48->KernelApcDisable;
            ExAcquireResourceSharedLite(&IopDatabaseResource, 1u);
            v40 = IopQueryVpbFlagsSafe((__int64)Object);
            if ( (v40 & 8) != 0 )
            {
              v13 = -1073741632;
              goto LABEL_36;
            }
            if ( (v40 & 1) != 0 )
            {
              ObfDereferenceObject(v16);
              v13 = 0;
              goto LABEL_37;
            }
            v18 = (__int64 **)&v54;
            *(_QWORD *)&v54 = *v19;
            v13 = -1073741489;
            goto LABEL_31;
          }
        }
        else
        {
          v18 = (__int64 **)&v54;
          *(_QWORD *)&v54 = *v19;
          v13 = -1073741489;
        }
        if ( v13 != -1073741489 && FsRtlIsTotalDeviceFailure(v13) )
        {
          if ( !a2 || v56 == v19 )
            goto LABEL_35;
          v18 = *(__int64 ***)(v19[1] + 8);
        }
      }
      else
      {
        v35 = IopMountInitializeVpb((__int64)Object, (__int64)v16, v47, v44);
        *v55 = v35;
      }
LABEL_31:
      v21 = v47;
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
      v37 = P[1];
      if ( v43 && MmIsThisAnNtAsSystem() )
      {
        if ( v13 < 0 )
        {
          if ( (Microsoft_Windows_Kernel_IOEnableBits & 2) != 0 )
            McTemplateK0jhzr1d_EtwWriteTransfer(
              v39,
              v38,
              (const GUID *)ActivityIdThread,
              (__int64)&v58,
              LOWORD(P[0]) >> 1,
              (__int64)v37,
              v13);
        }
        else if ( (Microsoft_Windows_Kernel_IOEnableBits & 1) != 0 )
        {
          McTemplateK0jhzr1_EtwWriteTransfer(
            v39,
            (__int64)IoMgr_MountSucceeded,
            (__int64)ActivityIdThread,
            (__int64)&v58,
            LOWORD(P[0]) >> 1,
            (__int64)v37);
        }
      }
      if ( v37 )
        ExFreePoolWithTag(v37, 0);
    }
    if ( v13 < 0 && (Object->Flags & 0x100) != 0 && (unsigned int)InitializationPhase < 2 )
      KeBugCheckEx(0xEDu, (ULONG_PTR)Object, v13, 0LL, 0LL);
    goto LABEL_42;
  }
  return 3221225865LL;
}
