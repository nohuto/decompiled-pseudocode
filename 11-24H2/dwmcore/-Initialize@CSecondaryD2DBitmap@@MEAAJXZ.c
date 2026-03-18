/*
 * XREFs of ?Initialize@CSecondaryD2DBitmap@@MEAAJXZ @ 0x18005C660
 * Callers:
 *     ?Create@CSecondaryCrossAdapterDirectBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1802DA2B0 (-Create@CSecondaryCrossAdapterDirectBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11T.c)
 *     ?Create@CSecondaryCrossAdapterIndirectBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@2AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1802DA4FC (-Create@CSecondaryCrossAdapterIndirectBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D1.c)
 * Callees:
 *     ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x18005B278 (-SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 *     ?ManageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z @ 0x18005B770 (-ManageResource@CD2DResourceManager@@IEAAXPEAVCD2DResource@@@Z.c)
 */

__int64 __fastcall CSecondaryD2DBitmap::Initialize(CSecondaryD2DBitmap *this)
{
  CD2DResourceManager *v2; // rcx
  _QWORD *v3; // rax
  __int64 v4; // rdx

  CRegion::SetRectangle((CSecondaryD2DBitmap *)((char *)this + 256), (CSecondaryD2DBitmap *)((char *)this + 240));
  v2 = (CD2DResourceManager *)*((_QWORD *)this + 5);
  v3 = (_QWORD *)((char *)this + 56);
  v4 = *(_QWORD *)v2;
  if ( *(CD2DResourceManager **)(*(_QWORD *)v2 + 8LL) != v2 )
    __fastfail(3u);
  *v3 = v4;
  *((_QWORD *)this + 8) = v2;
  *(_QWORD *)(v4 + 8) = v3;
  *(_QWORD *)v2 = v3;
  CD2DResourceManager::ManageResource(v2, this);
  return 0LL;
}
