/*
 * XREFs of ?OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z @ 0x18005F694
 * Callers:
 *     ?RegisterSessionIdleDetector@DesktopSingleViewShellExperiencePersonality@@AEAAJXZ @ 0x18005F40C (-RegisterSessionIdleDetector@DesktopSingleViewShellExperiencePersonality@@AEAAJXZ.c)
 *     _lambda_d01d769641b0a3ac426af1e1f82876ea_::operator() @ 0x18005F5D0 (_lambda_d01d769641b0a3ac426af1e1f82876ea_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SessionIdleState@AEA_N@SingleViewExperienceTelemetry@@SAXAEA_N@Z @ 0x18005F730 (--$SessionIdleState@AEA_N@SingleViewExperienceTelemetry@@SAXAEA_N@Z.c)
 *     ?EnableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4NavigationLevel@4567@@Z @ 0x1801CD0C4 (-EnableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@View.c)
 *     ?DisableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801CD130 (-DisableOverride@NavigationLevelOverrideHelper@ShellExperienceHelpers@@QEAAJPEAUIViewWrapper@Vie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSingleViewShellExperience::OnSessionIdleStateChanged(CSingleViewShellExperience *this, int a2)
{
  _BYTE *v2; // rdi
  __int64 v5; // r8
  int v7; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v8; // rdx
  ShellExperienceHelpers::NavigationLevelOverrideHelper *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (char *)this + 53;
  *((_BYTE *)this + 53) = a2 != 0;
  SingleViewExperienceTelemetry::SessionIdleState<bool &>((char *)this + 53);
  if ( *((_QWORD *)this + 3) )
  {
    LOBYTE(v5) = *v2;
    v7 = (*(__int64 (__fastcall **)(_QWORD, CSingleViewShellExperience *, __int64))(**((_QWORD **)this + 11) + 96LL))(
           *((_QWORD *)this + 11),
           this,
           v5);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xA6,
        (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v7);
    v8 = (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((_QWORD *)this + 3);
    if ( v8 )
    {
      v9 = (CSingleViewShellExperience *)((char *)this + 72);
      if ( a2 )
        ShellExperienceHelpers::NavigationLevelOverrideHelper::EnableOverride(v9);
      else
        ShellExperienceHelpers::NavigationLevelOverrideHelper::DisableOverride(v9, v8);
    }
  }
  return 0LL;
}
