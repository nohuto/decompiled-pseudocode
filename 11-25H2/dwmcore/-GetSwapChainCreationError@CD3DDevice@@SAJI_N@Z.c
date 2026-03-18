/*
 * XREFs of ?GetSwapChainCreationError@CD3DDevice@@SAJI_N@Z @ 0x18028A0E8
 * Callers:
 *     ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVCLegacySwapChain@@@Z @ 0x18023598C (-CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AE.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x18023F450 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DDevice::GetSwapChainCreationError(int a1, char a2)
{
  __int64 result; // rax

  if ( a2 )
    return 2291663045LL;
  switch ( a1 )
  {
    case 4098:
      return 2291663042LL;
    case 4318:
      return 2291663043LL;
    case 32902:
      return 2291663041LL;
  }
  result = 2291663044LL;
  if ( a1 != 1297040209 )
    return 2291663040LL;
  return result;
}
