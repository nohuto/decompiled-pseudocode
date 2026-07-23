/*
 * XREFs of PiDevCfgQueryPolicyEnabled @ 0x140728F98
 * Callers:
 *     PiDevCfgReadDriverPolicy @ 0x1407292E8 (PiDevCfgReadDriverPolicy.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x140A6C2F8 (PiDevCfgEnforceDevicePolicy.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x1404C0614 (PnpValidateRegistryDword.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiDevCfgQueryPolicyEnabled(void *a1, __int64 a2, bool *a3)
{
  int v4; // ebx
  int RegistryValue; // eax
  unsigned int *v6; // rcx
  unsigned int v7; // edi

  v4 = 0;
  *a3 = 0;
  RegistryValue = IopGetRegistryValue(a1);
  v6 = 0LL;
  v7 = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( PnpValidateRegistryDword(0LL) )
      v4 = *(unsigned int *)((char *)v6 + v6[2]);
    *a3 = v4 == 1;
  }
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v7;
}
