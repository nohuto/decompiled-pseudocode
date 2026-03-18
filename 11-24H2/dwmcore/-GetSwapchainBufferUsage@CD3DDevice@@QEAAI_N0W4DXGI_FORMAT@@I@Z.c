/*
 * XREFs of ?GetSwapchainBufferUsage@CD3DDevice@@QEAAI_N0W4DXGI_FORMAT@@I@Z @ 0x1801B6020
 * Callers:
 *     ?EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ @ 0x1801B5880 (-EnsureDisplayBuffers@CDDisplaySwapChain@@QEAAJXZ.c)
 *     ?CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@I_NPEAPEAVCLegacySwapChain@@@Z @ 0x18023EA98 (-CreateLegacySwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AE.c)
 * Callees:
 *     ?UseSwapchainAsShaderInput@CD3DDevice@@QEBA_NXZ @ 0x1801B61B0 (-UseSwapchainAsShaderInput@CD3DDevice@@QEBA_NXZ.c)
 *     ?IsFrontBufferRenderingSupported@CD3DDevice@@QEBA_NW4DXGI_FORMAT@@@Z @ 0x18021F4D4 (-IsFrontBufferRenderingSupported@CD3DDevice@@QEBA_NW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CD3DDevice::GetSwapchainBufferUsage(
        CD3DDevice *this,
        __int64 a2,
        __int64 a3,
        enum DXGI_FORMAT a4,
        unsigned int a5)
{
  unsigned int v5; // ebx
  char v6; // r8
  enum DXGI_FORMAT v7; // r9d
  CD3DDevice *v8; // r11
  char v9; // r10

  v5 = a5 | (16 * (CD3DDevice::UseSwapchainAsShaderInput(this) + 2));
  if ( v9 && !v6 && CD3DDevice::IsFrontBufferRenderingSupported(v8, v7) )
    v5 |= 0x2000480u;
  return v5;
}
