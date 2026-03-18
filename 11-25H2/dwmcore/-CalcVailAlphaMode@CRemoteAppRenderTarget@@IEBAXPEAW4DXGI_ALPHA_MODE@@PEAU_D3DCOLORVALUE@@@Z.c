/*
 * XREFs of ?CalcVailAlphaMode@CRemoteAppRenderTarget@@IEBAXPEAW4DXGI_ALPHA_MODE@@PEAU_D3DCOLORVALUE@@@Z @ 0x18028BAAC
 * Callers:
 *     ?Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028C274 (-Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800A6F50 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 */

void __fastcall CRemoteAppRenderTarget::CalcVailAlphaMode(
        CRemoteAppRenderTarget *this,
        enum DXGI_ALPHA_MODE *a2,
        struct _D3DCOLORVALUE *a3)
{
  int *v3; // rdx
  _OWORD *v4; // r8
  __int64 v5; // r9
  __int128 v6; // xmm0
  int v7; // eax

  if ( IsEmpty((const struct D2D_RECT_F *)(*((_QWORD *)this + 14) + 80LL)) )
  {
    v6 = 0LL;
    v7 = 1;
  }
  else
  {
    v6 = *(_OWORD *)(v5 + 140);
    v7 = *(_DWORD *)(v5 + 132);
  }
  *v4 = v6;
  *v3 = v7;
}
