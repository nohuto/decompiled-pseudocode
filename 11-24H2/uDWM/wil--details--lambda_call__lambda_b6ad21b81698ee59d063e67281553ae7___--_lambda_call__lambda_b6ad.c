/*
 * XREFs of wil::details::lambda_call__lambda_b6ad21b81698ee59d063e67281553ae7___::_lambda_call__lambda_b6ad21b81698ee59d063e67281553ae7___ @ 0x18006866C
 * Callers:
 *     _CAcrylicSheet::StopAnimations_::_1_::dtor$0 @ 0x1800F7442 (_CAcrylicSheet--StopAnimations_--_1_--dtor$0.c)
 * Callees:
 *     ?UnRegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ @ 0x180069230 (-UnRegisterGlobalTimer@CAcrylicSheet@@QEAAJXZ.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_b6ad21b81698ee59d063e67281553ae7___::_lambda_call__lambda_b6ad21b81698ee59d063e67281553ae7___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return CAcrylicSheet::UnRegisterGlobalTimer(*(CAcrylicSheet **)a1);
  }
  return result;
}
