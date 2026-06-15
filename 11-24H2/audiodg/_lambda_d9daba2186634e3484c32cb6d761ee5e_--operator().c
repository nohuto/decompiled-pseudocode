/*
 * XREFs of _lambda_d9daba2186634e3484c32cb6d761ee5e_::operator() @ 0x140061D98
 * Callers:
 *     wil::details::lambda_call__lambda_d9daba2186634e3484c32cb6d761ee5e___::_lambda_call__lambda_d9daba2186634e3484c32cb6d761ee5e___ @ 0x1400619D8 (wil--details--lambda_call__lambda_d9daba2186634e3484c32cb6d761ee5e___--_lambda_call__lambda_d9da.c)
 * Callees:
 *     ?Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1400073E4 (-Provider@AudioDgTelemetryProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3@Z @ 0x14002B98C (--$Write@U-$_tlgWrapperByVal@$07@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 */

const struct _tlgProvider_t *__fastcall lambda_d9daba2186634e3484c32cb6d761ee5e_::operator()(__int64 a1)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v3; // r9
  __int64 *v4; // rcx
  __int64 v5; // [rsp+48h] [rbp+10h] BYREF
  __int64 v6; // [rsp+50h] [rbp+18h] BYREF

  result = AudioDgTelemetryProvider::Provider(a1);
  if ( *(_DWORD *)result > 4u )
  {
    v4 = *(__int64 **)a1;
    v5 = **(_QWORD **)(a1 + 8);
    v6 = *v4;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
                                            (__int64)result,
                                            byte_1400AFBD9,
                                            v5,
                                            v3,
                                            (__int64)&v6,
                                            (__int64)&v5);
  }
  return result;
}
