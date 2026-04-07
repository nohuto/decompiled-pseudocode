/*
 * XREFs of ??0CFadeIn@@QEAA@XZ @ 0x18008A898
 * Callers:
 *     ?Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z @ 0x1800813C4 (-Create@CStoryboardFactory@@SAJHPEAVCStoryboard@@PEAPEAV2@@Z.c)
 * Callees:
 *     ??0CFade@@IEAA@XZ @ 0x18009A658 (--0CFade@@IEAA@XZ.c)
 */

CFadeIn *__fastcall CFadeIn::CFadeIn(CFadeIn *this)
{
  CFade::CFade(this);
  *(_QWORD *)this = &CFadeIn::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CAppLaunch::`vftable'{for `IAnimationListener'};
  return this;
}
