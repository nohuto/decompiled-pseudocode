/*
 * XREFs of PnpValidateStringData @ 0x1404ABBA0
 * Callers:
 *     PnpValidateRegistryString @ 0x1404ABB64 (PnpValidateRegistryString.c)
 *     PiDevCfgQueryResolveValue @ 0x1405A36AC (PiDevCfgQueryResolveValue.c)
 *     PnpValidateRegistryValue @ 0x1405A38A8 (PnpValidateRegistryValue.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14071E608 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgQueryObjectProperties @ 0x140892AE0 (PiDevCfgQueryObjectProperties.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14094C0A4 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x14094C804 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140A89FC0 (PiDevCfgResolveVariableDeviceProperty.c)
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
