/*
 * XREFs of _tlgWriteTransfer_EtwEventWriteTransfer @ 0x1800676B4
 * Callers:
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x1800062D4 (LdrpLogRelativePathWithAlteredSearchError.c)
 *     EtwDeliverDataBlock @ 0x18004AB50 (EtwDeliverDataBlock.c)
 *     RtlpHpSegFreeRangeRemove @ 0x180067840 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegFreeRangeInsert @ 0x180069560 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegPageRangeShrink @ 0x18006A080 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18006A6B0 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegPageRangeCommit @ 0x18006C560 (RtlpHpSegPageRangeCommit.c)
 *     LdrpLogEtwHotPatchStatus @ 0x180091078 (LdrpLogEtwHotPatchStatus.c)
 *     LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x180095108 (LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure.c)
 *     RtlpHpTlLogVAChange @ 0x18009D720 (RtlpHpTlLogVAChange.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800D4218 (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x1800E3360 (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     EtwSendNotification @ 0x1800E9940 (EtwSendNotification.c)
 *     RtlpHpTlLogMemStats @ 0x180104B9C (RtlpHpTlLogMemStats.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x18010C6A0 (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x18010FFD4 (LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x18011CC38 (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 *     RtlpHpTlLogGCTimerFinished @ 0x18014B0C0 (RtlpHpTlLogGCTimerFinished.c)
 *     UcOnUnexpectedCodePath @ 0x1801558C0 (UcOnUnexpectedCodePath.c)
 *     UcpFindOrCreateTelemetryRecord @ 0x180155C28 (UcpFindOrCreateTelemetryRecord.c)
 *     LdrpCgLogFailure @ 0x18015DFC0 (LdrpCgLogFailure.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x18015E82C (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x18015E938 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x18015EC34 (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x18001B000 (EtwEventWriteTransfer.c)
 */

ULONG __fastcall tlgWriteTransfer_EtwEventWriteTransfer(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        ULONG UserDataCount,
        _EVENT_DATA_DESCRIPTOR *a6)
{
  unsigned __int64 v6; // rax
  unsigned __int16 *v7; // rdx
  EVENT_DESCRIPTOR v9; // [rsp+30h] [rbp-18h] BYREF

  *(_DWORD *)&v9.Id = *a2 << 24;
  *(_DWORD *)&v9.Level = *(unsigned __int16 *)(a2 + 1);
  v6 = *(_QWORD *)(a2 + 3);
  v7 = (unsigned __int16 *)(a2 + 11);
  v9.Keyword = v6;
  a6->Ptr = *(_QWORD *)(a1 + 8);
  a6->Size = **(unsigned __int16 **)(a1 + 8);
  a6[1].Ptr = (unsigned __int64)v7;
  a6->Reserved = 2;
  a6[1].Size = *v7;
  a6[1].Reserved = 1;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), &v9, 0LL, 0LL, UserDataCount, a6);
}
