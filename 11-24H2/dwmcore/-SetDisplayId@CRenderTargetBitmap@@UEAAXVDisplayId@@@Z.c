/*
 * XREFs of ?SetDisplayId@CRenderTargetBitmap@@UEAAXVDisplayId@@@Z @ 0x1800596A0
 * Callers:
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x18005C0E8 (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 *     ?SetDisplayId@CStereoRenderTargetBitmap@@UEAAXVDisplayId@@@Z @ 0x1802DAB00 (-SetDisplayId@CStereoRenderTargetBitmap@@UEAAXVDisplayId@@@Z.c)
 * Callees:
 *     ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x18005A094 (-ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?GetDisplayId@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA?AVDisplayId@@XZ @ 0x1802CDA20 (-GetDisplayId@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA-AVDisplayId.c)
 *     ?SetDisplayId@CDeviceTextureTarget@@WLI@EAAXVDisplayId@@@Z @ 0x1802CDE40 (-SetDisplayId@CDeviceTextureTarget@@WLI@EAAXVDisplayId@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderTargetBitmap::SetDisplayId(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(__int64, char *); // rax
  _DWORD *DisplayId; // rax
  __int64 v7; // rcx
  void (__fastcall *v8)(__int64, _QWORD); // rax
  char v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a1 + 40);
  v5 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 96LL);
  if ( (char *)v5 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDisplayId )
    DisplayId = (_DWORD *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDisplayId(v4, &v9);
  else
    DisplayId = (_DWORD *)v5(v4, &v9);
  if ( a2 != *DisplayId )
  {
    v7 = *(_QWORD *)(a1 + 40) + 16LL;
    v8 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 152LL);
    if ( (char *)v8 == (char *)CDeviceTextureTarget::SetDisplayId )
      CDeviceTextureTarget::SetDisplayId(v7, a2);
    else
      v8(v7, a2);
    CRenderTargetBitmap::ResetBitmapCache((CRenderTargetBitmap *)(a1 - 80));
  }
}
