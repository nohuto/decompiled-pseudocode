/*
 * XREFs of _tlgWriteTransfer_EtwEventWriteTransfer @ 0x18000D714
 * Callers:
 *     LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure @ 0x180002254 (LdrpLogVerifyAlternateResourceModuleWithServiceChecksumFailure.c)
 *     RtlpHpSegFreeRangeRemove @ 0x18000D8A0 (RtlpHpSegFreeRangeRemove.c)
 *     RtlpHpSegFreeRangeInsert @ 0x18000F5C0 (RtlpHpSegFreeRangeInsert.c)
 *     RtlpHpSegPageRangeShrink @ 0x1800100E0 (RtlpHpSegPageRangeShrink.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x180010710 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpSegPageRangeCommit @ 0x1800125C0 (RtlpHpSegPageRangeCommit.c)
 *     EtwDeliverDataBlock @ 0x1800443B0 (EtwDeliverDataBlock.c)
 *     MicrosoftTelemetryAssertTriggeredWorker @ 0x18006727C (MicrosoftTelemetryAssertTriggeredWorker.c)
 *     LdrpLogEtwHotPatchStatus @ 0x18006F018 (LdrpLogEtwHotPatchStatus.c)
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x1800AC7B4 (LdrpLogRelativePathWithAlteredSearchError.c)
 *     RtlpHpTlLogVAChange @ 0x1800BBF10 (RtlpHpTlLogVAChange.c)
 *     LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry @ 0x1800D8E48 (LdrpLogVsmEnclaveLdrInitializeEnclaveTelemetry.c)
 *     EtwSendNotification @ 0x1800EF950 (EtwSendNotification.c)
 *     RtlpHpTlLogMemStats @ 0x18010C67C (RtlpHpTlLogMemStats.c)
 *     LdrpLogMapAndVerifyResourceFileFailure @ 0x1801142C0 (LdrpLogMapAndVerifyResourceFileFailure.c)
 *     LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry @ 0x180117B04 (LdrpLogVsmEnclaveLdrCreateEnclaveTelemetry.c)
 *     LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry @ 0x1801202D8 (LdrpLogVsmEnclaveLdrLoadEnclaveModuleTelemetry.c)
 *     RtlpHpTlLogGCTimerFinished @ 0x18014E2A8 (RtlpHpTlLogGCTimerFinished.c)
 *     UcOnUnexpectedCodePath @ 0x180158AB0 (UcOnUnexpectedCodePath.c)
 *     UcpFindOrCreateTelemetryRecord @ 0x180158E18 (UcpFindOrCreateTelemetryRecord.c)
 *     LdrpCgLogFailure @ 0x180161150 (LdrpCgLogFailure.c)
 *     LdrpLogImportRedirectionTelemetry @ 0x1801619BC (LdrpLogImportRedirectionTelemetry.c)
 *     LdrpLogIntegrityContinuityTelemetry @ 0x180161AC8 (LdrpLogIntegrityContinuityTelemetry.c)
 *     LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry @ 0x180161DC4 (LdrpLogVsmEnclaveLdrDeleteEnclaveTelemetry.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x18008E770 (EtwEventWriteTransfer.c)
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
  _DWORD v9[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v10; // [rsp+38h] [rbp-10h]

  v9[0] = *a2 << 24;
  v9[1] = *(unsigned __int16 *)(a2 + 1);
  v6 = *(_QWORD *)(a2 + 3);
  v7 = (unsigned __int16 *)(a2 + 11);
  v10 = v6;
  *(_QWORD *)a6 = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(a6 + 8) = **(unsigned __int16 **)(a1 + 8);
  *(_QWORD *)(a6 + 16) = v7;
  *(_DWORD *)(a6 + 12) = 2;
  *(_DWORD *)(a6 + 24) = *v7;
  *(_DWORD *)(a6 + 28) = 1;
  return EtwEventWriteTransfer(*(_QWORD *)(a1 + 32), (unsigned int)v9, 0, 0, a5, a6);
}
