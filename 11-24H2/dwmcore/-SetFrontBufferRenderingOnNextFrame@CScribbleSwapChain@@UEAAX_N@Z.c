/*
 * XREFs of ?SetFrontBufferRenderingOnNextFrame@CScribbleSwapChain@@UEAAX_N@Z @ 0x1802BF9A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CScribbleSwapChain::SetFrontBufferRenderingOnNextFrame(CScribbleSwapChain *this, char a2)
{
  *((_BYTE *)this + 20) = a2;
}
