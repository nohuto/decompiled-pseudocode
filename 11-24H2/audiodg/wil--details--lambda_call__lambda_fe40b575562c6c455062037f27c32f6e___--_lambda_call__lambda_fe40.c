/*
 * XREFs of wil::details::lambda_call__lambda_fe40b575562c6c455062037f27c32f6e___::_lambda_call__lambda_fe40b575562c6c455062037f27c32f6e___ @ 0x140048D34
 * Callers:
 *     _CConnectionInstance::CreateConnectionBuffer_::_1_::dtor$0 @ 0x14009351A (_CConnectionInstance--CreateConnectionBuffer_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_fe40b575562c6c455062037f27c32f6e___::_lambda_call__lambda_fe40b575562c6c455062037f27c32f6e___(
        _BYTE *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( a1[8] )
  {
    a1[8] = 0;
    result = *(_QWORD *)a1;
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 8LL);
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      result = *(_QWORD *)a1;
      *(_QWORD *)(*(_QWORD *)a1 + 8LL) = 0LL;
    }
  }
  return result;
}
