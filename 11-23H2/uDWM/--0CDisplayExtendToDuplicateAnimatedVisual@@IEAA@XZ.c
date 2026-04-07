/*
 * XREFs of ??0CDisplayExtendToDuplicateAnimatedVisual@@IEAA@XZ @ 0x1800BADF8
 * Callers:
 *     ?Create@CDisplayExtendToDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800BCD3C (-Create@CDisplayExtendToDuplicateAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x180020A70 (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 */

CDisplayExtendToDuplicateAnimatedVisual *__fastcall CDisplayExtendToDuplicateAnimatedVisual::CDisplayExtendToDuplicateAnimatedVisual(
        CDisplayExtendToDuplicateAnimatedVisual *this)
{
  CDisplayAnimatedVisual::CDisplayAnimatedVisual(this);
  *(_QWORD *)this = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 36) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_DWORD *)this + 120) = -1;
  *((_DWORD *)this + 121) = -1;
  *((_DWORD *)this + 122) = -1;
  *((_DWORD *)this + 123) = -1;
  return this;
}
