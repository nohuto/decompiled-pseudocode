/*
 * XREFs of ?_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z @ 0x1800D4CDC
 * Callers:
 *     ?_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z @ 0x1800D4C70 (-_GetUnionRect@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAUtagRECT@@@Z.c)
 *     ?_NumberOfWindowsInUnionRect@CGroupingStoryboard@@IEAAIW4DWMTRANSITION_TARGET@@@Z @ 0x1800D5234 (-_NumberOfWindowsInUnionRect@CGroupingStoryboard@@IEAAIW4DWMTRANSITION_TARGET@@@Z.c)
 *     ?_RecordUnionRect@CGroupingStoryboard@@IEAAXW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800D52C0 (-_RecordUnionRect@CGroupingStoryboard@@IEAAXW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 *     ?_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D6600 (-_WindowEnumCallback@CAppArrangementImmediate@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStorybo.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CGroupingStoryboard::_GroupingIndexByTarget(_QWORD *a1, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // ebx
  int v6; // r9d
  __int64 v7; // r8
  __int64 i; // rdx

  v5 = -2147024809;
  *a3 = -1431655765 * ((__int64)(a1[17] - a1[16]) >> 4);
  v6 = (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 144LL))(a1);
  if ( v6 != 4095 )
  {
    v7 = a1[16];
    for ( i = 0LL; (unsigned int)i < 0xAAAAAAAAAAAAAAABuLL * ((a1[17] - v7) >> 4); i = (unsigned int)(i + 1) )
    {
      if ( *(_DWORD *)(v7 + 48 * i) == v6 )
      {
        *a3 = i;
        return 0;
      }
    }
  }
  return v5;
}
