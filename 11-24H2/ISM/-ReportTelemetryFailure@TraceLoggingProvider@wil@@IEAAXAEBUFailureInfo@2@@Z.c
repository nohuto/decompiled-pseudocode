/*
 * XREFs of ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x1800A1574
 * Callers:
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x1800A0CE0 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@D@@U2@U3@U2@U?$_tlgWrapSz@G@@U2@U3@U2@U3@U4@U2@U3@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@D@@454AEBU?$_tlgWrapSz@G@@45456456@Z @ 0x180001834 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@D@@U2@U3@U2@U-$_tlgW.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 */

void __fastcall wil::TraceLoggingProvider::ReportTelemetryFailure(
        wil::TraceLoggingProvider *this,
        const struct wil::FailureInfo *a2)
{
  _DWORD *v2; // rcx
  __int64 v3; // rcx
  int *v4; // r8
  __int64 v5; // r9
  int v6; // [rsp+A0h] [rbp-9h] BYREF
  int v7; // [rsp+A4h] [rbp-5h] BYREF
  int v8; // [rsp+A8h] [rbp-1h] BYREF
  const WCHAR *v9; // [rsp+B0h] [rbp+7h] BYREF
  const unsigned __int16 *v10; // [rsp+B8h] [rbp+Fh] BYREF
  const WCHAR *v11; // [rsp+C0h] [rbp+17h] BYREF
  const unsigned __int16 *v12; // [rsp+C8h] [rbp+1Fh] BYREF
  const unsigned __int16 *v13; // [rsp+D0h] [rbp+27h] BYREF
  const WCHAR *v14; // [rsp+D8h] [rbp+2Fh] BYREF
  const unsigned __int16 *v15; // [rsp+E0h] [rbp+37h] BYREF
  const unsigned __int16 *v16; // [rsp+E8h] [rbp+3Fh] BYREF
  __int64 v17; // [rsp+F0h] [rbp+47h] BYREF
  __int64 v18; // [rsp+F8h] [rbp+4Fh] BYREF
  int v19; // [rsp+110h] [rbp+67h] BYREF
  int v20; // [rsp+120h] [rbp+77h] BYREF
  int v21; // [rsp+128h] [rbp+7Fh] BYREF

  v2 = (_DWORD *)*((_QWORD *)this + 1);
  if ( *v2 > 2u && tlgKeywordOn((__int64)v2, 0x200000000000LL) )
  {
    v9 = (const WCHAR *)*((_QWORD *)v4 + 15);
    v10 = (const unsigned __int16 *)*((_QWORD *)v4 + 14);
    v19 = v4[26];
    v11 = (const WCHAR *)*((_QWORD *)v4 + 12);
    v12 = (const unsigned __int16 *)*((_QWORD *)v4 + 11);
    v20 = v4[20];
    v13 = (const unsigned __int16 *)*((_QWORD *)v4 + 9);
    v21 = v4[8];
    v14 = (const WCHAR *)*((_QWORD *)v4 + 3);
    v6 = *v4;
    v15 = (const unsigned __int16 *)*((_QWORD *)v4 + 16);
    v7 = v4[16];
    v16 = (const unsigned __int16 *)*((_QWORD *)v4 + 7);
    v8 = v4[2];
    v17 = 0x1000000LL;
    v18 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<char>,_tlgWrapSz<unsigned short>>(
      v3,
      (__int64)&unk_18020EDCF,
      0LL,
      v5,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v8,
      &v16,
      (__int64)&v7,
      &v15,
      (__int64)&v6,
      &v14,
      (__int64)&v21,
      &v13,
      (__int64)&v20,
      &v12,
      &v11,
      (__int64)&v19,
      &v10,
      &v9);
  }
}
