/*
 * XREFs of std::_Sort_heap_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x18031BBD4
 * Callers:
 *     std::_Sort_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x1800BDA48 (std--_Sort_unchecked_std--shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BDC30 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     std::_Pop_heap_hole_by_index_std::shared_ptr_GameMruItem____std::shared_ptr_GameMruItem___lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x18031BAC0 (std--_Pop_heap_hole_by_index_std--shared_ptr_GameMruItem____std--shared_ptr_GameMruItem___lambda.c)
 */

signed __int64 __fastcall std::_Sort_heap_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(
        __int64 *a1,
        __int64 a2)
{
  signed __int64 result; // rax
  __int64 *v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // r14
  __int64 v7; // rax
  std::_Ref_count_base *v8; // rax
  __int64 v9; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v10; // [rsp+38h] [rbp-10h]

  result = (a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( result >= 32 )
  {
    v4 = (__int64 *)(a2 - 16);
    v5 = -8LL - (_QWORD)a1;
    v6 = 16LL - (_QWORD)a1;
    do
    {
      v7 = *v4;
      *v4 = 0LL;
      v9 = v7;
      v8 = (std::_Ref_count_base *)v4[1];
      v4[1] = 0LL;
      v10 = v8;
      std::shared_ptr<KBViewInfo>::operator=(v4, a1);
      std::_Pop_heap_hole_by_index_std::shared_ptr_GameMruItem____std::shared_ptr_GameMruItem___lambda_0b8527cc3003404473743c68e9f64d72___(
        (__int64)a1,
        0LL,
        ((__int64)v4 + v5 + 8) >> 4,
        &v9);
      if ( v10 )
        std::_Ref_count_base::_Decref(v10);
      v4 -= 2;
      result = ((unsigned __int64)v4 + v6) & 0xFFFFFFFFFFFFFFF0uLL;
    }
    while ( result >= 32 );
  }
  return result;
}
