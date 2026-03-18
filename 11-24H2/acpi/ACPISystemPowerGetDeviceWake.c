/*
 * XREFs of ACPISystemPowerGetDeviceWake @ 0x1400B9788
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilitiesForFilters @ 0x140045B00 (ACPISystemPowerUpdateWakeCapabilitiesForFilters.c)
 *     ACPISystemPowerUpdateWakeCapabilitiesForPDOs @ 0x140049B90 (ACPISystemPowerUpdateWakeCapabilitiesForPDOs.c)
 * Callees:
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 */

__int64 __fastcall ACPISystemPowerGetDeviceWake(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  int v5; // r8d
  unsigned __int8 i; // di
  unsigned __int64 v8; // [rsp+60h] [rbp+8h] BYREF

  v3 = 0;
  v8 = 0LL;
  v5 = -1073741772;
  if ( (*(_QWORD *)(a1 + 8) & 0xA000000000000LL) == 0 )
  {
    for ( i = 0; i < 5u; ++i )
    {
      v5 = ACPIGet(a1, *(_DWORD *)&aS3wS4wS1wS2wSw[4 * i], 268697602, 0LL, 0, 0LL, 0LL, (__int64)&v8, 0LL);
      if ( v5 >= 0 )
      {
        if ( v8 < 5 )
          v3 = v8 + 1;
        *a2 = v3;
        return (unsigned int)v5;
      }
    }
  }
  return (unsigned int)v5;
}
