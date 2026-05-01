/*
 * XREFs of ??$await_suspend@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@PEAVJointResize@@@experimental@std@@@?$await_adapter@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@QEAA_NU?$coroutine_handle@Upromise_type@?$coroutine_traits@U?$IAsyncOperation@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@PEAVJointResize@@@experimental@std@@@experimental@std@@@Z @ 0x1805384E4
 * Callers:
 *     JointResize::EnsureTileCollectionAsync$_ResumeCoro$1 @ 0x180539B40 (JointResize--EnsureTileCollectionAsync$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,1>::await_suspend<std::experimental::coroutine_traits<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,JointResize *>::promise_type>(
        __int64 *a1,
        __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9

  v2 = a2 - 112 + 32;
  v3 = v2 & -(__int64)(a2 != 112);
  if ( *(_BYTE *)(v3 + 0x10) )
  {
    *a1 = v3;
    *(_QWORD *)((v2 & -(__int64)(a2 != 112)) + 8) = a1;
    *(_QWORD *)v3 = _lambda_6df262792ed19d9f37b8132f1161a915_::_lambda_invoker_cdecl_;
  }
  return winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::WindowsUdk::UI::StartScreen::TileCollection>,1>::register_completed_callback();
}
