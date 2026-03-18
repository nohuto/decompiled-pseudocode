/*
 * XREFs of ?FinalRelease@CRenderTarget@@MEAAXXZ @ 0x1802344C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CRenderTarget::FinalRelease(CRenderTarget *this)
{
  if ( *((_BYTE *)this + 156) )
    CRenderTarget::RemoveFromRenderTargetManager(this);
}
