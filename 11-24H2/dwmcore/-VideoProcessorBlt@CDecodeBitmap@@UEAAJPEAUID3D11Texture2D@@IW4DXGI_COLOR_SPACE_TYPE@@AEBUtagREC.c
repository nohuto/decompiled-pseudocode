/*
 * XREFs of ?VideoProcessorBlt@CDecodeBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@2@Z @ 0x1801D0020
 * Callers:
 *     <none>
 * Callees:
 *     ?MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ @ 0x18005A2D4 (-MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?VideoProcessorBlt@CRenderTargetBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@2@Z @ 0x1801D00B0 (-VideoProcessorBlt@CRenderTargetBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBU.c)
 */

__int64 __fastcall CDecodeBitmap::VideoProcessorBlt(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  unsigned int v8; // edi
  int v11; // eax

  v8 = 0;
  if ( !*(_BYTE *)(a1 + 56) )
  {
    v11 = CRenderTargetBitmap::VideoProcessorBlt(a1, a2, a3, a4, a5, a6, a7, a8);
    v8 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v11, 0x31u, 0LL);
    }
    else
    {
      *(_BYTE *)(a1 + 56) = 1;
      CD2DBitmapCache::MarkFullInvalid((CD2DBitmapCache *)(a1 - 80));
    }
  }
  return v8;
}
