/*
 * XREFs of ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1801A544C
 * Callers:
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1801A544C (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 *     ?FindExactComboButtonMatch@ButtonRecognizer@@AEBA?AV?$reverse_iterator@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@@std@@AEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@3@@Z @ 0x1801A60FC (-FindExactComboButtonMatch@ButtonRecognizer@@AEBA-AV-$reverse_iterator@V-$_Tree_const_iterator@V.c)
 *     ?IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV?$vector@W4_Button@@V?$allocator@W4_Button@@@std@@@std@@@Z @ 0x1801A6494 (-IsComboButtonCandidate@ButtonRecognizer@@AEBA_NAEAV-$vector@W4_Button@@V-$allocator@W4_Button@@.c)
 *     ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x1801A68AC (-RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@.c)
 * Callees:
 *     ??$_Partition_by_median_guess_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YA?AU?$pair@PEAW4_Button@@PEAW41@@0@PEAW4_Button@@0U?$less@X@0@@Z @ 0x1801A51DC (--$_Partition_by_median_guess_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YA-AU-$pair@PEAW4_But.c)
 *     ??$_Pop_heap_hole_by_index@PEAW4_Button@@W41@U?$less@X@std@@@std@@YAXPEAW4_Button@@_J1$$QEAW41@U?$less@X@0@@Z @ 0x1801A53A8 (--$_Pop_heap_hole_by_index@PEAW4_Button@@W41@U-$less@X@std@@@std@@YAXPEAW4_Button@@_J1$$QEAW41@U.c)
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x1801A544C (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 *     memmove_0 @ 0x1801CF1A8 (memmove_0.c)
 */

void __fastcall std::_Sort_unchecked<enum _Button *,std::less<void>>(int *a1, int *a2, __int64 a3, char a4)
{
  __int64 v8; // r8
  int *v9; // r14
  __int64 v10; // r9
  __int64 i; // rbp
  int *v12; // rsi
  int *j; // rbx
  int v14; // ebp
  int *v15; // rcx
  int *k; // rax
  int *v17; // [rsp+30h] [rbp-28h] BYREF
  int *v18; // [rsp+38h] [rbp-20h]
  int v19; // [rsp+60h] [rbp+8h] BYREF

  while ( 1 )
  {
    v8 = a2 - a1;
    if ( v8 <= 32 )
      break;
    if ( a3 <= 0 )
    {
      for ( i = ((char *)a2 - (char *)a1) >> 3;
            i > 0;
            std::_Pop_heap_hole_by_index<enum _Button *,enum _Button,std::less<void>>((__int64)a1, i, v8, &v19) )
      {
        v19 = a1[--i];
      }
      v12 = a2 - 1;
      do
      {
        v19 = *v12;
        *v12 = *a1;
        std::_Pop_heap_hole_by_index<enum _Button *,enum _Button,std::less<void>>((__int64)a1, 0LL, v12 - a1, &v19);
        --v12;
      }
      while ( (__int64)(((unsigned __int64)v12 + 4LL - (_QWORD)a1) & 0xFFFFFFFFFFFFFFFCuLL) >= 8 );
      return;
    }
    std::_Partition_by_median_guess_unchecked<enum _Button *,std::less<void>>(&v17, a1, a2);
    v9 = v18;
    LOBYTE(v10) = a4;
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)(((char *)v17 - (char *)a1) & 0xFFFFFFFFFFFFFFFCuLL) >= (__int64)(((char *)a2 - (char *)v18) & 0xFFFFFFFFFFFFFFFCuLL) )
    {
      std::_Sort_unchecked<enum _Button *,std::less<void>>(v18, a2, a3, v10);
      a2 = v17;
    }
    else
    {
      std::_Sort_unchecked<enum _Button *,std::less<void>>(a1, v17, a3, v10);
      a1 = v9;
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
        memmove_0(a1 + 1, a1, (char *)j - (char *)a1);
        *a1 = v14;
      }
    }
  }
}
