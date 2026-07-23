/*
 * XREFs of PnpValidateRegistryValue @ 0x1405A40A8
 * Callers:
 *     PiDevCfgResolveVariableConstant @ 0x140729690 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x140729D80 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140729E60 (PiDevCfgResolveVariableKeyValue.c)
 * Callees:
 *     PnpValidateStringData @ 0x1404A7600 (PnpValidateStringData.c)
 *     PnpValidateMultiSzData @ 0x1404ADA64 (PnpValidateMultiSzData.c)
 */

char __fastcall PnpValidateRegistryValue(_DWORD *a1)
{
  int v1; // eax
  char v2; // dl

  v1 = a1[1];
  v2 = 1;
  switch ( v1 )
  {
    case 1:
    case 2:
      return PnpValidateStringData((__int64)a1 + (unsigned int)a1[2], a1[3]);
    case 3:
      return v2;
    case 4:
      return a1[3] == 4;
    case 7:
      return PnpValidateMultiSzData((_DWORD *)((char *)a1 + (unsigned int)a1[2]), a1[3]);
    case 32768:
    case -1:
      return 0;
  }
  return v2;
}
