/*
 * XREFs of ?_CalculateRowSize@GridLayoutFactory@@AEAA?AUCSize@Geometry@@XZ @ 0x1804D76E4
 * Callers:
 *     ?v_LayoutChildren@CSwitchItemGrid@@MEAAXXZ @ 0x1804C9C60 (-v_LayoutChildren@CSwitchItemGrid@@MEAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z @ 0x1804BC870 (-GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z.c)
 *     GridLayoutFactory::_ForEachGridItem__lambda_d8d38b7ecc183cf7a075ba43fd3ea28a___ @ 0x1804D683C (GridLayoutFactory--_ForEachGridItem__lambda_d8d38b7ecc183cf7a075ba43fd3ea28a___.c)
 *     ?RemoveAll@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAXXZ @ 0x1804D718C (-RemoveAll@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@VLayou.c)
 *     ?RemoveAll@?$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutRow@GridLayoutFactory@@@@@@QEAAXXZ @ 0x1804D7208 (-RemoveAll@-$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@VLayout.c)
 *     ?_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@AEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEA_KPEAH@Z @ 0x1804D7458 (-_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 *     ?_FitRowsToTargetWidth@GridLayoutFactory@@AEAAHAEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@@Z @ 0x1804D7BD0 (-_FitRowsToTargetWidth@GridLayoutFactory@@AEAAHAEAV-$CCoSimpleArray@VLayoutRow@GridLayoutFactory.c)
 *     ?_GetMaximumRowHeight@GridLayoutFactory@@AEAAH_K@Z @ 0x1804D7D90 (-_GetMaximumRowHeight@GridLayoutFactory@@AEAAH_K@Z.c)
 *     ?s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@HHH@Z @ 0x1804D8270 (-s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 *     memmove_0 @ 0x1806CA2E8 (memmove_0.c)
 */

// Hidden C++ exception states: #wind=2
int *__fastcall GridLayoutFactory::_CalculateRowSize(_DWORD *a1, int *a2)
{
  int v4; // r8d
  int v5; // eax
  int v6; // eax
  int v7; // r12d
  char *v8; // rbx
  char *v9; // r14
  unsigned int *v10; // r15
  int *v11; // r13
  int TotalWidthForHeight; // eax
  int *v13; // r13
  int MaximumRowHeight; // eax
  __int64 *v16; // [rsp+30h] [rbp-40h] BYREF
  int *v17; // [rsp+38h] [rbp-38h]
  __int64 v18; // [rsp+40h] [rbp-30h]
  __int64 v19; // [rsp+48h] [rbp-28h]
  __int64 v20; // [rsp+50h] [rbp-20h] BYREF
  __int64 v21; // [rsp+58h] [rbp-18h]
  __int64 v22; // [rsp+60h] [rbp-10h]
  __int64 v23; // [rsp+68h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  int *v25; // [rsp+B0h] [rbp+40h] BYREF
  unsigned __int64 v26; // [rsp+B8h] [rbp+48h] BYREF

  v4 = ThumbnailHeight::GetForScreenHeight((ThumbnailHeight *)(a1 + 18), a1[129])
     + a1[29]
     + a1[38]
     + a1[39]
     + a1[42]
     + a1[43];
  *a2 = a1[132] - a1[130];
  a2[1] = v4;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v16 = &v20;
  v17 = a2;
  v5 = GridLayoutFactory::_ForEachGridItem__lambda_d8d38b7ecc183cf7a075ba43fd3ea28a___((__int64)a1, (__int64)&v16);
  if ( v21 )
  {
    if ( v5 >= 0 )
    {
      v26 = 0LL;
      LODWORD(v25) = 0;
      v16 = 0LL;
      v17 = 0LL;
      v18 = 0LL;
      v19 = 0LL;
      v6 = GridLayoutFactory::_CalculateNumberOfRows((GridLayoutFactory *)a1, (__int64)&v20, (__int64)&v16, &v26, &v25);
      if ( v6 >= 0 )
      {
        if ( (int)v25 < a1[132] - a1[130] )
        {
          v7 = 0;
          v8 = (char *)v17;
          if ( !v17 )
            goto LABEL_19;
          v9 = (char *)v17 - 1;
          v10 = (unsigned int *)&v16[6 * (_QWORD)v17 - 1];
          v11 = v17;
          v25 = v17;
          do
          {
            TotalWidthForHeight = GridLayoutFactory::s_GetTotalWidthForHeight(v10 - 10, *v10, *(v10 - 1), 0LL);
            if ( v7 <= TotalWidthForHeight )
              v7 = TotalWidthForHeight;
            if ( TotalWidthForHeight <= a1[132] - a1[130] && v9 < v8 )
            {
              CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::RemoveAll((__int64)(v10 - 10));
              v13 = (int *)(v8 - 1);
              if ( v9 != v8 - 1 )
                memmove_0(v10 - 10, v10 + 2, 48 * (v8 - v9) - 48);
              --v8;
              v17 = v13;
              v11 = v25;
            }
            v10 -= 12;
            --v9;
            v11 = (int *)((char *)v11 - 1);
            v25 = v11;
          }
          while ( v11 );
          if ( v8 )
          {
            MaximumRowHeight = GridLayoutFactory::_FitRowsToTargetWidth((GridLayoutFactory *)a1);
          }
          else
          {
LABEL_19:
            *a2 = v7;
            MaximumRowHeight = GridLayoutFactory::_GetMaximumRowHeight((GridLayoutFactory *)a1, v26);
          }
          a2[1] = MaximumRowHeight;
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x12E,
          (int)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
          (const char *)(unsigned int)v6);
      }
      CTSimpleArray<GridLayoutFactory::LayoutRow,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutRow>>::RemoveAll((__int64)&v16);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x123,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
        (const char *)(unsigned int)v5);
    }
  }
  else
  {
    a2[1] = GridLayoutFactory::_GetMaximumRowHeight((GridLayoutFactory *)a1, 1uLL);
  }
  CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::RemoveAll((__int64)&v20);
  return a2;
}
