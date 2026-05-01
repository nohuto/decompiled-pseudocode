/*
 * XREFs of ?TearOutTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x1802CE0F4
 * Callers:
 *     ?v_WndProc@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@EEAA_JPEAUHWND__@@I_K_J@Z @ 0x180092250 (-v_WndProc@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@EEAA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?RequestTabTearOut@?$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@Shell@UI@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUWindowTabView@Shell@UI@Internal@Windows@3@AEBUhstring@param@3@_K@Z @ 0x1805819F0 (-RequestTabTearOut@-$consume_Windows_Internal_UI_Shell_IWindowTabDataModel@UIWindowTabDataModel@.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TearOutTab(
        winrt::Windows::Internal::Shell::implementation::TabProxyWindow *this)
{
  int v1; // ebx
  const char *v2; // r9
  __int64 v3; // [rsp+0h] [rbp-58h] BYREF
  const winrt::hresult_error *v4[7]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *((_QWORD *)this + 6) )
  {
    v4[1] = (const winrt::hresult_error *)qword_1808C95F8;
    try
    {
      winrt::impl::consume_Windows_Internal_UI_Shell_IWindowTabDataModel<winrt::Windows::Internal::UI::Shell::IWindowTabDataModel>::RequestTabTearOut();
    }
    catch ( winrt::hresult_invalid_argument )
    {
      return;
    }
    catch ( const winrt::hresult_error *v4 )
    {
      v1 = *((_DWORD *)v4[0] + 3);
      if ( !Windows::Internal::Shell::IsRpcDisconnectError((Windows::Internal::Shell *)(unsigned int)v1, (int)&v3) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x3F0,
          (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
          v2);
      if ( v1 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x3F4,
          (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
          (const char *)(unsigned int)v1);
    }
  }
}
