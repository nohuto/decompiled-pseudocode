/*
 * XREFs of ??0CGroupingStoryboard@@QEAA@_N@Z @ 0x1800D1474
 * Callers:
 *     ??0CAppArrangementBase@@IEAA@_N@Z @ 0x1800D1400 (--0CAppArrangementBase@@IEAA@_N@Z.c)
 *     ??0CLaunchSwitchBase@@QEAA@XZ @ 0x1800D14F4 (--0CLaunchSwitchBase@@QEAA@XZ.c)
 * Callees:
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x180075058 (--0CStoryboard@@IEAA@_N@Z.c)
 */

CGroupingStoryboard *__fastcall CGroupingStoryboard::CGroupingStoryboard(CGroupingStoryboard *this)
{
  CGroupingStoryboard *v1; // r10

  CStoryboard::CStoryboard(this);
  *((_QWORD *)v1 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  *(_QWORD *)v1 = &CLaunchSwitchBase::`vftable'{for `CBaseObject'};
  *((_QWORD *)v1 + 16) = 0LL;
  *((_QWORD *)v1 + 17) = 0LL;
  *((_QWORD *)v1 + 18) = 0LL;
  return v1;
}
