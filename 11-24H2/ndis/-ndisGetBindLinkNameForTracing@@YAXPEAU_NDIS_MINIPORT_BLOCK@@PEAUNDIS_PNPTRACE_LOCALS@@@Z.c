/*
 * XREFs of ?ndisGetBindLinkNameForTracing@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x140143E34
 * Callers:
 *     ?ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x140051D30 (-ndisPrepForLowPowerCommon@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ndisWdfDevicePowerOn @ 0x1400822C0 (ndisWdfDevicePowerOn.c)
 *     NdisWdfMiniportDataPathPause @ 0x140094B10 (NdisWdfMiniportDataPathPause.c)
 *     NdisWdfMiniportDataPathStart @ 0x140094BF0 (NdisWdfMiniportDataPathStart.c)
 *     ?ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z @ 0x140098EC4 (-ndisIMInitializeDeviceInstanceInternal@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAX@Z.c)
 *     NdisMSetMiniportSecondary @ 0x1400A00C0 (NdisMSetMiniportSecondary.c)
 *     ?ndisMQueuedPromoteMiniport@@YAXPEAX@Z @ 0x1401382D0 (-ndisMQueuedPromoteMiniport@@YAXPEAX@Z.c)
 *     ?PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x140158050 (-PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140158780 (-ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1401610C0 (-ndisMApplyInterfaceChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KPEAU_NDIS_STATUS_INDICATION@@@Z.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x140161630 (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 *     ?ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x140164600 (-ndisMRestartMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140176710 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1401771E0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017BC40 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x140180650 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x140180E40 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisGetBindLinkNameForTracing(struct _NDIS_MINIPORT_BLOCK *a1, struct NDIS_PNPTRACE_LOCALS *a2)
{
  _UNICODE_STRING *pAdapterInstanceName; // rax

  pAdapterInstanceName = 0LL;
  *(_QWORD *)a2 = a1;
  if ( a1 )
    pAdapterInstanceName = a1->pAdapterInstanceName;
  *((_QWORD *)a2 + 1) = pAdapterInstanceName;
}
