/*
 * XREFs of ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x140036ED0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisPnPIrpQueryCapabilities@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x140035870 (-ndisPnPIrpQueryCapabilities@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     WPP_RECORDER_SF_qLL @ 0x140035A80 (WPP_RECORDER_SF_qLL.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400388D0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x14005EDE0 (-ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400806E0 (-ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpFilterResourceRequirements@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x14008ADF0 (-ndisPnPIrpFilterResourceRequirements@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP.c)
 *     ?ndisPnPIrpQueryPnPDeviceState@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x14008C950 (-ndisPnPIrpQueryPnPDeviceState@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3.c)
 *     ?ndisPnPIrpCancelRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400A704C (-ndisPnPIrpCancelRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpCancelStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400A714C (-ndisPnPIrpCancelStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpDeviceUsageNotification@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400A7244 (-ndisPnPIrpDeviceUsageNotification@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@P.c)
 *     ?ndisPnPIrpQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400A730C (-ndisPnPIrpQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpQueryRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400A7378 (-ndisPnPIrpQueryRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpQueryStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400A7468 (-ndisPnPIrpQueryStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400A7530 (-ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x14016B5D0 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 */

__int64 __fastcall ndisPnPDispatch(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  unsigned int v2; // ebx
  int MinorFunction; // ebp
  struct _IRP *v4; // rsi
  int v6; // edx
  struct _DEVICE_OBJECT *v7; // rcx
  unsigned __int8 *v8; // r9
  struct _NDIS_MINIPORT_BLOCK *DeviceExtension; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int started; // eax
  int v12; // edx
  char v14[8]; // [rsp+30h] [rbp-38h]
  char v15; // [rsp+30h] [rbp-38h]
  unsigned __int8 v16; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 v17; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0;
  v16 = 1;
  LOBYTE(MinorFunction) = 0;
  v17 = 1;
  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      48,
      (struct _GUID *)&WPP_c993d3286aac3856ef9e8dc1fba97826_Traceguids,
      (char)a1,
      v15);
  }
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  DeviceExtension = (struct _NDIS_MINIPORT_BLOCK *)a1->DeviceExtension;
  if ( DeviceExtension->Header.Type != 17 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        13,
        49,
        (struct _GUID *)&WPP_c993d3286aac3856ef9e8dc1fba97826_Traceguids,
        (char)a1,
        (char)v4);
    }
    v2 = -1073741808;
LABEL_15:
    v4->IoStatus.Status = v2;
    IofCompleteRequest(v4, 0);
    goto LABEL_16;
  }
  CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v14 = CurrentStackLocation->MinorFunction;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x32u,
      (struct _GUID *)&WPP_c993d3286aac3856ef9e8dc1fba97826_Traceguids,
      (char)DeviceExtension,
      *(_QWORD *)v14);
  }
  if ( Microsoft_Windows_NDISEnableBits < 0 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD, _DWORD))McTemplateK0jqxd_EtwWriteTransfer)(
      v7,
      &DispatchPnPIrp,
      &DeviceExtension->InterfaceGuid,
      &DeviceExtension->InterfaceGuid,
      DeviceExtension->IfIndex,
      (_NET_LUID_LH)DeviceExtension->NetLuid.Value,
      MinorFunction);
  switch ( MinorFunction )
  {
    case 9:
      started = ndisPnPIrpQueryCapabilities(v7, DeviceExtension, v4, v8, &v16);
      break;
    case 13:
      started = ndisPnPIrpFilterResourceRequirements(v7, DeviceExtension, v4, v8, &v16);
      break;
    case 20:
      started = ndisPnPIrpQueryPnPDeviceState(v7, DeviceExtension, v4, v8, &v16);
      break;
    default:
      switch ( MinorFunction )
      {
        case 0:
          started = ndisPnPIrpStartDevice(v7, DeviceExtension, v4, &v17, &v16);
          goto LABEL_13;
        case 1:
          started = ndisPnPIrpQueryRemove(v7, DeviceExtension, v4, v8, &v16);
          goto LABEL_13;
        case 2:
          started = ndisPnPIrpRemoveDevice(a1, DeviceExtension, v4, &v17, &v16);
          goto LABEL_13;
        case 3:
          started = ndisPnPIrpCancelRemove(v7, DeviceExtension, v4, &v17, &v16);
          goto LABEL_13;
        case 4:
          started = ndisPnPIrpStopDevice(v7, DeviceExtension, v4, v8, &v16);
          goto LABEL_13;
        case 5:
          started = ndisPnPIrpQueryStop(v7, DeviceExtension, v4, v8, &v16);
          goto LABEL_13;
        case 6:
          started = ndisPnPIrpCancelStop(v7, DeviceExtension, v4, &v17, &v16);
          goto LABEL_13;
        case 8:
          started = ndisPnPIrpQueryInterface(v7, DeviceExtension, v4, v8, &v16);
          goto LABEL_13;
        case 22:
          started = ndisPnPIrpDeviceUsageNotification(a1, DeviceExtension, v4, v8, &v16);
          goto LABEL_13;
        case 23:
          started = ndisPnPIrpSurpriseRemoval(v7, DeviceExtension, v4, &v17, &v16);
          goto LABEL_13;
        default:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            *(_DWORD *)v14 = MinorFunction;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0xDu,
              0x33u,
              (struct _GUID *)&WPP_c993d3286aac3856ef9e8dc1fba97826_Traceguids,
              (char)DeviceExtension,
              *(_QWORD *)v14);
          }
          goto LABEL_22;
      }
  }
LABEL_13:
  v2 = started;
  if ( !v16 )
  {
LABEL_14:
    if ( !v17 )
      goto LABEL_16;
    goto LABEL_15;
  }
LABEL_22:
  if ( !DeviceExtension->NextDeviceObject )
    goto LABEL_14;
  ++v4->CurrentLocation;
  ++v4->Tail.Overlay.CurrentStackLocation;
  v2 = IofCallDriver(DeviceExtension->NextDeviceObject, v4);
LABEL_16:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      0xDu,
      0x34u,
      (struct _GUID *)&WPP_c993d3286aac3856ef9e8dc1fba97826_Traceguids,
      (char)DeviceExtension,
      MinorFunction,
      v2);
  return v2;
}
