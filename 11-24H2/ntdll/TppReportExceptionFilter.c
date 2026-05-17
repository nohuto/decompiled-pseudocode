/*
 * XREFs of TppReportExceptionFilter @ 0x18015C7BC
 * Callers:
 *     TpCheckTerminateWorker @ 0x180004410 (TpCheckTerminateWorker.c)
 *     TppRaiseInvalidParameter @ 0x18006B7F4 (TppRaiseInvalidParameter.c)
 * Callees:
 *     RtlReportException @ 0x180001490 (RtlReportException.c)
 */

__int64 __fastcall TppReportExceptionFilter(__int64 *a1)
{
  RtlReportException(*a1, a1[1], 3u);
  return 0LL;
}
