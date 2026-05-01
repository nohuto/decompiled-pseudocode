/*
 * XREFs of ?Position@?$consume_Windows_UI_Internal_Input_IInputGestureOperation@UIInputGestureOperation@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18049F1B4
 * Callers:
 *     ?InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x1801ED1D0 (-InputGestureOperationStarted@TouchEdgeGestureProcessor@@AEAAXAEBUInputGestureOperation@Input@In.c)
 *     ?InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@@Z @ 0x18049EB00 (-InputGestureOperationStarted@MultitaskingViewGestureHandler@@AEAAXAEBUInputGestureOperation@Inp.c)
 *     ?InitializeCustomPropertiesForSwitch@CAppThumbnailWindow@@AEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@@Z @ 0x1804A8700 (-InitializeCustomPropertiesForSwitch@CAppThumbnailWindow@@AEAAXAEBUInputGestureOperation@Input@I.c)
 *     ?InputGestureOperationStarted_@TouchEdgeGestureTelemetry@@QEAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@@Z @ 0x180593DB0 (-InputGestureOperationStarted_@TouchEdgeGestureTelemetry@@QEAAXAEBUInputGestureOperation@Input@I.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureOperation<winrt::Windows::UI::Internal::Input::IInputGestureOperation>::Position(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-28h] BYREF
  __int128 v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0;
  *a2 = 0LL;
  v3 = *a1;
  v7 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 88LL))(v3);
  winrt::check_hresult(&v8, v4, (__int64)&v6);
  return a2;
}
