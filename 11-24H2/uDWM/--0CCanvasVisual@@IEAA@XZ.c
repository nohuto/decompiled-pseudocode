/*
 * XREFs of ??0CCanvasVisual@@IEAA@XZ @ 0x180027DCC
 * Callers:
 *     ?Create@CCanvasVisual@@SAJPEAPEAV1@@Z @ 0x180027CFC (-Create@CCanvasVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CLegacyNonClientBackground@@AEAA@PEAVCWindowData@@@Z @ 0x180076180 (--0CLegacyNonClientBackground@@AEAA@PEAVCWindowData@@@Z.c)
 *     ??0CAccent@@IEAA@XZ @ 0x18007AA7C (--0CAccent@@IEAA@XZ.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180027CBC (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CCanvasVisual *__fastcall CCanvasVisual::CCanvasVisual(CCanvasVisual *this)
{
  CRenderDataVisual::CRenderDataVisual(this);
  *(_QWORD *)this = &CCanvasVisual::`vftable';
  return this;
}
