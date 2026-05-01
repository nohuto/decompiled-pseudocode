/*
 * XREFs of std::_Func_impl_no_alloc__lambda_2f4a4756e41233d6a8b357bf16b0734c__long_unsigned_short___int_::_Do_call @ 0x18067B750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_2f4a4756e41233d6a8b357bf16b0734c__long_unsigned_short___int_::_Do_call(
        __int64 a1,
        const wchar_t **a2,
        _DWORD *a3)
{
  unsigned int v3; // ebx
  const wchar_t *v5; // rcx

  v3 = 0;
  v5 = *a2;
  if ( *a3 )
  {
    if ( *a3 == 1 )
      **(_WORD **)(a1 + 16) = wcstoul(v5, 0LL, 10);
    else
      return (unsigned int)-2147024809;
  }
  else
  {
    **(_QWORD **)(a1 + 8) = v5;
  }
  return v3;
}
