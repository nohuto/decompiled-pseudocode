/*
 * XREFs of ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z @ 0x1801DB7B4
 * Callers:
 *     ?InsertDependenciesForAxis@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z @ 0x1800E02A8 (-InsertDependenciesForAxis@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAXAEBUExpressionWalkContext@@PEAV?$CWeakReference@VCResource@@@@I@Z @ 0x180013570 (-InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAXAEBUExpressionWalkContext@@PEAV-$CWe.c)
 *     ?GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x1800E4A24 (-GetSourceModifierConditionalAnimation@CManipulation@@QEBAPEAVCConditionalExpression@@W4ScrollAx.c)
 *     ?Create@?$CWeakReference@VCResource@@@@SAXPEAVCResource@@PEAPEAV1@@Z @ 0x1801DB908 (-Create@-$CWeakReference@VCResource@@@@SAXPEAVCResource@@PEAPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall InteractionSourceManager::InsertDependenciesForAxis(
        _QWORD *a1,
        const struct ExpressionWalkContext *a2,
        unsigned int a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v6; // r12
  __int64 v8; // rbx
  __int64 v9; // r15
  __int64 SourceModifierConditionalAnimation; // rax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // r9d
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v3 = a1[12];
  v6 = v3 + a1[13];
  while ( v3 != v6 )
  {
    v8 = v3 & 1;
    v9 = *(_QWORD *)(a1[10] + 8 * ((a1[11] - 1LL) & (v3 >> 1)));
    SourceModifierConditionalAnimation = CManipulation::GetSourceModifierConditionalAnimation(
                                           *(_QWORD **)(v9 + 8 * v8),
                                           a3);
    v11 = SourceModifierConditionalAnimation;
    if ( SourceModifierConditionalAnimation )
      (*(void (__fastcall **)(__int64, const struct ExpressionWalkContext *))(*(_QWORD *)SourceModifierConditionalAnimation
                                                                            + 200LL))(
        SourceModifierConditionalAnimation,
        a2);
    v12 = *(_QWORD *)(v9 + 8 * v8);
    if ( a3 )
    {
      if ( a3 != 1 )
        goto LABEL_11;
      v13 = *(_QWORD *)(v12 + 504);
    }
    else
    {
      v13 = *(_QWORD *)(v12 + 496);
    }
    if ( v13 )
      (*(void (__fastcall **)(__int64, const struct ExpressionWalkContext *, __int64))(*(_QWORD *)v13 + 200LL))(
        v13,
        a2,
        v11);
LABEL_11:
    v14 = *(_QWORD *)(v9 + 8 * v8);
    v17 = 0LL;
    CWeakReference<CResource>::Create(v14, &v17);
    v15 = v17;
    if ( a3 < 2 )
    {
      v16 = 1;
    }
    else
    {
      if ( a3 != 2 )
        goto LABEL_16;
      v16 = 3;
    }
    CExpressionManager::InsertExpressionsInOrderForTarget(*(_QWORD *)(*(_QWORD *)(*a1 + 24LL) + 824LL), a2, v17, v16);
LABEL_16:
    CExpressionManager::InsertExpressionsInOrderForTarget(*(_QWORD *)(*(_QWORD *)(*a1 + 24LL) + 824LL), a2, v15, 9);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    ++v3;
  }
}
