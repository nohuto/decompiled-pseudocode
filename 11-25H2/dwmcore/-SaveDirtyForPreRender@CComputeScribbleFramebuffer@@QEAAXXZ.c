/*
 * XREFs of ?SaveDirtyForPreRender@CComputeScribbleFramebuffer@@QEAAXXZ @ 0x180173330
 * Callers:
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJXZ @ 0x180173CD0 (-PreRender@CComputeScribbleRenderer@@QEAAJXZ.c)
 *     ?PreRender@CComputeScribbleFramebuffer@@QEAAX_K@Z @ 0x1801749C8 (-PreRender@CComputeScribbleFramebuffer@@QEAAX_K@Z.c)
 * Callees:
 *     ?Copy@CRegion@@QEAAXAEBV1@@Z @ 0x180173370 (-Copy@CRegion@@QEAAXAEBV1@@Z.c)
 */

void __fastcall CComputeScribbleFramebuffer::SaveDirtyForPreRender(CComputeScribbleFramebuffer *this)
{
  CRegion::Copy((CComputeScribbleFramebuffer *)((char *)this + 176), (CComputeScribbleFramebuffer *)((char *)this + 96));
  **((_DWORD **)this + 12) = 0;
  *((_BYTE *)this + 168) = 0;
}
