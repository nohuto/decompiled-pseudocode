/*
 * XREFs of ??0CDisplaySecondaryOnlyToExtendAnimatedVisual@@IEAA@XZ @ 0x1800C222C
 * Callers:
 *     ?Create@CDisplaySecondaryOnlyToExtendAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800C1408 (-Create@CDisplaySecondaryOnlyToExtendAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x180083EBC (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 */

CDisplaySecondaryOnlyToExtendAnimatedVisual *__fastcall CDisplaySecondaryOnlyToExtendAnimatedVisual::CDisplaySecondaryOnlyToExtendAnimatedVisual(
        CDisplaySecondaryOnlyToExtendAnimatedVisual *this)
{
  CDisplayAnimatedVisual::CDisplayAnimatedVisual(this);
  *(_QWORD *)this = &CDisplaySecondaryOnlyToExtendAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 30) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_DWORD *)this + 106) = -1;
  *((_DWORD *)this + 107) = -1;
  *((_DWORD *)this + 108) = -1;
  return this;
}
