/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x18000AD1C
 * Callers:
 *     ??$IgnoredApplicationViewChange@AEAPEBGAEAPEAUHWND__@@AEAY0BA@$$CBG@GamingPosturePositionerTelemetryProvider@@SAXAEAPEBGAEAPEAUHWND__@@AEAY0BA@$$CBG@Z @ 0x1804F551C (--$IgnoredApplicationViewChange@AEAPEBGAEAPEAUHWND__@@AEAY0BA@$$CBG@GamingPosturePositionerTelem.c)
 *     ??$IgnoredApplicationViewChange@AEAPEBGAEAPEAUHWND__@@AEAY0BB@$$CBG@GamingPosturePositionerTelemetryProvider@@SAXAEAPEBGAEAPEAUHWND__@@AEAY0BB@$$CBG@Z @ 0x1804F5598 (--$IgnoredApplicationViewChange@AEAPEBGAEAPEAUHWND__@@AEAY0BB@$$CBG@GamingPosturePositionerTelem.c)
 *     ??$IgnoredApplicationViewChange@AEAPEBGAEAPEAUHWND__@@AEAY0L@$$CBG@GamingPosturePositionerTelemetryProvider@@SAXAEAPEBGAEAPEAUHWND__@@AEAY0L@$$CBG@Z @ 0x1804F5614 (--$IgnoredApplicationViewChange@AEAPEBGAEAPEAUHWND__@@AEAY0L@$$CBG@GamingPosturePositionerTeleme.c)
 *     ??$IgnoredApplicationViewChange@AEAPEBGAEAPEAUHWND__@@AEAY0P@$$CBG@GamingPosturePositionerTelemetryProvider@@SAXAEAPEBGAEAPEAUHWND__@@AEAY0P@$$CBG@Z @ 0x1804F5690 (--$IgnoredApplicationViewChange@AEAPEBGAEAPEAUHWND__@@AEAY0P@$$CBG@GamingPosturePositionerTeleme.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800CC51C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        _QWORD *a7)
{
  __int64 v8; // rcx
  __int64 v9; // rax

  v8 = -1LL;
  if ( *a7 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)(*a7 + 2 * v9) );
  }
  if ( *a5 )
  {
    do
      ++v8;
    while ( *(_WORD *)(*a5 + 2 * v8) );
  }
  return tlgWriteTransfer_EventWriteTransfer(a1, a2);
}
