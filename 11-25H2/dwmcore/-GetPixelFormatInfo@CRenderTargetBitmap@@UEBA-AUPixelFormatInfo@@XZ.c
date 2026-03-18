/*
 * XREFs of ?GetPixelFormatInfo@CRenderTargetBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801E4A00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormatInfo@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA?AUPixelFormatInfo@@XZ @ 0x1802D6CD0 (-GetPixelFormatInfo@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA-AUPix.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_DWORD *__fastcall CRenderTargetBitmap::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rcx
  __int64 v4; // rcx
  void (*v5)(void); // rax

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    v4 = v2 + 8;
    v5 = *(void (**)(void))(*(_QWORD *)v4 + 24LL);
    if ( (char *)v5 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo )
      IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetPixelFormatInfo(v4, a2);
    else
      v5();
  }
  else
  {
    *a2 = 0;
    a2[2] = 0;
    a2[1] = 3;
  }
  return a2;
}
