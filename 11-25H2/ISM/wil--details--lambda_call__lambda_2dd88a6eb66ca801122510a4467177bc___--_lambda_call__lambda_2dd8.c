/*
 * XREFs of wil::details::lambda_call__lambda_2dd88a6eb66ca801122510a4467177bc___::_lambda_call__lambda_2dd88a6eb66ca801122510a4467177bc___ @ 0x1800E4AAC
 * Callers:
 *     _LampArrayDevice::ProcessLampState_::_1_::dtor$1 @ 0x1801CEADB (_LampArrayDevice--ProcessLampState_--_1_--dtor$1.c)
 * Callees:
 *     _lambda_2dd88a6eb66ca801122510a4467177bc_::operator() @ 0x1800E4C0C (_lambda_2dd88a6eb66ca801122510a4467177bc_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_2dd88a6eb66ca801122510a4467177bc___::_lambda_call__lambda_2dd88a6eb66ca801122510a4467177bc___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_2dd88a6eb66ca801122510a4467177bc_::operator()(a1);
  }
  return result;
}
