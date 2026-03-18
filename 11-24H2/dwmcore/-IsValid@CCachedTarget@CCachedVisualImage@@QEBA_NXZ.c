/*
 * XREFs of ?IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x18010C380
 * Callers:
 *     ?ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEA_N@Z @ 0x18000ACA0 (-ValidateRootAndSourceRectangle@CBackdropVisualImage@@QEAAJPEAVCVisual@@AEBV-$TMilRect_@MUD2D_RE.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ @ 0x18000C2D4 (-MarkAllTargetsDirty@CCachedVisualImage@@QEAAXXZ.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D5570 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUD2D_RECT_F@@U.c)
 *     ?GetBlurCacheRealizationKey@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@PEAPEBX@Z @ 0x1802457C0 (-GetBlurCacheRealizationKey@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@PEAPEBX@Z.c)
 * Callees:
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x18004E2E4 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ?GetDevice@CD2DContext@@QEBAPEAVCD3DDevice@@XZ @ 0x18010BDC0 (-GetDevice@CD2DContext@@QEBAPEAVCD3DDevice@@XZ.c)
 *     ?IsValid@CD3DDevice@@QEBAJXZ @ 0x18010BDE0 (-IsValid@CD3DDevice@@QEBAJXZ.c)
 *     ?IsValid@CD2DBitmap@@UEBAJXZ @ 0x18010BE30 (-IsValid@CD2DBitmap@@UEBAJXZ.c)
 *     ?IsValid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EBAJXZ @ 0x1802CDC50 (-IsValid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EBAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall CCachedVisualImage::CCachedTarget::IsValid(CCachedVisualImage::CCachedTarget *this)
{
  CD2DBitmap **v2; // rcx
  __int64 (*v3)(void); // rax
  CD2DBitmap **v4; // rbx
  CD2DBitmap *v5; // rbx
  __int64 (__fastcall *v6)(CD2DBitmap *); // rax
  int IsValid; // eax
  struct CD3DDevice *(__fastcall *v8)(CD2DResource *__hidden); // rax
  CD3DDevice *Device; // rax
  _BYTE *v10; // rax
  char v11; // al
  __int64 v13; // rax

  v2 = (CD2DBitmap **)*((_QWORD *)this + 1);
  v3 = (__int64 (*)(void))*((_QWORD *)*v2 + 3);
  if ( (char *)v3 == (char *)CRenderTargetBitmap::IsValid )
  {
    v4 = v2 + 5;
    if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(v2 + 5) )
    {
      v5 = *v4;
      v6 = *(__int64 (__fastcall **)(CD2DBitmap *))(*(_QWORD *)v5 + 24LL);
      if ( v6 == CD2DBitmap::IsValid )
      {
        if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>((_QWORD *)v5 + 13) )
        {
          v8 = *(struct CD3DDevice *(__fastcall **)(CD2DResource *__hidden))(*(_QWORD *)v5 + 40LL);
          if ( v8 == CD2DResource::GetDevice )
            Device = CD2DContext::GetDevice(*(CD2DContext **)(*((_QWORD *)v5 + 5) + 24LL));
          else
            Device = v8(v5);
          IsValid = CD3DDevice::IsValid(Device);
        }
        else
        {
          IsValid = -2003292404;
        }
      }
      else if ( (char *)v6 == (char *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid )
      {
        IsValid = IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid(v5);
      }
      else if ( (char *)v6 == (char *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid )
      {
        IsValid = CD2DBitmap::IsValid(v5);
      }
      else
      {
        IsValid = v6(v5);
      }
    }
    else
    {
      IsValid = -2003292412;
    }
  }
  else
  {
    IsValid = v3();
  }
  if ( IsValid < 0 )
    return 0;
  v10 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 144LL))(*((_QWORD *)this + 1));
  if ( *(bool (__fastcall **)(CDeviceTextureTarget *))(*(_QWORD *)v10 + 176LL) == CDeviceTextureTarget::IsBlackedOutForReadback )
    v11 = v10[51];
  else
    v11 = (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v10 + 176LL))(v10);
  if ( !v11 )
    return 1;
  v13 = 0LL;
  if ( g_pComposition )
    v13 = *((_QWORD *)g_pComposition + 111);
  return (unsigned __int64)(v13 - *((_QWORD *)this + 6)) < 5;
}
