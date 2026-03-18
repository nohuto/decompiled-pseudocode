/*
 * XREFs of PnpIsNullGuid @ 0x1408D3190
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x1408C7450 (PiPnpRtlCmActionCallback.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x1408D2DD0 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDevCfgFindDeviceDriver @ 0x140995E90 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgConfigureDevice @ 0x140997CFC (PiDevCfgConfigureDevice.c)
 *     PiDqIrpQueryCreate @ 0x1409F9A10 (PiDqIrpQueryCreate.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x140A847DC (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgBuildDriverConfigurationId @ 0x140AA3FD0 (PiDevCfgBuildDriverConfigurationId.c)
 * Callees:
 *     RtlCompareMemory @ 0x1406B3990 (RtlCompareMemory.c)
 */

bool __fastcall PnpIsNullGuid(void *Source2)
{
  return RtlCompareMemory(&CPER_EMPTY_GUID, Source2, 0x10uLL) == 16;
}
