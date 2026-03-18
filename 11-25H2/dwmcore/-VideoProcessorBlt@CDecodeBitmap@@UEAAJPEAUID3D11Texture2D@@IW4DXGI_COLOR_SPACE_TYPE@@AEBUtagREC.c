/*
 * XREFs of ?VideoProcessorBlt@CDecodeBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@2@Z @ 0x180176180
 * Callers:
 *     <none>
 * Callees:
 *     ?MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ @ 0x180041C44 (-MarkFullInvalid@CD2DBitmapCache@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?VideoProcessorBlt@CRenderTargetBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@W4_D3DDDI_ROTATION@@PEAUDXGI_HDR_METADATA_HDR10@@2@Z @ 0x180176210 (-VideoProcessorBlt@CRenderTargetBitmap@@UEAAJPEAUID3D11Texture2D@@IW4DXGI_COLOR_SPACE_TYPE@@AEBU.c)
 */

__int64 __fastcall CDecodeBitmap::VideoProcessorBlt(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  int v7; // eax

  v4 = 0;
  if ( !*(_BYTE *)(a1 + 56) )
  {
    v7 = CRenderTargetBitmap::VideoProcessorBlt(a1, a2, a3, a4);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0x31u, 0LL);
    }
    else
    {
      *(_BYTE *)(a1 + 56) = 1;
      CD2DBitmapCache::MarkFullInvalid((CD2DBitmapCache *)(a1 - 80));
    }
  }
  return v4;
}
