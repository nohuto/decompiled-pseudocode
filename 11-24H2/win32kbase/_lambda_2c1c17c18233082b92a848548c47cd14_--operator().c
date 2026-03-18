/*
 * XREFs of _lambda_2c1c17c18233082b92a848548c47cd14_::operator() @ 0x140239A94
 * Callers:
 *     DirectComposition::CResourceMarshaler::EmitUpdateCommand__lambda_2c1c17c18233082b92a848548c47cd14___ @ 0x1402399A4 (DirectComposition--CResourceMarshaler--EmitUpdateCommand__lambda_2c1c17c18233082b92a848548c47cd1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_2c1c17c18233082b92a848548c47cd14_::operator()(_DWORD **a1, __int64 a2)
{
  _DWORD *v2; // r8
  __int64 result; // rax
  __int64 v4; // rcx

  v2 = *a1;
  *(_DWORD *)(a2 + 8) = **a1;
  result = 0LL;
  v4 = *((_QWORD *)v2 + 1);
  if ( v4 )
    result = *(unsigned int *)(v4 + 32);
  *(_DWORD *)(a2 + 12) = result;
  return result;
}
