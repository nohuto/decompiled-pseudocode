/*
 * XREFs of ?GestureActionTriggered_@MultitaskingViewTelemetry@@QEBAXII@Z @ 0x18049DBCC
 * Callers:
 *     ?ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGestureHandlerHelpers@@PEBQEAUHWND__@@@Z @ 0x1801806F4 (-ActivateGestureAction@MultitaskingViewGestureHandler@@AEAAJW4GestureAction@MultitaskingViewGest.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800E3E94 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall MultitaskingViewTelemetry::GestureActionTriggered_(MultitaskingViewTelemetry *this, int a2, int a3)
{
  const struct _tlgProvider_t *v5; // rcx
  __int64 v6; // rcx
  __int64 v7[3]; // [rsp+40h] [rbp-18h] BYREF
  MultitaskingViewTelemetry *v8; // [rsp+60h] [rbp+8h] BYREF
  int v9; // [rsp+78h] [rbp+20h] BYREF

  v8 = this;
  v5 = WindowManagementLogging::Provider();
  if ( *(_DWORD *)v5 > 5u )
  {
    if ( tlgKeywordOn((__int64)v5, 0x400000000000LL) )
    {
      LODWORD(v8) = a3;
      v9 = a2;
      v7[0] = 0x1000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v6,
        byte_1808052C1,
        0LL,
        0LL,
        (__int64)v7,
        (__int64)&v9,
        (__int64)&v8);
    }
  }
}
