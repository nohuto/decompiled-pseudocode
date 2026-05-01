/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U3@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@5AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18000BB88
 * Callers:
 *     ??$HandlingView@AEAPEAUHWND__@@AEAY03$$CBG_NAEA_NW4ZBID@@@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEAY03$$CBG$$QEA_NAEA_N$$QEAW4ZBID@@@Z @ 0x1804F52C0 (--$HandlingView@AEAPEAUHWND__@@AEAY03$$CBG_NAEA_NW4ZBID@@@GamingPosturePositionerTelemetryProvid.c)
 *     ??$HandlingView@AEAPEAUHWND__@@AEAY05$$CBGAEA_N_NI@GamingPosturePositionerTelemetryProvider@@SAXAEAPEAUHWND__@@AEAY05$$CBGAEA_N$$QEA_N$$QEAI@Z @ 0x1804F5378 (--$HandlingView@AEAPEAUHWND__@@AEAY05$$CBGAEA_N_NI@GamingPosturePositionerTelemetryProvider@@SAX.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800CC51C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6)
{
  __int64 v6; // rax

  if ( *a6 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)(*a6 + 2 * v6) );
  }
  return tlgWriteTransfer_EventWriteTransfer(a1, a2);
}
