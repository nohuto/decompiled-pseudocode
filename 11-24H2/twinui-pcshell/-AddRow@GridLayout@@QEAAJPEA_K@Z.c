/*
 * XREFs of ?AddRow@GridLayout@@QEAAJPEA_K@Z @ 0x1804D6B50
 * Callers:
 *     _lambda_d5328ea7ec057ef4b1874c63f76393bb_::operator() @ 0x1804D6968 (_lambda_d5328ea7ec057ef4b1874c63f76393bb_--operator().c)
 *     ?_AssignItemsToRows@GridLayoutFactory@@AEAAJAEAVGridLayout@@AEBUCSize@Geometry@@@Z @ 0x1804D7380 (-_AssignItemsToRows@GridLayoutFactory@@AEAAJAEAVGridLayout@@AEBUCSize@Geometry@@@Z.c)
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x18004C99C (-RemoveAll@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipCo.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$_Add@$$QEAVGridRow@@@?$CTSimpleArray@VGridRow@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VGridRow@@@@V?$CSimpleArrayStandardCompareHelper@VGridRow@@@@V?$CSimpleArrayStandardMergeHelper@VGridRow@@@@@@QEAAJ$$QEAVGridRow@@PEA_K@Z @ 0x1804D6564 (--$_Add@$$QEAVGridRow@@@-$CTSimpleArray@VGridRow@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@VGridRow@@@@V-.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GridLayout::AddRow(GridLayout *this, unsigned __int64 *a2)
{
  int v3; // edx
  unsigned int v4; // ebx
  _DWORD v6[2]; // [rsp+20h] [rbp-48h] BYREF
  __int128 v7; // [rsp+28h] [rbp-40h]
  _OWORD v8[2]; // [rsp+38h] [rbp-30h] BYREF

  v3 = *((_DWORD *)this + 2);
  v6[0] = *(_DWORD *)this;
  v6[1] = v3;
  v7 = 0LL;
  memset(v8, 0, sizeof(v8));
  v4 = CTSimpleArray<GridRow,4294967294,CTPolicyCoTaskMem<GridRow>,CSimpleArrayStandardCompareHelper<GridRow>,CSimpleArrayStandardMergeHelper<GridRow>>::_Add<GridRow &&>(
         (_QWORD *)this + 6,
         (__int64)v6,
         a2);
  CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::RemoveAll((__int64)v8);
  return v4;
}
