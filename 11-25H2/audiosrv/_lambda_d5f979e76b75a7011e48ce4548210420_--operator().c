/*
 * XREFs of _lambda_d5f979e76b75a7011e48ce4548210420_::operator() @ 0x1801045EC
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_d5f979e76b75a7011e48ce4548210420__void_::_Do_call @ 0x180104EE0 (std--_Func_impl_no_alloc__lambda_d5f979e76b75a7011e48ce4548210420__void_--_Do_call.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180001598 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z @ 0x1801010F0 (-RefreshConnectorFormats@CPolicyConfig@@SAJPEBG@Z.c)
 */

void __fastcall lambda_d5f979e76b75a7011e48ce4548210420_::operator()(__int64 a1)
{
  _DWORD *v2; // rcx
  int v3; // ecx
  __int64 v4; // r8
  __int64 v5; // r9
  const WCHAR **v6; // rax
  const WCHAR *v7; // rdx
  const unsigned __int16 **v8; // rax
  const unsigned __int16 *v9; // rcx
  int refreshed; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+40h] [rbp+8h] BYREF
  const WCHAR *v13; // [rsp+48h] [rbp+10h] BYREF

  v2 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *v2 > 4u && tlgKeywordOn((__int64)v2, 32LL) )
  {
    v6 = *(const WCHAR ***)(a1 + 8);
    if ( v6 )
      v7 = *v6;
    else
      v7 = 0LL;
    v12 = *(_DWORD *)a1;
    v13 = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
      v3,
      (int)&unk_1801A29EF,
      v4,
      v5,
      (__int64)&v12,
      &v13);
  }
  v8 = *(const unsigned __int16 ***)(a1 + 8);
  if ( v8 )
    v9 = *v8;
  else
    v9 = 0LL;
  refreshed = CPolicyConfig::RefreshConnectorFormats(v9);
  if ( refreshed < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      164LL,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\softwarecaps.cpp",
      (const char *)(unsigned int)refreshed);
}
