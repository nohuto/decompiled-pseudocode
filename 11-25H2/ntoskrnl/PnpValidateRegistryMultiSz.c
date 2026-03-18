/*
 * XREFs of PnpValidateRegistryMultiSz @ 0x1404D2918
 * Callers:
 *     PiDevCfgQueryIncludedDriverNode @ 0x14071ECF8 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14071F7F0 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14094C0A4 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariableExpression @ 0x140A8C530 (PiDevCfgResolveVariableExpression.c)
 * Callees:
 *     PnpValidateMultiSzData @ 0x1404B3054 (PnpValidateMultiSzData.c)
 */

bool __fastcall PnpValidateRegistryMultiSz(_DWORD *a1)
{
  char v1; // r9

  v1 = 0;
  if ( a1[1] == 7 )
    return PnpValidateMultiSzData((_DWORD *)((char *)a1 + (unsigned int)a1[2]), a1[3]) != 0;
  return v1;
}
