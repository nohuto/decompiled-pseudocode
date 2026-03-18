/*
 * XREFs of ?BoostFrameRate@CDDisplayRenderTarget@@UEAA_N_N@Z @ 0x180218640
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVBlankDuration@CDDisplaySwapChain@@UEAA_NI_K@Z @ 0x1802186A0 (-SetVBlankDuration@CDDisplaySwapChain@@UEAA_NI_K@Z.c)
 */

char __fastcall CDDisplayRenderTarget::BoostFrameRate(CDDisplayRenderTarget *this, char a2)
{
  __int64 v3; // rcx
  unsigned int v4; // edx

  v3 = *((_QWORD *)this + 6);
  if ( !v3 )
    return 0;
  if ( a2 )
  {
    v4 = *(_DWORD *)(v3 + 152);
    if ( v4 <= 1 || !*(_QWORD *)(v3 + 136) )
      return 0;
  }
  else
  {
    v4 = 0;
  }
  if ( CDDisplaySwapChain::SetVBlankDuration((CDDisplaySwapChain *)(v3 + 24), v4, 0LL) )
  {
    *((_BYTE *)this + 33744) = 1;
    return 1;
  }
  return 0;
}
