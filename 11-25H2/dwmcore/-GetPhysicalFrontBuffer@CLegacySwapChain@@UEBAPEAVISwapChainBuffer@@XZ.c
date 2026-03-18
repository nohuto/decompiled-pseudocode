/*
 * XREFs of ?GetPhysicalFrontBuffer@CLegacySwapChain@@UEBAPEAVISwapChainBuffer@@XZ @ 0x1801F5FA0
 * Callers:
 *     ?CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ @ 0x1802D3930 (-CopyFrontToBackBuffer@CLegacyStereoSwapChain@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct ISwapChainBuffer *__fastcall CLegacySwapChain::GetPhysicalFrontBuffer(CLegacySwapChain *this)
{
  __int64 v1; // r9

  v1 = *((_QWORD *)this + 44);
  if ( (unsigned int)(*((_DWORD *)this + 118) + *((_DWORD *)this + 119) - 1) % *((_DWORD *)this + 118) >= (unsigned __int64)((*((_QWORD *)this + 45) - v1) >> 3) )
    return 0LL;
  else
    return *(struct ISwapChainBuffer **)(v1
                                       + 8LL
                                       * ((unsigned int)(*((_DWORD *)this + 118) + *((_DWORD *)this + 119) - 1)
                                        % *((_DWORD *)this + 118)));
}
