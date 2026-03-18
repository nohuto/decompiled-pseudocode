/*
 * XREFs of ??0ConditionExpressionListEntry@CConditionalExpression@@QEAA@$$QEAU01@@Z @ 0x1800EA0F0
 * Callers:
 *     ?ProcessAddConditionAnimationResources@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CONDITIONALEXPRESSION_ADDCONDITIONANIMATIONRESOURCES@@PEBXI@Z @ 0x1800E9514 (-ProcessAddConditionAnimationResources@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUtagM.c)
 *     ??$_Emplace_reallocate@UConditionExpressionListEntry@CConditionalExpression@@@?$vector@UConditionExpressionListEntry@CConditionalExpression@@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@AEAAPEAUConditionExpressionListEntry@CConditionalExpression@@QEAU23@$$QEAU23@@Z @ 0x1800E9F60 (--$_Emplace_reallocate@UConditionExpressionListEntry@CConditionalExpression@@@-$vector@UConditio.c)
 *     ??$_Uninitialized_move@PEAUConditionExpressionListEntry@CConditionalExpression@@V?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@std@@@std@@YAPEAUConditionExpressionListEntry@CConditionalExpression@@QEAU12@0PEAU12@AEAV?$allocator@UConditionExpressionListEntry@CConditionalExpression@@@0@@Z @ 0x1800EA128 (--$_Uninitialized_move@PEAUConditionExpressionListEntry@CConditionalExpression@@V-$allocator@UCo.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CConditionalExpression::ConditionExpressionListEntry::ConditionExpressionListEntry(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // rdx

  *a1 = 0LL;
  if ( a1 != a2 )
  {
    *a1 = *a2;
    *a2 = 0LL;
  }
  v2 = a2 + 1;
  a1[1] = 0LL;
  if ( a1 + 1 != v2 )
  {
    a1[1] = *v2;
    *v2 = 0LL;
  }
  return a1;
}
