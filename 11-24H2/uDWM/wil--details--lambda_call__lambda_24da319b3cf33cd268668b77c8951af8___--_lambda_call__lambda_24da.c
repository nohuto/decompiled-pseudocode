/*
 * XREFs of wil::details::lambda_call__lambda_24da319b3cf33cd268668b77c8951af8___::_lambda_call__lambda_24da319b3cf33cd268668b77c8951af8___ @ 0x1800C2E54
 * Callers:
 *     _CDWriteText::CreateTextBrush_::_1_::dtor$4 @ 0x1800F6A00 (_CDWriteText--CreateTextBrush_--_1_--dtor$4.c)
 * Callees:
 *     _lambda_24da319b3cf33cd268668b77c8951af8_::operator() @ 0x1800C2E74 (_lambda_24da319b3cf33cd268668b77c8951af8_--operator().c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_24da319b3cf33cd268668b77c8951af8___::_lambda_call__lambda_24da319b3cf33cd268668b77c8951af8___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return lambda_24da319b3cf33cd268668b77c8951af8_::operator()(a1);
  }
  return result;
}
