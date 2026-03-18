/*
 * XREFs of ??$_Destroy_range@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@YAXPEAUConditionExpressionListEntry@CConditionalExpression@@QEAU12@AEAV?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@0@@Z @ 0x1801B9BD8
 * Callers:
 *     ??1CConditionalExpression@@UEAA@XZ @ 0x1801B7E0C (--1CConditionalExpression@@UEAA@XZ.c)
 *     ?_Change_array@?$vector@UConditionExpressionListEntry@CConditionalExpression@@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@AEAAXQEAUConditionExpressionListEntry@CConditionalExpression@@_K1@Z @ 0x1801B9AD8 (-_Change_array@-$vector@UConditionExpressionListEntry@CConditionalExpression@@V-$allocator@UCond.c)
 *     ??$_Uninitialized_move@PEAUConditionExpressionListEntry@CConditionalExpression@@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@YAPEAUConditionExpressionListEntry@CConditionalExpression@@QEAU12@0PEAU12@AEAV?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@0@@Z @ 0x1801B9B8C (--$_Uninitialized_move@PEAUConditionExpressionListEntry@CConditionalExpression@@V-$allocator@UCo.c)
 * Callees:
 *     ??1ConditionExpressionListEntry@CConditionalExpression@@QEAA@XZ @ 0x1801B9C10 (--1ConditionExpressionListEntry@CConditionalExpression@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<CConditionalExpression::ConditionExpressionListEntry>>(
        CConditionalExpression::ConditionExpressionListEntry *this,
        CConditionalExpression::ConditionExpressionListEntry *a2)
{
  CConditionalExpression::ConditionExpressionListEntry *v3; // rbx

  if ( this != a2 )
  {
    v3 = this;
    do
    {
      CConditionalExpression::ConditionExpressionListEntry::~ConditionExpressionListEntry(v3);
      v3 = (CConditionalExpression::ConditionExpressionListEntry *)((char *)v3 + 16);
    }
    while ( v3 != a2 );
  }
}
