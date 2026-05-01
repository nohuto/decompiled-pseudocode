/*
 * XREFs of ??$SwipeGestureState@IH_N@MultitaskingViewTelemetry@@SAX$$QEAI$$QEAH$$QEA_N@Z @ 0x1802B6A10
 * Callers:
 *     ?CancelTouchSwipe@MultitaskingViewGestureHandler@@UEAAJXZ @ 0x18049D110 (-CancelTouchSwipe@MultitaskingViewGestureHandler@@UEAAJXZ.c)
 *     ?ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z @ 0x18049D280 (-ContinueTouchSwipe@MultitaskingViewGestureHandler@@UEAAJAEBUTouchSwipeArgs@@@Z.c)
 *     ?FinishTouchSwipeInternal@MultitaskingViewGestureHandler@@AEAAJXZ @ 0x18049DA5C (-FinishTouchSwipeInternal@MultitaskingViewGestureHandler@@AEAAJXZ.c)
 *     ?StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z @ 0x18049FB30 (-StartTouchSwipe@MultitaskingViewGestureHandler@@UEAAJIAEBUTouchSwipeArgs@@@Z.c)
 * Callees:
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x1800CC5C0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@@-$_tlgWr.c)
 */

int __fastcall MultitaskingViewTelemetry::SwipeGestureState<unsigned int,int,bool>(int *a1, int *a2, _BYTE *a3)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edx
  int v11; // [rsp+40h] [rbp-18h] BYREF
  int v12; // [rsp+44h] [rbp-14h] BYREF
  __int64 v13; // [rsp+48h] [rbp-10h] BYREF
  char v14; // [rsp+78h] [rbp+20h] BYREF

  v6 = WindowManagementLogging::Provider();
  if ( *(_DWORD *)v6 > 5u )
  {
    v9 = *a2;
    LOBYTE(v7) = *a3;
    v12 = *a1;
    v11 = v9;
    v13 = 0x1000000LL;
    v14 = v7;
    LODWORD(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                    (__int64)v6,
                    byte_1808053E8,
                    v7,
                    v8,
                    (__int64)&v12,
                    (__int64)&v11,
                    (__int64)&v14,
                    (__int64)&v13);
  }
  return (int)v6;
}
