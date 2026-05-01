/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapSz@G@@U1@U2@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapSz@G@@34AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18000E114
 * Callers:
 *     ?TraceFoundInputSiteWindow@DragDropSimulatorTelemetryProvider@@SAXPEAUHWND__@@0_N@Z @ 0x18057BAB8 (-TraceFoundInputSiteWindow@DragDropSimulatorTelemetryProvider@@SAXPEAUHWND__@@0_N@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800CC51C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        __int64 a8,
        _QWORD *a9)
{
  __int64 v10; // rcx
  __int64 v11; // rax

  v10 = -1LL;
  if ( *a9 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( *(_WORD *)(*a9 + 2 * v11) );
  }
  if ( *a7 )
  {
    do
      ++v10;
    while ( *(_WORD *)(*a7 + 2 * v10) );
  }
  return tlgWriteTransfer_EventWriteTransfer(a1, a2);
}
