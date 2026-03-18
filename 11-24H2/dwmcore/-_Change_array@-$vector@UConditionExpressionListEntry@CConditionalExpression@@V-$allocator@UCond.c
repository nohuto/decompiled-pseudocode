/*
 * XREFs of ?_Change_array@?$vector@UConditionExpressionListEntry@CConditionalExpression@@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@AEAAXQEAUConditionExpressionListEntry@CConditionalExpression@@_K1@Z @ 0x1800EA074
 * Callers:
 *     ??$_Emplace_reallocate@UConditionExpressionListEntry@CConditionalExpression@@@?$vector@UConditionExpressionListEntry@CConditionalExpression@@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@AEAAPEAUConditionExpressionListEntry@CConditionalExpression@@QEAU23@$$QEAU23@@Z @ 0x1800E9F60 (--$_Emplace_reallocate@UConditionExpressionListEntry@CConditionalExpression@@@-$vector@UConditio.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@YAXPEAUConditionExpressionListEntry@CConditionalExpression@@QEAU12@AEAV?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@0@@Z @ 0x1800EA174 (--$_Destroy_range@V-$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@.c)
 */

void __fastcall std::vector<CConditionalExpression::ConditionExpressionListEntry>::_Change_array(
        CConditionalExpression::ConditionExpressionListEntry **a1,
        CConditionalExpression::ConditionExpressionListEntry *a2,
        __int64 a3,
        __int64 a4)
{
  CConditionalExpression::ConditionExpressionListEntry *v6; // rcx

  v6 = *a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<CConditionalExpression::ConditionExpressionListEntry>>(v6);
    std::_Deallocate<16,0>(*a1, (a1[2] - *a1) & 0xFFFFFFFFFFFFFFF0uLL);
  }
  *a1 = a2;
  a1[1] = (CConditionalExpression::ConditionExpressionListEntry *)((char *)a2 + 16 * a3);
  a1[2] = (CConditionalExpression::ConditionExpressionListEntry *)((char *)a2 + 16 * a4);
}
