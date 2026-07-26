/*
 * XREFs of ?ndisMDereferenceIfBlock@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1400350F0
 * Callers:
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x14002B6B0 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x14002FEF0 (-ndisWmiChangeSingleInstance@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_GUID@@QEAUtagWNODE_SINGLE_I.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1400336D0 (NdisIMDeInitializeDeviceInstance.c)
 *     ?ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z @ 0x140034920 (-ndisIndicateInitialStateToBinding@@YAXPEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ?ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x140034E10 (-ndisIfSetInterfaceState@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ndisIfDetachMiniportBlock @ 0x140072670 (ndisIfDetachMiniportBlock.c)
 *     ?ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTRIBUTES@@@Z @ 0x14007EC60 (-ndisMSetGeneralAttributes@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_MINIPORT_ADAPTER_GENERAL_ATTR.c)
 *     ndisWdfDevicePowerOn @ 0x1400822C0 (ndisWdfDevicePowerOn.c)
 *     NdisMReenumerateFailedAdapter @ 0x1400A79A0 (NdisMReenumerateFailedAdapter.c)
 *     ndisWdfDevicePowerDown @ 0x1400AFC70 (ndisWdfDevicePowerDown.c)
 *     ?ndisMUpdateInterfaceWorker@@YAXPEAX@Z @ 0x1401383D0 (-ndisMUpdateInterfaceWorker@@YAXPEAX@Z.c)
 *     ?ndisQueuedReenumerateFailedAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x14013E9E0 (-ndisQueuedReenumerateFailedAdapter@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x14016B4A0 (-ndisMiniportFatalError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ndisPktMonMiniportRegister @ 0x14016BAF0 (ndisPktMonMiniportRegister.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x140180650 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x140180E40 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140181E10 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     ?IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x140014E70 (-IFBLOCK_DEREFERENCE_MINIPORT_LINK@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z.c)
 */

void __fastcall ndisMDereferenceIfBlock(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2)
{
  KIRQL v4; // bl

  v4 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  IFBLOCK_DEREFERENCE_MINIPORT_LINK(a1->IfBlock, a2);
  KeReleaseSpinLock(&SpinLock, v4);
}
