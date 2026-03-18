/*
 * XREFs of ??$_Uninitialized_move@PEAUConditionExpressionListEntry@CConditionalExpression@@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@YAPEAUConditionExpressionListEntry@CConditionalExpression@@QEAU12@0PEAU12@AEAV?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@0@@Z @ 0x1801B9B8C
 * Callers:
 *     ??$_Emplace_reallocate@UConditionExpressionListEntry@CConditionalExpression@@@?$vector@UConditionExpressionListEntry@CConditionalExpression@@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@AEAAPEAUConditionExpressionListEntry@CConditionalExpression@@QEAU23@$$QEAU23@@Z @ 0x1801B99C4 (--$_Emplace_reallocate@UConditionExpressionListEntry@CConditionalExpression@@@-$vector@UConditio.c)
 * Callees:
 *     ??0ConditionExpressionListEntry@CConditionalExpression@@QEAA@$$QEAU01@@Z @ 0x1801B9B54 (--0ConditionExpressionListEntry@CConditionalExpression@@QEAA@$$QEAU01@@Z.c)
 *     ??$_Destroy_range@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@YAXPEAUConditionExpressionListEntry@CConditionalExpression@@QEAU12@AEAV?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@0@@Z @ 0x1801B9BD8 (--$_Destroy_range@V-$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@.c)
 */

CConditionalExpression::ConditionExpressionListEntry *__fastcall std::_Uninitialized_move<CConditionalExpression::ConditionExpressionListEntry *>(
        _QWORD *a1,
        _QWORD *a2,
        CConditionalExpression::ConditionExpressionListEntry *a3)
{
  _QWORD *v4; // r10
  __int64 v6; // r10
  _QWORD *v7; // r11

  v4 = a1;
  if ( a1 != a2 )
  {
    do
    {
      CConditionalExpression::ConditionExpressionListEntry::ConditionExpressionListEntry(a3, v4);
      a3 = (CConditionalExpression::ConditionExpressionListEntry *)((char *)a3 + 16);
      v4 = (_QWORD *)(v6 + 16);
    }
    while ( v4 != v7 );
  }
  std::_Destroy_range<std::allocator<CConditionalExpression::ConditionExpressionListEntry>>(a3);
  return a3;
}
