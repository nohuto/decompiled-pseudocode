/*
 * XREFs of ?ApplyRenderTarget@CExternalLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800DAB4C
 * Callers:
 *     ?ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180080580 (-ApplyState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800DBF30 (-ApplyState@COffScreenRenderingLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180076980 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x1800D7AD0 (-PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z.c)
 *     ??$emplace_back@$$V@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800D90D0 (--$emplace_back@$$V@-$vector_facade@UClippingScopeState@CScopedClipStack@@V-$buffer_impl@UClippi.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DA620 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800DA640 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?GetSize@CRenderTargetBitmap@@UEBA?AUD2D_SIZE_U@@XZ @ 0x1800DBCF0 (-GetSize@CRenderTargetBitmap@@UEBA-AUD2D_SIZE_U@@XZ.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800DBD40 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800DC130 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionEnvironmentLight@@@Z @ 0x180103E3C (--4-$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVC.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?IsValid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBAJXZ @ 0x180146290 (-IsValid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBAJXZ.c)
 *     ?GetRenderTargetInfo@CDeviceTextureTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x180147060 (-GetRenderTargetInfo@CDeviceTextureTarget@@UEBA-AVRenderTargetInfo@@XZ.c)
 *     ?UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ @ 0x1801E4F64 (-UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ.c)
 *     ?GetDevice@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAPEAVCD3DDevice@@XZ @ 0x1802D6C50 (-GetDevice@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAPEAVCD3DDevic.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D6D50 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?IsValid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAJXZ @ 0x1802D6E90 (-IsValid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CExternalLayer::ApplyRenderTarget(CExternalLayer *this, struct CDrawingContext *a2)
{
  __int64 *v3; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  char *v7; // r12
  __int64 v8; // rbx
  __int64 v9; // r14
  unsigned int (__fastcall *v10)(CMILRefCountImpl *__hidden); // rax
  CMILRefCountImpl *v11; // rcx
  __int64 (__fastcall *v12)(__int64); // rax
  int IsValid; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // edi
  __int64 v18; // rdi
  CD3DDevice **v19; // r15
  __int64 (__fastcall *v20)(__int64); // rax
  __int64 Device; // rax
  CD3DDevice *v22; // rdi
  __int64 v23; // rcx
  __int64 (__fastcall *v24)(__int64, _BYTE *); // rax
  __int64 RenderTargetInfo; // rax
  struct IDeviceTarget *v26; // r8
  CD2DContext *v27; // rcx
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rax
  CRenderTargetBitmap *v32; // rcx
  struct D2D_SIZE_U (__fastcall *v33)(CRenderTargetBitmap *__hidden); // rax
  int v34; // eax
  CDrawingContext *v35; // rcx
  __int64 (__fastcall *v36)(CDrawingContext *__hidden, const struct _D3DCOLORVALUE *); // rax
  int v37; // eax
  int v38; // eax
  __int64 v39; // rax
  float v40; // xmm1_4
  int v42; // r9d
  __int64 v43; // rcx
  void (__fastcall *v44)(__int64, _BYTE *); // rax
  unsigned int v45; // [rsp+20h] [rbp-60h]
  _DWORD v46[2]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v47; // [rsp+38h] [rbp-48h] BYREF
  __int128 v48; // [rsp+48h] [rbp-38h] BYREF
  _BYTE v49[8]; // [rsp+58h] [rbp-28h] BYREF
  _BYTE v50[32]; // [rsp+60h] [rbp-20h] BYREF

  v3 = (__int64 *)*((_QWORD *)this + 1);
  v47 = 0LL;
  v5 = *v3;
  v48 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *))(v5 + 144))(v3);
  v7 = (char *)a2 + 32;
  v8 = *((_QWORD *)a2 + 4);
  v9 = (v6 + 16) & -(__int64)(v6 != 0);
  if ( v8 )
  {
    v10 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v8 + 8LL);
    v11 = (CMILRefCountImpl *)*((_QWORD *)a2 + 4);
    if ( v10 == CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(v11);
    else
      v10(v11);
  }
  v12 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL);
  if ( v12 == IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid )
  {
    IsValid = IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid(v9);
  }
  else if ( v12 == IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid )
  {
    IsValid = IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid(v9);
  }
  else
  {
    IsValid = v12(v9);
  }
  v17 = IsValid;
  if ( IsValid < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, IsValid, 0x6Cu, 0LL);
    v19 = (CD3DDevice **)((char *)a2 + 40);
LABEL_44:
    wil::com_ptr_t<CCompositionEnvironmentLight,wil::err_returncode_policy>::operator=((char *)a2 + 32, v8);
    if ( *(_QWORD *)v7 )
      CDrawingContext::UpdateRenderTargetInfo(a2);
    else
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(v19);
    goto LABEL_24;
  }
  *((_BYTE *)a2 + 8065) = 1;
  v18 = *(_QWORD *)v7;
  *(_QWORD *)v7 = v9;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  v19 = (CD3DDevice **)((char *)a2 + 40);
  if ( !*((_QWORD *)a2 + 5) )
  {
    v20 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL);
    if ( (char *)v20 == (char *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice )
      Device = IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice(v9, v14, v15, v16);
    else
      Device = v20(v9);
    v22 = *v19;
    *v19 = (CD3DDevice *)Device;
    if ( Device )
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(Device + 8));
    if ( v22 )
      CD3DDevice::Release(v22);
  }
  v23 = *(_QWORD *)v7;
  v24 = *(__int64 (__fastcall **)(__int64, _BYTE *))(**(_QWORD **)v7 + 120LL);
  if ( (char *)v24 == (char *)CDeviceTextureTarget::GetRenderTargetInfo )
    RenderTargetInfo = CDeviceTextureTarget::GetRenderTargetInfo(v23, v50);
  else
    RenderTargetInfo = v24(v23, v50);
  v26 = *(struct IDeviceTarget **)v7;
  v27 = (CD3DDevice *)((char *)*v19 + 16);
  *(_OWORD *)((char *)a2 + 56) = *(_OWORD *)RenderTargetInfo;
  *((_QWORD *)a2 + 9) = *(_QWORD *)(RenderTargetInfo + 16);
  v28 = CD2DContext::PushTarget(v27, (struct CDrawingContext *)((char *)a2 + 24), v26);
  v17 = v28;
  if ( v28 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, 0x85u, 0LL);
    goto LABEL_44;
  }
  *((_DWORD *)a2 + 1995) = 0;
  *((_BYTE *)a2 + 7984) = 0;
  v29 = *((_QWORD *)a2 + 94);
  if ( v29 != *((_QWORD *)a2 + 93) && !*(_QWORD *)(v29 - 184) )
  {
    v43 = *(_QWORD *)(v29 - 192);
    v44 = *(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v43 + 88LL);
    if ( (char *)v44 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
      IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v43, v49);
    else
      v44(v43, v49);
  }
  v30 = *(_QWORD *)v7;
  detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::emplace_back<>((__int64 *)a2 + 93);
  v31 = *((_QWORD *)a2 + 94);
  *(_QWORD *)(v31 - 192) = v30;
  v17 = 0;
  *(_BYTE *)(v31 - 8) = 0;
  *(_QWORD *)(v31 - 152) = 1065353216LL;
  *(_QWORD *)(v31 - 144) = 0LL;
  *(_DWORD *)(v31 - 136) = 0;
  *(_QWORD *)(v31 - 132) = 1065353216LL;
  *(_QWORD *)(v31 - 124) = 0LL;
  *(_DWORD *)(v31 - 116) = 0;
  *(_QWORD *)(v31 - 112) = 1065353216LL;
  *(_QWORD *)(v31 - 104) = 0LL;
  *(_DWORD *)(v31 - 96) = 0;
  *(_DWORD *)(v31 - 92) = 1065353216;
  *(_BYTE *)(v31 - 87) &= 0xE9u;
  *(_BYTE *)(v31 - 87) |= 0x29u;
  *(_BYTE *)(v31 - 88) = -86;
  *(_QWORD *)(v31 - 84) = 1065353216LL;
  *(_QWORD *)(v31 - 76) = 0LL;
  *(_DWORD *)(v31 - 68) = 0;
  *(_QWORD *)(v31 - 64) = 1065353216LL;
  *(_QWORD *)(v31 - 56) = 0LL;
  *(_DWORD *)(v31 - 48) = 0;
  *(_QWORD *)(v31 - 44) = 1065353216LL;
  *(_QWORD *)(v31 - 36) = 0LL;
  *(_DWORD *)(v31 - 28) = 0;
  *(_DWORD *)(v31 - 24) = 1065353216;
  *(_BYTE *)(v31 - 19) &= 0xE9u;
  *(_BYTE *)(v31 - 19) |= 0x29u;
  *(_BYTE *)(v31 - 20) = -86;
  *((_BYTE *)a2 + 8066) = 0;
LABEL_24:
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( (v17 & 0x80000000) != 0 )
  {
    v42 = v17;
    v45 = 100;
LABEL_40:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v42, v45, 0LL);
    return v17;
  }
  v32 = (CRenderTargetBitmap *)(*((_QWORD *)this + 1) + 8LL);
  *((_BYTE *)this + 33) = 1;
  v33 = *(struct D2D_SIZE_U (__fastcall **)(CRenderTargetBitmap *__hidden))(*(_QWORD *)v32 + 32LL);
  if ( v33 == CRenderTargetBitmap::GetSize )
    CRenderTargetBitmap::GetSize(v32);
  else
    ((void (__fastcall *)(CRenderTargetBitmap *, _DWORD *))v33)(v32, v46);
  *(_QWORD *)&v47 = 0LL;
  *((float *)&v47 + 2) = (float)v46[0];
  *((float *)&v47 + 3) = (float)v46[1];
  v34 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a2, 0, (unsigned int)&v47, 1, 1);
  v17 = v34;
  if ( v34 < 0 )
  {
    v45 = 119;
    goto LABEL_42;
  }
  v35 = (struct CDrawingContext *)((char *)a2 + 16);
  v36 = (__int64 (__fastcall *)(CDrawingContext *__hidden, const struct _D3DCOLORVALUE *))**((_QWORD **)a2 + 2);
  if ( v36 == CDrawingContext::Clear )
    v37 = CDrawingContext::Clear(v35, &`CVisual::SetBlurredWallpaperSurfaceRect'::`2'::sc_defaultValue);
  else
    v37 = v36(v35, &`CVisual::SetBlurredWallpaperSurfaceRect'::`2'::sc_defaultValue);
  v17 = v37;
  if ( v37 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v37, 0x7Au, 0LL);
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
    return v17;
  }
  v38 = *((_DWORD *)a2 + 780);
  if ( v38 )
    *((_DWORD *)a2 + 780) = v38 - 1;
  v39 = *((_QWORD *)a2 + 94);
  *(_QWORD *)&v48 = 0LL;
  --*(_QWORD *)(v39 - 184);
  *((_BYTE *)a2 + 8065) = 1;
  v40 = (float)*((int *)this + 7);
  *((float *)&v48 + 2) = (float)*((int *)this + 6);
  *((float *)&v48 + 3) = v40;
  v34 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a2, 0, (unsigned int)&v48, 1, 1);
  v17 = v34;
  if ( v34 < 0 )
  {
    v45 = 135;
LABEL_42:
    v42 = v34;
    goto LABEL_40;
  }
  *((_BYTE *)this + 34) = 1;
  return v17;
}
