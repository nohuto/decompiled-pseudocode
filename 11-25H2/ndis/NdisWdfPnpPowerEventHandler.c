/*
 * XREFs of NdisWdfPnpPowerEventHandler @ 0x14004E5A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002B910 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14004E610 (-ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisWdfSendPmParametersForS0Idle@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140063560 (-ndisWdfSendPmParametersForS0Idle@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfSendPmParametersForSx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140064C80 (-ndisWdfSendPmParametersForSx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x140085AD0 (-ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400899C0 (-ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     NdisWdfMiniportDataPathPause @ 0x14009E670 (NdisWdfMiniportDataPathPause.c)
 *     ?ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400AF6E0 (-ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401499B4 (-ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401499E8 (-ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfPreReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140149ABC (-ndisWdfPreReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x140171EF0 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 */

__int64 __fastcall NdisWdfPnpPowerEventHandler(_NDIS_MINIPORT_BLOCK *this, int a2)
{
  unsigned __int8 *v4; // r9
  int started; // eax
  unsigned int v6; // ebx
  unsigned __int8 v8; // [rsp+48h] [rbp+10h] BYREF

  v8 = 0;
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( a2 )
  {
    switch ( a2 )
    {
      case 3:
        this->OldPnPDeviceState = this->PnPDeviceState;
        this->PnPDeviceState = NdisPnPDeviceQueryStopped;
        v6 = ndisPnPIrpStopDevice((struct _DEVICE_OBJECT *)0x140000000LL, this, 0LL, v4, &v8);
        if ( v6 )
          __int2c();
        NdisWdfMiniportDataPathPause(this);
        break;
      case 6:
        started = ndisPnPIrpSurpriseRemoval((struct _DEVICE_OBJECT *)0x140000000LL, this, 0LL, &v8, &v8);
        goto LABEL_3;
      case 7:
        started = ndisPnPIrpRemoveDevice(this->DeviceObject, this, 0LL, &v8, &v8);
        goto LABEL_3;
      case 10:
        ndisWdfSendPmParametersForS0Idle(this);
        v6 = 0;
        break;
      case 11:
        if ( this->SelectiveSuspend )
          ndisSelectiveSuspendClearStop(this, 9LL);
        v6 = 0;
        break;
      case 12:
        v6 = -1073741822;
        break;
      case 14:
        ndisWdfSendPmParametersForSx(this);
        v6 = 0;
        break;
      case 17:
        started = ndisWdfPreReleaseHardware(this);
        goto LABEL_3;
      case 18:
        started = ndisWdfPostReleaseHardware(this);
        goto LABEL_3;
      case 19:
        this->PnPDeviceState = NdisPnPDeviceStopped;
        NdisWdfMiniportDataPathPause(this);
        v6 = 0;
        break;
      case 20:
        started = ndisWdfDeviceObjectCleanup(this);
        goto LABEL_3;
      default:
        v6 = -1073741811;
        break;
    }
  }
  else
  {
    started = ndisStartDeviceSynchronous(this, 0LL);
LABEL_3:
    v6 = started;
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  return v6;
}
