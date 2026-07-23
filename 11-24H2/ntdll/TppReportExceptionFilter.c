/*
 * XREFs of TppReportExceptionFilter @ 0x18015AB7C
 * Callers:
 *     TppRaiseInvalidParameter @ 0x1800880D4 (TppRaiseInvalidParameter.c)
 *     TpCheckTerminateWorker @ 0x1800AAF00 (TpCheckTerminateWorker.c)
 * Callees:
 *     RtlReportException @ 0x18010B4F0 (RtlReportException.c)
 */

__int64 __fastcall TppReportExceptionFilter(__int64 a1)
{
  RtlReportException(*(PEXCEPTION_RECORD *)a1, *(PCONTEXT *)(a1 + 8), 3u);
  return 0LL;
}
