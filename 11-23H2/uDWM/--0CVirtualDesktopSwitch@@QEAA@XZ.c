/*
 * XREFs of ??0CVirtualDesktopSwitch@@QEAA@XZ @ 0x1800D9400
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180013EB8 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x180013FA4 (--0CStoryboard@@IEAA@_N@Z.c)
 */

CVirtualDesktopSwitch *__fastcall CVirtualDesktopSwitch::CVirtualDesktopSwitch(CVirtualDesktopSwitch *this)
{
  __int64 v1; // rcx

  CStoryboard::CStoryboard(this, 0);
  *(_QWORD *)(v1 + 16) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  *(_QWORD *)v1 = &CVirtualDesktopSwitch::`vftable'{for `CBaseObject'};
  *(_QWORD *)(v1 + 128) = 0LL;
  *(_QWORD *)(v1 + 136) = 0LL;
  *(_QWORD *)(v1 + 144) = 0LL;
  *(_DWORD *)(v1 + 152) = 0;
  *(_QWORD *)(v1 + 160) = 0LL;
  *(_QWORD *)(v1 + 168) = 0LL;
  *(_QWORD *)(v1 + 176) = 0LL;
  *(_DWORD *)(v1 + 184) = 0;
  return (CVirtualDesktopSwitch *)v1;
}
