/*
 * XREFs of _CreativeFramework::Actions::GetEntitlementForRecord_::_1_::catch$13 @ 0x1800BB4FB
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800227CC (_CxxThrowException_0.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180039F80 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     ??$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NIAEBQEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEBQEB_W0AEA_N$$QEAI0@Z @ 0x180090F34 (--$ReportEntitlementAcquisitionState@AEBQEB_WAEBQEB_WAEA_NIAEBQEB_W@ContentDeliveryManagerTeleme.c)
 */

void __fastcall __noreturn CreativeFramework::Actions::GetEntitlementForRecord_::_1_::catch_13(
        wil *a1,
        __int64 a2,
        unsigned int a3)
{
  *(_DWORD *)(a2 + 72) = wil::ResultFromCaughtException(a1, (void *)a2, a3);
  ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::ReportEntitlementAcquisitionState<wchar_t const * const &,wchar_t const * const &,bool &,unsigned int,wchar_t const * const &>(
    *(const wchar_t ***)(a2 + 120),
    *(const wchar_t ***)(a2 + 112),
    (_BYTE *)(a2 + 65),
    (int *)(a2 + 72),
    (const wchar_t **)(a2 + 80));
  throw;
}
