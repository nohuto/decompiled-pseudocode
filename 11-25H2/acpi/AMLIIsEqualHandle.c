/*
 * XREFs of AMLIIsEqualHandle @ 0x140015F98
 * Callers:
 *     GetPciAddressWorker @ 0x1400150D0 (GetPciAddressWorker.c)
 *     ACPIBuildDevicePowerNodes @ 0x140020F04 (ACPIBuildDevicePowerNodes.c)
 *     ACPIEcStartDevice @ 0x14005FAE0 (ACPIEcStartDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall AMLIIsEqualHandle(_QWORD *a1, _QWORD *a2)
{
  bool result; // al

  result = 0;
  if ( a1 )
  {
    if ( a2 )
      return *a1 == *a2;
  }
  else if ( !a2 )
  {
    return 1;
  }
  return result;
}
