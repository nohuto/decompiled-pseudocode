/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18000FFDC
 * Callers:
 *     ??$SnapFlyoutInstance_ActivationChanged@AEAIAEA_N@SnapFlyoutTelemetry@@SAXAEAIAEA_N@Z @ 0x18021AF6C (--$SnapFlyoutInstance_ActivationChanged@AEAIAEA_N@SnapFlyoutTelemetry@@SAXAEAIAEA_N@Z.c)
 *     ??$PackageInstalledResultSEA@AEBH_N@DashboardManagerTelemetry@@SAXAEBH$$QEA_N@Z @ 0x1805C34A8 (--$PackageInstalledResultSEA@AEBH_N@DashboardManagerTelemetry@@SAXAEBH$$QEA_N@Z.c)
 *     ??$PackageInstalledResultWPR@AEBH_N@DashboardManagerTelemetry@@SAXAEBH$$QEA_N@Z @ 0x1805C3548 (--$PackageInstalledResultWPR@AEBH_N@DashboardManagerTelemetry@@SAXAEBH$$QEA_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800CC51C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        __int64 a1,
        __int64 a2)
{
  return tlgWriteTransfer_EventWriteTransfer(a1, a2);
}
