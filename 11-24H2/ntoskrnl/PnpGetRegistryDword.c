/*
 * XREFs of PnpGetRegistryDword @ 0x1404AFC44
 * Callers:
 *     PipDmgGetDeviceDmarRegistryValue @ 0x140724F20 (PipDmgGetDeviceDmarRegistryValue.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x140A84EFC (PipDmgGetDriverDmarCompatLevel.c)
 *     IopInitializePlugPlayServices @ 0x140C210BC (IopInitializePlugPlayServices.c)
 *     PnpInitializePnpWatchdogs @ 0x140C2539C (PnpInitializePnpWatchdogs.c)
 *     PiUEventProcessRegistry @ 0x140C25CE0 (PiUEventProcessRegistry.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x1404C0614 (PnpValidateRegistryDword.c)
 *     IopGetRegistryValue @ 0x1409B5F9C (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpGetRegistryDword(void *a1, __int64 a2, _DWORD *a3)
{
  int RegistryValue; // eax
  unsigned int *v5; // rcx
  unsigned int v6; // ebx

  *a3 = 0;
  RegistryValue = IopGetRegistryValue(a1);
  v5 = 0LL;
  v6 = RegistryValue;
  if ( RegistryValue >= 0 )
  {
    if ( (unsigned __int8)PnpValidateRegistryDword(0LL) )
      *a3 = *(unsigned int *)((char *)v5 + v5[2]);
    else
      v6 = -1073741271;
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return v6;
}
