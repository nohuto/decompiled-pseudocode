/*
 * XREFs of ?InsertDependenciesForAxis@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z @ 0x1800F67D8
 * Callers:
 *     ?InsertDependenciesInOrder@CInteractionTrackerScaleAnimation@@MEAAXAEBUExpressionWalkContext@@@Z @ 0x1800F49C0 (-InsertDependenciesInOrder@CInteractionTrackerScaleAnimation@@MEAAXAEBUExpressionWalkContext@@@Z.c)
 * Callees:
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18003E984 (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?InsertDependenciesForProperty@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4Enum@InteractionTrackerProperty@@@Z @ 0x1800F79DC (-InsertDependenciesForProperty@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4Enum@Inter.c)
 *     ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z @ 0x1801E6D20 (-InsertDependenciesForAxis@InteractionSourceManager@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxi.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180249850 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CInteractionTracker::InsertDependenciesForAxis(__int64 a1, __int64 a2, int a3, const char *a4)
{
  __int64 v4; // rbx
  __int64 v7; // rcx
  unsigned int v8; // edi
  char result; // al
  __int64 v10; // rcx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a3;
  v7 = *(_QWORD *)(a1 + 8LL * a3 + 384);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 200LL))(v7);
  v8 = 1;
  if ( (unsigned int)v4 <= 1 )
  {
    v11 = *(_QWORD *)(a1 + 8 * v4 + 368);
    if ( v11 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 200LL))(v11, a2);
  }
  if ( (unsigned int)v4 > 1 )
  {
    if ( (_DWORD)v4 != 2 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x15D4,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
        a4);
    v8 = 2;
  }
  CInteractionTracker::InsertDependenciesForProperty(a1, a2, v8);
  result = InteractionSourceManager::HasActiveManipulation((InteractionSourceManager *)(a1 + 208));
  if ( result )
    return InteractionSourceManager::InsertDependenciesForAxis(v10, a2, (unsigned int)v4);
  return result;
}
