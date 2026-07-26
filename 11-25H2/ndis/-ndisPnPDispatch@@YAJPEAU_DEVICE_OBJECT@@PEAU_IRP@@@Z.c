/*
 * XREFs of ?ndisPnPDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x140057300
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x14000EA50 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1400246C0 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x14004E200 (-ndisPnPIrpStartDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     WPP_RECORDER_SF_qLL @ 0x1400575D0 (WPP_RECORDER_SF_qLL.c)
 *     ?ndisPnPIrpQueryCapabilities@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400576B0 (-ndisPnPIrpQueryCapabilities@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400899C0 (-ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpFilterResourceRequirements@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x140096050 (-ndisPnPIrpFilterResourceRequirements@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP.c)
 *     ?ndisPnPIrpQueryPnPDeviceState@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x140098100 (-ndisPnPIrpQueryPnPDeviceState@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3.c)
 *     ?ndisPnPIrpCancelRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400AF1FC (-ndisPnPIrpCancelRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpCancelStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400AF2FC (-ndisPnPIrpCancelStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpDeviceUsageNotification@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400AF3F4 (-ndisPnPIrpDeviceUsageNotification@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@P.c)
 *     ?ndisPnPIrpQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400AF4BC (-ndisPnPIrpQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpQueryRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400AF528 (-ndisPnPIrpQueryRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpQueryStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400AF618 (-ndisPnPIrpQueryStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400AF6E0 (-ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x140171EF0 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 */

__int64 __fastcall ndisPnPDispatch(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  unsigned int v2; // ebx
  int MinorFunction; // ebp
  struct _DEVICE_OBJECT *v6; // rcx
  unsigned __int8 *v7; // r9
  struct _NDIS_MINIPORT_BLOCK *DeviceExtension; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int started; // eax
  int v11; // edx
  struct _GUID *v13; // [rsp+20h] [rbp-48h]
  __int64 v14; // [rsp+30h] [rbp-38h]
  unsigned __int8 v15; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int8 v16; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0;
  v15 = 1;
  LOBYTE(MinorFunction) = 0;
  v16 = 1;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x30u,
      (struct _GUID *)&WPP_9bb8ec1ef83f308ecc9e50971342ac55_Traceguids,
      (char)a1,
      a2);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  DeviceExtension = (struct _NDIS_MINIPORT_BLOCK *)a1->DeviceExtension;
  if ( DeviceExtension->Header.Type != 17 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xDu,
        0x31u,
        (struct _GUID *)&WPP_9bb8ec1ef83f308ecc9e50971342ac55_Traceguids,
        (char)a1,
        a2);
    v2 = -1073741808;
LABEL_15:
    a2->IoStatus.Status = v2;
    IofCompleteRequest(a2, 0);
    goto LABEL_16;
  }
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v14) = CurrentStackLocation->MinorFunction;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0x32u,
      (struct _GUID *)&WPP_9bb8ec1ef83f308ecc9e50971342ac55_Traceguids,
      (char)DeviceExtension,
      v14);
  }
  if ( Microsoft_Windows_NDISEnableBits < 0 )
  {
    LODWORD(v14) = MinorFunction;
    LODWORD(v13) = DeviceExtension->IfIndex;
    McTemplateK0jqxd_EtwWriteTransfer(
      (__int64)v6,
      &DispatchPnPIrp,
      &DeviceExtension->InterfaceGuid,
      (__int64)&DeviceExtension->InterfaceGuid,
      (__int64)v13,
      DeviceExtension->NetLuid.Value,
      v14);
  }
  switch ( MinorFunction )
  {
    case 9:
      started = ndisPnPIrpQueryCapabilities(v6, DeviceExtension, a2, v7, &v15);
      break;
    case 13:
      started = ndisPnPIrpFilterResourceRequirements(v6, DeviceExtension, a2, v7, &v15);
      break;
    case 20:
      started = ndisPnPIrpQueryPnPDeviceState(v6, DeviceExtension, a2, v7, &v15);
      break;
    default:
      switch ( MinorFunction )
      {
        case 0:
          started = ndisPnPIrpStartDevice(v6, DeviceExtension, a2, &v16, &v15);
          goto LABEL_13;
        case 1:
          started = ndisPnPIrpQueryRemove(v6, DeviceExtension, a2, v7, &v15);
          goto LABEL_13;
        case 2:
          started = ndisPnPIrpRemoveDevice(a1, DeviceExtension, a2, &v16, &v15);
          goto LABEL_13;
        case 3:
          started = ndisPnPIrpCancelRemove(v6, DeviceExtension, a2, &v16, &v15);
          goto LABEL_13;
        case 4:
          started = ndisPnPIrpStopDevice(v6, DeviceExtension, a2, v7, &v15);
          goto LABEL_13;
        case 5:
          started = ndisPnPIrpQueryStop(v6, DeviceExtension, a2, v7, &v15);
          goto LABEL_13;
        case 6:
          started = ndisPnPIrpCancelStop(v6, DeviceExtension, a2, &v16, &v15);
          goto LABEL_13;
        case 8:
          started = ndisPnPIrpQueryInterface(v6, DeviceExtension, a2, v7, &v15);
          goto LABEL_13;
        case 22:
          started = ndisPnPIrpDeviceUsageNotification(a1, DeviceExtension, a2, v7, &v15);
          goto LABEL_13;
        case 23:
          started = ndisPnPIrpSurpriseRemoval(v6, DeviceExtension, a2, &v16, &v15);
          goto LABEL_13;
        default:
          if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          {
            LODWORD(v14) = MinorFunction;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0xDu,
              0x33u,
              (struct _GUID *)&WPP_9bb8ec1ef83f308ecc9e50971342ac55_Traceguids,
              (char)DeviceExtension,
              v14);
          }
          goto LABEL_22;
      }
  }
LABEL_13:
  v2 = started;
  if ( !v15 )
  {
LABEL_14:
    if ( !v16 )
      goto LABEL_16;
    goto LABEL_15;
  }
LABEL_22:
  if ( !DeviceExtension->NextDeviceObject )
    goto LABEL_14;
  ++a2->CurrentLocation;
  ++a2->Tail.Overlay.CurrentStackLocation;
  v2 = IofCallDriver(DeviceExtension->NextDeviceObject, a2);
LABEL_16:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      13,
      52,
      (struct _GUID *)&WPP_9bb8ec1ef83f308ecc9e50971342ac55_Traceguids,
      (char)DeviceExtension,
      MinorFunction,
      v2);
  return v2;
}
