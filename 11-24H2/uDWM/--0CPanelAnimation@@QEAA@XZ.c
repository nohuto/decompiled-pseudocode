/*
 * XREFs of ??0CPanelAnimation@@QEAA@XZ @ 0x1800D153C
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x1800813C4 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CSlide@@IEAA@XZ @ 0x1800D1570 (--0CSlide@@IEAA@XZ.c)
 */

CPanelAnimation *__fastcall CPanelAnimation::CPanelAnimation(CPanelAnimation *this)
{
  CSlide::CSlide(this);
  *(_QWORD *)this = &CPanelAnimation::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  return this;
}
