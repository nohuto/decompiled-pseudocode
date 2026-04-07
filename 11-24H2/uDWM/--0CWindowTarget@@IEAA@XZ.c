/*
 * XREFs of ??0CWindowTarget@@IEAA@XZ @ 0x1800F46A8
 * Callers:
 *     ?Create@CWindowTarget@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z @ 0x1800F480C (-Create@CWindowTarget@@KAJPEAVCVisualProxy@@PEAPEAV1@@Z.c)
 *     ?CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z @ 0x1800F48D8 (-CreateFromSharedHandle@CWindowTarget@@SAJPEAXPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x1800265DC (--0CVisual@@IEAA@XZ.c)
 */

CWindowTarget *__fastcall CWindowTarget::CWindowTarget(CWindowTarget *this)
{
  CWindowTarget *v1; // rcx
  CWindowTarget *result; // rax

  CVisual::CVisual(this);
  result = v1;
  *(_QWORD *)v1 = &CWindowTarget::`vftable';
  return result;
}
