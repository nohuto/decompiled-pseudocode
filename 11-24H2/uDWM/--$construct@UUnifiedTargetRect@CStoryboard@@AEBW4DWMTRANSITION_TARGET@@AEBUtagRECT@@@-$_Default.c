/*
 * XREFs of ??$construct@UUnifiedTargetRect@CStoryboard@@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@?$_Default_allocator_traits@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@SAXAEAV?$allocator@UUnifiedTargetRect@CStoryboard@@@1@QEAUUnifiedTargetRect@CStoryboard@@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800D1378
 * Callers:
 *     ??$_Emplace_reallocate@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@?$vector@UUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@AEAAPEAUUnifiedTargetRect@CStoryboard@@QEAU23@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800D112C (--$_Emplace_reallocate@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@-$vector@UUnifiedTargetRect@CSto.c)
 *     ?_RecordUnionRect@CGroupingStoryboard@@IEAAXW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800D52C0 (-_RecordUnionRect@CGroupingStoryboard@@IEAAXW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ??$emplace_back@AEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA?A_TAEBUtagRECT@@@Z @ 0x1800D13C0 (--$emplace_back@AEBUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA-A_TAEBU.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Default_allocator_traits<std::allocator<CStoryboard::UnifiedTargetRect>>::construct<CStoryboard::UnifiedTargetRect,enum DWMTRANSITION_TARGET const &,tagRECT const &>(
        __int64 a1,
        __int64 a2,
        int *a3,
        _OWORD *a4)
{
  int v4; // eax

  v4 = *a3;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_DWORD *)a2 = v4 & 0xFFF;
  *(_OWORD *)(a2 + 4) = *a4;
  return std::vector<tagRECT>::emplace_back<tagRECT const &>(a2 + 24, a4);
}
