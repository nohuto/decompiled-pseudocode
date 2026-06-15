/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x18000151C
 * Callers:
 *     ?LowPowerEpochNotificationCallback@@YAKPEAXK0@Z @ 0x180029130 (-LowPowerEpochNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?OnPowerResumeSuspend@CWindowsPolicyManager@@UEAAJH@Z @ 0x180029910 (-OnPowerResumeSuspend@CWindowsPolicyManager@@UEAAJH@Z.c)
 *     _lambda_28433bbdf35c05dec82bca523d2a5fd2_::operator() @ 0x18003D8DC (_lambda_28433bbdf35c05dec82bca523d2a5fd2_--operator().c)
 *     _lambda_b2025209d5eaef5f99f9deda65cc799e_::operator() @ 0x18003DB6C (_lambda_b2025209d5eaef5f99f9deda65cc799e_--operator().c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x18003F830 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180013DD0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1800201B0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2)
{
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL);
}
