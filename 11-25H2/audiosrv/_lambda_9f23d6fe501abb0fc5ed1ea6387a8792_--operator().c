/*
 * XREFs of _lambda_9f23d6fe501abb0fc5ed1ea6387a8792_::operator() @ 0x1800EF160
 * Callers:
 *     wil::details::lambda_call__lambda_9f23d6fe501abb0fc5ed1ea6387a8792___::_lambda_call__lambda_9f23d6fe501abb0fc5ed1ea6387a8792___ @ 0x1800EEDF0 (wil--details--lambda_call__lambda_9f23d6fe501abb0fc5ed1ea6387a8792___--_lambda_call__lambda_9f23.c)
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18006783C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 */

char __fastcall lambda_9f23d6fe501abb0fc5ed1ea6387a8792_::operator()(__int64 *a1)
{
  struct AudioSrvTelemetryProvider *v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rdx
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  int v8; // [rsp+68h] [rbp+10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h] BYREF

  v2 = AudioSrvTelemetryProvider::Instance();
  if ( **((_DWORD **)v2 + 1) > 4u )
  {
    LOBYTE(v2) = tlgKeywordOn(*((_QWORD *)v2 + 1), 512LL);
    if ( (_BYTE)v2 )
    {
      v5 = *a1;
      v8 = *(_DWORD *)a1[1];
      v9 = *(_QWORD *)(v5 + 32);
      v10 = *(_QWORD *)(v5 + 24);
      v7[0] = v5;
      LOBYTE(v2) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
                     v3,
                     byte_1801A157F,
                     v3,
                     v4,
                     (__int64)v7,
                     (__int64)&v10,
                     (__int64)&v9,
                     (__int64)&v8);
    }
  }
  return (char)v2;
}
