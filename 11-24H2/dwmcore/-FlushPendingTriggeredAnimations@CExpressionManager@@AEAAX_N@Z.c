/*
 * XREFs of ?FlushPendingTriggeredAnimations@CExpressionManager@@AEAAX_N@Z @ 0x1801D5144
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAX_K0@Z @ 0x180013DC0 (-UpdateExpressions@CExpressionManager@@QEAAX_K0@Z.c)
 * Callees:
 *     ?TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ @ 0x180015A70 (-TryRegisterWithExpressionManager@CBaseExpression@@IEAAJXZ.c)
 *     ?ForceDependentAnimationsDirtied@CBaseExpression@@IEAAXXZ @ 0x1802A0F94 (-ForceDependentAnimationsDirtied@CBaseExpression@@IEAAXXZ.c)
 */

void __fastcall CExpressionManager::FlushPendingTriggeredAnimations(CExpressionManager *this, char a2)
{
  __int64 v2; // rdi
  char *i; // rbx
  void *v6; // rdi
  HANDLE ProcessHeap; // rax

  v2 = 0LL;
  for ( i = (char *)this + 408; (unsigned int)v2 < *((_DWORD *)this + 108); v2 = (unsigned int)(v2 + 1) )
  {
    CBaseExpression::TryRegisterWithExpressionManager(*(CBaseExpression **)(*(_QWORD *)i + 8 * v2));
    if ( a2 )
      CBaseExpression::ForceDependentAnimationsDirtied(*(CBaseExpression **)(*(_QWORD *)i + 8 * v2));
  }
  *((_DWORD *)i + 6) = 0;
  v6 = *(void **)i;
  if ( *(_QWORD *)i != *((_QWORD *)i + 1) )
  {
    if ( v6 )
    {
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v6);
    }
    *(_QWORD *)i = *((_QWORD *)i + 1);
    *((_DWORD *)i + 5) = *((_DWORD *)i + 4);
  }
}
