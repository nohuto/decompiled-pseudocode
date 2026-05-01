/*
 * XREFs of ??$when_any@UIAsyncAction@Foundation@Windows@winrt@@U1234@U1234@@winrt@@YA?AUIAsyncAction@Foundation@Windows@0@AEBU1230@00@Z @ 0x1803465B0
 * Callers:
 *     GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync$_ResumeCoro$1 @ 0x18035D290 (GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync$_ResumeCoro$1.c)
 *     GamingOverlayExperienceManager::WaitForResultsOperationAcknowledgedAsync_old$_ResumeCoro$1 @ 0x18035D780 (GamingOverlayExperienceManager--WaitForResultsOperationAcknowledgedAsync_old$_ResumeCoro$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 *     winrt::when_any$_InitCoro$2_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_ @ 0x180345EB8 (winrt--when_any$_InitCoro$2_winrt--Windows--Foundation--IAsyncAction_winrt--Windows_ea_180345EB8.c)
 */

__int64 *__fastcall winrt::when_any<winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncAction,winrt::Windows::Foundation::IAsyncAction>(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void *v8; // rax
  int v10; // [rsp+190h] [rbp+8h] BYREF

  v8 = operator new(0x140uLL);
  v10 = 0;
  winrt::when_any__InitCoro_2_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_winrt::Windows::Foundation::IAsyncAction_(
    &v10,
    (__int64)v8 + 112,
    a1,
    a2,
    a3,
    a4);
  return a1;
}
