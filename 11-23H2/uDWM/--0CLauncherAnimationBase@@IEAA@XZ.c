/*
 * XREFs of ??0CLauncherAnimationBase@@IEAA@XZ @ 0x1800D92F8
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180013EB8 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CFlyoutPopup@@IEAA@XZ @ 0x1800D9210 (--0CFlyoutPopup@@IEAA@XZ.c)
 */

CLauncherAnimationBase *__fastcall CLauncherAnimationBase::CLauncherAnimationBase(CLauncherAnimationBase *this)
{
  __int64 v1; // rcx
  CLauncherAnimationBase *result; // rax

  CFlyoutPopup::CFlyoutPopup(this);
  *(_QWORD *)(v1 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  *(_QWORD *)v1 = &CFlyoutPopup::`vftable'{for `CBaseObject'};
  result = (CLauncherAnimationBase *)v1;
  *(_OWORD *)(v1 + 128) = 0LL;
  return result;
}
