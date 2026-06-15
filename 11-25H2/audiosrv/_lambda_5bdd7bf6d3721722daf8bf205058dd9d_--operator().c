/*
 * XREFs of _lambda_5bdd7bf6d3721722daf8bf205058dd9d_::operator() @ 0x1800C2500
 * Callers:
 *     wil::details::lambda_call__lambda_5bdd7bf6d3721722daf8bf205058dd9d___::_lambda_call__lambda_5bdd7bf6d3721722daf8bf205058dd9d___ @ 0x1800C2368 (wil--details--lambda_call__lambda_5bdd7bf6d3721722daf8bf205058dd9d___--_lambda_call__lambda_5bdd.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18002DE10 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU__ea_18002DE10.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 */

char __fastcall lambda_5bdd7bf6d3721722daf8bf205058dd9d_::operator()(__int64 a1)
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
                     byte_18019FD2F,
                     v5,
                     v6,
                     &v10,
                     (__int64)&v9);
    }
  }
  return (char)v2;
}
