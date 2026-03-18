/*
 * XREFs of ??1?$com_ptr_t@VCD3DVidMemOnlyTexture@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18006C940
 * Callers:
 *     ??1CDxHandleYUVBitmapRealization@@MEAA@XZ @ 0x1801C71BC (--1CDxHandleYUVBitmapRealization@@MEAA@XZ.c)
 *     ??$destruct_range@V?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x180202D04 (--$destruct_range@V-$com_ptr_t@VCD3DConstantBuffer@@Uerr_returncode_policy@wil@@@wil@@@detail@@Y.c)
 *     ??1CSceneResourceManager@@QEAA@XZ @ 0x180269434 (--1CSceneResourceManager@@QEAA@XZ.c)
 *     ?Create@CExternalD3DRenderer@@SAJPEAVCD3DDevice@@PEAUIUnknown@@PEAPEAV1@@Z @ 0x1802C14AC (-Create@CExternalD3DRenderer@@SAJPEAVCD3DDevice@@PEAUIUnknown@@PEAPEAV1@@Z.c)
 *     ?CreateSubResourceTextureTarget@CDeviceTextureTarget@@UEBAJIPEAPEAVIDeviceTextureTarget@@@Z @ 0x1802D6A50 (-CreateSubResourceTextureTarget@CDeviceTextureTarget@@UEBAJIPEAPEAVIDeviceTextureTarget@@@Z.c)
 *     ?Create@CSecondaryCrossAdapterDirectBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1802E3550 (-Create@CSecondaryCrossAdapterDirectBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11T.c)
 *     ?Create@CSecondaryCrossAdapterIndirectBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D11Texture2D@@2AEBUD3D11_TEXTURE2D_DESC@@AEBUD2D1_BITMAP_PROPERTIES1@@W4DXGI_COLOR_SPACE_TYPE@@VDisplayId@@PEAPEAVCSecondaryD2DBitmap@@@Z @ 0x1802E379C (-Create@CSecondaryCrossAdapterIndirectBitmap@@SAJPEAVCD2DResourceManager@@UD2D_SIZE_U@@PEAUID3D1.c)
 * Callees:
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800AC9A0 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>::~com_ptr_t<CD3DVidMemOnlyTexture,wil::err_returncode_policy>(
        struct CMILPoolResource **a1)
{
  struct CMILPoolResource *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v1);
  return result;
}
