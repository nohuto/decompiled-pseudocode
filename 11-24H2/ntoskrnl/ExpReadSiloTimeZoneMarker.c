/*
 * XREFs of ExpReadSiloTimeZoneMarker @ 0x1407B67A8
 * Callers:
 *     ExpSetTimeZoneInformation @ 0x1407B5844 (ExpSetTimeZoneInformation.c)
 *     ExpRefreshTimeZoneInformation @ 0x1409DC59C (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     ExpReadTimeZoneInformation @ 0x1407B67D8 (ExpReadTimeZoneInformation.c)
 */

bool ExpReadSiloTimeZoneMarker()
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  ExpReadTimeZoneInformation(L"SiloTimeZoneMarker", 0LL, &v1);
  return v1 != 0;
}
