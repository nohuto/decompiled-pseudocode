/*
 * XREFs of CarQueryReportAction @ 0x140615390
 * Callers:
 *     <none>
 * Callees:
 *     CarQueryReportActionForTriage @ 0x1406153C0 (CarQueryReportActionForTriage.c)
 */

__int64 __fastcall CarQueryReportAction(__int64 a1, int a2, int a3, __int64 a4)
{
  if ( a4 )
    return CarQueryReportActionForTriage(a1, a3 | (unsigned int)((a2 << 16) + 0x10000), a4);
  else
    return 3221225485LL;
}
