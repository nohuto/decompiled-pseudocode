/*
 * XREFs of ?InsertDependenciesInOrder@CExpression@@UEAAXAEBUExpressionWalkContext@@@Z @ 0x18023D120
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x180013310 (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV?$CWeakReference@VCResource@@@@I@Z @ 0x1801A02F0 (-LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV-$CWeakReferenc.c)
 */

void __fastcall CExpression::InsertDependenciesInOrder(CExpression *this, const struct ExpressionWalkContext *a2)
{
  unsigned int v2; // esi
  __int64 i; // r14
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 j; // rbx

  v2 = 0;
  for ( i = *(_QWORD *)(*((_QWORD *)this + 3) + 824LL); v2 < *((_DWORD *)this + 93); ++v2 )
  {
    v6 = 28LL * v2;
    v7 = *(unsigned int *)(v6 + *((_QWORD *)this + 44) + 16);
    if ( (unsigned int)v7 < *((_DWORD *)this + 92) )
    {
      _mm_lfence();
      v8 = *(_QWORD *)(*((_QWORD *)this + 43) + 8 * v7);
      if ( v8 )
      {
        for ( j = CExpressionManager::LookupExpressionsForTarget(i, v8, *(_DWORD *)(v6 + *((_QWORD *)this + 44)));
              j;
              j = *(_QWORD *)(j + 16) )
        {
          CBaseExpression::InsertInOrder(*(CBaseExpression **)(j + 8), a2);
        }
      }
    }
  }
}
