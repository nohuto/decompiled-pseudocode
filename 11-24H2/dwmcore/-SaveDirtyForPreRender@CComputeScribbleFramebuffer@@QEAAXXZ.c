/*
 * XREFs of ?SaveDirtyForPreRender@CComputeScribbleFramebuffer@@QEAAXXZ @ 0x1801C5B44
 * Callers:
 *     ?PreRender@CComputeScribbleRenderer@@QEAAJXZ @ 0x1801C5790 (-PreRender@CComputeScribbleRenderer@@QEAAJXZ.c)
 *     ?PreRender@CComputeScribbleFramebuffer@@QEAAX_K@Z @ 0x1801C5BB8 (-PreRender@CComputeScribbleFramebuffer@@QEAAX_K@Z.c)
 * Callees:
 *     ?Copy@CRegion@@QEAAXAEBV1@@Z @ 0x180146AC0 (-Copy@CRegion@@QEAAXAEBV1@@Z.c)
 */

void __fastcall CComputeScribbleFramebuffer::SaveDirtyForPreRender(FastRegion::CRegion **this)
{
  CRegion::Copy(this + 22, this + 12);
  *(_DWORD *)this[12] = 0;
  *((_BYTE *)this + 168) = 0;
}
