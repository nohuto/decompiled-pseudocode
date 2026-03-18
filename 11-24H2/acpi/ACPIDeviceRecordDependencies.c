/*
 * XREFs of ACPIDeviceRecordDependencies @ 0x140026E84
 * Callers:
 *     ACPIDevicePowerDpc @ 0x140026120 (ACPIDevicePowerDpc.c)
 * Callees:
 *     ACPIDeviceDiscoverDependencies @ 0x140026F6C (ACPIDeviceDiscoverDependencies.c)
 *     ACPIPowerNodeDiscoverDependencies @ 0x140027364 (ACPIPowerNodeDiscoverDependencies.c)
 *     ACPIDeviceSetupDependencyFlags @ 0x1400276AC (ACPIDeviceSetupDependencyFlags.c)
 *     __security_check_cookie @ 0x140070B10 (__security_check_cookie.c)
 */

__int64 __fastcall ACPIDeviceRecordDependencies(_QWORD **a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rdi
  _QWORD *v6; // rcx
  _QWORD *v7; // rbp
  char *v8; // rsi
  __int64 v9; // r14
  char v11; // [rsp+20h] [rbp-58h] BYREF
  __int64 *v12; // [rsp+38h] [rbp-40h]
  __int64 *v13; // [rsp+40h] [rbp-38h]
  PVOID *v14; // [rsp+48h] [rbp-30h]
  PVOID *v15; // [rsp+50h] [rbp-28h]

  v4 = *a1;
  v12 = &AcpiPowerPhase2List;
  v13 = &AcpiPowerPhase3List;
  v14 = &AcpiPowerPhase4List;
  v15 = &AcpiPowerPhase5List;
  ACPIDeviceSetupDependencyFlags(
    a1,
    a2,
    a3,
    a4,
    &AcpiPowerPhase0List,
    &AcpiPowerBlockedOnDependencyList,
    &AcpiPowerPhase1List);
  if ( v4 != v6 )
  {
    do
    {
      v7 = (_QWORD *)*v4;
      ACPIDeviceDiscoverDependencies(v4, a1);
      v8 = &v11;
      v9 = 7LL;
      do
      {
        ACPIDeviceDiscoverDependencies(v4, *(_QWORD *)v8);
        v8 += 8;
        --v9;
      }
      while ( v9 );
      v4 = v7;
    }
    while ( v7 != a1 );
  }
  return ACPIPowerNodeDiscoverDependencies(a1);
}
