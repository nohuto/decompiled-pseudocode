/*
 * XREFs of ??0CAppArrangementBase@@IEAA@_N@Z @ 0x1800D1400
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x1800813C4 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x18000C2D0 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ??0CGroupingStoryboard@@QEAA@_N@Z @ 0x1800D1474 (--0CGroupingStoryboard@@QEAA@_N@Z.c)
 */

CAppArrangementBase *__fastcall CAppArrangementBase::CAppArrangementBase(CAppArrangementBase *this, bool a2)
{
  CGroupingStoryboard::CGroupingStoryboard(this, a2);
  *(_QWORD *)this = &CAppArrangementBase::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  CBitmapSourceArray::CBitmapSourceArray((CAppArrangementBase *)((char *)this + 152));
  return this;
}
