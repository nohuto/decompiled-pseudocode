/*
 * XREFs of TppReportExceptionFilter @ 0x18015DD1C
 * Callers:
 *     TpCheckTerminateWorker @ 0x180008F30 (TpCheckTerminateWorker.c)
 *     TppRaiseInvalidParameter @ 0x18003EEE4 (TppRaiseInvalidParameter.c)
 * Callees:
 *     RtlReportException @ 0x1800CF050 (RtlReportException.c)
 */

__int64 __fastcall TppReportExceptionFilter(_QWORD *a1)
{
  RtlReportException(*a1, a1[1], 3LL);
  return 0LL;
}
