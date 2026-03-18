/*
 * XREFs of ?GetBufferCount@CDDisplaySwapChain@@UEBAIXZ @ 0x1801BD3F0
 * Callers:
 *     ?HasPendingScribble@CScribbleSwapChain@@UEBA_NXZ @ 0x1801BD2B0 (-HasPendingScribble@CScribbleSwapChain@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplaySwapChain::GetBufferCount(CDDisplaySwapChain *this)
{
  return *((unsigned int *)this + 122);
}
