/*
 * XREFs of ?IsViewVisible@SearchAppDesktopExperienceView@@AEAA_NXZ @ 0x1803D0618
 * Callers:
 *     ?DismissCortanaApp@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803CF0AC (-DismissCortanaApp@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?InputHostHiding@SearchAppDesktopExperienceView@@EEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z @ 0x1803D0370 (-InputHostHiding@SearchAppDesktopExperienceView@@EEAAJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z.c)
 *     ?InputHostShowing@SearchAppDesktopExperienceView@@EEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z @ 0x1803D03D0 (-InputHostShowing@SearchAppDesktopExperienceView@@EEAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MO.c)
 *     ?OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x1803D18D0 (-OnViewPropertiesChanging@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?OnWorkAreaChanged@SearchAppDesktopExperienceView@@UEAAJXZ @ 0x1803D1DC0 (-OnWorkAreaChanged@SearchAppDesktopExperienceView@@UEAAJXZ.c)
 *     ?Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x1803D2F90 (-Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall SearchAppDesktopExperienceView::IsViewVisible(SearchAppDesktopExperienceView *this)
{
  __int64 v1; // rcx
  char v2; // bl
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 18);
  v2 = 0;
  v4 = 0;
  if ( v1 && (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v1 + 80LL))(v1, &v4) >= 0 )
    return v4 != 0;
  return v2;
}
