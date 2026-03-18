/*
 * XREFs of PnpValidateStringData @ 0x1404ACF1C
 * Callers:
 *     PnpValidateRegistryString @ 0x1404ACEE0 (PnpValidateRegistryString.c)
 *     PiDevCfgQueryResolveValue @ 0x1405A6EBC (PiDevCfgQueryResolveValue.c)
 *     PnpValidateRegistryValue @ 0x1405A70B8 (PnpValidateRegistryValue.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14072A588 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgQueryObjectProperties @ 0x1409978B4 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgCopyDeviceKey @ 0x14099BA04 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14099CA94 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140A8EF90 (PiDevCfgResolveVariableDeviceProperty.c)
 * Callees:
 *     <none>
 */

bool __fastcall PnpValidateStringData(__int64 a1, unsigned int a2)
{
  char v2; // r8

  v2 = 0;
  if ( a2 >= 2 )
    return *(_WORD *)(a1 + 2 * ((unsigned __int64)a2 >> 1) - 2) == 0;
  return v2;
}
