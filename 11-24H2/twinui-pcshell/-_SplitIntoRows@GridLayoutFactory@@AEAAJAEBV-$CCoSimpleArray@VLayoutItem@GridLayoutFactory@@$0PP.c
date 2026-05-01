/*
 * XREFs of ?_SplitIntoRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@_KAEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEAH@Z @ 0x1804D7FC0
 * Callers:
 *     ?_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@AEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEA_KPEAH@Z @ 0x1804D7458 (-_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAJ_K0@Z @ 0x18014075C (-_EnsureCapacity@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@.c)
 *     ?GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z @ 0x1804BC870 (-GetForScreenHeight@ThumbnailHeight@@QEBAHH@Z.c)
 *     ??$_Add@$$QEAVLayoutRow@GridLayoutFactory@@@?$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutRow@GridLayoutFactory@@@@@@QEAAJ$$QEAVLayoutRow@GridLayoutFactory@@PEA_K@Z @ 0x1804D665C (--$_Add@$$QEAVLayoutRow@GridLayoutFactory@@@-$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPP.c)
 *     ?RemoveAll@?$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutItem@GridLayoutFactory@@@@@@QEAAXXZ @ 0x1804D718C (-RemoveAll@-$CTSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@VLayou.c)
 *     ?RemoveAll@?$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@V?$CSimpleArrayStandardMergeHelper@VLayoutRow@GridLayoutFactory@@@@@@QEAAXXZ @ 0x1804D7208 (-RemoveAll@-$CTSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@VLayout.c)
 *     ?_GetMaximumRowHeight@GridLayoutFactory@@AEAAH_K@Z @ 0x1804D7D90 (-_GetMaximumRowHeight@GridLayoutFactory@@AEAAH_K@Z.c)
 *     ?s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@HHH@Z @ 0x1804D8270 (-s_GetTotalWidthForHeight@GridLayoutFactory@@CAHAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GridLayoutFactory::_SplitIntoRows(
        GridLayoutFactory *this,
        __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        int *a5)
{
  unsigned __int64 v6; // r14
  unsigned __int64 i; // rdi
  int v10; // ebx
  int v11; // ecx
  int v12; // r8d
  int v13; // ebx
  int v15; // eax
  int v16; // edi
  void *v17; // r8
  unsigned __int64 v18; // r15
  int v19; // esi
  unsigned int *v20; // rbx
  __int64 v21; // rax
  __int64 v22; // r12
  unsigned __int64 v23; // r13
  _QWORD *v24; // rdi
  int v25; // r14d
  __int64 v26; // rdx
  __int64 v27; // rdi
  int v28; // eax
  int v29; // [rsp+20h] [rbp-78h]
  __int64 v30; // [rsp+28h] [rbp-70h]
  __int64 v31[4]; // [rsp+30h] [rbp-68h] BYREF
  int v32; // [rsp+50h] [rbp-48h]
  int v33; // [rsp+54h] [rbp-44h]
  int v34; // [rsp+58h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v6 = a3;
  *a5 = 0;
  CTSimpleArray<GridLayoutFactory::LayoutRow,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutRow>>::RemoveAll((__int64)a4);
  for ( i = 0LL; i < v6; ++i )
  {
    v10 = *((_DWORD *)this + 12);
    GridLayoutFactory::_GetMaximumRowHeight(this, v6);
    v11 = *((_DWORD *)this + 42)
        + ThumbnailHeight::GetForScreenHeight((GridLayoutFactory *)((char *)this + 72), *((_DWORD *)this + 129))
        + *((_DWORD *)this + 38)
        + *((_DWORD *)this + 29)
        + *((_DWORD *)this + 39)
        + *((_DWORD *)this + 43);
    memset(v31, 0, sizeof(v31));
    v32 = v11;
    v33 = v12;
    v34 = v10;
    v13 = CTSimpleArray<GridLayoutFactory::LayoutRow,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutRow>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutRow>>::_Add<GridLayoutFactory::LayoutRow &&>(
            a4,
            v31);
    CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::RemoveAll((__int64)v31);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BC,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
        (const char *)(unsigned int)v13);
      return (unsigned int)v13;
    }
  }
  v15 = ThumbnailHeight::GetForScreenHeight((GridLayoutFactory *)((char *)this + 72), *((_DWORD *)this + 129));
  v16 = (int)GridLayoutFactory::s_GetTotalWidthForHeight(
               a2,
               *((unsigned int *)this + 12),
               (unsigned int)(*((_DWORD *)this + 42)
                            + *((_DWORD *)this + 38)
                            + *((_DWORD *)this + 29)
                            + *((_DWORD *)this + 39)
                            + *((_DWORD *)this + 43)
                            + v15),
               0LL)
      / (int)v6;
  v29 = v16;
  v18 = 0LL;
  v19 = 0;
  v20 = *(unsigned int **)a2;
  v21 = *(_QWORD *)a2 + 16LL * *(_QWORD *)(a2 + 8);
  v30 = v21;
  v22 = 0LL;
  while ( v20 != (unsigned int *)v21 )
  {
    v23 = v6 - 1;
    if ( v18 < v6 - 1
      && (v19 + (*(int (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v20 + 72LL))(*(_QWORD *)v20, v20[2]) / 2 > v16
       || (int)(v19 + (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v20 + 72LL))(*(_QWORD *)v20, v20[2])) > *((_DWORD *)this + 132) - *((_DWORD *)this + 130)) )
    {
      ++v18;
      v22 += 48LL;
      v19 = 0;
    }
    v24 = (_QWORD *)(v22 + *a4);
    v25 = 0;
    v26 = v24[1];
    if ( v26 != v24[3]
      || (v25 = CTSimpleArray<GridLayoutFactory::LayoutItem,4294967294,CTPolicyCoTaskMem<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardCompareHelper<GridLayoutFactory::LayoutItem>,CSimpleArrayStandardMergeHelper<GridLayoutFactory::LayoutItem>>::_EnsureCapacity(
                  v22 + *a4,
                  v26 + 1,
                  v17),
          v25 >= 0) )
    {
      ++v24[1];
      v27 = 16LL * v24[1] + *v24 - 16LL;
      if ( !v27 )
        goto LABEL_17;
      *(_QWORD *)v27 = *(_QWORD *)v20;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)v27);
      *(_DWORD *)(v27 + 8) = v20[2];
    }
    if ( v25 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1DC,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\gridlayout.cpp",
        (const char *)(unsigned int)v25);
      return (unsigned int)v25;
    }
LABEL_17:
    v19 += (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)v20 + 72LL))(*(_QWORD *)v20, v20[2]);
    v28 = v19;
    if ( v19 <= *a5 )
      v28 = *a5;
    *a5 = v28;
    v16 = v29;
    if ( v19 + *((_DWORD *)this + 12) >= v29 )
    {
      if ( v18 < v23 )
      {
        ++v18;
        v22 += 48LL;
        v19 = 0;
      }
    }
    else
    {
      v19 += *((_DWORD *)this + 12);
    }
    v20 += 4;
    v6 = a3;
    v21 = v30;
  }
  return 0LL;
}
