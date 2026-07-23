/*
 * XREFs of wil_details_MapReportingKind @ 0x1800D0F10
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1800D0E80 (wil_details_FeatureReporting_ReportUsageToService.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil_details_MapReportingKind(int a1, int a2)
{
  unsigned __int8 v3; // cl

  switch ( a1 )
  {
    case 0:
      return 255LL;
    case 1:
      return a2 == 0 ? 4 : 0;
    case 2:
      return a2 != 0 ? 1 : 5;
    case 3:
      return a2 != 0 ? 2 : 6;
    case 4:
      return a2 != 0 ? 3 : 7;
    case 5:
      return a2 != 0 ? 8 : 10;
  }
  if ( a1 != 6 )
  {
    v3 = a1 - 100;
    if ( v3 <= 0x31u )
      return v3 + (a2 != 0 ? 100 : 150);
    return 255LL;
  }
  return a2 != 0 ? 9 : 11;
}
