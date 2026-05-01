/*
 * XREFs of ?_FitRowsToTargetWidth@GridLayoutFactory@@AEAAHAEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@@Z @ 0x1804D7BD0
 * Callers:
 *     ?_CalculateRowSize@GridLayoutFactory@@AEAA?AUCSize@Geometry@@XZ @ 0x1804D76E4 (-_CalculateRowSize@GridLayoutFactory@@AEAA-AUCSize@Geometry@@XZ.c)
 * Callees:
 *     ?GetMaxHeight@LayoutRow@GridLayoutFactory@@QEBAHXZ @ 0x1804D6BC4 (-GetMaxHeight@LayoutRow@GridLayoutFactory@@QEBAHXZ.c)
 *     ?GetNextMaxHeight@LayoutRow@GridLayoutFactory@@QEBAHXZ @ 0x1804D6C44 (-GetNextMaxHeight@LayoutRow@GridLayoutFactory@@QEBAHXZ.c)
 *     ?SetHeight@LayoutItem@GridLayoutFactory@@QEAAXH@Z @ 0x1804D7338 (-SetHeight@LayoutItem@GridLayoutFactory@@QEAAXH@Z.c)
 *     ?_FitRowToTargetWidth@GridLayoutFactory@@AEAAHAEBVLayoutRow@1@@Z @ 0x1804D7AD0 (-_FitRowToTargetWidth@GridLayoutFactory@@AEAAHAEBVLayoutRow@1@@Z.c)
 *     ?s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@HHH@Z @ 0x1804D8270 (-s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 */

__int64 __fastcall GridLayoutFactory::_FitRowsToTargetWidth(GridLayoutFactory *this, __int64 a2)
{
  _QWORD *v2; // r13
  int v3; // r8d
  int TotalWidthForHeight; // esi
  int v5; // r9d
  const struct GridLayoutFactory::LayoutRow **v6; // r12
  int v8; // ebp
  unsigned int v9; // edi
  GridLayoutFactory::LayoutRow *v10; // rbx
  __int64 v11; // rsi
  signed int NextMaxHeight; // eax
  GridLayoutFactory::LayoutRow *v13; // rbx
  __int64 v14; // r14
  const struct GridLayoutFactory::LayoutRow *v15; // rbx
  __int64 v16; // r12
  GridLayoutFactory::LayoutItem *v17; // rbp
  __int64 v18; // r14
  const struct GridLayoutFactory::LayoutRow *v19; // rbx
  __int64 v20; // rdi

  v2 = (_QWORD *)(a2 + 8);
  v3 = *((_DWORD *)this + 132);
  TotalWidthForHeight = 0;
  v5 = *((_DWORD *)this + 130);
  v6 = (const struct GridLayoutFactory::LayoutRow **)a2;
  v8 = *(_DWORD *)(*(_QWORD *)a2 + 32LL);
  v9 = v8;
  if ( v3 - v5 > 0 )
  {
    do
    {
      v9 = 0;
      v10 = *v6;
      v11 = (__int64)*v6 + 48 * *v2;
      while ( v10 != (GridLayoutFactory::LayoutRow *)v11 )
      {
        if ( *((_DWORD *)v10 + 8) < (int)GridLayoutFactory::LayoutRow::GetMaxHeight(v10) )
        {
          NextMaxHeight = GridLayoutFactory::LayoutRow::GetNextMaxHeight(v10);
          if ( !v9 || NextMaxHeight < (int)v9 )
            v9 = NextMaxHeight;
        }
        v10 = (GridLayoutFactory::LayoutRow *)((char *)v10 + 48);
      }
      TotalWidthForHeight = 0;
      v13 = *v6;
      v14 = (__int64)*v6 + 48 * *v2;
      while ( v13 != (GridLayoutFactory::LayoutRow *)v14 )
      {
        if ( TotalWidthForHeight <= (int)GridLayoutFactory::s_GetTotalWidthForHeight(
                                           v13,
                                           *((unsigned int *)v13 + 10),
                                           v9,
                                           0LL) )
          TotalWidthForHeight = GridLayoutFactory::s_GetTotalWidthForHeight(v13, *((unsigned int *)v13 + 10), v9, 0LL);
        v13 = (GridLayoutFactory::LayoutRow *)((char *)v13 + 48);
      }
      v5 = *((_DWORD *)this + 130);
      if ( TotalWidthForHeight <= *((_DWORD *)this + 132) - v5 )
      {
        v15 = *v6;
        v16 = (__int64)*v6 + 48 * *v2;
        if ( v15 != (const struct GridLayoutFactory::LayoutRow *)v16 )
        {
          do
          {
            v17 = *(GridLayoutFactory::LayoutItem **)v15;
            v18 = *(_QWORD *)v15 + 16LL * *((_QWORD *)v15 + 1);
            while ( v17 != (GridLayoutFactory::LayoutItem *)v18 )
            {
              GridLayoutFactory::LayoutItem::SetHeight(v17, v9);
              v17 = (GridLayoutFactory::LayoutItem *)((char *)v17 + 16);
            }
            *((_DWORD *)v15 + 8) = v9;
            v15 = (const struct GridLayoutFactory::LayoutRow *)((char *)v15 + 48);
          }
          while ( v15 != (const struct GridLayoutFactory::LayoutRow *)v16 );
          v5 = *((_DWORD *)this + 130);
        }
        v6 = (const struct GridLayoutFactory::LayoutRow **)a2;
        v8 = v9;
      }
      v3 = *((_DWORD *)this + 132);
    }
    while ( TotalWidthForHeight < v3 - v5 );
  }
  if ( TotalWidthForHeight > v3 - v5 )
  {
    v8 = v9;
    v19 = *v6;
    v20 = (__int64)*v6 + 48 * *v2;
    while ( v19 != (const struct GridLayoutFactory::LayoutRow *)v20 )
    {
      if ( v8 >= (int)GridLayoutFactory::_FitRowToTargetWidth(this, v19) )
        v8 = GridLayoutFactory::_FitRowToTargetWidth(this, v19);
      v19 = (const struct GridLayoutFactory::LayoutRow *)((char *)v19 + 48);
    }
  }
  return (unsigned int)v8;
}
