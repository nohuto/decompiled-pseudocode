/*
 * XREFs of ?IsRpcDisconnectError@Shell@Internal@Windows@@YA_NJ@Z @ 0x180581688
 * Callers:
 *     ?IsRpcDisconnectOrCancelError@Shell@Internal@Windows@@YA_NJ@Z @ 0x1805D4D00 (-IsRpcDisconnectOrCancelError@Shell@Internal@Windows@@YA_NJ@Z.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::v_WndProc_::_1_::catch$1 @ 0x1806CE86F (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--v_WndProc_--_1_--catch$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SwitchToTab_::_1_::catch$1 @ 0x1806DE708 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SwitchToTab_--_1_--catch$1.c)
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TearOutTab_::_1_::catch$1 @ 0x1806DEA27 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TearOutTab_--_1_--catch$1.c)
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Internal::Shell::IsRpcDisconnectError(Windows::Internal::Shell *this)
{
  return (_DWORD)this == -2147023174
      || (_DWORD)this == -2147023170
      || (_DWORD)this == -2147417848
      || (_DWORD)this == -2147418105
      || (_DWORD)this == -2147418094;
}
