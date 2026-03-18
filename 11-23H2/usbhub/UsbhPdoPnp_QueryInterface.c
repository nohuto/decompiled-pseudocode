/*
 * XREFs of UsbhPdoPnp_QueryInterface @ 0x1C0055B70
 * Callers:
 *     <none>
 * Callees:
 *     UsbhUnlatchPdo @ 0x1C0001380 (UsbhUnlatchPdo.c)
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhLatchPdo @ 0x1C0019420 (UsbhLatchPdo.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C0019820 (UsbhSyncResetDeviceInternal.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0019C20 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C0019ED0 (UsbhDerefPdoDeviceHandle.c)
 *     Usb_Disconnected @ 0x1C0029920 (Usb_Disconnected.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 *     UsbhBusifGetLocationInterface @ 0x1C004C31C (UsbhBusifGetLocationInterface.c)
 *     UsbhBusifGetSSHub @ 0x1C004C3A0 (UsbhBusifGetSSHub.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryInterface(__int64 a1, IRP *a2)
{
  _NAMED_PIPE_CREATE_PARAMETERS *v4; // rbx
  __int64 QuadPart; // rcx
  unsigned int v6; // esi
  unsigned int Status; // ebp
  __int64 v8; // r12
  struct _DEVICE_OBJECT *v9; // r13
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  __int64 v11; // rdx
  unsigned int SSHub; // eax
  __int64 v13; // rcx
  SIZE_T v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // ebx
  _LARGE_INTEGER ByteOffset; // rax
  _DWORD *v19; // rax
  int v20; // eax
  int v21; // r10d
  int v22; // r10d
  _NAMED_PIPE_CREATE_PARAMETERS *v23; // r10
  __int64 v24; // r10

  v4 = (_NAMED_PIPE_CREATE_PARAMETERS *)PdoExt(a1);
  Log(v4[29].DefaultTimeout.QuadPart, 256, 1902732848, (__int64)a2, a1);
  QuadPart = v4[29].DefaultTimeout.QuadPart;
  v6 = 0;
  Status = a2->IoStatus.Status;
  if ( !QuadPart )
    goto LABEL_42;
  v8 = UsbhLatchPdo(QuadPart, WORD2(v4[35].DefaultTimeout.QuadPart), (__int64)a2, 0x51554946u);
  if ( !v8 )
    goto LABEL_42;
  v9 = (struct _DEVICE_OBJECT *)*((_QWORD *)FdoExt(v4[29].DefaultTimeout.QuadPart) + 152);
  if ( !v9 || PdoExt(a1)[281] != 3 )
  {
    Log(v4[29].DefaultTimeout.QuadPart, 256, 1902522657, (__int64)a2, a1);
    goto LABEL_41;
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( RtlCompareMemory(
         CurrentStackLocation->Parameters.Create.SecurityContext,
         &USB_BUS_INTERFACE_HUB_SS_GUID,
         0x10uLL) == 16 )
  {
    Log(v4[29].DefaultTimeout.QuadPart, 256, 1902728019, (__int64)a2, a1);
    SSHub = UsbhBusifGetSSHub(v4[29].DefaultTimeout.QuadPart, v11, (__int64)a2);
LABEL_9:
    Status = SSHub;
LABEL_41:
    UsbhUnlatchPdo(v4[29].DefaultTimeout.QuadPart, v8, (__int64)a2, 0x51554946u);
LABEL_42:
    a2->IoStatus.Status = Status;
    IofCompleteRequest(a2, 0);
    return Status;
  }
  if ( RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
  {
    SSHub = UsbhBusifGetLocationInterface(v13, a1, (__int64)a2);
    goto LABEL_9;
  }
  if ( RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &USB_BUS_INTERFACE_USBDI_GUID, 0x10uLL) != 16
    && RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &USB_BUS_INTERFACE_HUB_GUID, 0x10uLL) != 16
    && RtlCompareMemory(
         CurrentStackLocation->Parameters.Create.SecurityContext,
         &USB_BUS_INTERFACE_HUB_MINIDUMP_GUID,
         0x10uLL) != 16
    && RtlCompareMemory(
         CurrentStackLocation->Parameters.Create.SecurityContext,
         &USB_BUS_INTERFACE_HUB_FORWARD_PROGRESS_GUID,
         0x10uLL) != 16 )
  {
    v14 = RtlCompareMemory(
            CurrentStackLocation->Parameters.Create.SecurityContext,
            &GUID_D3COLD_SUPPORT_INTERFACE,
            0x10uLL);
    v15 = v4[29].DefaultTimeout.QuadPart;
    if ( v14 != 16 )
    {
      Log(v15, 256, 1902732852, (__int64)a2, a1);
      goto LABEL_41;
    }
    Log(v15, 256, 1902732853, (__int64)a2, a1);
    if ( CurrentStackLocation->Parameters.CreatePipe.Parameters == v4 )
    {
      UsbhUnlatchPdo(v4[29].DefaultTimeout.QuadPart, v8, (__int64)a2, 0x51554946u);
      v16 = a2->IoStatus.Status;
      a2->IoStatus.Status = v16;
      IofCompleteRequest(a2, 0);
      return v16;
    }
    if ( CurrentStackLocation->Parameters.QueryInterface.Size != 72
      || CurrentStackLocation->Parameters.QueryInterface.Version != 1 )
    {
      UsbhUnlatchPdo(v4[29].DefaultTimeout.QuadPart, v8, (__int64)a2, 0x51554946u);
      v6 = a2->IoStatus.Status;
      a2->IoStatus.Status = v6;
      goto LABEL_28;
    }
    ByteOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
    if ( a2->IoStatus.Status )
    {
      *(_DWORD *)ByteOffset.QuadPart = 65608;
    }
    else
    {
      if ( *(_WORD *)ByteOffset.QuadPart != 72 || *(_WORD *)(ByteOffset.QuadPart + 2) != 1 )
      {
        UsbhUnlatchPdo(v4[29].DefaultTimeout.QuadPart, v8, (__int64)a2, 0x51554946u);
        v6 = -1073741637;
LABEL_24:
        a2->IoStatus.Status = v6;
LABEL_28:
        IofCompleteRequest(a2, 0);
        return v6;
      }
      *(_OWORD *)&v4[74].InboundQuota = *(_OWORD *)ByteOffset.QuadPart;
      *(_OWORD *)&v4[74].TimeoutSpecified = *(_OWORD *)(ByteOffset.QuadPart + 16);
      *(_OWORD *)&v4[75].CompletionMode = *(_OWORD *)(ByteOffset.QuadPart + 32);
      *(_OWORD *)&v4[75].DefaultTimeout.LowPart = *(_OWORD *)(ByteOffset.QuadPart + 48);
      *(_QWORD *)&v4[76].NamedPipeType = *(_QWORD *)(ByteOffset.QuadPart + 64);
    }
    *(_QWORD *)(ByteOffset.QuadPart + 8) = v4;
    *(_QWORD *)(ByteOffset.QuadPart + 32) = UsbhD3ColdSupportInterfaceSetD3ColdSupport;
    *(_QWORD *)(ByteOffset.QuadPart + 40) = UsbhD3ColdSupportInterfaceGetIdleWakeInfo;
    *(_QWORD *)(ByteOffset.QuadPart + 24) = UsbhD3ColdSupportInterfaceDereference;
    *(_QWORD *)(ByteOffset.QuadPart + 16) = UsbhD3ColdSupportInterfaceReference;
    *(_QWORD *)(ByteOffset.QuadPart + 48) = UsbhD3ColdSupportInterfaceGetD3ColdCapability;
    *(_QWORD *)(ByteOffset.QuadPart + 56) = UsbhD3ColdSupportInterfaceGetD3ColdBusDriverSupport;
    *(_QWORD *)(ByteOffset.QuadPart + 64) = UsbhD3ColdSupportInterfaceGetLastTransitionStatus;
    UsbhUnlatchPdo(v4[29].DefaultTimeout.QuadPart, v8, (__int64)a2, 0x51554946u);
    goto LABEL_24;
  }
  Log(v4[29].DefaultTimeout.QuadPart, 256, 1902732850, (__int64)a2, a1);
  if ( UsbhRefPdoDeviceHandle(v4[29].DefaultTimeout.QuadPart, a1, (__int64)a2, 0x48446671u) )
    goto LABEL_37;
  v19 = PdoExt(a1);
  v20 = UsbhSyncResetDeviceInternal((PDEVICE_OBJECT)v4[29].DefaultTimeout.QuadPart, (__int64)(v19 + 236), a1);
  Log(v4[29].DefaultTimeout.QuadPart, 256, 1902732882, (__int64)a2, v20);
  if ( (v21 & 0xC0000000) != 0xC0000000 )
  {
    UsbhRefPdoDeviceHandle(v4[29].DefaultTimeout.QuadPart, a1, (__int64)a2, 0x48446671u);
    Log(v4[29].DefaultTimeout.QuadPart, 256, 1902732872, *(_QWORD *)&v4[29].NamedPipeType, a1);
    CurrentStackLocation->Parameters.CreatePipe.Parameters = v23;
LABEL_37:
    Log(v4[29].DefaultTimeout.QuadPart, 256, 1902732872, *(_QWORD *)&v4[29].NamedPipeType, a1);
    CurrentStackLocation->Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)v24;
    if ( v24 )
      UsbhDerefPdoDeviceHandle(v4[29].DefaultTimeout.QuadPart, v24, (__int64)a2, 0x48446671u);
    Log(v4[29].DefaultTimeout.QuadPart, 256, 1902732851, (__int64)a2, a1);
    ++a2->CurrentLocation;
    ++a2->Tail.Overlay.CurrentStackLocation;
    Status = IofCallDriver(v9, a2);
    goto LABEL_35;
  }
  if ( !Usb_Disconnected(v21) )
    UsbhException(
      v4[29].DefaultTimeout.QuadPart,
      WORD2(v4[35].DefaultTimeout.QuadPart),
      0x79u,
      0LL,
      0,
      v22,
      -1,
      usbfile_pdo_c,
      535,
      0);
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
LABEL_35:
  UsbhUnlatchPdo(v4[29].DefaultTimeout.QuadPart, v8, (__int64)a2, 0x51554946u);
  return Status;
}
