/*
 * XREFs of ??0CDisplayMixedModeAnimatedVisual@@IEAA@XZ @ 0x1800C0214
 * Callers:
 *     ?Create@CDisplayMixedModeAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x1800C11A4 (-Create@CDisplayMixedModeAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x180083EBC (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 */

CDisplayMixedModeAnimatedVisual *__fastcall CDisplayMixedModeAnimatedVisual::CDisplayMixedModeAnimatedVisual(
        CDisplayMixedModeAnimatedVisual *this)
{
  CDisplayMixedModeAnimatedVisual *result; // rax

  CDisplayAnimatedVisual::CDisplayAnimatedVisual(this);
  *(_QWORD *)this = &CDisplayMixedModeAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 30) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_DWORD *)this + 118) = -1;
  *((_DWORD *)this + 119) = -1;
  *((_DWORD *)this + 120) = -1;
  result = this;
  *((_BYTE *)this + 264) = 1;
  return result;
}
