/*
 * XREFs of ExpReadSiloTimeZoneMarker @ 0x1407A7308
 * Callers:
 *     ExpSetTimeZoneInformation @ 0x1407A63A4 (ExpSetTimeZoneInformation.c)
 *     ExpRefreshTimeZoneInformation @ 0x140993940 (ExpRefreshTimeZoneInformation.c)
 * Callees:
 *     ExpReadTimeZoneInformation @ 0x1407A7338 (ExpReadTimeZoneInformation.c)
 */

bool ExpReadSiloTimeZoneMarker()
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  ExpReadTimeZoneInformation(L"SiloTimeZoneMarker", 0LL, &v1);
  return v1 != 0;
}
