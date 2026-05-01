/*
 * XREFs of ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1803DAD7C
 * Callers:
 *     ?OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z @ 0x1803DAB00 (-OnMessage@CortanaDesktopExperienceView@@EEAAJI_K_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     IsUserAssignedAccessSingleApp @ 0x180104FBC (IsUserAssignedAccessSingleApp.c)
 *     CortanaHelpers::AllowCortanaAttractModeAboveLock @ 0x1803D7450 (CortanaHelpers--AllowCortanaAttractModeAboveLock.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803D89FC (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     CortanaHelpers::IsCortanaInAmbientMode @ 0x1803D9FC8 (CortanaHelpers--IsCortanaInAmbientMode.c)
 *     ?NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803DA5BC (-NotifyShellModeChanged@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803DA8F0 (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     CortanaHelpers::ResetTransientAboveLockCachedValues @ 0x1803DCEF4 (CortanaHelpers--ResetTransientAboveLockCachedValues.c)
 *     CortanaHelpers::SetIsAssignedAccess @ 0x1803DD538 (CortanaHelpers--SetIsAssignedAccess.c)
 *     CortanaHelpers::SetWindowsHelloActive @ 0x1803DD600 (CortanaHelpers--SetWindowsHelloActive.c)
 *     ?LaunchCortanaApp@@YAJPEBGW4CortanaAppLaunchType@@_N@Z @ 0x180683A48 (-LaunchCortanaApp@@YAJPEBGW4CortanaAppLaunchType@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnTargetedMessage(__int64 a1, int a2, __int16 a3)
{
  int v4; // edx
  int v5; // edx
  __int64 v6; // rdx
  __int64 v7; // rdx
  int v8; // ebx
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdx
  _BYTE *v14; // r14
  _BYTE *v15; // rsi
  _BYTE *v16; // rdi
  __int64 v17; // rdx
  int v18; // eax
  unsigned int v19; // esi
  int v20; // eax
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // edi
  __int64 v24; // rcx
  void (*v25)(void); // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    *(_BYTE *)(a1 + 245) = a3 != 0;
    CortanaDesktopExperienceView::NotifyShellModeChanged((CortanaDesktopExperienceView *)a1);
    return 0LL;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    CortanaHelpers::ResetTransientAboveLockCachedValues();
    LOBYTE(v27) = (unsigned int)IsUserAssignedAccessSingleApp((void *)0xFFFFFFFFFFFFFFFCLL) != 0;
    CortanaHelpers::SetIsAssignedAccess(v27);
    return 0LL;
  }
  v5 = v4 - 1;
  if ( !v5 )
    return 0LL;
  v6 = (unsigned int)(v5 - 1);
  if ( !(_DWORD)v6 )
  {
    v14 = (_BYTE *)(a1 + 247);
    v15 = (_BYTE *)(a1 + 247);
    *(_BYTE *)(a1 + 247) = a3 != 0;
    if ( a3 )
    {
      v16 = (_BYTE *)(a1 + 247);
      *(_BYTE *)(a1 + 243) = 0;
      if ( *(_BYTE *)(a1 + 246) )
      {
        *(_BYTE *)(a1 + 250) = 1;
        v16 = (_BYTE *)(a1 + 247);
      }
      if ( CortanaHelpers::AllowCortanaAttractModeAboveLock(a1, v6) )
      {
        if ( !*(_BYTE *)(a1 + 237) )
        {
          v18 = LaunchCortanaApp(L"StartMode=Attract&QuerySource=AttractAboveLock", v17, 0LL);
          v19 = v18;
          if ( v18 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x532,
              (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
              (const char *)(unsigned int)v18);
            return v19;
          }
        }
        goto LABEL_41;
      }
      v15 = (_BYTE *)(a1 + 247);
    }
    if ( *v14 )
    {
      if ( *(_BYTE *)(a1 + 237) )
      {
        v16 = v15;
        goto LABEL_41;
      }
    }
    else
    {
      v16 = v15;
      if ( *(_DWORD *)(a1 + 140) != 4 )
        goto LABEL_41;
    }
    v20 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)a1);
    v16 = v15;
    if ( v20 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x53D,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v20);
LABEL_41:
    if ( !*(_BYTE *)(a1 + 246) && !*(_BYTE *)(a1 + 247) )
    {
      CortanaHelpers::ResetTransientAboveLockCachedValues();
      LOBYTE(v21) = (unsigned int)IsUserAssignedAccessSingleApp((void *)0xFFFFFFFFFFFFFFFCLL) != 0;
      CortanaHelpers::SetIsAssignedAccess(v21);
      v22 = CortanaDesktopExperienceView::NotifyView(
              (CortanaDesktopExperienceView *)a1,
              L"NotifyLockStatusChanged",
              0LL);
      v23 = v22;
      if ( v22 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x548,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v22);
        return v23;
      }
      if ( !*(_BYTE *)(a1 + 248) )
        goto LABEL_52;
      v24 = *(_QWORD *)(a1 + 96);
      *(_BYTE *)(a1 + 248) = 0;
      v25 = *(void (**)(void))(*(_QWORD *)v24 + 64LL);
      goto LABEL_51;
    }
    if ( *v16 )
    {
      if ( !*(_BYTE *)(a1 + 248) )
      {
        v26 = *(_QWORD *)(a1 + 96);
        *(_BYTE *)(a1 + 248) = 1;
        v25 = *(void (**)(void))(*(_QWORD *)v26 + 56LL);
LABEL_51:
        v25();
      }
    }
    else
    {
      CortanaHelpers::SetWindowsHelloActive();
    }
LABEL_52:
    *(_BYTE *)(a1 + 237) = 0;
    return 0LL;
  }
  v7 = (unsigned int)(v6 - 1);
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 != 1 )
    {
      v8 = -2147418113;
      v9 = 1437LL;
LABEL_26:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v8);
      return (unsigned int)v8;
    }
    if ( !a3 )
      return 0LL;
    if ( !*(_BYTE *)(a1 + 247) )
      return 0LL;
    if ( !*(_BYTE *)(a1 + 242) )
      return 0LL;
    if ( CortanaHelpers::IsCortanaInAmbientMode(a1, v7) )
      return 0LL;
    v10 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)a1);
    if ( v10 >= 0 )
      return 0LL;
    v11 = 1431LL;
    goto LABEL_14;
  }
  if ( !a3 )
  {
    if ( CortanaHelpers::AllowCortanaAttractModeAboveLock(a1, v7) )
    {
      if ( *(_BYTE *)(a1 + 247) )
      {
        if ( !*(_BYTE *)(a1 + 242) )
        {
          v8 = LaunchCortanaApp(L"StartMode=Attract&QuerySource=AttractAboveLock", v12, 0LL);
          if ( v8 < 0 )
          {
            v9 = 1415LL;
            goto LABEL_26;
          }
        }
      }
    }
    return 0LL;
  }
  if ( *(_BYTE *)(a1 + 247) )
  {
    if ( *(_BYTE *)(a1 + 242) )
    {
      if ( !CortanaHelpers::IsCortanaInAmbientMode(a1, v7) )
      {
        v10 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)a1);
        if ( v10 < 0 )
        {
          v11 = 1401LL;
LABEL_14:
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)v11,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
            (const char *)(unsigned int)v10);
        }
      }
    }
  }
  return 0LL;
}
