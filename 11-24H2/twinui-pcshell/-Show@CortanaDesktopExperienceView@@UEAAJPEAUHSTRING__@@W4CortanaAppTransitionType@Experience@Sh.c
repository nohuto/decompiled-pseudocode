/*
 * XREFs of ?Show@CortanaDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1803DD790
 * Callers:
 *     ?ActivateView@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@PEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@6@@Z @ 0x1803D73E0 (-ActivateView@CortanaDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Inter.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1803D8E48 (-GetActivateArgs@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?IsShowForTransitions@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEA_N@Z @ 0x1803DA0B0 (-IsShowForTransitions@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEA_N@Z.c)
 *     ?IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ @ 0x1803DA234 (-IsViewVisible@CortanaDesktopExperienceView@@AEAA_NXZ.c)
 *     ?NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@@Z @ 0x1803DA450 (-NotifyAppWithTransitionType@CortanaDesktopExperienceView@@AEAAJPEBGW4CortanaAppTransitionType@E.c)
 *     ?RegisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803DCAF0 (-RegisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@W4CortanaAppTransitionType@4567@@Z @ 0x1803DDBFC (-ShowInternal@CortanaDesktopExperienceView@@AEAAJPEAUHSTRING__@@W4ShellExperienceViewFocusOption.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::Show(CortanaDesktopExperienceView *a1, HSTRING a2, unsigned int a3)
{
  int IsShowForTransitions; // eax
  unsigned int v7; // ebx
  CortanaDesktopExperienceView *v9; // rbx
  int v10; // eax
  unsigned int v11; // edi
  int ActivateArgs; // eax
  unsigned int v13; // esi
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  LOBYTE(string) = 0;
  IsShowForTransitions = CortanaDesktopExperienceView::IsShowForTransitions(a1, a2, (bool *)&string);
  v7 = IsShowForTransitions;
  if ( IsShowForTransitions < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F7,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)IsShowForTransitions);
    return v7;
  }
  *((_BYTE *)a1 + 215) = 0;
  v9 = (CortanaDesktopExperienceView *)((char *)a1 - 24);
  if ( (_BYTE)string )
  {
    *((_BYTE *)a1 + 218) = 0;
    v10 = CortanaDesktopExperienceView::NotifyAppWithTransitionType(
            (CortanaDesktopExperienceView *)((char *)a1 - 24),
            L"NotifyAppTransitionRequestHandled",
            a3,
            0LL);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x305,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v10);
      return v11;
    }
    goto LABEL_12;
  }
  *((_BYTE *)a1 + 218) = 1;
  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  ActivateArgs = CortanaDesktopExperienceView::GetActivateArgs(
                   (CortanaDesktopExperienceView *)((char *)a1 - 24),
                   a2,
                   &string);
  v13 = ActivateArgs;
  if ( ActivateArgs < 0 )
  {
    v14 = 780LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)ActivateArgs);
    WindowsDeleteString(string);
    return v13;
  }
  ActivateArgs = CortanaDesktopExperienceView::ShowInternal(
                   (char *)a1 - 24,
                   string,
                   *((_BYTE *)a1 + 214) != 0 ? 2 : 0,
                   a3);
  v13 = ActivateArgs;
  if ( ActivateArgs < 0 )
  {
    v14 = 790LL;
    goto LABEL_10;
  }
  WindowsDeleteString(string);
LABEL_12:
  if ( CortanaDesktopExperienceView::IsViewVisible(v9) )
    CortanaDesktopExperienceView::RegisterGlobalBackButton(v9);
  return 0LL;
}
