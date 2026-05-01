/*
 * XREFs of wil::details::ScopeExitFn__lambda_6f49d1602fddbb99838411981311ff07___::_ScopeExitFn__lambda_6f49d1602fddbb99838411981311ff07___ @ 0x18017C224
 * Callers:
 *     _JointResize::OnArrangedWindowBorderEnter_::_1_::dtor$0 @ 0x1806D18A3 (_JointResize--OnArrangedWindowBorderEnter_--_1_--dtor$0.c)
 * Callees:
 *     ?OnArrangedWindowBorderExit@JointResize@@AEAAXXZ @ 0x18017C2A8 (-OnArrangedWindowBorderExit@JointResize@@AEAAXXZ.c)
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
