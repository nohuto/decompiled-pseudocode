/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@U2@U2@U3@U4@U4@U2@U2@U2@U2@U2@U?$_tlgWrapperByVal@$00@@U2@U5@U2@U2@U2@U2@U2@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@454564564456644444AEBU?$_tlgWrapperByVal@$00@@47444447@Z @ 0x18000F1E0
 * Callers:
 *     ?Stop@ProcessView@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NW4SnappedWindowOcclusionModel@@22@Z @ 0x1800B8058 (-Stop@ProcessView@CSnapComponentTelemetry@@QEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@_NW.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800CC51C (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8,
        __int64 a9,
        _QWORD *a10,
        __int64 a11,
        _QWORD *a12,
        __int64 a13,
        _QWORD *a14,
        __int64 a15,
        _QWORD *a16,
        _QWORD *a17,
        __int64 a18,
        _QWORD *a19,
        _QWORD *a20,
        __int64 a21,
        __int64 a22,
        _QWORD *a23,
        _QWORD *a24,
        _QWORD *a25)
{
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax

  v26 = -1LL;
  if ( *a25 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( *(_WORD *)(*a25 + 2 * v27) );
  }
  if ( *a24 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( *(_WORD *)(*a24 + 2 * v28) );
  }
  if ( *a23 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( *(_BYTE *)(*a23 + v29) );
  }
  if ( *a20 )
  {
    v30 = -1LL;
    do
      ++v30;
    while ( *(_WORD *)(*a20 + 2 * v30) );
  }
  if ( *a19 )
  {
    v31 = -1LL;
    do
      ++v31;
    while ( *(_BYTE *)(*a19 + v31) );
  }
  if ( *a17 )
  {
    v32 = -1LL;
    do
      ++v32;
    while ( *(_WORD *)(*a17 + 2 * v32) );
  }
  if ( *a16 )
  {
    v33 = -1LL;
    do
      ++v33;
    while ( *(_BYTE *)(*a16 + v33) );
  }
  if ( *a14 )
  {
    v34 = -1LL;
    do
      ++v34;
    while ( *(_BYTE *)(*a14 + v34) );
  }
  if ( *a12 )
  {
    v35 = -1LL;
    do
      ++v35;
    while ( *(_WORD *)(*a12 + 2 * v35) );
  }
  if ( *a10 )
  {
    v36 = -1LL;
    do
      ++v36;
    while ( *(_BYTE *)(*a10 + v36) );
  }
  if ( *a8 )
  {
    do
      ++v26;
    while ( *(_BYTE *)(*a8 + v26) );
  }
  return tlgWriteTransfer_EventWriteTransfer(a1, a2);
}
