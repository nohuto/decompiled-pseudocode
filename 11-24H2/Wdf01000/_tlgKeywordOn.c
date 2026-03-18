/*
 * XREFs of _tlgKeywordOn @ 0x1400012F4
 * Callers:
 *     imp_WdfDriverCreate @ 0x14006B960 (imp_WdfDriverCreate.c)
 *     LogDriverInfoStream @ 0x14007C650 (LogDriverInfoStream.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x140083BE4 (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     ?ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z @ 0x14008E3E0 (-ReportDdiFunctionCountMismatch@@YAXPEBU_UNICODE_STRING@@KKE@Z.c)
 *     imp_WdfDriverErrorReportApiMissing @ 0x140093830 (imp_WdfDriverErrorReportApiMissing.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall tlgKeywordOn(const _tlgProvider_t *hProvider, unsigned __int64 keyword)
{
  char v2; // r8

  v2 = 0;
  if ( !keyword || (keyword & hProvider->KeywordAny) != 0 && (keyword & hProvider->KeywordAll) == hProvider->KeywordAll )
    return 1;
  return v2;
}
