/*
 * XREFs of std::_Pop_heap_hole_by_index_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData__std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x1802BADDC
 * Callers:
 *     std::_Make_heap_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x1802BA910 (std--_Make_heap_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__lambda_4f96f9.c)
 *     std::_Sort_heap_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x1802BAF04 (std--_Sort_heap_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__lambda_4f96f9.c)
 * Callees:
 *     ??4?$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180229D14 (--4-$shared_ptr@UShapeData@CCursorState@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData__&_std::shared_ptr_CCursorState::ShapeData__&_ @ 0x1802BA348 (std--_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___--operator()_std--shared_ptr_CCursorStat.c)
 */

_QWORD *__fastcall std::_Pop_heap_hole_by_index_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData__std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5)
{
  __int64 v5; // r13
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 i; // rbx
  __int64 v13; // rbx

  v5 = a3 - 1;
  v8 = (a3 - 1) >> 1;
  v9 = a2;
  for ( i = a2; i < v8; v9 = i )
  {
    i = ((unsigned __int8)std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                            (__int64)&a5,
                            a1 + 16 * (2 * i + 2),
                            a1 + 16 * (2 * i + 2) - 16) ^ 1LL)
      + 1
      + 2 * i;
    std::shared_ptr<CCursorState::ShapeData>::operator=((_QWORD *)(a1 + 16 * v9), (__int64 *)(a1 + 16 * i));
  }
  if ( i == v8 && (a3 & 1) == 0 )
  {
    std::shared_ptr<CCursorState::ShapeData>::operator=((_QWORD *)(a1 + 16 * v9), (__int64 *)(16 * a3 + a1 - 16));
    v9 = v5;
  }
  if ( a2 < v9 )
  {
    do
    {
      v13 = (v9 - 1) >> 1;
      if ( !(unsigned __int8)std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                               (__int64)&a5,
                               a1 + 16 * v13,
                               (__int64)a4) )
        break;
      std::shared_ptr<CCursorState::ShapeData>::operator=(
        (_QWORD *)(a1 + 16 * v9),
        (__int64 *)(a1 + 16 * ((v9 - 1) >> 1)));
      v9 = (v9 - 1) >> 1;
    }
    while ( a2 < v13 );
  }
  return std::shared_ptr<CCursorState::ShapeData>::operator=((_QWORD *)(a1 + 16 * v9), a4);
}
