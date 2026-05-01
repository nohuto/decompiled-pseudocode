/*
 * XREFs of ?DismissCortanaApp@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803CF0AC
 * Callers:
 *     ?ControlLost@SearchAppDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@W4ShellExperiencePositionerType@3456@PEAPEAUIInspectable@@@Z @ 0x1803CEE00 (-ControlLost@SearchAppDesktopExperienceView@@UEAAJPEAUIShellExperienceView@Experience@Shell@Inte.c)
 *     ?OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803D14BC (-OnViewEventQueued@SearchAppDesktopExperienceView@@AEAAJPEAUHSTRING__@@PEAUIPropertySet@Collecti.c)
 * Callees:
 *     ?IsViewVisible@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x1803D0618 (-IsViewVisible@SearchAppDesktopExperienceView@@AEAA_NXZ.c)
 *     ?SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z @ 0x1803D2DE4 (-SetExplicitDismissEnabled@SearchAppDesktopExperienceView@@AEAAXE@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::DismissCortanaApp(SearchAppDesktopExperienceView *this)
{
  if ( SearchAppDesktopExperienceView::IsViewVisible(this) )
  {
    SearchAppDesktopExperienceView::SetExplicitDismissEnabled(this, 0);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 32LL))(*((_QWORD *)this + 10));
    *((_BYTE *)this + 200) = 0;
  }
  return 0LL;
}
