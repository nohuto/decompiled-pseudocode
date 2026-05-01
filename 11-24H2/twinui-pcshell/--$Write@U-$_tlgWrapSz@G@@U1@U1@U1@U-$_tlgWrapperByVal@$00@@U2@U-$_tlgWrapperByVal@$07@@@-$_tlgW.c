/*
 * XREFs of ??$Write@U?$_tlgWrapSz@G@@U1@U1@U1@U?$_tlgWrapperByVal@$00@@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@333AEBU?$_tlgWrapperByVal@$00@@4AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18000130C
 * Callers:
 *     ??$ApplicationStateChanged@PEBGPEBGPEBGPEBG_NAEB_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBG000$$QEA_NAEB_N@Z @ 0x1802A61C8 (--$ApplicationStateChanged@PEBGPEBGPEBGPEBG_NAEB_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800CC51C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        _QWORD *a6,
        _QWORD *a7,
        _QWORD *a8)
{
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

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
  if ( *a6 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)(*a6 + 2 * v12) );
  }
  if ( *a5 )
  {
    do
      ++v9;
    while ( *(_WORD *)(*a5 + 2 * v9) );
  }
  return tlgWriteTransfer_EventWriteTransfer(a1, a2);
}
