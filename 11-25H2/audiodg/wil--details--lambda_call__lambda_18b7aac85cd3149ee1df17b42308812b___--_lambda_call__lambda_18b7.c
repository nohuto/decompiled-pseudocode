/*
 * XREFs of wil::details::lambda_call__lambda_18b7aac85cd3149ee1df17b42308812b___::_lambda_call__lambda_18b7aac85cd3149ee1df17b42308812b___ @ 0x14003FF14
 * Callers:
 *     _CConnectionInstance::CreateConnection_::_1_::dtor$0 @ 0x140093ACC (_CConnectionInstance--CreateConnection_--_1_--dtor$0.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_18b7aac85cd3149ee1df17b42308812b___::_lambda_call__lambda_18b7aac85cd3149ee1df17b42308812b___(
        _BYTE *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( a1[8] )
  {
    a1[8] = 0;
    result = *(_QWORD *)a1;
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
    if ( v3 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      result = *(_QWORD *)a1;
      *(_QWORD *)(*(_QWORD *)a1 + 24LL) = 0LL;
    }
  }
  return result;
}
