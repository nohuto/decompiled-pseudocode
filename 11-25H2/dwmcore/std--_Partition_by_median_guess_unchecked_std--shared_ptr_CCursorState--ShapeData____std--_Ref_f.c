/*
 * XREFs of std::_Partition_by_median_guess_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x1802BAB60
 * Callers:
 *     std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x1802BAFD4 (std--_Sort_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__lambda_4f96f9abf6f.c)
 * Callees:
 *     std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData__&_std::shared_ptr_CCursorState::ShapeData__&_ @ 0x1802BA348 (std--_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___--operator()_std--shared_ptr_CCursorStat.c)
 *     std::_Guess_median_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x1802BA748 (std--_Guess_median_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__lambda_4f9.c)
 */

_QWORD *std::_Partition_by_median_guess_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
        _QWORD *a1,
        unsigned __int64 a2,
        _QWORD *a3,
        ...)
{
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  _QWORD *v8; // rsi
  _QWORD *v9; // rsi
  _QWORD *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rcx
  bool v13; // zf
  _QWORD *v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  _QWORD *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  _QWORD *result; // rax
  va_list va; // [rsp+68h] [rbp+20h] BYREF

  va_start(va, a3);
  v6 = (_QWORD *)(a2 + 16 * ((__int64)((__int64)a3 - a2) >> 5));
  std::_Guess_median_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
    a2,
    (__int64)v6,
    (__int64)(a3 - 2));
  v7 = v6 + 2;
  if ( a2 < (unsigned __int64)v6 )
  {
    do
    {
      v8 = v6 - 2;
      if ( (unsigned __int8)std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                              (__int64)va,
                              (__int64)(v6 - 2),
                              (__int64)v6) )
        break;
      if ( (unsigned __int8)std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                              (__int64)va,
                              (__int64)v6,
                              (__int64)(v6 - 2)) )
        break;
      v6 -= 2;
    }
    while ( a2 < (unsigned __int64)v8 );
  }
  while ( v7 < a3
       && !(unsigned __int8)std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                              (__int64)va,
                              (__int64)v7,
                              (__int64)v6)
       && !(unsigned __int8)std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                              (__int64)va,
                              (__int64)v6,
                              (__int64)v7) )
    v7 += 2;
  v9 = v7;
  v10 = v6;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v9 < a3 )
      {
        if ( (unsigned __int8)std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                                (__int64)va,
                                (__int64)v6,
                                (__int64)v9) )
          goto LABEL_35;
        if ( !(unsigned __int8)std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                                 (__int64)va,
                                 (__int64)v9,
                                 (__int64)v6) )
        {
          if ( v7 != v9 )
          {
            v11 = *v7;
            *v7 = *v9;
            *v9 = v11;
            v12 = v7[1];
            v7[1] = v9[1];
            v9[1] = v12;
          }
          v7 += 2;
          goto LABEL_35;
        }
      }
      v13 = v10 == (_QWORD *)a2;
      if ( (unsigned __int64)v10 > a2 )
      {
        v14 = v10 - 2;
        do
        {
          if ( !(unsigned __int8)std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                                   (__int64)va,
                                   (__int64)v14,
                                   (__int64)v6) )
          {
            if ( (unsigned __int8)std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                                    (__int64)va,
                                    (__int64)v6,
                                    (__int64)v14) )
              break;
            v6 -= 2;
            if ( v6 != v14 )
            {
              v15 = *v6;
              *v6 = *v14;
              *v14 = v15;
              v16 = v6[1];
              v6[1] = v14[1];
              v14[1] = v16;
            }
          }
          v10 -= 2;
          v14 -= 2;
        }
        while ( a2 < (unsigned __int64)v10 );
        v13 = v10 == (_QWORD *)a2;
      }
      if ( v13 )
        break;
      v10 -= 2;
      if ( v9 != a3 )
      {
        v26 = *v9;
        *v9 = *v10;
        *v10 = v26;
        v27 = v9[1];
        v9[1] = v10[1];
        v10[1] = v27;
        goto LABEL_35;
      }
      v6 -= 2;
      v21 = v6 + 1;
      if ( v10 != v6 )
      {
        v22 = *v10;
        *v10 = *v6;
        *v6 = v22;
        v23 = v10[1];
        v10[1] = *v21;
        *v21 = v23;
      }
      v24 = *v6;
      v7 -= 2;
      *v6 = *v7;
      *v7 = v24;
      v25 = *v21;
      *v21 = v7[1];
      v7[1] = v25;
    }
    if ( v9 == a3 )
      break;
    if ( v7 != v9 )
    {
      v17 = *v6;
      *v6 = *v7;
      *v7 = v17;
      v18 = v6[1];
      v6[1] = v7[1];
      v7[1] = v18;
    }
    v19 = *v6;
    v7 += 2;
    *v6 = *v9;
    *v9 = v19;
    v20 = v6[1];
    v6[1] = v9[1];
    v6 += 2;
    v9[1] = v20;
LABEL_35:
    v9 += 2;
  }
  result = a1;
  *a1 = v6;
  a1[1] = v7;
  return result;
}
