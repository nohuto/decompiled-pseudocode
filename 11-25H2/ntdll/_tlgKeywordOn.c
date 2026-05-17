/*
 * XREFs of _tlgKeywordOn @ 0x18010FC38
 * Callers:
 *     EtwDeliverDataBlock @ 0x1800443B0 (EtwDeliverDataBlock.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800D8E48 (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 *     EtwSendNotification @ 0x1800EF950 (EtwSendNotification.c)
 *     LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x180117B04 (LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x1801202D8 (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 *     UcOnUnexpectedCodePath @ 0x180158AB0 (UcOnUnexpectedCodePath.c)
 *     UcpFindOrCreateTelemetryRecord @ 0x180158E18 (UcpFindOrCreateTelemetryRecord.c)
 *     LdrpCgLogFailure @ 0x180161150 (LdrpCgLogFailure.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x1801619BC (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x180161AC8 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x180161DC4 (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 * Callees:
 *     <none>
 */

char __fastcall tlgKeywordOn(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a2 || (a2 & *(_QWORD *)(a1 + 16)) != 0 && (a2 & *(_QWORD *)(a1 + 24)) == *(_QWORD *)(a1 + 24) )
    return 1;
  return v2;
}
