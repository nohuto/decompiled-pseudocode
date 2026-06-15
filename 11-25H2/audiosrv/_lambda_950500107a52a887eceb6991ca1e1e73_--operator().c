/*
 * XREFs of _lambda_950500107a52a887eceb6991ca1e1e73_::operator() @ 0x1801297F0
 * Callers:
 *     wil::details::lambda_call__lambda_950500107a52a887eceb6991ca1e1e73___::_lambda_call__lambda_950500107a52a887eceb6991ca1e1e73___ @ 0x180128748 (wil--details--lambda_call__lambda_950500107a52a887eceb6991ca1e1e73___--_lambda_call__lambda_9505.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U2@U2@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@44AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180004F3C (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U2@U2@U-$_tlgWrapperByVal@$03@@@-$_tlgWrite.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18003E4E0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

void __fastcall lambda_950500107a52a887eceb6991ca1e1e73_::operator()(__int64 *a1)
{
  __int64 v1; // rdi
  _DWORD *v2; // rbx
  __int64 v3; // r8
  __int64 v4; // rcx
  signed int *v5; // rdx
  __int128 v6; // xmm0
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // [rsp+50h] [rbp+17h] BYREF
  GUID *v10; // [rsp+58h] [rbp+1Fh] BYREF
  __int64 v11; // [rsp+60h] [rbp+27h] BYREF
  __int128 *v12; // [rsp+68h] [rbp+2Fh] BYREF
  const WCHAR *v13; // [rsp+70h] [rbp+37h] BYREF
  __int128 v14; // [rsp+78h] [rbp+3Fh] BYREF

  v1 = *a1;
  v2 = *(_DWORD **)(*a1 + 2120);
  if ( *v2 > 2u && tlgKeywordOn(*(_QWORD *)(*a1 + 2120), 16LL) )
  {
    v4 = *(_QWORD *)(v3 + 8);
    v9 = **(_DWORD **)(v3 + 24);
    v5 = *(signed int **)(v3 + 16);
    v10 = &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v11 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](v4, *v5);
    v6 = *(_OWORD *)*(_QWORD *)(v1 + 1568);
    v12 = &v14;
    v14 = v6;
    v13 = *(const WCHAR **)(*(_QWORD *)(v1 + 1584) + 48LL);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>>(
      (int)v2,
      (int)&unk_1801A48D1,
      v7,
      v8,
      &v13,
      (__int64 *)&v12,
      &v11,
      (__int64 *)&v10,
      (__int64)&v9);
  }
}
