/*
 * XREFs of _lambda_2dbeb383abe4e3058f79ce1fc26f8e50_::operator() @ 0x1800C0B38
 * Callers:
 *     wil::details::lambda_call__lambda_2dbeb383abe4e3058f79ce1fc26f8e50___::_lambda_call__lambda_2dbeb383abe4e3058f79ce1fc26f8e50___ @ 0x1800C09A0 (wil--details--lambda_call__lambda_2dbeb383abe4e3058f79ce1fc26f8e50___--_lambda_call__lambda_2dbe.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18001E120 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU__ea_18001E120.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 */

char __fastcall lambda_2dbeb383abe4e3058f79ce1fc26f8e50_::operator()(__int64 a1)
{
  struct AudioSrvTelemetryProvider *v2; // rax
  _DWORD *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  const WCHAR **v7; // rax
  int v9; // [rsp+48h] [rbp+10h] BYREF
  const WCHAR *v10; // [rsp+50h] [rbp+18h] BYREF

  v2 = AudioSrvTelemetryProvider::Instance();
  v3 = (_DWORD *)*((_QWORD *)v2 + 1);
  if ( *v3 > 4u )
  {
    LOBYTE(v2) = tlgKeywordOn((__int64)v3, 2LL);
    if ( (_BYTE)v2 )
    {
      v7 = *(const WCHAR ***)a1;
      v9 = **(_DWORD **)(a1 + 8);
      v10 = *v7;
      LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                     v4,
                     byte_1801AA7DE,
                     v5,
                     v6,
                     &v10,
                     (__int64)&v9);
    }
  }
  return (char)v2;
}
