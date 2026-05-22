/*
 * XREFs of _lambda_f331ad8aa7f9e8b97a1a62f842df472b_::__lambda_f331ad8aa7f9e8b97a1a62f842df472b_ @ 0x18005A178
 * Callers:
 *     _MPCConstantManagerClient::CreateStringVectorPrincipal_::_1_::dtor$2 @ 0x1801D08A7 (_MPCConstantManagerClient--CreateStringVectorPrincipal_--_1_--dtor$2.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall lambda_f331ad8aa7f9e8b97a1a62f842df472b_::__lambda_f331ad8aa7f9e8b97a1a62f842df472b_(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    *(_QWORD *)(result + 8) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return result;
}
