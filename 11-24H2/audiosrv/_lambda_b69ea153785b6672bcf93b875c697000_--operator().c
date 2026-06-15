/*
 * XREFs of _lambda_b69ea153785b6672bcf93b875c697000_::operator() @ 0x1800F439C
 * Callers:
 *     wil::details::lambda_call__lambda_b69ea153785b6672bcf93b875c697000___::_lambda_call__lambda_b69ea153785b6672bcf93b875c697000___ @ 0x1800F3DFC (wil--details--lambda_call__lambda_b69ea153785b6672bcf93b875c697000___--_lambda_call__lambda_b69e.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180001D3C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 */

struct AudioSrvTelemetryProvider *__fastcall lambda_b69ea153785b6672bcf93b875c697000_::operator()(__int64 a1)
{
  struct AudioSrvTelemetryProvider *result; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  _DWORD *v5; // rcx
  int v6; // [rsp+48h] [rbp+10h] BYREF
  __int64 v7; // [rsp+50h] [rbp+18h] BYREF

  result = AudioSrvTelemetryProvider::Instance();
  v5 = (_DWORD *)*((_QWORD *)result + 1);
  if ( *v5 > 4u )
  {
    v6 = ***(_DWORD ***)(a1 + 8);
    v7 = (*(_QWORD *)a1 + 8LL) & -(__int64)(*(_QWORD *)a1 != 0LL);
    return (struct AudioSrvTelemetryProvider *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                                                 (int)v5,
                                                 (int)&unk_1801AC916,
                                                 v3,
                                                 v4,
                                                 (__int64)&v7,
                                                 (__int64)&v6);
  }
  return result;
}
