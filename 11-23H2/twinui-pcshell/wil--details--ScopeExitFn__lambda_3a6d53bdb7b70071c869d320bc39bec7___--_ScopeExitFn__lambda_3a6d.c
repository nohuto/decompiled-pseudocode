/*
 * XREFs of wil::details::ScopeExitFn__lambda_3a6d53bdb7b70071c869d320bc39bec7___::_ScopeExitFn__lambda_3a6d53bdb7b70071c869d320bc39bec7___ @ 0x1805C2F74
 * Callers:
 *     _TabletModeViewManager::ShowWindowArrangementView_::_1_::dtor$3 @ 0x1805C4843 (_TabletModeViewManager--ShowWindowArrangementView_--_1_--dtor$3.c)
 * Callees:
 *     _lambda_3a6d53bdb7b70071c869d320bc39bec7_::operator() @ 0x1805C3114 (_lambda_3a6d53bdb7b70071c869d320bc39bec7_--operator().c)
 */

__int64 __fastcall wil::details::ScopeExitFn__lambda_3a6d53bdb7b70071c869d320bc39bec7___::_ScopeExitFn__lambda_3a6d53bdb7b70071c869d320bc39bec7___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return lambda_3a6d53bdb7b70071c869d320bc39bec7_::operator()();
  }
  return result;
}
