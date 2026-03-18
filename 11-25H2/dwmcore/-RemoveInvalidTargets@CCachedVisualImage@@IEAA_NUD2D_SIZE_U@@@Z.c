/*
 * XREFs of ?RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z @ 0x1801BDB20
 * Callers:
 *     ?EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1801470F0 (-EnsureRenderTargetBitmap@CCachedVisualImage@@IEAAJAEBVRenderTargetInfo@@PEAPEAVIRenderTargetBit.c)
 *     ?Snapshot@CCachedVisualImage@@IEAAJXZ @ 0x1801BD88C (-Snapshot@CCachedVisualImage@@IEAAJXZ.c)
 * Callees:
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x18001E0A0 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ?GetDevice@CD2DContext@@QEBAPEAVCD3DDevice@@XZ @ 0x180147A00 (-GetDevice@CD2DContext@@QEBAPEAVCD3DDevice@@XZ.c)
 *     ?IsValid@CD3DDevice@@QEBAJXZ @ 0x180147A20 (-IsValid@CD3DDevice@@QEBAJXZ.c)
 *     ??1?$unique_ptr@VCCachedTarget@CCachedVisualImage@@U?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@@std@@QEAA@XZ @ 0x180147A38 (--1-$unique_ptr@VCCachedTarget@CCachedVisualImage@@U-$default_delete@VCCachedTarget@CCachedVisua.c)
 *     ?IsValid@CD2DBitmap@@UEBAJXZ @ 0x180147A70 (-IsValid@CD2DBitmap@@UEBAJXZ.c)
 *     ??R?$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@QEBAXPEAVCCachedTarget@CCachedVisualImage@@@Z @ 0x1802077BC (--R-$default_delete@VCCachedTarget@CCachedVisualImage@@@std@@QEBAXPEAVCCachedTarget@CCachedVisua.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D6D30 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?IsValid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EBAJXZ @ 0x1802D6EC0 (-IsValid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EBAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCachedVisualImage::RemoveInvalidTargets(CCachedVisualImage *this, struct D2D_SIZE_U a2)
{
  char *v2; // rbx
  UINT32 width; // edi
  UINT32 height; // r12d
  unsigned __int8 v6; // r14
  __int64 *v7; // r15
  __int64 v8; // rbp
  CD2DBitmap **v9; // rcx
  __int64 (__fastcall *v10)(CRenderTargetBitmap *); // rax
  CD2DBitmap **v11; // rsi
  CGlobalComposition *v12; // rcx
  CD2DBitmap *v13; // rsi
  __int64 (__fastcall *v14)(CD2DBitmap *); // rax
  int IsValid; // eax
  struct CD3DDevice *(__fastcall *v16)(CD2DResource *); // rax
  CD3DDevice *Device; // rax
  _BYTE *v18; // rax
  __int64 v20; // rcx
  struct D2D_SIZE_U (__fastcall *v21)(CRenderTargetBitmap *, __int64 *); // rax
  __int64 *v22; // rsi
  __int64 v24; // rax
  __int64 *v25; // rbp
  __int64 *v26; // rsi
  signed __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // [rsp+60h] [rbp+8h] BYREF
  struct D2D_SIZE_U v31; // [rsp+68h] [rbp+10h]

  v31 = a2;
  v2 = (char *)*((_QWORD *)this + 23);
  width = a2.width;
  height = a2.height;
  v6 = 0;
  v7 = (__int64 *)(v2 + 8);
  while ( v2 != *((char **)this + 24) )
  {
    v8 = *(_QWORD *)v2;
    v9 = *(CD2DBitmap ***)(*(_QWORD *)v2 + 8LL);
    v10 = (__int64 (__fastcall *)(CRenderTargetBitmap *))*((_QWORD *)*v9 + 3);
    if ( v10 == CRenderTargetBitmap::IsValid )
    {
      v11 = v9 + 5;
      if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(v9 + 5) )
      {
        v13 = *v11;
        v14 = *(__int64 (__fastcall **)(CD2DBitmap *))(*(_QWORD *)v13 + 24LL);
        if ( v14 == CD2DBitmap::IsValid )
        {
          if ( wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>((_QWORD *)v13 + 13) )
          {
            v16 = *(struct CD3DDevice *(__fastcall **)(CD2DResource *))(*(_QWORD *)v13 + 40LL);
            if ( v16 == CD2DResource::GetDevice )
              Device = CD2DContext::GetDevice(*(CD2DContext **)(*((_QWORD *)v13 + 5) + 24LL));
            else
              Device = v16(v13);
            IsValid = CD3DDevice::IsValid(Device);
          }
          else
          {
            IsValid = -2003292404;
          }
        }
        else if ( (char *)v14 == (char *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid )
        {
          IsValid = IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid(v13);
        }
        else if ( (char *)v14 == (char *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid )
        {
          IsValid = CD2DBitmap::IsValid(v13);
        }
        else
        {
          IsValid = v14(v13);
        }
      }
      else
      {
        IsValid = -2003292412;
      }
    }
    else
    {
      IsValid = ((__int64 (__fastcall *)(CD2DBitmap **, __int64 (__fastcall *)(CRenderTargetBitmap *)))v10)(
                  v9,
                  CRenderTargetBitmap::IsValid);
    }
    if ( IsValid < 0 )
      goto LABEL_28;
    v18 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 8) + 144LL))(*(_QWORD *)(v8 + 8));
    if ( !(*(bool (__fastcall **)(CDeviceTextureTarget *))(*(_QWORD *)v18 + 176LL) == CDeviceTextureTarget::IsBlackedOutForReadback
         ? v18[51]
         : (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v18 + 176LL))(v18)) )
      goto LABEL_16;
    v12 = g_pComposition;
    v24 = 0LL;
    if ( g_pComposition )
      v24 = *((_QWORD *)g_pComposition + 111);
    if ( (unsigned __int64)(v24 - *(_QWORD *)(v8 + 48)) >= 5 )
    {
LABEL_28:
      v25 = (__int64 *)*((_QWORD *)this + 24);
      v26 = v7;
      if ( v7 != v25 )
      {
        v27 = v2 - (char *)v7;
        do
        {
          v28 = *v26;
          *v26 = 0LL;
          v29 = *(__int64 *)((char *)v26 + v27);
          *(__int64 *)((char *)v26 + v27) = v28;
          if ( v29 )
            std::default_delete<CCachedVisualImage::CCachedTarget>::operator()(v12);
          ++v26;
        }
        while ( v26 != v25 );
      }
      std::unique_ptr<CCachedVisualImage::CCachedTarget>::~unique_ptr<CCachedVisualImage::CCachedTarget>((CCachedVisualImage::CCachedTarget **)(*((_QWORD *)this + 24) - 8LL));
      *((_QWORD *)this + 24) -= 8LL;
      v6 = 1;
    }
    else
    {
LABEL_16:
      v20 = *(_QWORD *)(v8 + 8) + 8LL;
      v21 = *(struct D2D_SIZE_U (__fastcall **)(CRenderTargetBitmap *, __int64 *))(*(_QWORD *)v20 + 32LL);
      if ( v21 == CRenderTargetBitmap::GetSize )
      {
        v22 = (__int64 *)(*(_QWORD *)(v8 + 8) + 40LL);
        if ( !wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(v22) )
        {
          v30 = 0LL;
          goto LABEL_20;
        }
        v20 = *v22;
        v21 = *(struct D2D_SIZE_U (__fastcall **)(CRenderTargetBitmap *, __int64 *))(*(_QWORD *)*v22 + 88LL);
        if ( (char *)v21 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
        {
          IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v20, &v30);
          goto LABEL_20;
        }
      }
      v21((CRenderTargetBitmap *)v20, &v30);
LABEL_20:
      if ( v30 != __PAIR64__(height, width) )
        goto LABEL_28;
      v2 += 8;
      ++v7;
    }
  }
  return v6;
}
