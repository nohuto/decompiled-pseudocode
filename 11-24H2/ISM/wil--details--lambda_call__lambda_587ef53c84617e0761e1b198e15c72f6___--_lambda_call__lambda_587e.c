/*
 * XREFs of wil::details::lambda_call__lambda_587ef53c84617e0761e1b198e15c72f6___::_lambda_call__lambda_587ef53c84617e0761e1b198e15c72f6___ @ 0x1800E5F1C
 * Callers:
 *     _LampArrayDevice::ProcessLampState_::_1_::dtor$2 @ 0x1801D619A (_LampArrayDevice--ProcessLampState_--_1_--dtor$2.c)
 * Callees:
 *     _lambda_587ef53c84617e0761e1b198e15c72f6_::operator() @ 0x1800E607C (_lambda_587ef53c84617e0761e1b198e15c72f6_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_587ef53c84617e0761e1b198e15c72f6___::_lambda_call__lambda_587ef53c84617e0761e1b198e15c72f6___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_587ef53c84617e0761e1b198e15c72f6_::operator()(a1);
  }
  return result;
}
