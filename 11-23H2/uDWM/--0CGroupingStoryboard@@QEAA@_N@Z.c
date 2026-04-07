/*
 * XREFs of ??0CGroupingStoryboard@@QEAA@_N@Z @ 0x1800D9240
 * Callers:
 *     ??0CAppArrangementBase@@IEAA@_N@Z @ 0x1800D9104 (--0CAppArrangementBase@@IEAA@_N@Z.c)
 *     ??0CLaunchSwitchBase@@QEAA@XZ @ 0x1800D92B8 (--0CLaunchSwitchBase@@QEAA@XZ.c)
 * Callees:
 *     ??0CStoryboard@@IEAA@_N@Z @ 0x180013FA4 (--0CStoryboard@@IEAA@_N@Z.c)
 */

CGroupingStoryboard *__fastcall CGroupingStoryboard::CGroupingStoryboard(CGroupingStoryboard *this, char a2)
{
  CGroupingStoryboard *v2; // rcx

  CStoryboard::CStoryboard(this, a2);
  *((_QWORD *)v2 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  *(_QWORD *)v2 = &CLaunchSwitchBase::`vftable'{for `CBaseObject'};
  *((_QWORD *)v2 + 16) = 0LL;
  *((_QWORD *)v2 + 17) = 0LL;
  *((_QWORD *)v2 + 18) = 0LL;
  return v2;
}
