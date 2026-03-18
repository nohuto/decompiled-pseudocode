/*
 * XREFs of ?UseSwapchainAsShaderInput@CD3DDevice@@QEBA_NXZ @ 0x1801B61B0
 * Callers:
 *     ?GetSwapchainBufferUsage@CD3DDevice@@QEAAI_N0W4DXGI_FORMAT@@I@Z @ 0x1801B6020 (-GetSwapchainBufferUsage@CD3DDevice@@QEAAI_N0W4DXGI_FORMAT@@I@Z.c)
 *     ?CreateDDASwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVCDDASwapChain@@@Z @ 0x1802B95EC (-CreateDDASwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVR.c)
 *     ?CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@IPEAPEAVCLegacyStereoSwapChain@@@Z @ 0x1802B9C2C (-CreateLegacyStereoSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatIn.c)
 * Callees:
 *     <none>
 */

bool __fastcall CD3DDevice::UseSwapchainAsShaderInput(CD3DDevice *this)
{
  bool result; // al
  int v2; // edx
  int v3; // ecx

  result = 0;
  if ( *((int *)this + 154) >= 40960 )
    return 1;
  v2 = *((_DWORD *)this + 224);
  if ( v2 == 1297040209 )
  {
    if ( *((int *)this + 155) < 1200 )
      return result;
    return 1;
  }
  if ( v2 == 1230128470 )
  {
    v3 = *((_DWORD *)this + 225);
    if ( v3 == 808464439 || v3 == 825241655 || v3 == 858796087 || v3 == 875573303 )
      return 1;
  }
  return result;
}
