/*
 * XREFs of ??0CVisualProxy@@QEAA@XZ @ 0x1800259D8
 * Callers:
 *     ??$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z @ 0x180023C74 (--$CreateProxyFromSharedHandle@VCVisualProxy@@@CCompositor@@IEAAJPEAXPEAPEAVCVisualProxy@@@Z.c)
 *     ??$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z @ 0x180024AFC (--$CreateProxy@VCVisualProxy@@@CCompositor@@IEAAJPEAPEAVCVisualProxy@@@Z.c)
 *     ??$CreateProxy@VCContainerVisualProxy@@@CCompositor@@IEAAJPEAPEAVCContainerVisualProxy@@@Z @ 0x180025A00 (--$CreateProxy@VCContainerVisualProxy@@@CCompositor@@IEAAJPEAPEAVCContainerVisualProxy@@@Z.c)
 *     ??$CreateProxy@VCRedirectVisualProxy@@@CCompositor@@IEAAJPEAPEAVCRedirectVisualProxy@@@Z @ 0x180072EE0 (--$CreateProxy@VCRedirectVisualProxy@@@CCompositor@@IEAAJPEAPEAVCRedirectVisualProxy@@@Z.c)
 *     ?Create@CCursorVisual@@SAJPEAVCCompositor@@_KPEAPEAV1@@Z @ 0x1800B77A0 (-Create@CCursorVisual@@SAJPEAVCCompositor@@_KPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CResourceProxy@@IEAA@XZ @ 0x18002676C (--0CResourceProxy@@IEAA@XZ.c)
 */

CVisualProxy *__fastcall CVisualProxy::CVisualProxy(CVisualProxy *this)
{
  CVisualProxy *v1; // rcx
  CVisualProxy *result; // rax

  CResourceProxy::CResourceProxy(this);
  result = v1;
  *(_QWORD *)v1 = &CVisualProxy::`vftable';
  *((_QWORD *)v1 + 3) = 0LL;
  return result;
}
