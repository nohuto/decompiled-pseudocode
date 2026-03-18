/*
 * XREFs of ?LookupExpressionsForTarget@CExpressionManager@@QEAAPEAUExpressionListEntry@@PEAV?$CWeakReference@VCResource@@@@I@Z @ 0x1801A02F0
 * Callers:
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1800E1140 (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTracker@@0W4.c)
 *     ?InsertDependenciesInOrder@CExpression@@UEAAXAEBUExpressionWalkContext@@@Z @ 0x18023D120 (-InsertDependenciesInOrder@CExpression@@UEAAXAEBUExpressionWalkContext@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CExpressionManager::LookupExpressionsForTarget(__int64 a1, __int64 a2, int a3)
{
  _QWORD *v3; // rax
  void *v4; // rdi
  _QWORD *v5; // rbx
  void *v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-38h]
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  void *v10; // [rsp+40h] [rbp-18h]
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !a2 )
    ModuleFailFastForHRESULT(-2147418113, retaddr);
  *(_QWORD *)&v8 = a2;
  DWORD2(v8) = a3;
  v9 = v8;
  v10 = 0LL;
  v3 = RtlLookupElementGenericTable((PRTL_GENERIC_TABLE)(a1 + 320), &v9);
  v4 = v10;
  v5 = v3;
  while ( v4 )
  {
    v7 = v4;
    v4 = (void *)*((_QWORD *)v4 + 2);
    operator delete(v7, 0x18uLL);
  }
  if ( v5 )
    return v5[2];
  else
    return 0LL;
}
