/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_d7b00691c3c9723fe1824ae9cb58901d_@@CA@AEBUIColorsStatics@UI@Windows@winrt@@@Z @ 0x180607330
 * Callers:
 *     <none>
 * Callees:
 *     ?Green@?$consume_Windows_UI_IColorsStatics@UIColorsStatics@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180609D94 (-Green@-$consume_Windows_UI_IColorsStatics@UIColorsStatics@UI@Windows@winrt@@@impl@winrt@@QEBA@X.c)
 */

__int64 __fastcall _lambda_d7b00691c3c9723fe1824ae9cb58901d_::_lambda_invoker_cdecl_(
        const struct winrt::Windows::UI::IColorsStatics *a1)
{
  unsigned int v2; // [rsp+38h] [rbp+10h] BYREF

  winrt::impl::consume_Windows_UI_IColorsStatics<winrt::Windows::UI::IColorsStatics>::Green(a1, &v2);
  return v2;
}
