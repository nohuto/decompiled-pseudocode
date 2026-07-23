/*
 * XREFs of PnpValidateRegistryDword @ 0x1404C0614
 * Callers:
 *     PnpGetRegistryDword @ 0x1404AFC44 (PnpGetRegistryDword.c)
 *     PipDmgInitReadGroupPolicy @ 0x1407250E8 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1407270E0 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1407281D8 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x140728400 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x140728F98 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x140729008 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x14094C3DC (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x14094CA3C (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgVerifyService @ 0x1409C8528 (PiDevCfgVerifyService.c)
 *     PiDevCfgMigrateDevice @ 0x1409CCE1C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140A8B600 (PiDevCfgResolveVariableDeviceProperty.c)
 * Callees:
 *     <none>
 */

bool __fastcall PnpValidateRegistryDword(__int64 a1)
{
  return *(_DWORD *)(a1 + 4) == 4 && *(_DWORD *)(a1 + 12) == 4;
}
