/*
 * XREFs of ??$PolicyCheckError@AEAY0BM@$$CBGAEAY0DC@$$CBGAEAJ@AIAssistanceTelemetry@@SAXAEAY0BM@$$CBGAEAY0DC@$$CBGAEAJ@Z @ 0x18061D540
 * Callers:
 *     ?IsCopilotSupportedOSEdition@AIAssistancePolicy@@YA_NXZ @ 0x180626A60 (-IsCopilotSupportedOSEdition@AIAssistancePolicy@@YA_NXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18001B8F0 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?get@?$static_lazy@VAIAssistanceTelemetry@@@details@wil@@QEAAPEAVAIAssistanceTelemetry@@P6AXXZ@Z @ 0x180637498 (-get@-$static_lazy@VAIAssistanceTelemetry@@@details@wil@@QEAAPEAVAIAssistanceTelemetry@@P6AXXZ@Z.c)
 */

int __fastcall AIAssistanceTelemetry::PolicyCheckError<unsigned short const (&)[28],unsigned short const (&)[50],long &>(
        const WCHAR *a1,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // rcx
  const WCHAR *v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF
  const WCHAR *v11; // [rsp+68h] [rbp+20h] BYREF

  v10 = a2;
  v9 = a1;
  v4 = wil::details::static_lazy<AIAssistanceTelemetry>::get(
         a1,
         _lambda_112a6f497407e40ee53cd3a0c551aaad_::_lambda_invoker_cdecl_);
  v7 = *(_DWORD **)(v4 + 8);
  if ( *v7 > 5u )
  {
    LODWORD(v10) = *a3;
    v9 = L"Failed reading SLPolicy_WindowsCopilot_Available.";
    v11 = L"IsCopilotSupportedOSEdition";
    LODWORD(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
                    (__int64)v7,
                    byte_18081C78A,
                    v5,
                    v6,
                    &v11,
                    &v9,
                    (__int64)&v10);
  }
  return v4;
}
