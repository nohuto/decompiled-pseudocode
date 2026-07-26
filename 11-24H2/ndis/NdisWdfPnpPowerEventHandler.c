/*
 * XREFs of NdisWdfPnpPowerEventHandler @ 0x14005F180
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x14002E9A0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisWdfSendPmParametersForSx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003B1B0 (-ndisWdfSendPmParametersForSx@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfSendPmParametersForS0Idle@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14003C2E0 (-ndisWdfSendPmParametersForS0Idle@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x14005F1F0 (-ndisStartDeviceSynchronous@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400806E0 (-ndisPnPIrpSurpriseRemoval@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400864C0 (-ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     NdisWdfMiniportDataPathPause @ 0x140094B10 (NdisWdfMiniportDataPathPause.c)
 *     ?ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1400A7530 (-ndisPnPIrpStopDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14013EAD4 (-ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14013EB08 (-ndisWdfPostReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWdfPreReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14013EBFC (-ndisWdfPreReleaseHardware@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x14016B5D0 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 */

__int64 __fastcall NdisWdfPnpPowerEventHandler(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
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
        a1->OldPnPDeviceState = a1->PnPDeviceState;
        a1->PnPDeviceState = NdisPnPDeviceQueryStopped;
        v6 = ndisPnPIrpStopDevice((struct _DEVICE_OBJECT *)0x140000000LL, a1, 0LL, v4, &v8);
        if ( v6 )
          __int2c();
        NdisWdfMiniportDataPathPause(a1);
        break;
      case 6:
        started = ndisPnPIrpSurpriseRemoval((struct _DEVICE_OBJECT *)0x140000000LL, a1, 0LL, &v8, &v8);
        goto LABEL_3;
      case 7:
        started = ndisPnPIrpRemoveDevice(a1->DeviceObject, a1, 0LL, &v8, &v8);
        goto LABEL_3;
      case 10:
        ndisWdfSendPmParametersForS0Idle(a1);
        v6 = 0;
        break;
      case 11:
        if ( a1->SelectiveSuspend )
          ndisSelectiveSuspendClearStop(a1, 9LL);
        v6 = 0;
        break;
      case 12:
        v6 = -1073741822;
        break;
      case 14:
        ndisWdfSendPmParametersForSx(a1);
        v6 = 0;
        break;
      case 17:
        started = ndisWdfPreReleaseHardware(a1);
        goto LABEL_3;
      case 18:
        started = ndisWdfPostReleaseHardware(a1);
        goto LABEL_3;
      case 19:
        a1->PnPDeviceState = NdisPnPDeviceStopped;
        NdisWdfMiniportDataPathPause(a1);
        v6 = 0;
        break;
      case 20:
        started = ndisWdfDeviceObjectCleanup(a1);
        goto LABEL_3;
      default:
        v6 = -1073741811;
        break;
    }
  }
  else
  {
    started = ndisStartDeviceSynchronous(a1, 0LL);
LABEL_3:
    v6 = started;
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  return v6;
}
