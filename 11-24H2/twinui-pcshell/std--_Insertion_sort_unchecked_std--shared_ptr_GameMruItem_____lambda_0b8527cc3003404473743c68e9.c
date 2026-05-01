/*
 * XREFs of std::_Insertion_sort_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x1800BDB38
 * Callers:
 *     std::_Sort_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___ @ 0x1800BDA48 (std--_Sort_unchecked_std--shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180048554 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??4?$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BDC30 (--4-$shared_ptr@UKBViewInfo@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

std::_Ref_count_base **__fastcall std::_Insertion_sort_unchecked_std::shared_ptr_GameMruItem_____lambda_0b8527cc3003404473743c68e9f64d72___(
        std::_Ref_count_base **a1,
        std::_Ref_count_base **a2)
{
  std::_Ref_count_base **i; // rbx
  std::_Ref_count_base *v5; // r15
  std::_Ref_count_base **v6; // r8
  std::_Ref_count_base *v7; // r14
  std::_Ref_count_base *v8; // rcx
  __int64 v9; // rax
  std::_Ref_count_base **k; // rbp
  std::_Ref_count_base **v11; // rcx
  std::_Ref_count_base *v12; // rcx
  std::_Ref_count_base **j; // r14
  std::_Ref_count_base *v15[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 != a2 )
  {
    for ( i = a1 + 2; i != a2; i += 2 )
    {
      v5 = *i;
      v6 = i;
      *i = 0LL;
      v7 = i[1];
      i[1] = 0LL;
      v8 = *a1;
      v9 = *(_QWORD *)v5;
      v15[0] = v5;
      v15[1] = v7;
      if ( *(_QWORD *)v8 >= v9 )
      {
        for ( j = i; ; v6 = j )
        {
          j -= 2;
          if ( *(_QWORD *)*j >= *(_QWORD *)v5 )
            break;
          std::shared_ptr<KBViewInfo>::operator=(v6, j);
        }
        std::shared_ptr<KBViewInfo>::operator=(v6, v15);
        v12 = v15[1];
      }
      else
      {
        for ( k = i; k != a1; std::shared_ptr<KBViewInfo>::operator=(v11, k) )
        {
          v11 = k;
          k -= 2;
        }
        *a1 = v5;
        v12 = a1[1];
        *(_OWORD *)v15 = 0LL;
        a1[1] = v7;
      }
      if ( v12 )
        std::_Ref_count_base::_Decref(v12);
    }
  }
  return a2;
}
