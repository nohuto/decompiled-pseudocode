/*
 * XREFs of wil::details::ScopeExitFn__lambda_6f49d1602fddbb99838411981311ff07___::_ScopeExitFn__lambda_6f49d1602fddbb99838411981311ff07___ @ 0x1805E1598
 * Callers:
 *     _JointResize::OnArrangedWindowBorderEnter_::_1_::dtor$0 @ 0x1805E3905 (_JointResize--OnArrangedWindowBorderEnter_--_1_--dtor$0.c)
 * Callees:
 *     ?OnArrangedWindowBorderExit@JointResize@@AEAAXXZ @ 0x1802E6DC2 (-OnArrangedWindowBorderExit@JointResize@@AEAAXXZ.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_6f49d1602fddbb99838411981311ff07___::_ScopeExitFn__lambda_6f49d1602fddbb99838411981311ff07___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    JointResize::OnArrangedWindowBorderExit(*(JointResize **)a1);
  }
}
