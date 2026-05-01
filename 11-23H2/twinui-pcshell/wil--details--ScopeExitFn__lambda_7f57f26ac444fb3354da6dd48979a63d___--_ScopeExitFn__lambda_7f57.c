/*
 * XREFs of wil::details::ScopeExitFn__lambda_7f57f26ac444fb3354da6dd48979a63d___::_ScopeExitFn__lambda_7f57f26ac444fb3354da6dd48979a63d___ @ 0x1805C2FC4
 * Callers:
 *     _TabletModeViewManager::ShowAppResizeView_::_1_::dtor$4 @ 0x1805C43DF (_TabletModeViewManager--ShowAppResizeView_--_1_--dtor$4.c)
 * Callees:
 *     _lambda_7f57f26ac444fb3354da6dd48979a63d_::operator() @ 0x1805C3174 (_lambda_7f57f26ac444fb3354da6dd48979a63d_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_7f57f26ac444fb3354da6dd48979a63d___::_ScopeExitFn__lambda_7f57f26ac444fb3354da6dd48979a63d___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return lambda_7f57f26ac444fb3354da6dd48979a63d_::operator()();
  }
  return result;
}
