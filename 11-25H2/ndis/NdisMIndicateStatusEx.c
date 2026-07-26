/*
 * XREFs of NdisMIndicateStatusEx @ 0x140069730
 * Callers:
 *     ?ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x140012DA0 (-ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z @ 0x14003DEF0 (-ndisMResetMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_RESET_REASON@@@Z.c)
 *     ndisWdfDevicePowerOn @ 0x140063BC0 (ndisWdfDevicePowerOn.c)
 *     ?ndisOidPostMediaState@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14006E800 (-ndisOidPostMediaState@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisOidPostLinkSpeed@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x14006EB10 (-ndisOidPostLinkSpeed@@YAXPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     NdisMIndicateStatus @ 0x140099D40 (NdisMIndicateStatus.c)
 *     ?ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400A644C (-ndisMProcessResetRequested@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisMReset@@YAHPEAX@Z @ 0x1400A6920 (-ndisMReset@@YAHPEAX@Z.c)
 *     ndisWdfDevicePowerDown @ 0x1400B7C00 (ndisWdfDevicePowerDown.c)
 *     ?ndisIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400BA8F8 (-ndisIndicatePMCapabilities@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPMRejectAsync@@YAXPEAX@Z @ 0x1400BBA00 (-ndisPMRejectAsync@@YAXPEAX@Z.c)
 *     ?ndisRejectUnsupportedPMOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400BC834 (-ndisRejectUnsupportedPMOffloads@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRejectUnsupportedWoLPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400BCA88 (-ndisRejectUnsupportedWoLPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisDevicePowerOn@@YAXPEAX@Z @ 0x14017E5D0 (-ndisDevicePowerOn@@YAXPEAX@Z.c)
 *     ?ndisDevicePowerDown@@YAXPEAX@Z @ 0x1401812C0 (-ndisDevicePowerDown@@YAXPEAX@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401846F0 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 */

void __stdcall NdisMIndicateStatusEx(NDIS_HANDLE MiniportAdapterHandle, PNDIS_STATUS_INDICATION StatusIndication)
{
  __int64 v4; // rdx
  char *v5; // rcx

  v4 = *((_QWORD *)MiniportAdapterHandle + 661);
  v5 = (char *)g_MiniportHookDrivers + 128 * (__int64)*(int *)(*((_QWORD *)MiniportAdapterHandle + 470) + 896LL);
  (*((void (__fastcall **)(_QWORD, __int64, NDIS_HANDLE, PNDIS_STATUS_INDICATION))v5 + 8))(
    *((_QWORD *)v5 + 3),
    v4,
    MiniportAdapterHandle,
    StatusIndication);
}
