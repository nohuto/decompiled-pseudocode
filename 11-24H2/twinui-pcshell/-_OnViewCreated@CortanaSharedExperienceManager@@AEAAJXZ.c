/*
 * XREFs of ?_OnViewCreated@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18037F974
 * Callers:
 *     ?_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18037F7D0 (-_OnViewChangedHandler@CortanaSharedExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_ApplyPriorityBoostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18037E918 (-_ApplyPriorityBoostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18037EAF4 (-_CancelDeferredSuspensionTimer@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_RegisterViewPresentationChanged@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1803800D8 (-_RegisterViewPresentationChanged@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_StartActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ @ 0x1803802A0 (-_StartActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CortanaSharedExperienceManager::_OnViewCreated(CortanaSharedExperienceManager *this)
{
  bool v1; // zf
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int started; // eax
  int v7; // eax
  unsigned int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_BYTE *)this + 538) == 0;
  *((_BYTE *)this + 528) = 0;
  if ( !v1 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 62) + 104LL))(*((_QWORD *)this + 62), 3LL);
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x475,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
        (const char *)(unsigned int)v3);
  }
  v4 = CortanaSharedExperienceManager::_CancelDeferredSuspensionTimer((struct _TP_TIMER **)this);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x478,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v4);
  v5 = CortanaSharedExperienceManager::_ApplyPriorityBoostIfNeeded(this);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x479,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  started = CortanaSharedExperienceManager::_StartActivationTimeoutPolicy(this);
  if ( started < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x47A,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)started);
  v7 = CortanaSharedExperienceManager::_RegisterViewPresentationChanged(this);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x47B,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
