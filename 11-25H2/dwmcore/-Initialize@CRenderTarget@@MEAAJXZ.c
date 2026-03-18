/*
 * XREFs of ?Initialize@CRenderTarget@@MEAAJXZ @ 0x1800C1B20
 * Callers:
 *     <none>
 * Callees:
 *     ?AddToRenderTargetManager@CRenderTarget@@QEAAXXZ @ 0x1800C1E54 (-AddToRenderTargetManager@CRenderTarget@@QEAAXXZ.c)
 */

__int64 __fastcall CRenderTarget::Initialize(CRenderTarget *this)
{
  CRenderTarget::AddToRenderTargetManager(this);
  return 0LL;
}
