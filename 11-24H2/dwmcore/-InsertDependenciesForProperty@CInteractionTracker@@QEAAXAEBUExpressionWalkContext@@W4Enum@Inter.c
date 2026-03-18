/*
 * XREFs of ?InsertDependenciesForProperty@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4Enum@InteractionTrackerProperty@@@Z @ 0x1800E0FF8
 * Callers:
 *     ?InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z @ 0x180013310 (-InsertInOrder@CBaseExpression@@QEAAXAEBUExpressionWalkContext@@@Z.c)
 *     ?InsertDependenciesForAxis@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z @ 0x1800E02A8 (-InsertDependenciesForAxis@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z.c)
 * Callees:
 *     ?InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAXAEBUExpressionWalkContext@@PEAV?$CWeakReference@VCResource@@@@I@Z @ 0x180013570 (-InsertExpressionsInOrderForTarget@CExpressionManager@@QEAAXAEBUExpressionWalkContext@@PEAV-$CWe.c)
 *     ?GetWeakRefToSelf@CInteractionTracker@@AEAAPEAV?$CWeakReference@VCResource@@@@XZ @ 0x1800E1110 (-GetWeakRefToSelf@CInteractionTracker@@AEAAPEAV-$CWeakReference@VCResource@@@@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

void __fastcall CInteractionTracker::InsertDependenciesForProperty(
        __int64 a1,
        const struct ExpressionWalkContext *a2,
        int a3)
{
  int v5; // r8d
  char *v6; // rsi
  int v7; // ebx
  __int64 v8; // rdi
  __int64 WeakRefToSelf; // rax
  __int64 *v10; // rsi
  int v11; // ebx
  __int64 v12; // rdi
  __int64 v13; // rax
  _DWORD v14[3]; // [rsp+20h] [rbp-38h] BYREF
  char v15; // [rsp+2Ch] [rbp-2Ch] BYREF
  _DWORD v16[4]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+40h] [rbp-18h] BYREF

  v5 = a3 - 1;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      v14[0] = 29;
      v6 = (char *)v14;
      v14[1] = 30;
      v14[2] = 64;
      do
      {
        v7 = *(_DWORD *)v6;
        v8 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 824LL);
        WeakRefToSelf = CInteractionTracker::GetWeakRefToSelf(a1);
        CExpressionManager::InsertExpressionsInOrderForTarget(v8, a2, WeakRefToSelf, v7);
        v6 += 4;
      }
      while ( v6 != &v15 );
    }
  }
  else
  {
    v16[0] = 2;
    v10 = (__int64 *)v16;
    v16[1] = 23;
    v16[2] = 26;
    v16[3] = 61;
    do
    {
      v11 = *(_DWORD *)v10;
      v12 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 824LL);
      v13 = CInteractionTracker::GetWeakRefToSelf(a1);
      CExpressionManager::InsertExpressionsInOrderForTarget(v12, a2, v13, v11);
      v10 = (__int64 *)((char *)v10 + 4);
    }
    while ( v10 != &v17 );
  }
}
