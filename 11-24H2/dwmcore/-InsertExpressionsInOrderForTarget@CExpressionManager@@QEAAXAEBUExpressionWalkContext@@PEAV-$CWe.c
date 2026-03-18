/*
 * XREFs of ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAXAEBUExpressionWalkContext@@PEAV?$CWeakReference@VCResource@@@@I@Z @ 0x180013570
 * Callers:
 *     ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAXAEBUExpressionWalkContext@@@Z @ 0x1800137C0 (-InsertDependenciesInOrder@CKeyframeAnimation@@UEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?InsertDependenciesForProperty@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4Enum@InteractionTrackerProperty@@@Z @ 0x1800E0FF8 (-InsertDependenciesForProperty@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4Enum@Inter.c)
 *     ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z @ 0x1801DB7B4 (-InsertDependenciesForAxis@InteractionSourceManager@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxi.c)
 * Callees:
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x180013310 (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CExpressionManager::InsertExpressionsInOrderForTarget(
        __int64 a1,
        const struct ExpressionWalkContext *a2,
        __int64 a3,
        int a4)
{
  _QWORD *v5; // rax
  void *v6; // rdi
  _QWORD *v7; // rbx
  __int64 i; // rbx
  void *v9; // rcx
  __int128 v10; // [rsp+20h] [rbp-38h]
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  void *v12; // [rsp+40h] [rbp-18h]
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !a3 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  *(_QWORD *)&v10 = a3;
  DWORD2(v10) = a4;
  v11 = v10;
  v12 = 0LL;
  v5 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(a1 + 320), &v11);
  v6 = v12;
  v7 = v5;
  while ( v6 )
  {
    v9 = v6;
    v6 = (void *)*((_QWORD *)v6 + 2);
    operator delete(v9, 0x18uLL);
  }
  if ( v7 )
  {
    for ( i = v7[2]; i; i = *(_QWORD *)(i + 16) )
      CBaseExpression::InsertInOrder(*(CBaseExpression **)(i + 8), a2);
  }
}
