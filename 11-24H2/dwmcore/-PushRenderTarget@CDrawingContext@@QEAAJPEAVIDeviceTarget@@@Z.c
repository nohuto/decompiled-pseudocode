/*
 * XREFs of ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x180055E00
 * Callers:
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180099DE8 (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800D4530 (-RenderDirtyRegion@CLegacyRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?RenderDirtyRegion@CLegacyStereoRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1802844F0 (-RenderDirtyRegion@CLegacyStereoRenderTarget@@MEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?ProduceRealization@CStockBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CCachedImageProducer@@@Z @ 0x180284F00 (-ProduceRealization@CStockBitmapProducer@@UEBAJPEAVCDrawingContext@@PEAPEAVCCachedRealization@CC.c)
 * Callees:
 *     ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x180055080 (-PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z.c)
 *     ??$emplace_back@$$V@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180056680 (--$emplace_back@$$V@-$vector_facade@UClippingScopeState@CScopedClipStack@@V-$buffer_impl@UClippi.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180057BD0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionEnvironmentLight@@@Z @ 0x180063340 (--4-$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVC.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?IsValid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBAJXZ @ 0x18010A650 (-IsValid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBAJXZ.c)
 *     ?GetRenderTargetInfo@CDeviceTextureTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x18010B420 (-GetRenderTargetInfo@CDeviceTextureTarget@@UEBA-AVRenderTargetInfo@@XZ.c)
 *     ?UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ @ 0x1801D8F74 (-UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?GetDevice@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAPEAVCD3DDevice@@XZ @ 0x1802CD9E0 (-GetDevice@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAPEAVCD3DDevic.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802CDAE0 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?IsValid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAJXZ @ 0x1802CDC20 (-IsValid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::PushRenderTarget(CDrawingContext *this, struct IDeviceTarget *a2)
{
  CMILRefCountImpl *v2; // rbx
  unsigned int (__fastcall *v5)(CMILRefCountImpl *__hidden); // rax
  __int64 (__fastcall *v6)(struct IDeviceTarget *); // rax
  int IsValid; // eax
  int v8; // ebp
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  CD3DDevice **v13; // r15
  __int64 (__fastcall *v14)(struct IDeviceTarget *); // rax
  __int64 Device; // rax
  CD3DDevice *v16; // rdi
  __int64 v17; // rcx
  __int64 (__fastcall *v18)(__int64, _BYTE *); // rax
  __int64 RenderTargetInfo; // rax
  struct IDeviceTarget *v20; // r8
  CD2DContext *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  unsigned int v26; // eax
  __int64 v27; // rcx
  void (__fastcall *v28)(__int64, _BYTE *); // rax
  unsigned int v29; // [rsp+20h] [rbp-58h]
  _BYTE v30[8]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v31[24]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = (CMILRefCountImpl *)*((_QWORD *)this + 4);
  if ( v2 )
  {
    v5 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v2 + 8LL);
    if ( v5 == CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(v2);
    else
      v5(v2);
  }
  v6 = *(__int64 (__fastcall **)(struct IDeviceTarget *))(*(_QWORD *)a2 + 24LL);
  if ( (char *)v6 == (char *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid )
  {
    IsValid = IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid(a2);
  }
  else if ( (char *)v6 == (char *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid )
  {
    IsValid = IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid(a2);
  }
  else
  {
    IsValid = v6(a2);
  }
  v8 = IsValid;
  if ( IsValid < 0 )
  {
    v26 = 108;
    v13 = (CD3DDevice **)((char *)this + 40);
LABEL_27:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, v26, 0LL);
    wil::com_ptr_t<CCompositionEnvironmentLight,wil::err_returncode_policy>::operator=((char *)this + 32, v2);
    if ( *((_QWORD *)this + 4) )
      CDrawingContext::UpdateRenderTargetInfo(this);
    else
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(v13);
    goto LABEL_23;
  }
  *((_BYTE *)this + 8065) = 1;
  v9 = *((_QWORD *)this + 4);
  *((_QWORD *)this + 4) = a2;
  (*(void (__fastcall **)(struct IDeviceTarget *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v13 = (CD3DDevice **)((char *)this + 40);
  if ( !*((_QWORD *)this + 5) )
  {
    v14 = *(__int64 (__fastcall **)(struct IDeviceTarget *))(*(_QWORD *)a2 + 40LL);
    if ( (char *)v14 == (char *)IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice )
      Device = IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice(a2, v10, v11, v12);
    else
      Device = v14(a2);
    v16 = *v13;
    *v13 = (CD3DDevice *)Device;
    if ( Device && _InterlockedAdd((volatile signed __int32 *)(Device + 8), 1u) <= 0 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v29);
    if ( v16 )
      CD3DDevice::Release(v16);
  }
  v17 = *((_QWORD *)this + 4);
  v18 = *(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v17 + 120LL);
  if ( (char *)v18 == (char *)CDeviceTextureTarget::GetRenderTargetInfo )
    RenderTargetInfo = CDeviceTextureTarget::GetRenderTargetInfo(v17, v31);
  else
    RenderTargetInfo = v18(v17, v31);
  v20 = (struct IDeviceTarget *)*((_QWORD *)this + 4);
  v21 = (CD3DDevice *)((char *)*v13 + 16);
  *(_OWORD *)((char *)this + 56) = *(_OWORD *)RenderTargetInfo;
  *((_QWORD *)this + 9) = *(_QWORD *)(RenderTargetInfo + 16);
  v8 = CD2DContext::PushTarget(v21, (CDrawingContext *)((char *)this + 24), v20);
  if ( v8 < 0 )
  {
    v26 = 133;
    goto LABEL_27;
  }
  *((_DWORD *)this + 1995) = 0;
  *((_BYTE *)this + 7984) = 0;
  v22 = *((_QWORD *)this + 94);
  if ( v22 != *((_QWORD *)this + 93) && !*(_QWORD *)(v22 - 184) )
  {
    v27 = *(_QWORD *)(v22 - 192);
    v28 = *(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v27 + 88LL);
    if ( (char *)v28 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
      IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v27, v30);
    else
      v28(v27, v30);
  }
  v23 = *((_QWORD *)this + 4);
  detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::emplace_back<>((char *)this + 744);
  v24 = *((_QWORD *)this + 94);
  v8 = 0;
  *(_BYTE *)(v24 - 8) = 0;
  *(_QWORD *)(v24 - 192) = v23;
  *(_QWORD *)(v24 - 152) = 1065353216LL;
  *(_QWORD *)(v24 - 144) = 0LL;
  *(_DWORD *)(v24 - 136) = 0;
  *(_QWORD *)(v24 - 132) = 1065353216LL;
  *(_QWORD *)(v24 - 124) = 0LL;
  *(_DWORD *)(v24 - 116) = 0;
  *(_QWORD *)(v24 - 112) = 1065353216LL;
  *(_QWORD *)(v24 - 104) = 0LL;
  *(_DWORD *)(v24 - 96) = 0;
  *(_DWORD *)(v24 - 92) = 1065353216;
  *(_BYTE *)(v24 - 87) &= 0xE9u;
  *(_BYTE *)(v24 - 87) |= 0x29u;
  *(_BYTE *)(v24 - 88) = -86;
  *(_QWORD *)(v24 - 84) = 1065353216LL;
  *(_QWORD *)(v24 - 76) = 0LL;
  *(_DWORD *)(v24 - 68) = 0;
  *(_QWORD *)(v24 - 64) = 1065353216LL;
  *(_QWORD *)(v24 - 56) = 0LL;
  *(_DWORD *)(v24 - 48) = 0;
  *(_QWORD *)(v24 - 44) = 1065353216LL;
  *(_QWORD *)(v24 - 36) = 0LL;
  *(_DWORD *)(v24 - 28) = 0;
  *(_DWORD *)(v24 - 24) = 1065353216;
  *(_BYTE *)(v24 - 19) &= 0xE9u;
  *(_BYTE *)(v24 - 19) |= 0x29u;
  *(_BYTE *)(v24 - 20) = -86;
  *((_BYTE *)this + 8066) = 0;
LABEL_23:
  if ( v2 )
    (*(void (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v2 + 16LL))(v2);
  return (unsigned int)v8;
}
