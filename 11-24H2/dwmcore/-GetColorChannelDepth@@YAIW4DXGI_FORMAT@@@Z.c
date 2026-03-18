/*
 * XREFs of ?GetColorChannelDepth@@YAIW4DXGI_FORMAT@@@Z @ 0x18010BF00
 * Callers:
 *     ?IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x18005E9A0 (-IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 *     ?GetCompositingShaderLookupKey@CCompositingShaderCache@@CA?AUCompositingShaderLookupKey@1@W4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18006625C (-GetCompositingShaderLookupKey@CCompositingShaderCache@@CA-AUCompositingShaderLookupKey@1@W4D3DS.c)
 *     ?SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z @ 0x18010A6B0 (-SetStateOnDevice@CCommonRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEAI@Z.c)
 *     ?BetterIsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x180268904 (-BetterIsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 *     ?LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x180289650 (-LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetColorChannelDepth(enum DXGI_FORMAT a1)
{
  __int64 result; // rax

  switch ( a1 )
  {
    case DXGI_FORMAT_B8G8R8X8_UNORM:
      return 8LL;
    case DXGI_FORMAT_R10G10B10A2_UNORM:
      return 10LL;
    case DXGI_FORMAT_YUY2:
      return 8LL;
  }
  switch ( a1 )
  {
    case DXGI_FORMAT_R32G32B32A32_FLOAT:
      result = 32LL;
      break;
    case DXGI_FORMAT_R16G16B16A16_FLOAT:
    case DXGI_FORMAT_R16G16B16A16_UNORM:
      result = 16LL;
      break;
    case DXGI_FORMAT_R8G8B8A8_UNORM:
    case DXGI_FORMAT_R8G8_UNORM:
    case DXGI_FORMAT_R8_UNORM:
    case DXGI_FORMAT_A8_UNORM:
    case DXGI_FORMAT_B8G8R8A8_UNORM:
    case DXGI_FORMAT_B8G8R8A8_UNORM_SRGB:
    case DXGI_FORMAT_NV12:
    case DXGI_FORMAT_420_OPAQUE:
      return 8LL;
    case DXGI_FORMAT_P010:
      return 10LL;
    default:
      result = 0LL;
      break;
  }
  return result;
}
