/*
 * XREFs of PopBatteryReadOscBits @ 0x140C20D60
 * Callers:
 *     PopBatteryInitPhaseTwo @ 0x140C20C4C (PopBatteryInitPhaseTwo.c)
 * Callees:
 *     PopReadRegKeyValue @ 0x1404AABEC (PopReadRegKeyValue.c)
 */

char PopBatteryReadOscBits()
{
  int v0; // eax
  int v2; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  byte_140F0AD38 = 0;
  v0 = PopReadRegKeyValue(
         (wchar_t *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters",
         L"BatteryFeaturesGranted",
         4uLL,
         0,
         &v2);
  if ( v0 >= 0 )
  {
    LOBYTE(v0) = v2 & 1;
    byte_140F0AD38 = v2 & 1;
  }
  return v0;
}
