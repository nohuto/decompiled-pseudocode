/*
 * XREFs of ??0CSlideIn@@QEAA@XZ @ 0x1800D9398
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x180013EB8 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CSlide@@IEAA@XZ @ 0x1800D9360 (--0CSlide@@IEAA@XZ.c)
 */

CSlideIn *__fastcall CSlideIn::CSlideIn(CSlideIn *this)
{
  CSlideIn *v1; // rcx
  CSlideIn *result; // rax

  CSlide::CSlide(this);
  *((_QWORD *)v1 + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  result = v1;
  *(_QWORD *)v1 = &CSlideIn::`vftable'{for `CBaseObject'};
  return result;
}
