/*
 * XREFs of ?OnViewChanged@SearchAppDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1803D11C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnViewCloaking@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803D1284 (-OnViewCloaking@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewHidden@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803D1820 (-OnViewHidden@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803D18D0 (-OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewShown@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803D1B9C (-OnViewShown@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewUncloaking@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803D1C68 (-OnViewUncloaking@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::OnViewChanged(
        SearchAppDesktopExperienceView *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceView *a2,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *a3)
{
  __int64 v3; // rax
  int v5; // eax
  unsigned int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v3 = *(_QWORD *)a3;
  v9 = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *, int *))(v3 + 48))(
         a3,
         &v9);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F4,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  switch ( v9 )
  {
    case 3:
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 104LL))(*((_QWORD *)this + 10));
      break;
    case 4:
      return SearchAppDesktopExperienceView::OnViewCloaking(this);
    case 7:
      return SearchAppDesktopExperienceView::OnViewHidden(this);
    case 8:
      return SearchAppDesktopExperienceView::OnViewPropertiesChanging(this);
    case 9:
      return SearchAppDesktopExperienceView::OnViewShown(this);
    case 10:
      return SearchAppDesktopExperienceView::OnViewUncloaking(this);
  }
  return 0LL;
}
