/*
 * XREFs of std::_Func_impl_no_alloc__lambda_2cae7fceaf15de7e8c16c123bdd16a46__void_IMPCInputProviderBase___::_Do_call @ 0x18007D990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_2cae7fceaf15de7e8c16c123bdd16a46__void_IMPCInputProviderBase___::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  _BYTE *v2; // rbx
  __int64 result; // rax

  v2 = *(_BYTE **)(a1 + 8);
  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 152LL))(*a2);
  *v2 |= result;
  return result;
}
