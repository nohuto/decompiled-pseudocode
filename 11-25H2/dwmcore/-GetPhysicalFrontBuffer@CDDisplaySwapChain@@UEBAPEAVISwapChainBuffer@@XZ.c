/*
 * XREFs of ?GetPhysicalFrontBuffer@CDDisplaySwapChain@@UEBAPEAVISwapChainBuffer@@XZ @ 0x1800847B0
 * Callers:
 *     ?CopyFrontToBackBuffer@COverlaySwapChain@@UEAAJXZ @ 0x180083F80 (-CopyFrontToBackBuffer@COverlaySwapChain@@UEAAJXZ.c)
 *     ?SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z @ 0x180085CF0 (-SyncLock@COverlayContext@@QEAAJPEAVIOverlaySwapChain@@II_N@Z.c)
 * Callees:
 *     <none>
 */

struct ISwapChainBuffer *__fastcall CDDisplaySwapChain::GetPhysicalFrontBuffer(CDDisplaySwapChain *this)
{
  __int64 v1; // r9

  v1 = *((_QWORD *)this + 55);
  if ( (unsigned int)(*((_DWORD *)this + 122) + *((_DWORD *)this + 125) - 1) % *((_DWORD *)this + 122) >= (unsigned __int64)((*((_QWORD *)this + 56) - v1) >> 3) )
    return 0LL;
  else
    return *(struct ISwapChainBuffer **)(v1
                                       + 8LL
                                       * ((unsigned int)(*((_DWORD *)this + 122) + *((_DWORD *)this + 125) - 1)
                                        % *((_DWORD *)this + 122)));
}
