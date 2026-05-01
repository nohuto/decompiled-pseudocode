/*
 * XREFs of ??$when_any@UIAsyncAction@Foundation@Windows@winrt@@U1234@@winrt@@YA?AUIAsyncAction@Foundation@Windows@0@AEBU1230@0@Z @ 0x180346534
 * Callers:
 *     GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync$_ResumeCoro$1 @ 0x18035DC20 (GamingOverlayExperienceManager--WaitForResultsOperationCompletedAsync$_ResumeCoro$1.c)
 *     GamingOverlayExperienceManager::WaitForResultsOperationCompletedAsync_old$_ResumeCoro$1 @ 0x18035E080 (GamingOverlayExperienceManager--WaitForResultsOperationCompletedAsync_old$_ResumeCoro$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     winrt::when_any$_InitCoro$2_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_ @ 0x180345D90 (winrt--when_any$_InitCoro$2_winrt--Windows--Foundation--IAsyncAction_winrt--Windows--Foundation-.c)
 */

__int64 *__fastcall winrt::when_any<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncAction>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  void *v6; // rax
  int v8; // [rsp+180h] [rbp+8h] BYREF

  v6 = operator new(0x140uLL);
  v8 = 0;
  winrt::when_any__InitCoro_2_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_(
    &v8,
    (__int64)v6 + 112,
    a1,
    a2,
    a3);
  return a1;
}
