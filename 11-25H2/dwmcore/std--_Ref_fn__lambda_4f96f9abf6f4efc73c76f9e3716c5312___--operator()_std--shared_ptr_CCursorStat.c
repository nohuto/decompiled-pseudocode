/*
 * XREFs of std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData__&_std::shared_ptr_CCursorState::ShapeData__&_ @ 0x1802BA348
 * Callers:
 *     std::_Insertion_sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x1802BA804 (std--_Insertion_sort_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__lambda_4.c)
 *     std::_Med3_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x1802BA9C4 (std--_Med3_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__lambda_4f96f9abf6f.c)
 *     std::_Partition_by_median_guess_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x1802BAB60 (std--_Partition_by_median_guess_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_f.c)
 *     std::_Pop_heap_hole_by_index_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData__std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312_____ @ 0x1802BADDC (std--_Pop_heap_hole_by_index_std--shared_ptr_CCursorState--ShapeData____std--shared_ptr_CCursorS.c)
 * Callees:
 *     _lambda_4f96f9abf6f4efc73c76f9e3716c5312_::operator()_std::shared_ptr_CCursorState::ShapeData__std::shared_ptr_CCursorState::ShapeData___ @ 0x1802BA388 (_lambda_4f96f9abf6f4efc73c76f9e3716c5312_--operator()_std--shared_ptr_CCursorState--ShapeData__s.c)
 *     ??0?$shared_ptr@UShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z @ 0x1802BB2BC (--0-$shared_ptr@UShapeData@CCursorState@@@std@@QEAA@AEBV01@@Z.c)
 */

__int64 __fastcall std::_Ref_fn__lambda_4f96f9abf6f4efc73c76f9e3716c5312___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 v6; // r10
  _BYTE v8[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  v3 = std::shared_ptr<CCursorState::ShapeData>::shared_ptr<CCursorState::ShapeData>(v8, a3, a3, a2);
  v5 = std::shared_ptr<CCursorState::ShapeData>::shared_ptr<CCursorState::ShapeData>(v9, v4, v3, v4);
  return lambda_4f96f9abf6f4efc73c76f9e3716c5312_::operator()_std::shared_ptr_CCursorState::ShapeData__std::shared_ptr_CCursorState::ShapeData___(
           v6,
           v5);
}
