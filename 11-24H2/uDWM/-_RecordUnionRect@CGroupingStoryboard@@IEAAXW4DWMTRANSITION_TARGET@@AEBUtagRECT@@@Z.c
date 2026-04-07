/*
 * XREFs of ?_RecordUnionRect@CGroupingStoryboard@@IEAAXW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800D52C0
 * Callers:
 *     ?_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D7B30 (-_WindowEnumCallback@CGroupingStoryboard@@MEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@?$vector@UUnifiedTargetRect@CStoryboard@@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@AEAAPEAUUnifiedTargetRect@CStoryboard@@QEAU23@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800D112C (--$_Emplace_reallocate@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@-$vector@UUnifiedTargetRect@CSto.c)
 *     ??$construct@UUnifiedTargetRect@CStoryboard@@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@?$_Default_allocator_traits@V?$allocator@UUnifiedTargetRect@CStoryboard@@@std@@@std@@SAXAEAV?$allocator@UUnifiedTargetRect@CStoryboard@@@1@QEAUUnifiedTargetRect@CStoryboard@@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@Z @ 0x1800D1378 (--$construct@UUnifiedTargetRect@CStoryboard@@AEBW4DWMTRANSITION_TARGET@@AEBUtagRECT@@@-$_Default.c)
 *     ??$emplace_back@AEBUtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA?A_TAEBUtagRECT@@@Z @ 0x1800D13C0 (--$emplace_back@AEBUtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA-A_TAEBU.c)
 *     ?_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z @ 0x1800D4CDC (-_GroupingIndexByTarget@CGroupingStoryboard@@IEAAJW4DWMTRANSITION_TARGET@@PEAI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char *__fastcall CGroupingStoryboard::_RecordUnionRect(char *a1, __int64 a2, RECT *a3)
{
  unsigned int v5; // eax
  _QWORD *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rbx
  char *result; // rax
  _QWORD *v10; // rdx
  unsigned int v11; // [rsp+30h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+48h] [rbp+20h] BYREF

  v5 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)a1 + 144LL))(a1);
  v11 = 0;
  v12 = v5;
  v6 = a1 + 128;
  if ( (int)CGroupingStoryboard::_GroupingIndexByTarget(a1, v5, &v11) < 0 )
  {
    v10 = (_QWORD *)*((_QWORD *)a1 + 17);
    if ( v10 == *((_QWORD **)a1 + 18) )
    {
      return std::vector<CStoryboard::UnifiedTargetRect>::_Emplace_reallocate<enum DWMTRANSITION_TARGET const &,tagRECT const &>(
               a1 + 128,
               v10,
               (__int64)&v12,
               (__int64)a3);
    }
    else
    {
      result = (char *)std::_Default_allocator_traits<std::allocator<CStoryboard::UnifiedTargetRect>>::construct<CStoryboard::UnifiedTargetRect,enum DWMTRANSITION_TARGET const &,tagRECT const &>(
                         v7,
                         (__int64)v10,
                         (int *)&v12,
                         a3);
      *((_QWORD *)a1 + 17) += 48LL;
    }
  }
  else
  {
    v8 = 48LL * v11;
    UnionRect((LPRECT)(*v6 + v8 + 4), a3, (const RECT *)(*v6 + v8 + 4));
    return std::vector<tagRECT>::emplace_back<tagRECT const &>((__int64 *)(v8 + *v6 + 24LL), a3);
  }
  return result;
}
