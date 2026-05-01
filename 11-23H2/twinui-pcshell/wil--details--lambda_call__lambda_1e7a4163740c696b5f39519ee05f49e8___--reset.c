/*
 * XREFs of wil::details::lambda_call__lambda_1e7a4163740c696b5f39519ee05f49e8___::reset @ 0x18063D2B0
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$1 @ 0x18021C660 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall wil::details::lambda_call__lambda_1e7a4163740c696b5f39519ee05f49e8___::reset(__int64 a1)
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
