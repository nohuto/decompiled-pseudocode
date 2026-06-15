/*
 * XREFs of _lambda_9cb6783083bf386d1787fbe42aaa9de5_::operator() @ 0x180131E6C
 * Callers:
 *     wil::details::lambda_call__lambda_9cb6783083bf386d1787fbe42aaa9de5___::_lambda_call__lambda_9cb6783083bf386d1787fbe42aaa9de5___ @ 0x1801307E8 (wil--details--lambda_call__lambda_9cb6783083bf386d1787fbe42aaa9de5___--_lambda_call__lambda_9cb6.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180045DCC (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTempla.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

void __fastcall lambda_9cb6783083bf386d1787fbe42aaa9de5_::operator()(__int64 a1)
{
  __int64 v1; // r8
  _DWORD *v2; // r9
  __int64 *v3; // rax
  __int64 v4; // rax
  __int128 v5; // xmm0
  __int128 *v6; // rax
  __int128 *v7; // rax
  __int128 v8; // xmm1
  int v9; // [rsp+40h] [rbp-48h] BYREF
  __int128 *v10; // [rsp+48h] [rbp-40h] BYREF
  const WCHAR *v11; // [rsp+50h] [rbp-38h] BYREF
  __int128 v12; // [rsp+58h] [rbp-30h] BYREF
  __int128 v13; // [rsp+68h] [rbp-20h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = *(_DWORD **)(*(_QWORD *)a1 + 8288LL);
  if ( *v2 > 5u )
  {
    v3 = *(__int64 **)(a1 + 8);
    v9 = **(_DWORD **)(a1 + 24);
    v4 = *v3;
    if ( v4 )
    {
      v5 = *(_OWORD *)*(_QWORD *)(v4 + 1568);
      v6 = &v13;
      v13 = v5;
    }
    else
    {
      v7 = *(__int128 **)(a1 + 16);
      v12 = 0LL;
      v8 = *v7;
      v6 = &v12;
      v12 = v8;
    }
    v10 = v6;
    v11 = *(const WCHAR **)(v1 + 48);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
      (int)v2,
      (int)&unk_1801B0063,
      v1,
      (__int64)v2,
      &v11,
      (__int64 *)&v10,
      (__int64)&v9);
  }
}
