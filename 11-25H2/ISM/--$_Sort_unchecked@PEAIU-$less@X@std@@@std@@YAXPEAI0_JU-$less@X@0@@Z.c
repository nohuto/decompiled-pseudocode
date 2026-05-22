/*
 * XREFs of ??$_Sort_unchecked@PEAIU?$less@X@std@@@std@@YAXPEAI0_JU?$less@X@0@@Z @ 0x1800F6924
 * Callers:
 *     ??$_Sort_unchecked@PEAIU?$less@X@std@@@std@@YAXPEAI0_JU?$less@X@0@@Z @ 0x1800F6924 (--$_Sort_unchecked@PEAIU-$less@X@std@@@std@@YAXPEAI0_JU-$less@X@0@@Z.c)
 *     ?FindClosestShapeBitmap@SystemCursorShape2@@QEAA?AV?$shared_ptr@VSystemCursorShapeBitmap2@@@std@@I@Z @ 0x1800F84C4 (-FindClosestShapeBitmap@SystemCursorShape2@@QEAA-AV-$shared_ptr@VSystemCursorShapeBitmap2@@@std@.c)
 * Callees:
 *     ??$_Partition_by_median_guess_unchecked@PEAIU?$less@X@std@@@std@@YA?AU?$pair@PEAIPEAI@0@PEAI0U?$less@X@0@@Z @ 0x1800F66B8 (--$_Partition_by_median_guess_unchecked@PEAIU-$less@X@std@@@std@@YA-AU-$pair@PEAIPEAI@0@PEAI0U-$.c)
 *     ??$_Pop_heap_hole_by_index@PEAIIU?$less@X@std@@@std@@YAXPEAI_J1$$QEAIU?$less@X@0@@Z @ 0x1800F6884 (--$_Pop_heap_hole_by_index@PEAIIU-$less@X@std@@@std@@YAXPEAI_J1$$QEAIU-$less@X@0@@Z.c)
 *     ??$_Sort_unchecked@PEAIU?$less@X@std@@@std@@YAXPEAI0_JU?$less@X@0@@Z @ 0x1800F6924 (--$_Sort_unchecked@PEAIU-$less@X@std@@@std@@YAXPEAI0_JU-$less@X@0@@Z.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 */

void __fastcall std::_Sort_unchecked<unsigned int *,std::less<void>>(int *a1, int *a2, __int64 a3, char a4)
{
  int *v8; // r14
  __int64 v9; // r9
  __int64 i; // rbp
  unsigned int *v11; // rsi
  int *j; // rbx
  unsigned int v13; // ebp
  _DWORD *v14; // rcx
  int *k; // rax
  int *v16; // [rsp+30h] [rbp-28h] BYREF
  int *v17; // [rsp+38h] [rbp-20h]
  unsigned int v18; // [rsp+60h] [rbp+8h] BYREF

  while ( a2 - a1 > 32 )
  {
    if ( a3 <= 0 )
    {
      for ( i = ((char *)a2 - (char *)a1) >> 3;
            i > 0;
            std::_Pop_heap_hole_by_index<unsigned int *,unsigned int,std::less<void>>((__int64)a1, i, a2 - a1, &v18) )
      {
        v18 = a1[--i];
      }
      v11 = (unsigned int *)(a2 - 1);
      do
      {
        v18 = *v11;
        *v11 = *a1;
        std::_Pop_heap_hole_by_index<unsigned int *,unsigned int,std::less<void>>(
          (__int64)a1,
          0LL,
          ((char *)v11-- - (char *)a1) >> 2,
          &v18);
      }
      while ( (__int64)(((unsigned __int64)v11 + 4LL - (_QWORD)a1) & 0xFFFFFFFFFFFFFFFCuLL) >= 8 );
      return;
    }
    std::_Partition_by_median_guess_unchecked<unsigned int *,std::less<void>>(&v16, a1, a2);
    v8 = v17;
    LOBYTE(v9) = a4;
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)(((char *)v16 - (char *)a1) & 0xFFFFFFFFFFFFFFFCuLL) >= (__int64)(((char *)a2 - (char *)v17) & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      std::_Sort_unchecked<unsigned int *,std::less<void>>(v17, a2, a3, v9);
      a2 = v16;
    }
    else
    {
      std::_Sort_unchecked<unsigned int *,std::less<void>>(a1, v16, a3, v9);
      a1 = v8;
    }
  }
  if ( a1 != a2 )
  {
    for ( j = a1 + 1; j != a2; ++j )
    {
      v13 = *j;
      v14 = j;
      if ( *j >= (unsigned int)*a1 )
      {
        for ( k = j; v13 < *--k; v14 = k )
          *v14 = *k;
        *v14 = v13;
      }
      else
      {
        memmove_0(a1 + 1, a1, (char *)j - (char *)a1);
        *a1 = v13;
      }
    }
  }
}
