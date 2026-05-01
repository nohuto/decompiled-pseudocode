/*
 * XREFs of _lambda_219695f63e651180cfc7ae358f81f100_::operator() @ 0x18038EFC0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_219695f63e651180cfc7ae358f81f100___::Run @ 0x180392410 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_219695f63e651180cfc7ae358f81f100___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Cloak@CSingleViewShellExperience@@QEAAJXZ @ 0x180165098 (-Cloak@CSingleViewShellExperience@@QEAAJXZ.c)
 *     ?PendingCloakingStatus_@StartMenuExperienceTelemetry@@QEAAX_NGG@Z @ 0x18039168C (-PendingCloakingStatus_@StartMenuExperienceTelemetry@@QEAAX_NGG@Z.c)
 *     ?get@?$static_lazy@VStartMenuExperienceTelemetry@@@details@wil@@QEAAPEAVStartMenuExperienceTelemetry@@P6AXXZ@Z @ 0x180392B94 (-get@-$static_lazy@VStartMenuExperienceTelemetry@@@details@wil@@QEAAPEAVStartMenuExperienceTelem.c)
 */

__int64 __fastcall lambda_219695f63e651180cfc7ae358f81f100_::operator()(__int64 a1)
{
  unsigned __int16 v1; // si
  unsigned __int16 v3; // bp
  char v4; // bl
  _DWORD *v5; // rcx
  StartMenuExperienceTelemetry *v6; // rcx
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_WORD *)(a1 + 20);
  v3 = *(_WORD *)(a1 + 16);
  v4 = *(_BYTE *)(*(_QWORD *)(a1 + 8) + 763LL);
  v5 = *(_DWORD **)(wil::details::static_lazy<StartMenuExperienceTelemetry>::get(
                      a1,
                      _lambda_61b654bec5a673602743fd344e831919_::_lambda_invoker_cdecl_)
                  + 8);
  if ( v5 && *v5 )
  {
    wil::details::static_lazy<StartMenuExperienceTelemetry>::get(
      v5,
      _lambda_61b654bec5a673602743fd344e831919_::_lambda_invoker_cdecl_);
    StartMenuExperienceTelemetry::PendingCloakingStatus_(v6, v4, v3, v1);
  }
  if ( !v4 )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(v7 + 763) = 0;
  v8 = CSingleViewShellExperience::Cloak((HSTRING *)(v7 + 320));
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1EC,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
    (const char *)(unsigned int)v8);
  return v9;
}
