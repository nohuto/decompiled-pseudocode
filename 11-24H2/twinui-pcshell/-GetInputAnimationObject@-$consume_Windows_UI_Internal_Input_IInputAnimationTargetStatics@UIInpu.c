/*
 * XREFs of ?GetInputAnimationObject@?$consume_Windows_UI_Internal_Input_IInputAnimationTargetStatics@UIInputAnimationTargetStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUCompositor@Composition@UI@Windows@3@AEBUGestureAnimationData@Input@Internal@673@@Z @ 0x1804A81C0
 * Callers:
 *     ??R_lambda_46040f8e0bae6346adc61d6c0793c606_@@QEBA@AEBUIInputAnimationTargetStatics@Input@Internal@UI@Windows@winrt@@@Z @ 0x1804A50F8 (--R_lambda_46040f8e0bae6346adc61d6c0793c606_@@QEBA@AEBUIInputAnimationTargetStatics@Input@Intern.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Internal_Input_IInputAnimationTargetStatics<winrt::Windows::UI::Internal::Input::IInputAnimationTargetStatics>::GetInputAnimationObject(
        __int64 *a1,
        _QWORD *a2,
        __int64 *a3,
        __int128 *a4)
{
  __int64 v4; // rcx
  __int64 v6; // rdx
  __int64 (__fastcall *v7)(__int64, __int64, __int128 *, __int64 *); // rax
  int v8; // eax
  __int128 v10; // [rsp+40h] [rbp-38h] BYREF
  int v11; // [rsp+50h] [rbp-28h] BYREF
  __int128 v12; // [rsp+58h] [rbp-20h]
  __int64 v13; // [rsp+80h] [rbp+8h] BYREF
  _QWORD *v14; // [rsp+88h] [rbp+10h] BYREF

  v14 = a2;
  v4 = *a1;
  v13 = 0LL;
  v11 = 0;
  v12 = 0LL;
  v6 = *a3;
  v7 = *(__int64 (__fastcall **)(__int64, __int64, __int128 *, __int64 *))(*(_QWORD *)v4 + 56LL);
  v10 = *a4;
  v8 = v7(v4, v6, &v10, &v13);
  winrt::check_hresult((int *)&v14, v8, (__int64)&v11);
  *a2 = v13;
  return a2;
}
