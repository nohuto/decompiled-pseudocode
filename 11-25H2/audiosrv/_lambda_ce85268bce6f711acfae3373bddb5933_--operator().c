/*
 * XREFs of _lambda_ce85268bce6f711acfae3373bddb5933_::operator() @ 0x1800B82A4
 * Callers:
 *     wil::details::lambda_call__lambda_ce85268bce6f711acfae3373bddb5933___::_lambda_call__lambda_ce85268bce6f711acfae3373bddb5933___ @ 0x1800B73DC (wil--details--lambda_call__lambda_ce85268bce6f711acfae3373bddb5933___--_lambda_call__lambda_ce85.c)
 *     ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N1@Z @ 0x1800C0C4C (-UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N1@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18000274C (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTempl.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 */

struct AudioSrvTelemetryProvider *__fastcall lambda_ce85268bce6f711acfae3373bddb5933_::operator()(__int64 a1)
{
  struct AudioSrvTelemetryProvider *result; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  _DWORD *v5; // rcx
  char *v6; // rax
  char v7; // dl
  const WCHAR **v8; // rax
  const WCHAR *v9; // rdx
  const WCHAR **v10; // rax
  const WCHAR *v11; // [rsp+40h] [rbp-18h] BYREF
  char v12; // [rsp+68h] [rbp+10h] BYREF
  int v13; // [rsp+70h] [rbp+18h] BYREF
  const WCHAR *v14; // [rsp+78h] [rbp+20h] BYREF

  result = AudioSrvTelemetryProvider::Instance();
  v5 = (_DWORD *)*((_QWORD *)result + 1);
  if ( *v5 > 4u )
  {
    v6 = *(char **)(a1 + 16);
    v13 = **(_DWORD **)(a1 + 24);
    v7 = *v6;
    v8 = *(const WCHAR ***)(a1 + 8);
    v12 = v7;
    v9 = *v8;
    v10 = *(const WCHAR ***)a1;
    v14 = v9;
    v11 = *v10;
    return (struct AudioSrvTelemetryProvider *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
                                                 (int)v5,
                                                 (int)&unk_18019F0B5,
                                                 v3,
                                                 v4,
                                                 &v11,
                                                 &v14,
                                                 (__int64)&v12,
                                                 (__int64)&v13);
  }
  return result;
}
