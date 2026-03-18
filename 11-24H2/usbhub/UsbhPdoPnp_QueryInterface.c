/*
 * XREFs of UsbhPdoPnp_QueryInterface @ 0x140005410
 * Callers:
 *     <none>
 * Callees:
 *     UsbhBusifGetLocationInterface @ 0x140004B60 (UsbhBusifGetLocationInterface.c)
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Usb_Disconnected @ 0x1400155D4 (Usb_Disconnected.c)
 *     UsbhRefPdoDeviceHandle @ 0x14001E740 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x14001E9F0 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhUnlatchPdo @ 0x140020FA0 (UsbhUnlatchPdo.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhSyncResetDeviceInternal @ 0x140047A14 (UsbhSyncResetDeviceInternal.c)
 *     UsbhBusifGetSSHub @ 0x140056FB4 (UsbhBusifGetSSHub.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryInterface(__int64 a1, IRP *a2)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbp
  unsigned int Status; // r14d
  __int64 v12; // r15
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rbp
  __int64 Pool2; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  struct _DEVICE_OBJECT *v34; // r13
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  unsigned int v40; // ebx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned int SSHub; // eax
  _NAMED_PIPE_CREATE_PARAMETERS *v46; // r10
  __int64 v47; // rdx
  _LARGE_INTEGER ByteOffset; // rax
  int v49; // eax
  unsigned int v50; // r10d
  int v51; // r10d
  _NAMED_PIPE_CREATE_PARAMETERS *v52; // r10
  KIRQL NewIrql; // [rsp+98h] [rbp+10h]
  __int64 v54; // [rsp+A0h] [rbp+18h]

  v4 = PdoExt(a1);
  v5 = 0;
  v6 = v4;
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v7 = *(_QWORD *)(v4 + 1184);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 64);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_DWORD *)v9 = 812018033;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a2;
        *(_QWORD *)(v9 + 24) = a1;
      }
    }
  }
  v10 = *(_QWORD *)(v4 + 1184);
  Status = a2->IoStatus.Status;
  if ( !v10 )
    goto LABEL_44;
  v12 = 0LL;
  v13 = *(unsigned __int16 *)(v4 + 1428);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v14 = *(_QWORD *)(v10 + 64);
    if ( v14 )
    {
      v15 = *(_QWORD *)(v14 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
      *(_DWORD *)v15 = 1329877100;
      *(_QWORD *)(v15 + 8) = 0LL;
      *(_QWORD *)(v15 + 16) = v13;
      *(_QWORD *)(v15 + 24) = 1364543814LL;
    }
  }
  NewIrql = KeAcquireSpinLockRaiseToDpc(&HubG);
  qword_14006F5E0 = (__int64)&dword_14006F5E8;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v16 = *(_QWORD *)(v10 + 64);
    if ( v16 )
    {
      v19 = *(_QWORD *)(v16 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
      *(_DWORD *)v19 = 1413771367;
      *(_QWORD *)(v19 + 8) = 0LL;
      *(_QWORD *)(v19 + 16) = v13;
      *(_QWORD *)(v19 + 24) = 0LL;
    }
  }
  if ( (_WORD)v13 )
  {
    v54 = FdoExt(v10, v16, v17, v18);
    if ( (unsigned __int16)v13 <= *(unsigned __int8 *)(FdoExt(v10, v20, v21, v22) + 2938) )
    {
      v23 = *(_QWORD *)(v54 + 3056);
      if ( v23 )
      {
        v24 = v23 + 2928 * v13 - 2928;
        if ( (UsbhLogMask & 8) != 0 )
        {
          v25 = *(_QWORD *)(v10 + 64);
          if ( v25 )
          {
            v26 = *(_QWORD *)(v25 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
            *(_DWORD *)v26 = 1044672615;
            *(_QWORD *)(v26 + 8) = 0LL;
            *(_QWORD *)(v26 + 16) = v13;
            *(_QWORD *)(v26 + 24) = v24;
          }
        }
        if ( v24 )
        {
          v12 = *(_QWORD *)(v24 + 392);
          if ( v12 )
          {
            v27 = PdoExt(*(_QWORD *)(v24 + 392));
            Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
            if ( Pool2 )
            {
              *(_DWORD *)Pool2 = 1668571500;
              *(_QWORD *)(Pool2 + 32) = v12;
              *(_DWORD *)(Pool2 + 24) = 1364543814;
              *(_QWORD *)(Pool2 + 40) = a2;
              v29 = (_QWORD *)(Pool2 + 8);
              v30 = *(_QWORD **)(v27 + 1280);
              if ( *v30 != v27 + 1272 )
                __fastfail(3u);
              *v29 = v27 + 1272;
              v29[1] = v30;
              *v30 = v29;
              *(_QWORD *)(v27 + 1280) = v29;
            }
            else
            {
              ++*(_DWORD *)(v27 + 1288);
            }
          }
        }
      }
    }
  }
  qword_14006F5E0 = 0LL;
  KeReleaseSpinLock(&HubG, NewIrql);
  if ( !v12 )
    goto LABEL_44;
  v34 = *(struct _DEVICE_OBJECT **)(FdoExt(*(_QWORD *)(v6 + 1184), v31, v32, v33) + 1216);
  if ( !v34 || *(_DWORD *)(PdoExt(a1) + 1124) != 3 )
  {
    Log(*(_QWORD *)(v6 + 1184), 256, 1902522657, (_DWORD)a2, a1);
    goto LABEL_43;
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( RtlCompareMemory(
         CurrentStackLocation->Parameters.Create.SecurityContext,
         &USB_BUS_INTERFACE_HUB_SS_GUID,
         0x10uLL) == 16 )
  {
    Log(*(_QWORD *)(v6 + 1184), 256, 1902728019, (_DWORD)a2, a1);
    SSHub = UsbhBusifGetSSHub(*(_QWORD *)(v6 + 1184), v47, a2);
    goto LABEL_47;
  }
  if ( RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
  {
    SSHub = UsbhBusifGetLocationInterface(v36, a1, (__int64)a2);
LABEL_47:
    Status = SSHub;
LABEL_43:
    UsbhUnlatchPdo(*(_QWORD *)(v6 + 1184), v12, a2, 1364543814LL);
LABEL_44:
    a2->IoStatus.Status = Status;
    IofCompleteRequest(a2, 0);
    return Status;
  }
  if ( RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &USB_BUS_INTERFACE_USBDI_GUID, 0x10uLL) == 16
    || RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &USB_BUS_INTERFACE_HUB_GUID, 0x10uLL) == 16
    || RtlCompareMemory(
         CurrentStackLocation->Parameters.Create.SecurityContext,
         &USB_BUS_INTERFACE_HUB_MINIDUMP_GUID,
         0x10uLL) == 16
    || RtlCompareMemory(
         CurrentStackLocation->Parameters.Create.SecurityContext,
         &USB_BUS_INTERFACE_HUB_FORWARD_PROGRESS_GUID,
         0x10uLL) == 16 )
  {
    Log(*(_QWORD *)(v6 + 1184), 256, 1902732850, (_DWORD)a2, a1);
    if ( !UsbhRefPdoDeviceHandle(*(_QWORD *)(v6 + 1184), a1, a2, 1212442225LL) )
    {
      PdoExt(a1);
      v49 = UsbhSyncResetDeviceInternal(*(PDEVICE_OBJECT *)(v6 + 1184));
      Log(*(_QWORD *)(v6 + 1184), 256, 1902732882, (_DWORD)a2, v49);
      if ( (v50 & 0xC0000000) == 0xC0000000 )
      {
        if ( !(unsigned __int8)Usb_Disconnected(v50) )
          UsbhException(
            *(_QWORD *)(v6 + 1184),
            *(unsigned __int16 *)(v6 + 1428),
            121,
            0,
            0,
            v51,
            -1,
            (__int64)usbfile_pdo_c,
            535,
            0);
        a2->IoStatus.Status = Status;
        IofCompleteRequest(a2, 0);
        goto LABEL_52;
      }
      UsbhRefPdoDeviceHandle(*(_QWORD *)(v6 + 1184), a1, a2, 1212442225LL);
      Log(*(_QWORD *)(v6 + 1184), 256, 1902732872, *(_QWORD *)(v6 + 1160), a1);
      CurrentStackLocation->Parameters.CreatePipe.Parameters = v52;
    }
    Log(*(_QWORD *)(v6 + 1184), 256, 1902732872, *(_QWORD *)(v6 + 1160), a1);
    CurrentStackLocation->Parameters.CreatePipe.Parameters = v46;
    if ( v46 )
      UsbhDerefPdoDeviceHandle(*(_QWORD *)(v6 + 1184), v46, a2, 1212442225LL);
    Log(*(_QWORD *)(v6 + 1184), 256, 1902732851, (_DWORD)a2, a1);
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    Status = IofCallDriver(v34, a2);
LABEL_52:
    UsbhUnlatchPdo(*(_QWORD *)(v6 + 1184), v12, a2, 1364543814LL);
    return Status;
  }
  if ( RtlCompareMemory(
         CurrentStackLocation->Parameters.Create.SecurityContext,
         &GUID_D3COLD_SUPPORT_INTERFACE,
         0x10uLL) != 16 )
  {
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      v42 = *(_QWORD *)(v6 + 1184);
      if ( v42 )
      {
        v43 = *(_QWORD *)(v42 + 64);
        if ( v43 )
        {
          v44 = *(_QWORD *)(v43 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v43 + 880)) & *(_DWORD *)(v43 + 884));
          *(_DWORD *)v44 = 879126897;
          *(_QWORD *)(v44 + 8) = 0LL;
          *(_QWORD *)(v44 + 16) = a2;
          *(_QWORD *)(v44 + 24) = a1;
        }
      }
    }
    goto LABEL_43;
  }
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    v37 = *(_QWORD *)(v6 + 1184);
    if ( v37 )
    {
      v38 = *(_QWORD *)(v37 + 64);
      if ( v38 )
      {
        v39 = *(_QWORD *)(v38 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
        *(_DWORD *)v39 = 895904113;
        *(_QWORD *)(v39 + 8) = 0LL;
        *(_QWORD *)(v39 + 16) = a2;
        *(_QWORD *)(v39 + 24) = a1;
      }
    }
  }
  if ( CurrentStackLocation->Parameters.CreatePipe.Parameters == (_NAMED_PIPE_CREATE_PARAMETERS *)v6 )
  {
    UsbhUnlatchPdo(*(_QWORD *)(v6 + 1184), v12, a2, 1364543814LL);
    v40 = a2->IoStatus.Status;
    a2->IoStatus.Status = v40;
    IofCompleteRequest(a2, 0);
    return v40;
  }
  if ( CurrentStackLocation->Parameters.QueryInterface.Size != 72
    || CurrentStackLocation->Parameters.QueryInterface.Version != 1 )
  {
    UsbhUnlatchPdo(*(_QWORD *)(v6 + 1184), v12, a2, 1364543814LL);
    v5 = a2->IoStatus.Status;
    a2->IoStatus.Status = v5;
    goto LABEL_67;
  }
  ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
  if ( a2->IoStatus.Status )
  {
    *(_DWORD *)ByteOffset.QuadPart = 65608;
    goto LABEL_64;
  }
  if ( *(_WORD *)ByteOffset.QuadPart == 72 && *(_WORD *)(ByteOffset.QuadPart + 2) == 1 )
  {
    *(_OWORD *)(v6 + 2976) = *(_OWORD *)ByteOffset.QuadPart;
    *(_OWORD *)(v6 + 2992) = *(_OWORD *)(ByteOffset.QuadPart + 16);
    *(_OWORD *)(v6 + 3008) = *(_OWORD *)(ByteOffset.QuadPart + 32);
    *(_OWORD *)(v6 + 3024) = *(_OWORD *)(ByteOffset.QuadPart + 48);
    *(_QWORD *)(v6 + 3040) = *(_QWORD *)(ByteOffset.QuadPart + 64);
LABEL_64:
    *(_QWORD *)(ByteOffset.QuadPart + 8) = v6;
    *(_QWORD *)(ByteOffset.QuadPart + 32) = UsbhD3ColdSupportInterfaceSetD3ColdSupport;
    *(_QWORD *)(ByteOffset.QuadPart + 40) = UsbhD3ColdSupportInterfaceGetIdleWakeInfo;
    *(_QWORD *)(ByteOffset.QuadPart + 24) = UsbhD3ColdSupportInterfaceDereference;
    *(_QWORD *)(ByteOffset.QuadPart + 16) = UsbhD3ColdSupportInterfaceReference;
    *(_QWORD *)(ByteOffset.QuadPart + 48) = UsbhD3ColdSupportInterfaceGetD3ColdCapability;
    *(_QWORD *)(ByteOffset.QuadPart + 56) = UsbhD3ColdSupportInterfaceGetD3ColdBusDriverSupport;
    *(_QWORD *)(ByteOffset.QuadPart + 64) = UsbhD3ColdSupportInterfaceGetLastTransitionStatus;
    UsbhUnlatchPdo(*(_QWORD *)(v6 + 1184), v12, a2, 1364543814LL);
    goto LABEL_65;
  }
  UsbhUnlatchPdo(*(_QWORD *)(v6 + 1184), v12, a2, 1364543814LL);
  v5 = -1073741637;
LABEL_65:
  a2->IoStatus.Status = v5;
LABEL_67:
  IofCompleteRequest(a2, 0);
  return v5;
}
