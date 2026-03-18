/*
 * XREFs of ACPISystemPowerGetSxD @ 0x1400BA420
 * Callers:
 *     ACPISystemPowerDetermineSupportedDeviceStates @ 0x14003BDF0 (ACPISystemPowerDetermineSupportedDeviceStates.c)
 *     ACPISystemPowerUpdateDeviceCapabilities @ 0x1400444A4 (ACPISystemPowerUpdateDeviceCapabilities.c)
 *     ACPISystemPowerProcessSxD @ 0x1400A7574 (ACPISystemPowerProcessSxD.c)
 * Callees:
 *     ACPIGet @ 0x1400157F0 (ACPIGet.c)
 */

__int64 __fastcall ACPISystemPowerGetSxD(__int64 a1, int a2, int *a3)
{
  int v3; // ebx
  int v7; // eax
  unsigned int v8; // edx
  __int64 v10; // [rsp+80h] [rbp+18h] BYREF

  v3 = 0;
  v10 = 0LL;
  *a3 = 0;
  if ( a2 < 1 )
    return 3221225523LL;
  if ( (*(_QWORD *)(a1 + 8) & 0xA000000000000LL) != 0 )
    return 3221225524LL;
  v7 = ACPIGet(a1, dword_1400781B4[a2], -1878786046, 0LL, 0, 0LL, 0LL, (__int64)&v10, 0LL);
  v8 = v7;
  if ( v7 >= 0 )
  {
    if ( (unsigned __int8)v10 < 4u )
      v3 = DevicePowerStateTranslation[(unsigned __int8)v10];
    *a3 = v3;
  }
  else if ( a2 == 2
         && v7 == -1073741772
         && (*(_QWORD *)(a1 + 8) & 0xA00000000000LL) != 0
         && (*(_QWORD *)(a1 + 8) & 0x2000000LL) != 0 )
  {
    *a3 = 2;
    return 0;
  }
  return v8;
}
