/*
 * XREFs of _tlgKeywordOn @ 0x18010D208
 * Callers:
 *     EtwDeliverDataBlock @ 0x18001E150 (EtwDeliverDataBlock.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800D8EA8 (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 *     EtwSendNotification @ 0x1800EE760 (EtwSendNotification.c)
 *     LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x180114C04 (LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x18011EA08 (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 *     UcOnUnexpectedCodePath @ 0x180157500 (UcOnUnexpectedCodePath.c)
 *     UcpFindOrCreateTelemetryRecord @ 0x180157868 (UcpFindOrCreateTelemetryRecord.c)
 *     LdrpCgLogFailure @ 0x18015FC00 (LdrpCgLogFailure.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x18016046C (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x180160578 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x180160874 (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
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
