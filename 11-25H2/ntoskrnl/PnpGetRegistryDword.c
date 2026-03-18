/*
 * XREFs of PnpGetRegistryDword @ 0x1404B5904
 * Callers:
 *     PipDmgGetDeviceDmarRegistryValue @ 0x14071B410 (PipDmgGetDeviceDmarRegistryValue.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x140A83FDC (PipDmgGetDriverDmarCompatLevel.c)
 *     IopInitializePlugPlayServices @ 0x140C0DF14 (IopInitializePlugPlayServices.c)
 *     PnpInitializePnpWatchdogs @ 0x140C1228C (PnpInitializePnpWatchdogs.c)
 *     PiUEventProcessRegistry @ 0x140C12C20 (PiUEventProcessRegistry.c)
 * Callees:
 *     PnpValidateRegistryDword @ 0x1404C6B90 (PnpValidateRegistryDword.c)
 *     IopGetRegistryValue @ 0x1409B29DC (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
