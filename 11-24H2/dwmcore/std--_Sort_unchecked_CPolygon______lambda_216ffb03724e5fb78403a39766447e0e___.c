/*
 * XREFs of std::_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x18021D204
 * Callers:
 *     ?BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@@Z @ 0x18020A53C (-BuildPolygonList@CBspNode@@QEAAJPEAVCVisual@@@Z.c)
 *     std::_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x18021D204 (std--_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___.c)
 * Callees:
 *     std::_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x18021D204 (std--_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___.c)
 *     std::_Insertion_sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x18021D264 (std--_Insertion_sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___.c)
 *     std::_Make_heap_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x180290D98 (std--_Make_heap_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___.c)
 *     std::_Partition_by_median_guess_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x180290E68 (std--_Partition_by_median_guess_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e_.c)
 *     std::_Sort_heap_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___ @ 0x1802910EC (std--_Sort_heap_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___.c)
 */

__int64 __fastcall std::_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(
        void *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl
  __int64 v5; // rbp
  __int64 v9; // r9
  __int64 v10; // r8
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  void *v12; // [rsp+28h] [rbp-10h]

  v4 = a4;
  v5 = a3;
  while ( 1 )
  {
    if ( (__int64)((a2 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF8uLL) <= 256 )
      return std::_Insertion_sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(a1);
    if ( v5 <= 0 )
      break;
    LOBYTE(a4) = v4;
    std::_Partition_by_median_guess_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(&v11, a1, a2, a4);
    v5 = (v5 >> 2) + (v5 >> 1);
    LOBYTE(v9) = v4;
    if ( (__int64)((v11 - (_QWORD)a1) & 0xFFFFFFFFFFFFFFF8uLL) >= (__int64)((a2 - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF8uLL) )
    {
      std::_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(v12, a2, v5, v9);
      a2 = v11;
    }
    else
    {
      std::_Sort_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(a1, v11, v5, v9);
      a1 = v12;
    }
  }
  LOBYTE(a3) = v4;
  std::_Make_heap_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(a1, a2, a3);
  LOBYTE(v10) = v4;
  return std::_Sort_heap_unchecked_CPolygon______lambda_216ffb03724e5fb78403a39766447e0e___(a1, a2, v10);
}
