/*
 * XREFs of PnpIsNullGuid @ 0x140838480
 * Callers:
 *     PiDqIrpQueryCreate @ 0x140837A74 (PiDqIrpQueryCreate.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1408380E0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14088E9E0 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgFindDeviceDriver @ 0x1408914DC (PiDevCfgFindDeviceDriver.c)
 *     PiPnpRtlCmActionCallback @ 0x1408C95E0 (PiPnpRtlCmActionCallback.c)
 *     PiDevCfgConfigureDevice @ 0x14097F7D4 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140A9E750 (PiDevCfgBuildDriverConfigurationId.c)
 * Callees:
 *     RtlCompareMemory @ 0x1406A86C0 (RtlCompareMemory.c)
 */

bool __fastcall PnpIsNullGuid(void *Source2)
{
  return RtlCompareMemory(&CPER_EMPTY_GUID, Source2, 0x10uLL) == 16;
}
