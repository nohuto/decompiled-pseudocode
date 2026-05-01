/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cad7757e6b1c49cd959dc880d2101d1e__&_::Run @ 0x18039F8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?End@CExperienceManagerAnimationHelper@@QEAAJXZ @ 0x1802132D4 (-End@CExperienceManagerAnimationHelper@@QEAAJXZ.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x180681380 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_cad7757e6b1c49cd959dc880d2101d1e____::Run(
        __int64 a1)
{
  __int64 v2; // rbx
  int v3; // eax
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = CExperienceManagerAnimationHelper::End((CExperienceManagerAnimationHelper *)(v2 + 744));
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2B9,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  v4 = CSingleViewShellExperience::DestroyView((CSingleViewShellExperience *)(*(_QWORD *)(a1 + 16) + 64LL));
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2BB,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
    *(_DWORD *)(v2 + 776) = 0;
  }
}
