/*
 * XREFs of ??R_lambda_e0c989301fb7eeb47b8a27ef133367da_@@QEBA@AEBUIPointerPointStatics@Input@UI@Windows@winrt@@@Z @ 0x18058FE5C
 * Callers:
 *     ??$call@AEAV_lambda_e0c989301fb7eeb47b8a27ef133367da_@@@?$factory_cache_entry@UPointerPoint@Input@UI@Windows@winrt@@UIPointerPointStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_e0c989301fb7eeb47b8a27ef133367da_@@@Z @ 0x18058EE14 (--$call@AEAV_lambda_e0c989301fb7eeb47b8a27ef133367da_@@@-$factory_cache_entry@UPointerPoint@Inpu.c)
 *     ?GetCurrentPoint@PointerPoint@Input@UI@Windows@winrt@@SA@I@Z @ 0x180590E98 (-GetCurrentPoint@PointerPoint@Input@UI@Windows@winrt@@SA@I@Z.c)
 *     ??$call@AEAV_lambda_e7631c1690498db2dc470481c9b63fc5_@@@?$factory_cache_entry@UBuffer@Streams@Storage@Windows@winrt@@UIBufferFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_e7631c1690498db2dc470481c9b63fc5_@@@Z @ 0x180645AF4 (--$call@AEAV_lambda_e7631c1690498db2dc470481c9b63fc5_@@@-$factory_cache_entry@UBuffer@Streams@St.c)
 *     ??0Buffer@Streams@Storage@Windows@winrt@@QEAA@I@Z @ 0x1806495D8 (--0Buffer@Streams@Storage@Windows@winrt@@QEAA@I@Z.c)
 * Callees:
 *     ?GetCurrentPoint@?$consume_Windows_UI_Input_IPointerPointStatics@UIPointerPointStatics@Input@UI@Windows@winrt@@@impl@winrt@@QEBA@I@Z @ 0x18057E70C (-GetCurrentPoint@-$consume_Windows_UI_Input_IPointerPointStatics@UIPointerPointStatics@Input@UI@.c)
 */

_QWORD *__fastcall _lambda_e0c989301fb7eeb47b8a27ef133367da_::operator()(unsigned int **a1, _QWORD *a2, __int64 **a3)
{
  winrt::impl::consume_Windows_UI_Input_IPointerPointStatics<winrt::Windows::UI::Input::IPointerPointStatics>::GetCurrentPoint(
    a3,
    a2,
    **a1);
  return a2;
}
