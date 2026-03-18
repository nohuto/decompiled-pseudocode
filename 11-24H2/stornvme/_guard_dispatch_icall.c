/*
 * XREFs of _guard_dispatch_icall @ 0x140031000
 * Callers:
 *     WaitForCommandCompleteWithCustomTimeout @ 0x140008650 (WaitForCommandCompleteWithCustomTimeout.c)
 *     NVMeHwUnitControl @ 0x14000EC10 (NVMeHwUnitControl.c)
 *     NVMeCompletionDpcRoutine @ 0x140012F10 (NVMeCompletionDpcRoutine.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14001974C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1400197DC (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x1400198F8 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     NVMeCompleteSubmissionQueueRequests @ 0x14001C11C (NVMeCompleteSubmissionQueueRequests.c)
 *     NVMeControllerAsyncResetWorker @ 0x14001C690 (NVMeControllerAsyncResetWorker.c)
 *     StorNVMeDriverUnload @ 0x140030BD0 (StorNVMeDriverUnload.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140035010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall guard_dispatch_icall()
{
  __int64 (__fastcall *v0)(); // rax

  return v0();
}
