/*
 * XREFs of PnpValidateStringData @ 0x1404A7600
 * Callers:
 *     PnpValidateRegistryString @ 0x1404A75C4 (PnpValidateRegistryString.c)
 *     PiDevCfgQueryResolveValue @ 0x1405A3EAC (PiDevCfgQueryResolveValue.c)
 *     PnpValidateRegistryValue @ 0x1405A40A8 (PnpValidateRegistryValue.c)
 *     PiDevCfgMakeServiceBootStart @ 0x1407281D8 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgQueryObjectProperties @ 0x1409CA030 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgCopyDeviceKey @ 0x1409CE174 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveMultiSzValue @ 0x1409CF204 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140A8B600 (PiDevCfgResolveVariableDeviceProperty.c)
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
