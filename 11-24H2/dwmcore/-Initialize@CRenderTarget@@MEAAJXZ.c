/*
 * XREFs of ?Initialize@CRenderTarget@@MEAAJXZ @ 0x180189A90
 * Callers:
 *     <none>
 * Callees:
 *     ?AddToRenderTargetManager@CRenderTarget@@QEAAXXZ @ 0x180189C54 (-AddToRenderTargetManager@CRenderTarget@@QEAAXXZ.c)
 */

__int64 __fastcall CRenderTarget::Initialize(CRenderTarget *this)
{
  CRenderTarget::AddToRenderTargetManager(this);
  return 0LL;
}
