/*
 * XREFs of std::_Sort_unchecked_detail::basic_iterator_COverlayContext_____lambda_75e1476dc5068012ea3e1cac136e32a1___ @ 0x180273C54
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18013DBE0 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     std::_Sort_unchecked_detail::basic_iterator_COverlayContext_____lambda_75e1476dc5068012ea3e1cac136e32a1___ @ 0x180273C54 (std--_Sort_unchecked_detail--basic_iterator_COverlayContext_____lambda_75e1476dc5068012ea3e1cac1.c)
 * Callees:
 *     std::_Insertion_sort_unchecked_detail::basic_iterator_COverlayContext_____lambda_75e1476dc5068012ea3e1cac136e32a1___ @ 0x180273200 (std--_Insertion_sort_unchecked_detail--basic_iterator_COverlayContext_____lambda_75e1476dc506801.c)
 *     std::_Partition_by_median_guess_unchecked_detail::basic_iterator_COverlayContext_____lambda_75e1476dc5068012ea3e1cac136e32a1___ @ 0x180273548 (std--_Partition_by_median_guess_unchecked_detail--basic_iterator_COverlayContext_____lambda_75e1.c)
 *     std::_Pop_heap_hole_by_index_detail::basic_iterator_COverlayContext____COverlayContext____lambda_75e1476dc5068012ea3e1cac136e32a1___ @ 0x180273A38 (std--_Pop_heap_hole_by_index_detail--basic_iterator_COverlayContext____COverlayContext____lambda.c)
 *     std::_Sort_unchecked_detail::basic_iterator_COverlayContext_____lambda_75e1476dc5068012ea3e1cac136e32a1___ @ 0x180273C54 (std--_Sort_unchecked_detail--basic_iterator_COverlayContext_____lambda_75e1476dc5068012ea3e1cac1.c)
 */

signed __int64 __fastcall std::_Sort_unchecked_detail::basic_iterator_COverlayContext_____lambda_75e1476dc5068012ea3e1cac136e32a1___(
        char **a1,
        char **a2,
        __int64 a3,
        char a4)
{
  char *v4; // rbx
  char *i; // rsi
  char *v10; // rbx
  __int64 v11; // r9
  char *v12; // rsi
  signed __int64 result; // rax
  __int64 v14; // rbx
  __int64 v15; // r14
  char *v16; // rcx
  char *v17; // rbx
  char *v18; // rsi
  __int64 v19; // [rsp+20h] [rbp-20h]
  char *v20; // [rsp+30h] [rbp-10h] BYREF
  char *v21; // [rsp+38h] [rbp-8h]
  char *v22; // [rsp+70h] [rbp+30h] BYREF
  char *v23; // [rsp+78h] [rbp+38h] BYREF

  v4 = *a2;
  for ( i = *a1; ; i = *a1 )
  {
    if ( (__int64)((v4 - i) & 0xFFFFFFFFFFFFFFF8uLL) <= 256 )
    {
      v22 = v4;
      v23 = i;
      return (signed __int64)std::_Insertion_sort_unchecked_detail::basic_iterator_COverlayContext_____lambda_75e1476dc5068012ea3e1cac136e32a1___(
                               &v20,
                               (_QWORD ***)&v23,
                               &v22);
    }
    if ( a3 <= 0 )
      break;
    v22 = v4;
    v23 = i;
    std::_Partition_by_median_guess_unchecked_detail::basic_iterator_COverlayContext_____lambda_75e1476dc5068012ea3e1cac136e32a1___(
      &v20,
      (__int64 *)&v23,
      &v22);
    v10 = v20;
    LOBYTE(v11) = a4;
    v12 = v21;
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)((v20 - *a1) & 0xFFFFFFFFFFFFFFF8uLL) >= (__int64)((*a2 - v21) & 0xFFFFFFFFFFFFFFF8uLL) )
    {
      v22 = *a2;
      v23 = v21;
      std::_Sort_unchecked_detail::basic_iterator_COverlayContext_____lambda_75e1476dc5068012ea3e1cac136e32a1___(
        &v23,
        &v22,
        a3,
        v11);
      *a2 = v10;
    }
    else
    {
      v23 = *a1;
      v22 = v20;
      std::_Sort_unchecked_detail::basic_iterator_COverlayContext_____lambda_75e1476dc5068012ea3e1cac136e32a1___(
        &v23,
        &v22,
        a3,
        v11);
      *a1 = v12;
    }
    v4 = *a2;
  }
  v14 = (v4 - i) >> 3;
  v15 = v14 >> 1;
  if ( v14 >> 1 > 0 )
  {
    v23 = i;
    do
    {
      --v15;
      LOBYTE(v19) = a4;
      v22 = *(char **)&i[8 * v15];
      std::_Pop_heap_hole_by_index_detail::basic_iterator_COverlayContext____COverlayContext____lambda_75e1476dc5068012ea3e1cac136e32a1___(
        (__int64 *)&v23,
        v15,
        v14,
        &v22,
        v19);
    }
    while ( v15 > 0 );
  }
  v16 = *a2;
  v17 = *a1;
  while ( 1 )
  {
    result = (v16 - v17) & 0xFFFFFFFFFFFFFFF8uLL;
    if ( result < 16 )
      break;
    v18 = v16 - 8;
    v22 = (char *)*((_QWORD *)v16 - 1);
    *(_QWORD *)v18 = *(_QWORD *)v17;
    v23 = v17;
    LOBYTE(v19) = a4;
    std::_Pop_heap_hole_by_index_detail::basic_iterator_COverlayContext____COverlayContext____lambda_75e1476dc5068012ea3e1cac136e32a1___(
      (__int64 *)&v23,
      0LL,
      (v16 - 8 - v17) >> 3,
      &v22,
      v19);
    v16 = v18;
  }
  return result;
}
