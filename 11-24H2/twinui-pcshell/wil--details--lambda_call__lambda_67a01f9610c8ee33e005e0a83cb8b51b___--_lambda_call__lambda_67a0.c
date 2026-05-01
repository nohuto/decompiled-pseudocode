/*
 * XREFs of wil::details::lambda_call__lambda_67a01f9610c8ee33e005e0a83cb8b51b___::_lambda_call__lambda_67a01f9610c8ee33e005e0a83cb8b51b___ @ 0x18030CAAC
 * Callers:
 *     ?RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x18016DF60 (-RemoveApplicationView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@W4REMOVE_APPLICATION_.c)
 *     _CApplicationViewManager::RemoveApplicationView_::_1_::dtor$0 @ 0x1806D5990 (_CApplicationViewManager--RemoveApplicationView_--_1_--dtor$0.c)
 * Callees:
 *     _lambda_67a01f9610c8ee33e005e0a83cb8b51b_::operator() @ 0x18030D1A0 (_lambda_67a01f9610c8ee33e005e0a83cb8b51b_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_67a01f9610c8ee33e005e0a83cb8b51b___::_lambda_call__lambda_67a01f9610c8ee33e005e0a83cb8b51b___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return lambda_67a01f9610c8ee33e005e0a83cb8b51b_::operator()();
  }
  return result;
}
