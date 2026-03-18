/*
 * XREFs of ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x18006D978
 * Callers:
 *     ?Initialize@CBackdropVisualImage@@EEAAJXZ @ 0x18006CDC0 (-Initialize@CBackdropVisualImage@@EEAAJXZ.c)
 *     ?ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE@@@Z @ 0x18006D1FC (-ProcessUpdate@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE@@@Z.c)
 *     ?CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x18006D7C0 (-CreateForVisualSurface@CCachedVisualImage@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     ?EnsureCachedVisualImage@CVisualBitmap@@AEAAJXZ @ 0x1801E5DE0 (-EnsureCachedVisualImage@CVisualBitmap@@AEAAJXZ.c)
 *     ?SetForDCompSnapshot@CCachedVisualImage@@IEAAJPEAVCVisual@@AEBUD2D_SIZE_U@@_N@Z @ 0x18028D184 (-SetForDCompSnapshot@CCachedVisualImage@@IEAAJPEAVCVisual@@AEBUD2D_SIZE_U@@_N@Z.c)
 *     ?Initialize@CDebugVisualImage@@AEAAJPEAVCVisual@@@Z @ 0x18028DC7C (-Initialize@CDebugVisualImage@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180025638 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z @ 0x18006DA24 (-GetPixelFormatColorSpace@@YAJW4DXGI_FORMAT@@PEAW4ColorSpace@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CCachedVisualImage::ChoosePixelFormat(CCachedVisualImage *this)
{
  unsigned int v2; // ecx
  __int64 v3; // r8
  __int64 v4; // rcx
  enum DXGI_FORMAT v5; // r8d
  BOOL v6; // eax
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_DWORD *)this + 37);
  v3 = v2;
  if ( !v2 )
  {
    v4 = **(_QWORD **)(*((_QWORD *)this + 3) + 616LL);
    if ( v4 )
      v2 = *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)v4 + 24LL))(v4, v7, v3);
    else
      v2 = 87;
    *((_DWORD *)this + 37) = v2;
  }
  v6 = (unsigned int)HasAlphaChannel(v2) && !*((_BYTE *)this + 2059);
  *((_DWORD *)this + 38) = v6;
  if ( !*((_DWORD *)this + 39) )
    GetPixelFormatColorSpace(v5, (CCachedVisualImage *)((char *)this + 156));
}
