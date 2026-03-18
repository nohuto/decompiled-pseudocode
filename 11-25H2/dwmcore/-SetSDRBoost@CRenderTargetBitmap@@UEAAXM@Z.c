/*
 * XREFs of ?SetSDRBoost@CRenderTargetBitmap@@UEAAXM@Z @ 0x18003F290
 * Callers:
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x18003F30C (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 *     ?SetSDRBoost@CStereoRenderTargetBitmap@@UEAAXM@Z @ 0x1802E3DE0 (-SetSDRBoost@CStereoRenderTargetBitmap@@UEAAXM@Z.c)
 * Callees:
 *     ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x180041A04 (-ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ.c)
 *     ?GetRenderTargetInfo@CDeviceTextureTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x180147060 (-GetRenderTargetInfo@CDeviceTextureTarget@@UEBA-AVRenderTargetInfo@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRenderTargetBitmap::SetSDRBoost(CRenderTargetBitmap *this, float a2)
{
  __int64 v3; // rcx
  __int64 (__fastcall *v4)(__int64, _BYTE *); // rax
  __int64 RenderTargetInfo; // rax
  _BYTE v6[32]; // [rsp+20h] [rbp-38h] BYREF

  v3 = *((_QWORD *)this + 5) + 16LL;
  v4 = *(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v3 + 120LL);
  if ( (char *)v4 == (char *)CDeviceTextureTarget::GetRenderTargetInfo )
    RenderTargetInfo = CDeviceTextureTarget::GetRenderTargetInfo(v3, v6);
  else
    RenderTargetInfo = v4(v3, v6);
  if ( a2 != *(float *)(RenderTargetInfo + 16) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 5) + 16LL) + 160LL))(*((_QWORD *)this + 5) + 16LL);
    CRenderTargetBitmap::ResetBitmapCache((CRenderTargetBitmap *)((char *)this - 80));
  }
}
