/*
 * XREFs of std::_Insertion_sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_39668c2dc6e40fe158f11373301c566a_____ @ 0x1802B0CD4
 * Callers:
 *     std::_Sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_39668c2dc6e40fe158f11373301c566a_____ @ 0x1802B13CC (std--_Sort_unchecked_std--shared_ptr_CCursorState--ShapeData____std--_Ref_fn__lambda_39668c2dc6e.c)
 * Callees:
 *     ??4?$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801A3F60 (--4-$shared_ptr@VCRegion@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1801A41EC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     std::_Ref_fn__lambda_39668c2dc6e40fe158f11373301c566a___::operator()_std::shared_ptr_CCursorState::ShapeData__&_std::shared_ptr_CCursorState::ShapeData__&_ @ 0x1802B0778 (std--_Ref_fn__lambda_39668c2dc6e40fe158f11373301c566a___--operator()_std--shared_ptr_CCursorStat.c)
 */

__int64 *__fastcall std::_Insertion_sort_unchecked_std::shared_ptr_CCursorState::ShapeData____std::_Ref_fn__lambda_39668c2dc6e40fe158f11373301c566a_____(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 *v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rax
  std::_Ref_count_base *v8; // rax
  __int64 *v9; // rsi
  __int64 *v10; // rcx
  __int64 *v11; // r15
  __int64 i; // r8
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF

  v16 = a3;
  if ( (__int64 *)a1 != a2 )
  {
    v5 = (__int64 *)(a1 + 16);
    if ( (__int64 *)(a1 + 16) != a2 )
    {
      v6 = a1;
      do
      {
        v7 = *v5;
        *v5 = 0LL;
        v14 = v7;
        v8 = *(std::_Ref_count_base **)(v6 + 24);
        v9 = v5;
        *(_QWORD *)(v6 + 24) = 0LL;
        v15 = v8;
        if ( (unsigned __int8)std::_Ref_fn__lambda_39668c2dc6e40fe158f11373301c566a___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                                (__int64)&v16,
                                (__int64)&v14,
                                a1) )
        {
          if ( v5 != (__int64 *)a1 )
          {
            do
            {
              v10 = v9;
              v9 -= 2;
              std::shared_ptr<CRegion>::operator=(v10, v9);
            }
            while ( v9 != (__int64 *)a1 );
          }
          v9 = (__int64 *)a1;
        }
        else
        {
          v11 = (__int64 *)v6;
          for ( i = v6;
                (unsigned __int8)std::_Ref_fn__lambda_39668c2dc6e40fe158f11373301c566a___::operator()_std::shared_ptr_CCursorState::ShapeData____std::shared_ptr_CCursorState::ShapeData____(
                                   (__int64)&v16,
                                   (__int64)&v14,
                                   i);
                i = (__int64)v11 )
          {
            std::shared_ptr<CRegion>::operator=(v9, v11);
            v9 = v11;
            v11 -= 2;
          }
        }
        std::shared_ptr<CRegion>::operator=(v9, &v14);
        if ( v15 )
          std::_Ref_count_base::_Decref(v15);
        v5 += 2;
        v6 += 16LL;
      }
      while ( v5 != a2 );
    }
  }
  return a2;
}
