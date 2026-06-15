/*
 * XREFs of _lambda_82c9212e29ceb5f8e3f8d325d4b387fa_::operator() @ 0x1801315AC
 * Callers:
 *     wil::details::lambda_call__lambda_82c9212e29ceb5f8e3f8d325d4b387fa___::_lambda_call__lambda_82c9212e29ceb5f8e3f8d325d4b387fa___ @ 0x1801307C8 (wil--details--lambda_call__lambda_82c9212e29ceb5f8e3f8d325d4b387fa___--_lambda_call__lambda_82c9.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@44AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1800054E8 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U2@U2@U-$_tlgWrapperByVal@$03@@@-$_tlgWrite.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 */

void __fastcall lambda_82c9212e29ceb5f8e3f8d325d4b387fa_::operator()(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  __int64 v3; // r10
  int v4; // ecx
  __int128 v5; // xmm0
  int v6; // [rsp+50h] [rbp+17h] BYREF
  __int64 v7; // [rsp+58h] [rbp+1Fh] BYREF
  __int64 v8; // [rsp+60h] [rbp+27h] BYREF
  __int128 *v9; // [rsp+68h] [rbp+2Fh] BYREF
  const WCHAR *v10; // [rsp+70h] [rbp+37h] BYREF
  __int128 v11; // [rsp+78h] [rbp+3Fh] BYREF

  if ( **(_DWORD **)(*(_QWORD *)a1 + 2120LL) > 2u && tlgKeywordOn(*(_QWORD *)(*(_QWORD *)a1 + 2120LL), 16LL) )
  {
    v4 = **(_DWORD **)(v2 + 16);
    v7 = *(_QWORD *)(v2 + 8);
    v8 = v7;
    v6 = v4;
    v5 = *(_OWORD *)*(_QWORD *)(v3 + 1568);
    v9 = &v11;
    v11 = v5;
    v10 = *(const WCHAR **)(*(_QWORD *)(v3 + 1584) + 48LL);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
      v1,
      (int)&unk_1801AFAC8,
      v1,
      v2,
      &v10,
      (__int64 *)&v9,
      &v8,
      &v7,
      (__int64)&v6);
  }
}
