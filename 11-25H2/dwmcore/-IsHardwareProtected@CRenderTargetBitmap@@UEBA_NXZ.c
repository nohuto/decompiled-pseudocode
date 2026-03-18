/*
 * XREFs of ?IsHardwareProtected@CRenderTargetBitmap@@UEBA_NXZ @ 0x18003F750
 * Callers:
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x18003F30C (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 *     ?ValidateRenderTargetInfo@CRenderTargetBitmap@@IEBAJAEBVRenderTargetInfo@@@Z @ 0x18003F550 (-ValidateRenderTargetInfo@CRenderTargetBitmap@@IEBAJAEBVRenderTargetInfo@@@Z.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180147C20 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 * Callees:
 *     ?IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ @ 0x180145C30 (-IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ.c)
 *     ?IsHardwareProtected@CDeviceTextureTarget@@WPA@EBA_NXZ @ 0x1802D6E10 (-IsHardwareProtected@CDeviceTextureTarget@@WPA@EBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CRenderTargetBitmap::IsHardwareProtected(CRenderTargetBitmap *this)
{
  CDeviceTextureTarget *v1; // rcx
  char v2; // bl
  __int64 (*v3)(void); // rax
  char IsHardwareProtected; // al

  v1 = (CDeviceTextureTarget *)*((_QWORD *)this + 5);
  v2 = 0;
  if ( v1 )
  {
    v3 = *(__int64 (**)(void))(*(_QWORD *)v1 + 56LL);
    if ( v3 == CDeviceTextureTarget::IsHardwareProtected )
    {
      IsHardwareProtected = CDeviceTextureTarget::IsHardwareProtected();
    }
    else if ( (char *)v3 == (char *)CDeviceTextureTarget::IsHardwareProtected )
    {
      IsHardwareProtected = CDeviceTextureTarget::IsHardwareProtected(v1);
    }
    else
    {
      IsHardwareProtected = v3();
    }
    if ( IsHardwareProtected )
      return 1;
  }
  return v2;
}
