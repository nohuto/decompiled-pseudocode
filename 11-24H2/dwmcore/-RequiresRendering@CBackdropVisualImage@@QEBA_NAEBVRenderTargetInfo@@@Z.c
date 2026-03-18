/*
 * XREFs of ?RequiresRendering@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x18000B380
 * Callers:
 *     ?ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1800097B8 (-ValidateBVIEffectInputForRender@CDrawingContext@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F.c)
 *     ?HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z @ 0x18000AC78 (-HasValidRenderingRealization@CBackdropVisualImage@@QEBA_NAEBVRenderTargetInfo@@@Z.c)
 * Callees:
 *     ??$?9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@0@$$T@Z @ 0x18004E2E4 (--$-9UIDXGISwapChainDWM1@@Uerr_returncode_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@UIDXGISwapChainD.c)
 *     ?IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ @ 0x180109FF0 (-IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ.c)
 *     ?GetAdapterLuid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBA?AU_LUID@@XZ @ 0x18010B3D0 (-GetAdapterLuid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBA-AU_LUID@@XZ.c)
 *     ?GetDevice@CD2DContext@@QEBAPEAVCD3DDevice@@XZ @ 0x18010BDC0 (-GetDevice@CD2DContext@@QEBAPEAVCD3DDevice@@XZ.c)
 *     ?IsValid@CD3DDevice@@QEBAJXZ @ 0x18010BDE0 (-IsValid@CD3DDevice@@QEBAJXZ.c)
 *     ?IsValid@CD2DBitmap@@UEBAJXZ @ 0x18010BE30 (-IsValid@CD2DBitmap@@UEBAJXZ.c)
 *     ?IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ @ 0x1802CDC00 (-IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ.c)
 *     ?IsValid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EBAJXZ @ 0x1802CDC50 (-IsValid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WPA@EBAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CBackdropVisualImage::RequiresRendering(CBackdropVisualImage *this, const struct RenderTargetInfo *a2)
{
  float v3; // xmm3_4
  float v4; // xmm2_4
  float v5; // xmm0_4
  __int64 *v6; // rbp
  __int64 *v7; // rsi
  char v8; // r15
  __int64 v9; // r14
  void (__fastcall *v10)(__int64, _DWORD *); // rax
  bool IsHardwareProtected; // dl
  __int64 v12; // rax
  __int64 v13; // rdx
  bool (__fastcall *v14)(CDeviceTextureTarget *__hidden); // rdx
  char v15; // al
  __int64 v16; // rbx
  CD2DBitmap *v17; // rcx
  __int64 (__fastcall *v18)(CRenderTargetBitmap *__hidden); // rax
  CD2DBitmap **v19; // rdi
  CD2DBitmap *v20; // rdi
  int IsValid; // eax
  struct CD3DDevice *(__fastcall *v22)(CD2DResource *__hidden); // rax
  CD3DDevice *Device; // rax
  _BYTE *v24; // rax
  __int64 v27; // rax
  char IsProtected; // al
  _DWORD v29[2]; // [rsp+20h] [rbp-58h] BYREF
  int v30; // [rsp+28h] [rbp-50h]
  int v31; // [rsp+2Ch] [rbp-4Ch]
  float v32; // [rsp+30h] [rbp-48h]
  bool v33; // [rsp+34h] [rbp-44h]
  __int16 v34; // [rsp+35h] [rbp-43h]
  char v35; // [rsp+37h] [rbp-41h]

  if ( !*((_QWORD *)this + 17) )
    return 0;
  if ( (float)(*((float *)this + 26) - *((float *)this + 24)) < 1.0 )
    return 0;
  if ( (float)(*((float *)this + 27) - *((float *)this + 25)) < 1.0 )
    return 0;
  v3 = *((float *)this + 532);
  v4 = *((float *)this + 534);
  if ( v4 < v3 )
    return 0;
  v5 = *((float *)this + 535);
  if ( v5 < *((float *)this + 533)
    || (float)(v4 - v3) < 1.0
    || (float)(v5 - *((float *)this + 533)) < 1.0
    || *((float *)this + 30) <= 0.5
    || *((float *)this + 31) <= 0.5 )
  {
    return 0;
  }
  v6 = (__int64 *)*((_QWORD *)this + 24);
  v7 = (__int64 *)*((_QWORD *)this + 23);
  v8 = *((_BYTE *)g_pComposition + 6466);
  while ( v7 != v6 )
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*v7 + 8) + 144LL))(*(_QWORD *)(*v7 + 8)) + 16;
    v10 = *(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v9 + 120LL);
    if ( (char *)v10 == (char *)&CDeviceTextureTarget::GetRenderTargetInfo )
    {
      IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetAdapterLuid(v9 - 256, v29);
      v30 = *(_DWORD *)(v9 - 28);
      v31 = *(_DWORD *)(v9 + 24);
      v32 = *(float *)(v9 + 28);
      IsHardwareProtected = CDeviceTextureTarget::IsHardwareProtected((CDeviceTextureTarget *)(v9 - 256));
      v33 = IsHardwareProtected;
      v34 = 0;
      v35 = 0;
    }
    else
    {
      v10(v9, v29);
      IsHardwareProtected = v33;
    }
    if ( v29[0] == *(_DWORD *)a2
      && v29[1] == *((_DWORD *)a2 + 1)
      && (v30 == -1 || v30 == *((_DWORD *)a2 + 2) || *((_DWORD *)a2 + 2) == -3)
      && (v32 != 0.0) == (*((float *)a2 + 4) != 0.0)
      && (!IsHardwareProtected || *((_BYTE *)a2 + 20)) )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*v7 + 8) + 144LL))(*(_QWORD *)(*v7 + 8));
      v13 = *(_QWORD *)v12;
      if ( v8 )
      {
        if ( *(__int64 (__fastcall **)(_QWORD))(v13 + 160) == CDeviceTextureTarget::IsProtected )
          IsProtected = CDeviceTextureTarget::IsProtected(v12);
        else
          IsProtected = (*(__int64 (__fastcall **)(__int64))(v13 + 160))(v12);
        if ( !IsProtected )
        {
LABEL_23:
          v16 = *v7;
          if ( !*v7 )
            return 1;
          v17 = *(CD2DBitmap **)(v16 + 8);
          v18 = *(__int64 (__fastcall **)(CRenderTargetBitmap *__hidden))(*(_QWORD *)v17 + 24LL);
          if ( v18 != CRenderTargetBitmap::IsValid )
            goto LABEL_57;
          v19 = (CD2DBitmap **)((char *)v17 + 40);
          if ( (unsigned __int8)wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>((char *)v17 + 40, 0LL) )
          {
            v20 = *v19;
            v18 = *(__int64 (__fastcall **)(CRenderTargetBitmap *__hidden))(*(_QWORD *)v20 + 24LL);
            if ( v18 == CD2DBitmap::IsValid )
            {
              if ( (unsigned __int8)wil::operator!=<IDXGISwapChainDWM1,wil::err_returncode_policy>(
                                      (char *)v20 + 104,
                                      0LL) )
              {
                v22 = *(struct CD3DDevice *(__fastcall **)(CD2DResource *__hidden))(*(_QWORD *)v20 + 40LL);
                if ( v22 == CD2DResource::GetDevice )
                  Device = CD2DContext::GetDevice(*(CD2DContext **)(*((_QWORD *)v20 + 5) + 24LL));
                else
                  Device = v22(v20);
                IsValid = CD3DDevice::IsValid(Device);
              }
              else
              {
                IsValid = -2003292404;
              }
              goto LABEL_33;
            }
            if ( (char *)v18 == (char *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid )
            {
              IsValid = IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid(v20);
              goto LABEL_33;
            }
            v17 = v20;
            if ( (char *)v18 == (char *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid )
            {
              IsValid = CD2DBitmap::IsValid(v20);
              goto LABEL_33;
            }
LABEL_57:
            IsValid = v18(v17);
          }
          else
          {
            IsValid = -2003292412;
          }
LABEL_33:
          if ( IsValid >= 0 )
          {
            v24 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v16 + 8) + 144LL))(*(_QWORD *)(v16 + 8));
            if ( !(*(bool (__fastcall **)(CDeviceTextureTarget *__hidden))(*(_QWORD *)v24 + 176LL) == CDeviceTextureTarget::IsBlackedOutForReadback
                 ? v24[51]
                 : (*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)v24 + 176LL))(v24)) )
              goto LABEL_65;
            v27 = 0LL;
            if ( g_pComposition )
              v27 = *((_QWORD *)g_pComposition + 111);
            if ( (unsigned __int64)(v27 - *(_QWORD *)(v16 + 48)) < 5 )
            {
LABEL_65:
              if ( !*(_BYTE *)(v16 + 56) )
                return 0;
            }
          }
          return 1;
        }
      }
      else
      {
        v14 = *(bool (__fastcall **)(CDeviceTextureTarget *__hidden))(v13 + 176);
        if ( v14 == CDeviceTextureTarget::IsBlackedOutForReadback )
          v15 = *(_BYTE *)(v12 + 51);
        else
          v15 = v14((CDeviceTextureTarget *)v12);
        if ( !v15 )
          goto LABEL_23;
      }
    }
    ++v7;
  }
  return 1;
}
