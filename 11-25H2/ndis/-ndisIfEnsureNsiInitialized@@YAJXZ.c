/*
 * XREFs of ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x1401737F0
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x140087B70 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisIMRegisterLayeredMiniport @ 0x14009CC80 (NdisIMRegisterLayeredMiniport.c)
 *     NdisMRegisterMiniport @ 0x14009DCC0 (NdisMRegisterMiniport.c)
 *     ndisDriverReinit @ 0x14009F460 (ndisDriverReinit.c)
 *     NdisRegisterProtocol @ 0x1400BFF60 (NdisRegisterProtocol.c)
 *     NdisRegisterProtocolDriver @ 0x1400C0320 (NdisRegisterProtocolDriver.c)
 *     NdisIfRegisterProvider @ 0x1400D0330 (NdisIfRegisterProvider.c)
 *     ?ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPER_CONFIGURATION_HANDLE@@PEAU_UNICODE_STRING@@PEAX@Z @ 0x140186B80 (-ndisMInitializeAdapter@@YAHPEAU_NDIS_M_DRIVER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_WRAPPE.c)
 * Callees:
 *     <none>
 */

NTSTATUS ndisIfEnsureNsiInitialized(void)
{
  return RtlRunOnceExecuteOnce(&stru_140126AD8, (PRTL_RUN_ONCE_INIT_FN)ndisIfInitializePhase2, 0LL, 0LL);
}
