/*
 * XREFs of PnpValidateRegistryDword @ 0x1404C71B4
 * Callers:
 *     PnpGetRegistryDword @ 0x1404B53A4 (PnpGetRegistryDword.c)
 *     PipDmgInitReadGroupPolicy @ 0x140727558 (PipDmgInitReadGroupPolicy.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140729484 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14072A588 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateRootDevice @ 0x14072A7B0 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x14072B0E8 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14072B158 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140964604 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x140964C64 (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgMigrateDevice @ 0x14099A6AC (PiDevCfgMigrateDevice.c)
 *     PiDevCfgVerifyService @ 0x140A7E540 (PiDevCfgVerifyService.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140A8EF90 (PiDevCfgResolveVariableDeviceProperty.c)
 * Callees:
 *     <none>
 */

bool __fastcall PnpValidateRegistryDword(__int64 a1)
{
  return *(_DWORD *)(a1 + 4) == 4 && *(_DWORD *)(a1 + 12) == 4;
}
