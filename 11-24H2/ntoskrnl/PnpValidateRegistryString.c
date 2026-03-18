/*
 * XREFs of PnpValidateRegistryString @ 0x1404ACEE0
 * Callers:
 *     PiDevCfgQueryPolicyStringList @ 0x14072B158 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14072B770 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x14072BE70 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x14072C050 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiDevCfgBuildIndirectString @ 0x140A65E4C (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgResolveVariable @ 0x140A6A668 (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140A8EF90 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140A9C7E4 (PiDevCfgResolveVariableKeyHandle.c)
 * Callees:
 *     PnpValidateStringData @ 0x1404ACF1C (PnpValidateStringData.c)
 */

char __fastcall PnpValidateRegistryString(_DWORD *a1)
{
  char v1; // r9

  if ( a1[1] != 1 || !(unsigned __int8)PnpValidateStringData((char *)a1 + (unsigned int)a1[2], (unsigned int)a1[3]) )
    return 0;
  return v1;
}
