/*
 * XREFs of ??$_Emplace_reallocate@UConditionExpressionListEntry@CConditionalExpression@@@?$vector@UConditionExpressionListEntry@CConditionalExpression@@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@AEAAPEAUConditionExpressionListEntry@CConditionalExpression@@QEAU23@$$QEAU23@@Z @ 0x1801B99C4
 * Callers:
 *     ?ProcessAddConditionAnimationResources@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CONDITIONALEXPRESSION_ADDCONDITIONANIMATIONRESOURCES@@PEBXI@Z @ 0x1801B9184 (-ProcessAddConditionAnimationResources@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagM.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18006BBB0 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UConditionExpressionListEntry@CConditionalExpression@@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@AEAAXQEAUConditionExpressionListEntry@CConditionalExpression@@_K1@Z @ 0x1801B9AD8 (-_Change_array@-$vector@UConditionExpressionListEntry@CConditionalExpression@@V-$allocator@UCond.c)
 *     ??0ConditionExpressionListEntry@CConditionalExpression@@QEAA@$$QEAU01@@Z @ 0x1801B9B54 (--0ConditionExpressionListEntry@CConditionalExpression@@QEAA@$$QEAU01@@Z.c)
 *     ??$_Uninitialized_move@PEAUConditionExpressionListEntry@CConditionalExpression@@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@YAPEAUConditionExpressionListEntry@CConditionalExpression@@QEAU12@0PEAU12@AEAV?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@0@@Z @ 0x1801B9B8C (--$_Uninitialized_move@PEAUConditionExpressionListEntry@CConditionalExpression@@V-$allocator@UCo.c)
 */

unsigned __int64 __fastcall std::vector<CConditionalExpression::ConditionExpressionListEntry>::_Emplace_reallocate<CConditionalExpression::ConditionExpressionListEntry>(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = a2 - *a1;
  v6 = (a1[1] - *a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v9 = v6 + 1;
  v10 = (a1[2] - *a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v13 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v14 = v13 + (v4 & 0xFFFFFFFFFFFFFFF0uLL);
  v15 = v13;
  CConditionalExpression::ConditionExpressionListEntry::ConditionExpressionListEntry(v14, a3);
  v16 = a1[1];
  v17 = v15;
  v18 = *a1;
  if ( a2 != v16 )
  {
    std::_Uninitialized_move<CConditionalExpression::ConditionExpressionListEntry *>(v18, a2, v15);
    v16 = a1[1];
    v17 = v14 + 16;
    v18 = a2;
  }
  std::_Uninitialized_move<CConditionalExpression::ConditionExpressionListEntry *>(v18, v16, v17);
  std::vector<CConditionalExpression::ConditionExpressionListEntry>::_Change_array(a1, v15, v9, v3);
  return v14;
}
