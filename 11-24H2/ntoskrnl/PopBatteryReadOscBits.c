/*
 * XREFs of PopBatteryReadOscBits @ 0x140C33F90
 * Callers:
 *     PopBatteryInitPhaseTwo @ 0x140C33E6C (PopBatteryInitPhaseTwo.c)
 * Callees:
 *     PopReadRegKeyValue @ 0x1404A667C (PopReadRegKeyValue.c)
 */

char PopBatteryReadOscBits()
{
  int v0; // eax
  int v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  byte_140F0BF18 = 0;
  v0 = PopReadRegKeyValue(
         (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters",
         L"BatteryFeaturesGranted",
         4uLL,
         0,
         &v2);
  if ( v0 >= 0 )
  {
    LOBYTE(v0) = v2 & 1;
    byte_140F0BF18 = v2 & 1;
  }
  return v0;
}
