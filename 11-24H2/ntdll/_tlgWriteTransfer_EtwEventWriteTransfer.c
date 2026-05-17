/*
 * XREFs of _tlgWriteTransfer_EtwEventWriteTransfer @ 0x180051AD4
 * Callers:
 *     EtwDeliverDataBlock @ 0x18001E150 (EtwDeliverDataBlock.c)
 *     RtlpHpSegFreeRangeRemove @ 0x180051C60 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegFreeRangeInsert @ 0x180053980 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegPageRangeShrink @ 0x1800544A0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x180054AD0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegPageRangeCommit @ 0x180056980 (RtlpHpSegPageRangeCommit.c)
 *     LdrpLogEtwHotPatchStatus @ 0x180074798 (LdrpLogEtwHotPatchStatus.c)
 *     LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x180078828 (LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure.c)
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x180084424 (LdrpLogRelativePathWithAlteredSearchError.c)
 *     RtlpHpTlLogVAChange @ 0x180092B90 (RtlpHpTlLogVAChange.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1800ADB9C (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800D8EA8 (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 *     EtwSendNotification @ 0x1800EE760 (EtwSendNotification.c)
 *     RtlpHpTlLogMemStats @ 0x180109C6C (RtlpHpTlLogMemStats.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x180111294 (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x180114C04 (LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x18011EA08 (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 *     RtlpHpTlLogGCTimerFinished @ 0x18014CCF8 (RtlpHpTlLogGCTimerFinished.c)
 *     UcOnUnexpectedCodePath @ 0x180157500 (UcOnUnexpectedCodePath.c)
 *     UcpFindOrCreateTelemetryRecord @ 0x180157868 (UcpFindOrCreateTelemetryRecord.c)
 *     LdrpCgLogFailure @ 0x18015FC00 (LdrpCgLogFailure.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x18016046C (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x180160578 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x180160874 (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x18003AD80 (EtwEventWriteTransfer.c)
 */

__int64 __fastcall tlgWriteTransfer_EtwEventWriteTransfer(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  __int64 v6; // rax
  unsigned __int16 *v7; // rdx
  __int128 v9; // [rsp+30h] [rbp-18h] BYREF

  LODWORD(v9) = *a2 << 24;
  DWORD1(v9) = *(unsigned __int16 *)(a2 + 1);
  v6 = *(_QWORD *)(a2 + 3);
  v7 = (unsigned __int16 *)(a2 + 11);
  *((_QWORD *)&v9 + 1) = v6;
  *(_QWORD *)a6 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a6 + 8) = **(unsigned __int16 **)(a1 + 8);
  *(_QWORD *)(a6 + 16) = v7;
  *(_DWORD *)(a6 + 12) = 2;
  *(_DWORD *)(a6 + 24) = *v7;
  *(_DWORD *)(a6 + 28) = 1;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), &v9, 0LL, 0LL, a5, a6);
}
