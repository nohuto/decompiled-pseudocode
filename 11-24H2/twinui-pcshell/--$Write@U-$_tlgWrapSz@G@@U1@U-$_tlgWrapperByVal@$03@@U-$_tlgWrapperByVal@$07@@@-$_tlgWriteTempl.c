/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180005814
 * Callers:
 *     ??$ManagedViewEvent@PEBGAEAY0O@$$CBGI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAY0O@$$CBG$$QEAI@Z @ 0x180406C1C (--$ManagedViewEvent@PEBGAEAY0O@$$CBGI@HolographicPositionerTelemetry@@SAX$$QEAPEBGAEAY0O@$$CBG$$.c)
 *     ??$AccessRegKey_Error@AEAY0CP@$$CBGAEAPEBGAEAJ@CAppBackupListenerTelemetry@@SAXAEAY0CP@$$CBGAEAPEBGAEAJ@Z @ 0x18060F35C (--$AccessRegKey_Error@AEAY0CP@$$CBGAEAPEBGAEAJ@CAppBackupListenerTelemetry@@SAXAEAY0CP@$$CBGAEAP.c)
 *     ??$AccessRegKey_Error@AEAY0DH@$$CBGAEAPEBGAEAJ@CAppBackupListenerTelemetry@@SAXAEAY0DH@$$CBGAEAPEBGAEAJ@Z @ 0x18060F400 (--$AccessRegKey_Error@AEAY0DH@$$CBGAEAPEBGAEAJ@CAppBackupListenerTelemetry@@SAXAEAY0DH@$$CBGAEAP.c)
 *     ??$AccessRegKey_Error@AEAY0DI@$$CBGAEAPEBGAEAJ@CAppBackupListenerTelemetry@@SAXAEAY0DI@$$CBGAEAPEBGAEAJ@Z @ 0x18060F4AC (--$AccessRegKey_Error@AEAY0DI@$$CBGAEAPEBGAEAJ@CAppBackupListenerTelemetry@@SAXAEAY0DI@$$CBGAEAP.c)
 *     ??$AccessRegKey_Error@AEAY0DM@$$CBGAEAPEBGAEAJ@CAppBackupListenerTelemetry@@SAXAEAY0DM@$$CBGAEAPEBGAEAJ@Z @ 0x18060F550 (--$AccessRegKey_Error@AEAY0DM@$$CBGAEAPEBGAEAJ@CAppBackupListenerTelemetry@@SAXAEAY0DM@$$CBGAEAP.c)
 *     ??$AccessRegKey_Error@PEBGAEAY00$$CBGAEAJ@CAppBackupListenerTelemetry@@SAX$$QEAPEBGAEAY00$$CBGAEAJ@Z @ 0x18060F5F4 (--$AccessRegKey_Error@PEBGAEAY00$$CBGAEAJ@CAppBackupListenerTelemetry@@SAX$$QEAPEBGAEAY00$$CBGAE.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800CC51C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6)
{
  __int64 v7; // rcx
  __int64 v8; // rax

  v7 = -1LL;
  if ( *a6 )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( *(_WORD *)(*a6 + 2 * v8) );
  }
  if ( *a5 )
  {
    do
      ++v7;
    while ( *(_WORD *)(*a5 + 2 * v7) );
  }
  return tlgWriteTransfer_EventWriteTransfer(a1, a2);
}
