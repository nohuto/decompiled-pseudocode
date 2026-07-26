/*
 * XREFs of NdisMRegisterMiniportDriver @ 0x140087B50
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x140087B70 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 */

NDIS_STATUS __stdcall NdisMRegisterMiniportDriver(
        PDRIVER_OBJECT DriverObject,
        PUNICODE_STRING RegistryPath,
        NDIS_HANDLE MiniportDriverContext,
        PNDIS_MINIPORT_DRIVER_CHARACTERISTICS MiniportDriverCharacteristics,
        PNDIS_HANDLE NdisMiniportDriverHandle)
{
  return ndisInternalRegisterMiniportDriver(
           DriverObject,
           RegistryPath,
           MiniportDriverContext,
           MiniportDriverCharacteristics,
           NdisMiniportDriverHandle);
}
