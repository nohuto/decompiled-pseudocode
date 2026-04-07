/*
 * XREFs of ??0CIconicAnimatedVisual@@IEAA@XZ @ 0x1800C4AF8
 * Callers:
 *     ?Create@CIconicAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800DCD9C (-Create@CIconicAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180027CBC (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CIconicAnimatedVisual *__fastcall CIconicAnimatedVisual::CIconicAnimatedVisual(CIconicAnimatedVisual *this)
{
  CRenderDataVisual::CRenderDataVisual(this);
  *(_QWORD *)this = &CIconicAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 30) = &CIconicAnimatedVisual::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_DWORD *)this + 86) = 0;
  return this;
}
