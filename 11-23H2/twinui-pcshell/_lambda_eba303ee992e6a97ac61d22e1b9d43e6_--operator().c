/*
 * XREFs of _lambda_eba303ee992e6a97ac61d22e1b9d43e6_::operator() @ 0x1801E1418
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_eba303ee992e6a97ac61d22e1b9d43e6___::Run @ 0x1801E2FD0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_eba303ee992e6a97ac61d22e1b9d43e6___--Run.c)
 * Callees:
 *     ?Cloak@CSingleViewShellExperience@@QEAAJXZ @ 0x180056668 (-Cloak@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?get@?$static_lazy@VStartMenuExperienceTelemetry@@@details@wil@@QEAAPEAVStartMenuExperienceTelemetry@@P6AXXZ@Z @ 0x1800B28A4 (-get@-$static_lazy@VStartMenuExperienceTelemetry@@@details@wil@@QEAAPEAVStartMenuExperienceTelem.c)
 *     ?PendingCloakingStatus_@StartMenuExperienceTelemetry@@QEAAX_NGG@Z @ 0x1800B3BEC (-PendingCloakingStatus_@StartMenuExperienceTelemetry@@QEAAX_NGG@Z.c)
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x1800C3614 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall lambda_eba303ee992e6a97ac61d22e1b9d43e6_::operator()(__int64 a1)
{
  __int16 v1; // si
  __int16 v3; // bp
  char v4; // bl
  __int64 *v5; // rax
  __int64 v6; // rcx
  StartMenuExperienceTelemetry *v7; // rcx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_WORD *)(a1 + 20);
  v3 = *(_WORD *)(a1 + 16);
  v4 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 763LL);
  v5 = wil::details::static_lazy<StartMenuExperienceTelemetry>::get(
         a1,
         (void (__cdecl *)())_lambda_61b654bec5a673602743fd344e831919_::_lambda_invoker_cdecl_);
  if ( wil::TraceLoggingProvider::IsEnabled_((wil::TraceLoggingProvider *)v5, 0) )
  {
    wil::details::static_lazy<StartMenuExperienceTelemetry>::get(
      v6,
      (void (__cdecl *)())_lambda_61b654bec5a673602743fd344e831919_::_lambda_invoker_cdecl_);
    StartMenuExperienceTelemetry::PendingCloakingStatus_(v7, v4, v3, v1);
  }
  if ( !v4 )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(v8 + 763) = 0;
  v9 = CSingleViewShellExperience::Cloak((HSTRING *)(v8 + 320));
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1EE,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
