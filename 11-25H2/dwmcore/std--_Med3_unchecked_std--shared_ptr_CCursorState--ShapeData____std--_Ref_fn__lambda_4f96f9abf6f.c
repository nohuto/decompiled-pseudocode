/*
 * XREFs of std::_Med3_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x1802BA9C4
 * Callers:
 *     std::_Guess_median_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x1802BA748 (std--_Guess_median_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__lambda_4f9.c)
 * Callees:
 *     std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData__&_std::shared_ptr_CCursorState::ShapeData__&_ @ 0x1802BA348 (std--_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___--operator()_std--shared_ptr_CCursorStat.c)
 */

__int64 std::_Med3_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        ...)
{
  __int64 *v4; // rsi
  __int64 *v5; // rbx
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 result; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, a3);
  v4 = a1 + 1;
  v5 = a2 + 1;
  if ( (unsigned __int8)std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                          (__int64)va,
                          (__int64)a2,
                          (__int64)a1) )
  {
    v8 = *a2;
    *a2 = *a1;
    *a1 = v8;
    v9 = *v5;
    *v5 = *v4;
    *v4 = v9;
  }
  result = std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
             (__int64)va,
             (__int64)a3,
             (__int64)a2);
  if ( (_BYTE)result )
  {
    v11 = *a3;
    *a3 = *a2;
    *a2 = v11;
    v12 = a3[1];
    a3[1] = *v5;
    *v5 = v12;
    result = std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
               (__int64)va,
               (__int64)a2,
               (__int64)a1);
    if ( (_BYTE)result )
    {
      v13 = *a2;
      *a2 = *a1;
      *a1 = v13;
      result = *v4;
      v14 = *v5;
      *v5 = *v4;
      *v4 = v14;
    }
  }
  return result;
}
