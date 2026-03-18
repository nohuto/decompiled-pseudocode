/*
 * XREFs of PnpValidateRegistryDword @ 0x1404C6B90
 * Callers:
 *     PnpGetRegistryDword @ 0x1404B5904 (PnpGetRegistryDword.c)
 *     PipDmgInitReadGroupPolicy @ 0x14071B5D8 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14071D504 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14071E608 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x14071E830 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x14071F168 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14071F1D8 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgMigrateDevice @ 0x14094DC38 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x14095F8EC (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x14095FF4C (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgVerifyService @ 0x140A7B0B8 (PiDevCfgVerifyService.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140A89FC0 (PiDevCfgResolveVariableDeviceProperty.c)
 * Callees:
 *     <none>
 */

bool __fastcall PnpValidateRegistryDword(__int64 a1)
{
  return *(_DWORD *)(a1 + 4) == 4 && *(_DWORD *)(a1 + 12) == 4;
}
