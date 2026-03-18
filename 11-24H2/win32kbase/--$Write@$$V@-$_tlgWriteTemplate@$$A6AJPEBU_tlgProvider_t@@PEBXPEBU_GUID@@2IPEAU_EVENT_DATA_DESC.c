/*
 * XREFs of ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x14004FFA8
 * Callers:
 *     ?WindowManagementExecute@Mouse@InputTraceLogging@@SAXXZ @ 0x1400503FC (-WindowManagementExecute@Mouse@InputTraceLogging@@SAXXZ.c)
 *     ?RawMouseThrottlingTimerFired@Mouse@InputTraceLogging@@SAXXZ @ 0x140064214 (-RawMouseThrottlingTimerFired@Mouse@InputTraceLogging@@SAXXZ.c)
 *     ?HandlePTPEvent@KST@InputTraceLogging@@SAXXZ @ 0x1401093BC (-HandlePTPEvent@KST@InputTraceLogging@@SAXXZ.c)
 *     ?HandleRefreshRateUnboostTimer@KST@InputTraceLogging@@SAXXZ @ 0x1401111C4 (-HandleRefreshRateUnboostTimer@KST@InputTraceLogging@@SAXXZ.c)
 *     ?CompositionRefreshRateUnboost@Win32k@InputTraceLogging@@SAXXZ @ 0x1401206A4 (-CompositionRefreshRateUnboost@Win32k@InputTraceLogging@@SAXXZ.c)
 *     ?ClearSystemCapture@Mouse@InputTraceLogging@@SAXXZ @ 0x140127378 (-ClearSystemCapture@Mouse@InputTraceLogging@@SAXXZ.c)
 *     ?UserKSTWait@KST@InputTraceLogging@@SAXXZ @ 0x14014E15C (-UserKSTWait@KST@InputTraceLogging@@SAXXZ.c)
 *     ?HandleHotkey@Keyboard@InputTraceLogging@@SAXXZ @ 0x1401568A0 (-HandleHotkey@Keyboard@InputTraceLogging@@SAXXZ.c)
 *     ?ActivateKSTInputProcessing@KST@InputTraceLogging@@SAXXZ @ 0x140157FEC (-ActivateKSTInputProcessing@KST@InputTraceLogging@@SAXXZ.c)
 *     ?DeclareThreadAsKST@KST@InputTraceLogging@@SAXXZ @ 0x14019C78C (-DeclareThreadAsKST@KST@InputTraceLogging@@SAXXZ.c)
 *     ?DropUserModeInputBuffer@Mouse@InputTraceLogging@@SAXXZ @ 0x14019CE60 (-DropUserModeInputBuffer@Mouse@InputTraceLogging@@SAXXZ.c)
 *     ?AllocationFailure@Monitors@InputTraceLogging@@SAXXZ @ 0x14019DD8C (-AllocationFailure@Monitors@InputTraceLogging@@SAXXZ.c)
 *     ?TraceUninitializeStop@Log@CoreMessagingK@@SAXXZ @ 0x14019F3BC (-TraceUninitializeStop@Log@CoreMessagingK@@SAXXZ.c)
 *     ?TraceUninitializeStart@Log@CoreMessagingK@@SAXXZ @ 0x14019F3E8 (-TraceUninitializeStart@Log@CoreMessagingK@@SAXXZ.c)
 *     ?TraceInitializeStart@Log@CoreMessagingK@@SAXXZ @ 0x14019F414 (-TraceInitializeStart@Log@CoreMessagingK@@SAXXZ.c)
 *     ?UserKSTInitialize@KST@InputTraceLogging@@SAXXZ @ 0x14019F440 (-UserKSTInitialize@KST@InputTraceLogging@@SAXXZ.c)
 *     ?ActivateKSTInputProcessingHelper@KST@InputTraceLogging@@SAXXZ @ 0x14019F484 (-ActivateKSTInputProcessingHelper@KST@InputTraceLogging@@SAXXZ.c)
 *     ?DeactivateKSTInputProcessing@KST@InputTraceLogging@@SAXXZ @ 0x14021211C (-DeactivateKSTInputProcessing@KST@InputTraceLogging@@SAXXZ.c)
 *     ?RevokeThreadAsKST@KST@InputTraceLogging@@SAXXZ @ 0x140212238 (-RevokeThreadAsKST@KST@InputTraceLogging@@SAXXZ.c)
 *     ?DeactivateKSTInputProcessingHelper@KST@InputTraceLogging@@SAXXZ @ 0x14021554C (-DeactivateKSTInputProcessingHelper@KST@InputTraceLogging@@SAXXZ.c)
 *     ?HandleIvEvent@KST@InputTraceLogging@@SAXXZ @ 0x140215590 (-HandleIvEvent@KST@InputTraceLogging@@SAXXZ.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1400B0708 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        __int64 a1,
        __int64 a2)
{
  _BYTE v3[32]; // [rsp+30h] [rbp-38h] BYREF

  return tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0LL, 0LL, 2, v3);
}
