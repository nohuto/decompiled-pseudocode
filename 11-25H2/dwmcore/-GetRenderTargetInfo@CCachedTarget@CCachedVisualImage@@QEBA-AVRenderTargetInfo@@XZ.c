/*
 * XREFs of ?GetRenderTargetInfo@CCachedTarget@CCachedVisualImage@@QEBA?AVRenderTargetInfo@@XZ @ 0x180144390
 * Callers:
 *     ?InvalidateBlurCache@CBackdropVisualImage@@AEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z @ 0x18003F7FC (-InvalidateBlurCache@CBackdropVisualImage@@AEAAXPEBVCCachedTarget@CCachedVisualImage@@@Z.c)
 *     ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x1801BD88C (-Snapshot@CCachedVisualImage@@IEAAJXZ.c)
 *     ?IsHDR@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x1801BDE10 (-IsHDR@CCachedTarget@CCachedVisualImage@@QEBA_NXZ.c)
 * Callees:
 *     ?IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ @ 0x180145C30 (-IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ.c)
 *     ?GetAdapterLuid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBA?AU_LUID@@XZ @ 0x180147010 (-GetAdapterLuid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBA-AU_LUID@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::CCachedTarget::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rsi
  void (__fastcall *v4)(_DWORD *, __int64); // rax

  v3 = (_DWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 144LL))(*(_QWORD *)(a1 + 8)) + 16);
  v4 = *(void (__fastcall **)(_DWORD *, __int64))(*(_QWORD *)v3 + 120LL);
  if ( (char *)v4 == (char *)CDeviceTextureTarget::GetRenderTargetInfo )
  {
    IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetAdapterLuid(v3 - 64, a2);
    *(_DWORD *)(a2 + 8) = *(v3 - 7);
    *(_DWORD *)(a2 + 12) = v3[6];
    *(_DWORD *)(a2 + 16) = v3[7];
    *(_BYTE *)(a2 + 20) = CDeviceTextureTarget::IsHardwareProtected((CDeviceTextureTarget *)(v3 - 64));
    *(_WORD *)(a2 + 21) = 0;
    *(_BYTE *)(a2 + 23) = 0;
  }
  else
  {
    v4(v3, a2);
  }
  return a2;
}
