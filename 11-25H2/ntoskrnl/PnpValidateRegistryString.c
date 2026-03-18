/*
 * XREFs of PnpValidateRegistryString @ 0x1404ABB64
 * Callers:
 *     PiDevCfgQueryPolicyStringList @ 0x14071F1D8 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14071F7F0 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x14071FEF0 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x1407200D0 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiDevCfgBuildIndirectString @ 0x1409824B0 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgResolveVariable @ 0x140A67A58 (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140A89FC0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140A968D4 (PiDevCfgResolveVariableKeyHandle.c)
 * Callees:
 *     PnpValidateStringData @ 0x1404ABBA0 (PnpValidateStringData.c)
 */

char __fastcall PnpValidateRegistryString(_DWORD *a1)
{
  char v1; // r9

  if ( a1[1] != 1 || !(unsigned __int8)PnpValidateStringData((char *)a1 + (unsigned int)a1[2], (unsigned int)a1[3]) )
    return 0;
  return v1;
}
