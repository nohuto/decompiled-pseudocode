/*
 * XREFs of wil::details::lambda_call__lambda_1e7a4163740c696b5f39519ee05f49e8___::_lambda_call__lambda_1e7a4163740c696b5f39519ee05f49e8___ @ 0x180580DFC
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$1_::_1_::dtor$5 @ 0x1806F4DB4 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePrev_ea_1806F4DB4.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall wil::details::lambda_call__lambda_1e7a4163740c696b5f39519ee05f49e8___::_lambda_call__lambda_1e7a4163740c696b5f39519ee05f49e8___(
        __int64 a1)
{
  _DWORD *result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    DwmInvalidateIconicBitmaps(*(HWND *)(*(_QWORD *)a1 + 32LL));
    result = *(_DWORD **)(a1 + 8);
    *result = -2147467259;
  }
  return result;
}
