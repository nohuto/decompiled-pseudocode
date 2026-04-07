/*
 * XREFs of ??0CDisplaySecondaryOnlyAnimatedVisual@@IEAA@XZ @ 0x1800C17F0
 * Callers:
 *     ?Create@CDisplaySecondaryOnlyAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800C1270 (-Create@CDisplaySecondaryOnlyAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x180083EBC (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 */

CDisplaySecondaryOnlyAnimatedVisual *__fastcall CDisplaySecondaryOnlyAnimatedVisual::CDisplaySecondaryOnlyAnimatedVisual(
        CDisplaySecondaryOnlyAnimatedVisual *this)
{
  CDisplaySecondaryOnlyAnimatedVisual *result; // rax

  CDisplayAnimatedVisual::CDisplayAnimatedVisual(this);
  *(_QWORD *)this = &CDisplaySecondaryOnlyAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 30) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  result = this;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_DWORD *)this + 102) = -1;
  *((_BYTE *)this + 264) = 1;
  return result;
}
