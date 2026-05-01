/*
 * XREFs of _lambda_cad7757e6b1c49cd959dc880d2101d1e_::operator() @ 0x18045213C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cad7757e6b1c49cd959dc880d2101d1e__&_::Run @ 0x1804540E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_cad7757e6b1c49cd959dc880d2101d1e__-_--Run.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x1802EBC48 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x180747360 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_cad7757e6b1c49cd959dc880d2101d1e_::operator()(__int64 *a1)
{
  __int64 v2; // rsi
  char v3; // di
  int v4; // eax
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *a1;
  v3 = 1;
  v4 = CExperienceManagerAnimationHelper::End((CExperienceManagerAnimationHelper *)(*a1 + 728));
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2B9,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  v5 = CSingleViewShellExperience::DestroyView((CSingleViewShellExperience *)(*a1 + 64));
  v6 = v5;
  if ( v5 >= 0 )
  {
    v6 = 0;
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2BB,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  }
  if ( v3 )
    *(_DWORD *)(v2 + 760) = 0;
  return v6;
}
