/*
 * XREFs of ?OnViewChanged@CortanaDesktopExperienceView@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x1803DB420
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnViewCloaking@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803DB510 (-OnViewCloaking@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803DBB8C (-OnViewHidden@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803DBC48 (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnViewUncloaking@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803DBF8C (-OnViewUncloaking@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?RegisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803DCAF0 (-RegisterGlobalBackButton@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnViewChanged(
        CortanaDesktopExperienceView *this,
        struct Windows::Internal::Shell::Experience::IShellExperienceView *a2,
        struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *a3)
{
  __int64 v3; // rax
  int v5; // eax
  unsigned int v6; // edi
  __int64 *v8; // rcx
  __int64 v9; // rax
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v12; // [rsp+50h] [rbp+18h] BYREF

  v3 = *(_QWORD *)a3;
  v12 = 0;
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::Experience::IShellExperienceViewChangedArg *, int *))(v3 + 48))(
         a3,
         &v12);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3E1,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  switch ( v12 )
  {
    case 3:
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 12) + 104LL))(*((_QWORD *)this + 12));
      break;
    case 4:
      return CortanaDesktopExperienceView::OnViewCloaking(this);
    case 7:
      return CortanaDesktopExperienceView::OnViewHidden(this);
    case 8:
      return CortanaDesktopExperienceView::OnViewPropertiesChanging(this);
    case 9:
      v8 = (__int64 *)*((_QWORD *)this + 12);
      v9 = *v8;
      v10 = *(_OWORD *)((char *)this + 196);
      (*(void (__fastcall **)(__int64 *, __int128 *))(v9 + 96))(v8, &v10);
      if ( !*((_BYTE *)this + 239) )
        CortanaDesktopExperienceView::RegisterGlobalBackButton(this);
      break;
    case 10:
      return CortanaDesktopExperienceView::OnViewUncloaking(this);
  }
  return 0LL;
}
