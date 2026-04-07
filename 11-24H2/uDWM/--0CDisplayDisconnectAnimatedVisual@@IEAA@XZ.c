/*
 * XREFs of ??0CDisplayDisconnectAnimatedVisual@@IEAA@XZ @ 0x180099750
 * Callers:
 *     ?Create@CDisplayDisconnectAnimatedVisual@@SAJPEAPEAV1@@Z @ 0x18007F704 (-Create@CDisplayDisconnectAnimatedVisual@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CDisplayAnimatedVisual@@IEAA@XZ @ 0x180083EBC (--0CDisplayAnimatedVisual@@IEAA@XZ.c)
 */

CDisplayDisconnectAnimatedVisual *__fastcall CDisplayDisconnectAnimatedVisual::CDisplayDisconnectAnimatedVisual(
        CDisplayDisconnectAnimatedVisual *this)
{
  CDisplayDisconnectAnimatedVisual *result; // rax

  CDisplayAnimatedVisual::CDisplayAnimatedVisual(this);
  *(_QWORD *)this = &CDisplayDisconnectAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *((_QWORD *)this + 30) = &CDisplayExtendToDuplicateAnimatedVisual::`vftable'{for `IAnimationListener'};
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_BYTE *)this + 408) = 0;
  result = this;
  *((_BYTE *)this + 264) = 1;
  return result;
}
