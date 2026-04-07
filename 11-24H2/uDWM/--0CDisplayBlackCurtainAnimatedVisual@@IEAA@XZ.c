/*
 * XREFs of ??0CDisplayBlackCurtainAnimatedVisual@@IEAA@XZ @ 0x1800C1558
 * Callers:
 *     ?Create@CDisplayBlackCurtainAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800C0DA8 (-Create@CDisplayBlackCurtainAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x180083EBC (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 */

CDisplayBlackCurtainAnimatedVisual *__fastcall CDisplayBlackCurtainAnimatedVisual::CDisplayBlackCurtainAnimatedVisual(
        CDisplayBlackCurtainAnimatedVisual *this)
{
  CDisplayBlackCurtainAnimatedVisual *result; // rax

  CDisplayAnimatedVisual::CDisplayAnimatedVisual(this);
  *(_QWORD *)this = &CDisplayBlackCurtainAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 30) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  result = this;
  *((_QWORD *)this + 49) = 0LL;
  *((_BYTE *)this + 400) = 0;
  *((_WORD *)this + 132) = 257;
  return result;
}
