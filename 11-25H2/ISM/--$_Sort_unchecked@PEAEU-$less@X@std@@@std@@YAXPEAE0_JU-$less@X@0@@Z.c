/*
 * XREFs of ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x1800E8050
 * Callers:
 *     ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x1800E8050 (--$_Sort_unchecked@PEAEU-$less@X@std@@@std@@YAXPEAE0_JU-$less@X@0@@Z.c)
 *     ?ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ @ 0x1800EA34C (-ValidateReportParsers@HidLampArrayDevice@@AEAAJXZ.c)
 * Callees:
 *     ??$_Partition_by_median_guess_unchecked@PEAEU?$less@X@std@@@std@@YA?AU?$pair@PEAEPEAE@0@PEAE0U?$less@X@0@@Z @ 0x1800E77AC (--$_Partition_by_median_guess_unchecked@PEAEU-$less@X@std@@@std@@YA-AU-$pair@PEAEPEAE@0@PEAE0U-$.c)
 *     ??$_Pop_heap_hole_by_index@PEAEEU?$less@X@std@@@std@@YAXPEAE_J1$$QEAEU?$less@X@0@@Z @ 0x1800E7D64 (--$_Pop_heap_hole_by_index@PEAEEU-$less@X@std@@@std@@YAXPEAE_J1$$QEAEU-$less@X@0@@Z.c)
 *     ??$_Sort_unchecked@PEAEU?$less@X@std@@@std@@YAXPEAE0_JU?$less@X@0@@Z @ 0x1800E8050 (--$_Sort_unchecked@PEAEU-$less@X@std@@@std@@YAXPEAE0_JU-$less@X@0@@Z.c)
 *     memmove_0 @ 0x1801C7D08 (memmove_0.c)
 */

void __fastcall std::_Sort_unchecked<unsigned char *,std::less<void>>(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        __int64 a3,
        char a4)
{
  unsigned __int8 *v8; // rbp
  __int64 v9; // r9
  __int64 i; // r14
  unsigned __int8 *v11; // rsi
  __int64 v12; // r14
  unsigned __int8 *j; // rbx
  unsigned __int8 v14; // bp
  unsigned __int8 *v15; // rcx
  unsigned __int8 *k; // rax
  unsigned __int8 *v17; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 *v18; // [rsp+38h] [rbp-20h]
  unsigned __int8 v19; // [rsp+60h] [rbp+8h] BYREF

  while ( a2 - a1 > 32 )
  {
    if ( a3 <= 0 )
    {
      for ( i = (a2 - a1) >> 1;
            i > 0;
            std::_Pop_heap_hole_by_index<unsigned char *,unsigned char,std::less<void>>((__int64)a1, i, a2 - a1, &v19) )
      {
        v19 = a1[--i];
      }
      v11 = a2 - 1;
      v12 = 1LL - (_QWORD)a1;
      do
      {
        if ( (__int64)&v11[v12] >= 2 )
        {
          v19 = *v11;
          *v11 = *a1;
          std::_Pop_heap_hole_by_index<unsigned char *,unsigned char,std::less<void>>((__int64)a1, 0LL, v11 - a1, &v19);
        }
        --v11;
      }
      while ( (__int64)&v11[v12] >= 2 );
      return;
    }
    std::_Partition_by_median_guess_unchecked<unsigned char *,std::less<void>>(&v17, a1, a2);
    v8 = v18;
    LOBYTE(v9) = a4;
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( v17 - a1 >= a2 - v18 )
    {
      std::_Sort_unchecked<unsigned char *,std::less<void>>(v18, a2, a3, v9);
      a2 = v17;
    }
    else
    {
      std::_Sort_unchecked<unsigned char *,std::less<void>>(a1, v17, a3, v9);
      a1 = v8;
    }
  }
  if ( a1 != a2 )
  {
    for ( j = a1 + 1; j != a2; ++j )
    {
      v14 = *j;
      v15 = j;
      if ( *j >= *a1 )
      {
        for ( k = j; v14 < *--k; v15 = k )
          *v15 = *k;
        *v15 = v14;
      }
      else
      {
        memmove_0(a1 + 1, a1, j - a1);
        *a1 = v14;
      }
    }
  }
}
