/*
 * XREFs of wil::details::lambda_call__lambda_bb8c74dc12fedcc2a4c0331452efef3b___::_lambda_call__lambda_bb8c74dc12fedcc2a4c0331452efef3b___ @ 0x1802A9D84
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::TrySetWindowThumbnailAsync$_ResumeCoro$1_::_1_::dtor$0 @ 0x1806F51DE (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--TrySetWindowThumbnailAsync$_Re.c)
 * Callees:
 *     _lambda_bb8c74dc12fedcc2a4c0331452efef3b_::operator() @ 0x1800B90B0 (_lambda_bb8c74dc12fedcc2a4c0331452efef3b_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_bb8c74dc12fedcc2a4c0331452efef3b___::_lambda_call__lambda_bb8c74dc12fedcc2a4c0331452efef3b___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return lambda_bb8c74dc12fedcc2a4c0331452efef3b_::operator()(a1);
  }
  return result;
}
