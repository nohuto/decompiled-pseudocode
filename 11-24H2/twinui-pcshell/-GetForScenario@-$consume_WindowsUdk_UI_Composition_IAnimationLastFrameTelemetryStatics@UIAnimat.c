/*
 * XREFs of ?GetForScenario@?$consume_WindowsUdk_UI_Composition_IAnimationLastFrameTelemetryStatics@UIAnimationLastFrameTelemetryStatics@Composition@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUguid@3@@Z @ 0x18022AD6C
 * Callers:
 *     ?CreateForWorkAreaRect@SnapLayoutManager@Shell@UI@WindowsUdk@winrt@@SA@AEBURect@Foundation@Windows@5@@Z @ 0x18022ACF8 (-CreateForWorkAreaRect@SnapLayoutManager@Shell@UI@WindowsUdk@winrt@@SA@AEBURect@Foundation@Windo.c)
 *     ??R_lambda_c6eead5922142ea911cef51d7f7bcdf9_@@QEBA@AEBUISnapLayoutManagerStatics2@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1802CA0CC (--R_lambda_c6eead5922142ea911cef51d7f7bcdf9_@@QEBA@AEBUISnapLayoutManagerStatics2@Shell@UI@Windo.c)
 * Callees:
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::consume_WindowsUdk_UI_Composition_IAnimationLastFrameTelemetryStatics<winrt::WindowsUdk::UI::Composition::IAnimationLastFrameTelemetryStatics>::GetForScenario(
        __int64 *a1,
        _QWORD *a2,
        __int128 *a3)
{
  __int64 v3; // rcx
  __int64 (__fastcall *v5)(__int64, __int128 *, __int64 *); // rax
  unsigned int v6; // eax
  __int128 v8; // [rsp+30h] [rbp-38h] BYREF
  int v9; // [rsp+40h] [rbp-28h] BYREF
  __int128 v10; // [rsp+48h] [rbp-20h]
  __int64 v11; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v12; // [rsp+78h] [rbp+10h] BYREF

  v12 = a2;
  v3 = *a1;
  v11 = 0LL;
  v9 = 0;
  v10 = 0LL;
  v5 = *(__int64 (__fastcall **)(__int64, __int128 *, __int64 *))(*(_QWORD *)v3 + 48LL);
  v8 = *a3;
  v6 = v5(v3, &v8, &v11);
  winrt::check_hresult(&v12, v6, &v9);
  *a2 = v11;
  return a2;
}
