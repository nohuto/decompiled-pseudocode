/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333@Z @ 0x18000E488
 * Callers:
 *     ??$SetDockThreshold@AEAJAEAJAEAJAEAJAEAJAEAJ@CSnapComponentTelemetry@@SAXAEAJ00000@Z @ 0x1802BDF24 (--$SetDockThreshold@AEAJAEAJAEAJAEAJAEAJAEAJ@CSnapComponentTelemetry@@SAXAEAJ00000@Z.c)
 *     ??$SetDockThreshold@AEBHAEBHAEBHAEBHAEBHAEBH@CSnapComponentTelemetry@@SAXAEBH00000@Z @ 0x18059AC14 (--$SetDockThreshold@AEBHAEBHAEBHAEBHAEBHAEBH@CSnapComponentTelemetry@@SAXAEBH00000@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800CC51C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2)
{
  return tlgWriteTransfer_EventWriteTransfer(a1, a2);
}
