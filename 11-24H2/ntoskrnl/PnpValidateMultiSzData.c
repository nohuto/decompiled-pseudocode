/*
 * XREFs of PnpValidateMultiSzData @ 0x1404B3254
 * Callers:
 *     PnpValidateRegistryMultiSz @ 0x1404D2868 (PnpValidateRegistryMultiSz.c)
 *     PnpValidateRegistryValue @ 0x1405A70B8 (PnpValidateRegistryValue.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140831268 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryObjectProperties @ 0x1409978B4 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14099CA94 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgClearDeviceMigrationNode @ 0x140A6A994 (PiDevCfgClearDeviceMigrationNode.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140A8EF90 (PiDevCfgResolveVariableDeviceProperty.c)
 * Callees:
 *     <none>
 */

char __fastcall PnpValidateMultiSzData(_WORD *a1, unsigned int a2)
{
  char result; // al
  unsigned __int64 v3; // r8

  result = 0;
  if ( a2 >= 4 )
  {
    v3 = (unsigned __int64)a2 >> 1;
    if ( a1[v3 - 1] )
      return result;
    if ( !a1[v3 - 2] )
      return 1;
  }
  if ( a2 == 2 && !*a1 )
    return 1;
  return result;
}
