/*
 * XREFs of ?_EndDWMTransitionRequest@CAppTransitionManager@@AEAAJ_N@Z @ 0x1804E46D0
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E3890 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 *     ?EndAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJXZ @ 0x1804E3BA0 (-EndAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAppTransitionManager::_EndDWMTransitionRequest(CAppTransitionManager *this, char a2)
{
  __int64 v3; // rcx
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = *((unsigned int *)this + 75);
  if ( !(_DWORD)v3 )
  {
    v4 = -2147019873;
    v5 = 776LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  if ( a2 || (_DWORD)v3 != 68 )
  {
    v4 = DwmpEndTransitionRequest(v3);
    if ( v4 < 0 )
    {
      v5 = 781LL;
      goto LABEL_3;
    }
  }
  *((_DWORD *)this + 75) = 0;
  return 0LL;
}
