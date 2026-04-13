/*
 * XREFs of ?RecordFeatureError@details@wil@@YAXIAEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x1800373F8
 * Callers:
 *     ?ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z @ 0x18002F230 (-ExceptionThrown@FeatureFunctorHost@details@wil@@UEAAJPEAX@Z.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18003945C (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 * Callees:
 *     ??0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x1800296A4 (--0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800BD010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::RecordFeatureError(
        wil::details *this,
        const struct wil::FailureInfo *a2,
        const struct DiagnosticsInfo *a3,
        struct DiagnosticsInfo *a4)
{
  unsigned int v4; // ebx
  void (__fastcall *v5)(_QWORD, struct DiagnosticsInfo *); // rax
  struct DiagnosticsInfo v6[50]; // [rsp+20h] [rbp-1A8h] BYREF

  v4 = (unsigned int)this;
  wil::details::StagingFailureInformation::StagingFailureInformation(v6, a2, a3, a4);
  v5 = (void (__fastcall *)(_QWORD, struct DiagnosticsInfo *))g_wil_details_internalRecordFeatureError;
  if ( g_wil_details_internalRecordFeatureError
    || (v5 = (void (__fastcall *)(_QWORD, struct DiagnosticsInfo *))g_wil_details_apiRecordFeatureError) != 0LL )
  {
    v5(v4, v6);
  }
}
