/*
 * XREFs of ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x140167070
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x140071C40 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisIMRegisterLayeredMiniport @ 0x140093060 (NdisIMRegisterLayeredMiniport.c)
 *     NdisMRegisterMiniport @ 0x1400940A0 (NdisMRegisterMiniport.c)
 *     ndisDriverReinit @ 0x140095910 (ndisDriverReinit.c)
 *     NdisRegisterProtocol @ 0x1400B8C40 (NdisRegisterProtocol.c)
 *     NdisRegisterProtocolDriver @ 0x1400B9070 (NdisRegisterProtocolDriver.c)
 *     NdisIfRegisterProvider @ 0x1400C9220 (NdisIfRegisterProvider.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x14017BC40 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     <none>
 */

NTSTATUS ndisIfEnsureNsiInitialized(void)
{
  return RtlRunOnceExecuteOnce(&stru_14011CA98, (PRTL_RUN_ONCE_INIT_FN)ndisIfInitializePhase2, 0LL, 0LL);
}
