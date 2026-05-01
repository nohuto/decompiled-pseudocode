/*
 * XREFs of ?_OnViewCreated@SearchAppExperienceManager@@AEAAJXZ @ 0x1803ACA54
 * Callers:
 *     ?_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1803AC8B0 (-_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shel.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ApplyPriorityBoostIfNeeded@SearchAppExperienceManager@@AEAAJXZ @ 0x1803ABC38 (-_ApplyPriorityBoostIfNeeded@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_CancelDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ @ 0x1803ABDFC (-_CancelDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_RegisterViewPresentationChanged@SearchAppExperienceManager@@AEAAJXZ @ 0x1803AD1AC (-_RegisterViewPresentationChanged@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_StartActivationTimeoutPolicy@SearchAppExperienceManager@@AEAAJXZ @ 0x1803AD374 (-_StartActivationTimeoutPolicy@SearchAppExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SearchAppExperienceManager::_OnViewCreated(SearchAppExperienceManager *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int started; // eax
  int v6; // eax
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_BYTE *)this + 536) = 0;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 63) + 104LL))(*((_QWORD *)this + 63), 3LL);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3FD,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  v3 = SearchAppExperienceManager::_CancelDeferredSuspensionTimer((struct _TP_TIMER **)this);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3FF,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  v4 = SearchAppExperienceManager::_ApplyPriorityBoostIfNeeded(this);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x400,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  started = SearchAppExperienceManager::_StartActivationTimeoutPolicy(this);
  if ( started < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x401,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)started);
  v6 = SearchAppExperienceManager::_RegisterViewPresentationChanged(this);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x402,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
