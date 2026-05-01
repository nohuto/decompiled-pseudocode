/*
 * XREFs of ?OnIdleStateChanged@CortanaDesktopExperienceView@@EEAAJH@Z @ 0x1803DA9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     IsUserAssignedAccessSingleApp @ 0x180104FBC (IsUserAssignedAccessSingleApp.c)
 *     ?DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1803D89FC (-DismissCortanaApp@CortanaDesktopExperienceView@@AEAAJXZ.c)
 *     ?NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803DA8F0 (-NotifyView@CortanaDesktopExperienceView@@AEAAJPEBGPEAUIPropertySet@Collections@Foundation@Windo.c)
 *     CortanaHelpers::ResetTransientAboveLockCachedValues @ 0x1803DCEF4 (CortanaHelpers--ResetTransientAboveLockCachedValues.c)
 *     CortanaHelpers::SetIsAssignedAccess @ 0x1803DD538 (CortanaHelpers--SetIsAssignedAccess.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CortanaDesktopExperienceView::OnIdleStateChanged(CortanaDesktopExperienceView *this, int a2)
{
  int v3; // edi
  __int64 v4; // rdx
  _BYTE *v6; // rdi
  int v7; // eax
  unsigned int v8; // esi
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_BYTE *)this + 182) = a2 != 0;
  if ( a2 )
  {
    v3 = CortanaDesktopExperienceView::NotifyView(
           (CortanaDesktopExperienceView *)((char *)this - 64),
           L"NotifyLockStatusChanged",
           0LL);
    if ( v3 < 0 )
    {
      v4 = 910LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v3);
      return (unsigned int)v3;
    }
    v6 = (char *)this + 186;
  }
  else
  {
    v6 = (char *)this + 186;
    if ( *((_BYTE *)this + 186) )
    {
      v7 = CortanaDesktopExperienceView::NotifyView(
             (CortanaDesktopExperienceView *)((char *)this - 64),
             L"NotifyLockStatusChanged",
             0LL);
      v8 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x395,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
          (const char *)(unsigned int)v7);
        return v8;
      }
    }
  }
  *v6 = 0;
  if ( !*((_BYTE *)this + 182) )
    goto LABEL_20;
  if ( (unsigned int)(*((_DWORD *)this + 19) - 3) > 1 )
  {
    v3 = CortanaDesktopExperienceView::DismissCortanaApp((CortanaDesktopExperienceView *)((char *)this - 64));
    if ( v3 < 0 )
    {
      v4 = 930LL;
      goto LABEL_4;
    }
  }
  if ( !*((_BYTE *)this + 182) )
  {
LABEL_20:
    if ( !*((_BYTE *)this + 183) )
    {
      CortanaHelpers::ResetTransientAboveLockCachedValues();
      LOBYTE(v9) = (unsigned int)IsUserAssignedAccessSingleApp((void *)0xFFFFFFFFFFFFFFFCLL) != 0;
      CortanaHelpers::SetIsAssignedAccess(v9);
      if ( *((_BYTE *)this + 184) )
      {
        *((_BYTE *)this + 184) = 0;
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
      }
    }
  }
  return 0LL;
}
