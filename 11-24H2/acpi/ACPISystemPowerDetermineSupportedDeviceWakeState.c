/*
 * XREFs of ACPISystemPowerDetermineSupportedDeviceWakeState @ 0x1400563D0
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilitiesForFilters @ 0x140045B00 (ACPISystemPowerUpdateWakeCapabilitiesForFilters.c)
 *     ACPISystemPowerUpdateWakeCapabilitiesForPDOs @ 0x140049B90 (ACPISystemPowerUpdateWakeCapabilitiesForPDOs.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPISystemPowerDetermineSupportedDeviceWakeState(__int64 a1)
{
  __int64 *v1; // r8
  int v2; // edx
  int v3; // eax

  v1 = *(__int64 **)(a1 + 408);
  v2 = 5;
  if ( !v1 )
    return (*(_QWORD *)(a1 + 1120) & 0x500000000LL) != 0 ? 4u : 0;
  do
  {
    v3 = *((_DWORD *)v1 + 5);
    v1 = (__int64 *)*v1;
    if ( v3 >= v2 )
      v3 = v2;
    v2 = v3;
  }
  while ( v1 );
  if ( v3 == 5 )
    return (*(_QWORD *)(a1 + 1120) & 0x500000000LL) != 0 ? 4u : 0;
  return (unsigned int)v2;
}
