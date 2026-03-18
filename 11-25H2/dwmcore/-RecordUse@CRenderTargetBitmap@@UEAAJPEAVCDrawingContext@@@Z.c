/*
 * XREFs of ?RecordUse@CRenderTargetBitmap@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801C1F00
 * Callers:
 *     ?RecordUse@CCachedImageProducer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800B22A0 (-RecordUse@CCachedImageProducer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RecordUse@CCachedVisualImage@@UEAAJPEAVCDrawingContext@@@Z @ 0x1801C1E00 (-RecordUse@CCachedVisualImage@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ @ 0x180145C30 (-IsHardwareProtected@CDeviceTextureTarget@@UEBA_NXZ.c)
 *     ?GetAdapterLuid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBA?AU_LUID@@XZ @ 0x180147010 (-GetAdapterLuid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBA-AU_LUID@@XZ.c)
 *     ?GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x180147C20 (-GetDeviceTexture@CRenderTargetBitmap@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?GetDisplayId@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA?AVDisplayId@@XZ @ 0x1802D6C90 (-GetDisplayId@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WKI@EBA-AVDisplayId.c)
 *     ?IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ @ 0x1802D6E70 (-IsProtected@CDeviceTextureTarget@@WJI@EBA_NXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderTargetBitmap::RecordUse(CRenderTargetBitmap *this, struct CDrawingContext *a2)
{
  const struct RenderTargetInfo *v4; // rax
  __int64 v5; // r8
  __int64 (__fastcall *v6)(CRenderTargetBitmap *, const struct RenderTargetInfo *, struct IDeviceTexture **); // r9
  int DeviceTexture; // eax
  unsigned int v8; // edi
  __int64 v9; // rcx
  void (__fastcall *v10)(__int64, int *); // rax
  __int64 v11; // rcx
  __int64 (*v12)(void); // rax
  char IsProtected; // al
  _BYTE *v14; // rcx
  __int64 (*v15)(void); // rax
  char v16; // al
  _BYTE *v17; // rcx
  __int64 (*v18)(void); // rax
  char v19; // al
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(__int64, __int64); // rax
  float *v22; // rax
  int v24; // ecx
  __int64 v25; // [rsp+20h] [rbp-28h] BYREF
  int v26; // [rsp+28h] [rbp-20h]
  int v27; // [rsp+2Ch] [rbp-1Ch]
  int v28; // [rsp+30h] [rbp-18h]
  bool IsHardwareProtected; // [rsp+34h] [rbp-14h]
  __int16 v30; // [rsp+35h] [rbp-13h]
  char v31; // [rsp+37h] [rbp-11h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v33; // [rsp+50h] [rbp+8h] BYREF
  struct IDeviceTexture *v34; // [rsp+58h] [rbp+10h] BYREF

  v4 = (const struct RenderTargetInfo *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)a2 + 3) + 16LL))((char *)a2 + 24);
  v5 = *(_QWORD *)this;
  v34 = 0LL;
  v6 = *(__int64 (__fastcall **)(CRenderTargetBitmap *, const struct RenderTargetInfo *, struct IDeviceTexture **))(v5 + 104);
  if ( v6 == CRenderTargetBitmap::GetDeviceTexture )
    DeviceTexture = CRenderTargetBitmap::GetDeviceTexture(this, v4, &v34);
  else
    DeviceTexture = v6(this, v4, &v34);
  v8 = DeviceTexture;
  if ( DeviceTexture < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x89,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\bitmaps\\rendertargetbitmap.cpp",
      (const char *)(unsigned int)DeviceTexture);
    if ( v34 )
      (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v34 + 16LL))(v34);
    return v8;
  }
  else
  {
    v9 = *((_QWORD *)this + 4);
    v10 = *(void (__fastcall **)(__int64, int *))(*(_QWORD *)v9 + 96LL);
    if ( (char *)v10 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDisplayId )
      IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDisplayId(v9, &v33);
    else
      v10(v9, &v33);
    if ( ((v33 + 3) & 0xFFFFFFFD) != 0 )
    {
      v24 = *((_DWORD *)a2 + 16);
      if ( v33 == -1 || v33 == v24 || v24 == -3 )
        *((_BYTE *)a2 + 7981) = 1;
      else
        *((_BYTE *)a2 + 7984) = 1;
    }
    v11 = *((_QWORD *)this + 4);
    v12 = *(__int64 (**)(void))(*(_QWORD *)v11 + 160LL);
    if ( (char *)v12 == (char *)CDeviceTextureTarget::IsProtected )
      IsProtected = CDeviceTextureTarget::IsProtected(v11);
    else
      IsProtected = v12();
    if ( IsProtected )
    {
      if ( *((_BYTE *)g_pComposition + 6490) )
        *((_BYTE *)a2 + 7983) = 1;
      else
        *((_BYTE *)a2 + 7980) = 1;
    }
    v14 = (_BYTE *)*((_QWORD *)this + 4);
    v15 = *(__int64 (**)(void))(*(_QWORD *)v14 + 176LL);
    if ( (char *)v15 == (char *)CDeviceTextureTarget::IsBlackedOutForReadback )
      v16 = v14[51];
    else
      v16 = v15();
    if ( v16 )
      *((_BYTE *)a2 + 7983) = 1;
    v17 = (_BYTE *)*((_QWORD *)this + 4);
    v18 = *(__int64 (**)(void))(*(_QWORD *)v17 + 192LL);
    if ( (char *)v18 == (char *)CDeviceTextureTarget::IsBlackedOutForMonitor )
      v19 = v17[52];
    else
      v19 = v18();
    if ( v19 )
      *((_BYTE *)a2 + 7984) = 1;
    v20 = *((_QWORD *)this + 4);
    v21 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(v20 + 16) + 120LL);
    if ( v21 == CDeviceTextureTarget::GetRenderTargetInfo )
    {
      IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetAdapterLuid((_QWORD *)(v20 - 240), &v25);
      v26 = *(_DWORD *)(v20 - 12);
      v27 = *(_DWORD *)(v20 + 40);
      v28 = *(_DWORD *)(v20 + 44);
      IsHardwareProtected = CDeviceTextureTarget::IsHardwareProtected((CDeviceTextureTarget *)(v20 - 240));
      v30 = 0;
      v31 = 0;
      v22 = (float *)&v25;
    }
    else
    {
      v22 = (float *)v21(v20 + 16, (__int64)&v25);
    }
    if ( v22[4] != 0.0 )
      *((_BYTE *)a2 + 7982) = 1;
    if ( v34 )
      (*(void (__fastcall **)(struct IDeviceTexture *))(*(_QWORD *)v34 + 16LL))(v34);
    return 0LL;
  }
}
