/*
 * XREFs of wil::details::ScopeExitFn__lambda_c7dc6f84baa37bda12a62a2fdfcc0ce7___::_ScopeExitFn__lambda_c7dc6f84baa37bda12a62a2fdfcc0ce7___ @ 0x18048E2BC
 * Callers:
 *     _AccessibilityExperienceManager::_OnViewCreated_::_1_::dtor$4 @ 0x1806EDE26 (_AccessibilityExperienceManager--_OnViewCreated_--_1_--dtor$4.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_c7dc6f84baa37bda12a62a2fdfcc0ce7___::_ScopeExitFn__lambda_c7dc6f84baa37bda12a62a2fdfcc0ce7___(
        _BYTE *a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[8] )
  {
    a1[8] = 0;
    v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(***(_QWORD ***)a1 + 344LL))(**(_QWORD **)a1, 0LL);
    if ( v1 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x39B,
        (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)v1);
  }
}
