/*
 * XREFs of ??0CProjectedShadowApproxBlurEffect@@QEAA@XZ @ 0x1802DC078
 * Callers:
 *     ?AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1802AA97C (-AddApproxBlurBrush@CProjectedShadowApproxBlurGraphBuilder@@AEAAJPEAVCBrush@@0PEAPEAVCRenderingT.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

CProjectedShadowApproxBlurEffect *__fastcall CProjectedShadowApproxBlurEffect::CProjectedShadowApproxBlurEffect(
        CProjectedShadowApproxBlurEffect *this)
{
  __int64 v1; // rdx
  _WORD *v2; // r8
  __int16 v3; // ax
  CProjectedShadowApproxBlurEffect *result; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CProjectedShadowApproxBlurEffect::`vftable'{for `CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance,CMilObjectDeleter>'};
  LODWORD(v1) = 0;
  v2 = (_WORD *)((char *)this + 24);
  *((_QWORD *)this + 2) = &CProjectedShadowApproxBlurEffect::`vftable'{for `Windows::UI::Composition::ICompiledEffect'};
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  do
  {
    v3 = v1 | 0x200;
    v1 = (unsigned int)(v1 + 1);
    *v2++ = v3;
  }
  while ( (unsigned int)v1 < 2 );
  if ( this == (CProjectedShadowApproxBlurEffect *)-24LL )
  {
    ((void (__fastcall *)(__int64, __int64, _WORD *))`gsl::details::get_terminate_handler'::`2'::handler)(-24LL, v1, v2);
    __debugbreak();
  }
  *((_QWORD *)this + 7) = 2LL;
  *((_QWORD *)this + 8) = (char *)this + 24;
  *((_QWORD *)this + 9) = 1321LL;
  *((_QWORD *)this + 10) = &unk_1803C85C0;
  *((_QWORD *)this + 11) = "ProjectedShadowApproxBlur_PS";
  result = this;
  *((_BYTE *)this + 102) = 1;
  *((_DWORD *)this + 24) = 20;
  *((_WORD *)this + 50) = 10;
  return result;
}
