/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@5555@Z @ 0x18000AE18
 * Callers:
 *     ??$AppliedPolicyForView@AEAY0BC@$$CBGAEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJ@GamingPosturePositionerTelemetryProvider@@SAXAEAY0BC@$$CBGAEAPEAUHWND__@@AEAPEBG2AEAKAEAJ444@Z @ 0x1804F42A8 (--$AppliedPolicyForView@AEAY0BC@$$CBGAEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJ@GamingPos.c)
 *     ??$AppliedPolicyForView@AEAY0BE@$$CBGAEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJ@GamingPosturePositionerTelemetryProvider@@SAXAEAY0BE@$$CBGAEAPEAUHWND__@@AEAPEBG2AEAKAEAJ444@Z @ 0x1804F43B4 (--$AppliedPolicyForView@AEAY0BE@$$CBGAEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJ@GamingPos.c)
 *     ??$AppliedPolicyForView@AEAY0BG@$$CBGAEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJ@GamingPosturePositionerTelemetryProvider@@SAXAEAY0BG@$$CBGAEAPEAUHWND__@@AEAPEBG2AEAKAEAJ444@Z @ 0x1804F44C0 (--$AppliedPolicyForView@AEAY0BG@$$CBGAEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJ@GamingPos.c)
 *     ??$AppliedPolicyForView@AEAY0BI@$$CBGAEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEBJAEBJAEBJAEBJ@GamingPosturePositionerTelemetryProvider@@SAXAEAY0BI@$$CBGAEAPEAUHWND__@@AEAPEBG2AEAKAEBJ444@Z @ 0x1804F45CC (--$AppliedPolicyForView@AEAY0BI@$$CBGAEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEBJAEBJAEBJAEBJ@GamingPos.c)
 *     ??$OnApplicationViewChanged@AEBQEBGAEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJ@GamingPosturePositionerTelemetryProvider@@SAXAEBQEBGAEAPEAUHWND__@@AEAPEBG2AEAKAEAJ444@Z @ 0x1804F61EC (--$OnApplicationViewChanged@AEBQEBGAEAPEAUHWND__@@AEAPEBGAEAPEBGAEAKAEAJAEAJAEAJAEAJ@GamingPostu.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800CC51C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        _QWORD *a7,
        _QWORD *a8)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax

  v9 = -1LL;
  if ( *a8 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)(*a8 + 2 * v10) );
  }
  if ( *a7 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( *(_WORD *)(*a7 + 2 * v11) );
  }
  if ( *a5 )
  {
    do
      ++v9;
    while ( *(_WORD *)(*a5 + 2 * v9) );
  }
  return tlgWriteTransfer_EventWriteTransfer(a1, a2);
}
