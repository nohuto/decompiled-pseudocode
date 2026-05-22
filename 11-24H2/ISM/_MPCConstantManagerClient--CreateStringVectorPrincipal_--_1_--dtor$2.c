/*
 * XREFs of _MPCConstantManagerClient::CreateStringVectorPrincipal_::_1_::dtor$2 @ 0x1801D80E7
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_f331ad8aa7f9e8b97a1a62f842df472b_::__lambda_f331ad8aa7f9e8b97a1a62f842df472b_ @ 0x180059F88 (_lambda_f331ad8aa7f9e8b97a1a62f842df472b_--__lambda_f331ad8aa7f9e8b97a1a62f842df472b_.c)
 */

__int64 __fastcall MPCConstantManagerClient::CreateStringVectorPrincipal_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return lambda_f331ad8aa7f9e8b97a1a62f842df472b_::__lambda_f331ad8aa7f9e8b97a1a62f842df472b_(a2 + 40);
  }
  return result;
}
