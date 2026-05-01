/*
 * XREFs of ?TryStartGlobalOperationAsync@?$consume_Windows_UI_Internal_Input_IInputGestureManager@UIInputGestureManager@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@I_K@Z @ 0x1804A0074
 * Callers:
 *     ?TryStartGlobalOperation@MultitaskingViewGestureHandler@@AEAA_NW4GestureState@@W4GestureAction@MultitaskingViewGestureHandlerHelpers@@@Z @ 0x1802ABD30 (-TryStartGlobalOperation@MultitaskingViewGestureHandler@@AEAA_NW4GestureState@@W4GestureAction@M.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManager<winrt::Windows::UI::Internal::Input::IInputGestureManager>::TryStartGlobalOperationAsync(
        __int64 **a1,
        _QWORD *a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 *v4; // rcx
  __int64 v6; // rax
  int v7; // eax
  int v9; // [rsp+38h] [rbp-20h] BYREF
  __int128 v10; // [rsp+40h] [rbp-18h]
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+68h] [rbp+10h] BYREF

  v12 = a2;
  v4 = *a1;
  v11 = 0LL;
  v9 = 0;
  v6 = *v4;
  v10 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64, __int64 *))(v6 + 56))(v4, a3, a4, &v11);
  winrt::check_hresult((int *)&v12, v7, (__int64)&v9);
  *a2 = v11;
  return a2;
}
