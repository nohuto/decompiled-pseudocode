/*
 * XREFs of ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x1800CF2C0
 * Callers:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18000B988 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180057F90 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1800615F8 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180097480 (-RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180098EA4 (-Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180099330 (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z @ 0x1800F6B18 (-BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z.c)
 *     ?EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801C7C60 (-EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180280800 (-Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCMILMatrix@@PEAW4ProtectionMode@1@@Z @ 0x180281850 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCMILMat.c)
 *     _lambda_0e17c6475725e05fea3019b9a50aca17_::operator() @ 0x180281FA0 (_lambda_0e17c6475725e05fea3019b9a50aca17_--operator().c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x1802B1BBC (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@VShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x1802D0A38 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 * Callees:
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18001D7A0 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x180055080 (-PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z.c)
 *     ??$emplace_back@$$V@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180056680 (--$emplace_back@$$V@-$vector_facade@UClippingScopeState@CScopedClipStack@@V-$buffer_impl@UClippi.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180057BD0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180059500 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??4?$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionEnvironmentLight@@@Z @ 0x180063340 (--4-$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVC.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x1800D07A0 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?GetTargetId@CLegacyRenderTarget@@UEBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x1800EDE70 (-GetTargetId@CLegacyRenderTarget@@UEBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 *     ?Grow@?$CWatermarkStack@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x1800FBD40 (-Grow@-$CWatermarkStack@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F_ea_1800FBD40.c)
 *     ?IsValid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBAJXZ @ 0x18010A650 (-IsValid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBAJXZ.c)
 *     ?GetRenderTargetInfo@CDeviceTextureTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x18010B420 (-GetRenderTargetInfo@CDeviceTextureTarget@@UEBA-AVRenderTargetInfo@@XZ.c)
 *     ?UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ @ 0x1801D8F74 (-UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ.c)
 *     ?CreateNullProcessAttribution@CProcessAttributionManager@@AEAAPEAVCProcessAttribution@@XZ @ 0x1801DB6F4 (-CreateNullProcessAttribution@CProcessAttributionManager@@AEAAPEAVCProcessAttribution@@XZ.c)
 *     McTemplateU0ppffffubr6_EventWriteTransfer @ 0x1801F90B4 (McTemplateU0ppffffubr6_EventWriteTransfer.c)
 *     ?NotifyBeginFrame@CRenderPerf@@QEAAXW4Type@IRenderTarget@@@Z @ 0x18022E7BC (-NotifyBeginFrame@CRenderPerf@@QEAAXW4Type@IRenderTarget@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024634C (ModuleFailFastForHRESULT.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     _Init_thread_footer @ 0x180251190 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802511F8 (_Init_thread_header.c)
 *     ?GetTargetId@CDDisplayRenderTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x180277090 (-GetTargetId@CDDisplayRenderTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 *     ?GetTargetId@CLegacyRenderTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x1802770E0 (-GetTargetId@CLegacyRenderTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 *     ?GetDevice@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAPEAVCD3DDevice@@XZ @ 0x1802CD9E0 (-GetDevice@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAPEAVCD3DDevic.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802CDAE0 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?IsValid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAJXZ @ 0x1802CDC20 (-IsValid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAJXZ.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::BeginFrame(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4,
        unsigned int a5,
        _QWORD *a6)
{
  __int64 (__fastcall *v10)(__int64, __int128 *); // rax
  __int64 RenderTargetInfo; // rax
  CMILRefCountImpl *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 (__fastcall *v15)(_QWORD, _QWORD, _QWORD, _QWORD); // rdx
  __int64 Device; // rax
  CD3DDevice *v17; // rbx
  _OWORD *v18; // rcx
  char v19; // al
  CLegacyRenderTarget *v20; // rcx
  const struct tagCOMPOSITION_TARGET_ID *(__fastcall *v21)(CLegacyRenderTarget *__hidden); // rax
  const struct tagCOMPOSITION_TARGET_ID *TargetId; // rax
  char v23; // al
  __int64 v24; // rcx
  __int64 v25; // rax
  void **v26; // rbx
  unsigned int v27; // edi
  unsigned int v28; // r15d
  unsigned int v29; // eax
  void *v30; // rcx
  __int64 v31; // rcx
  void *v32; // rcx
  _DWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // r15
  __int64 *v36; // rbx
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rcx
  __int128 v40; // xmm0
  unsigned int v41; // eax
  __int64 v42; // rsi
  unsigned int v43; // eax
  unsigned int v44; // edx
  unsigned int (__fastcall *v46)(CMILRefCountImpl *__hidden); // rax
  __int64 (__fastcall *v47)(__int64); // rax
  int IsValid; // eax
  __int64 v49; // r8
  __int64 v50; // r9
  __int64 (__fastcall *v51)(_QWORD, _QWORD, _QWORD, _QWORD); // rdx
  __int64 v52; // rax
  CD3DDevice *v53; // rdx
  __int64 v54; // rcx
  __int64 (__fastcall *v55)(__int64, _BYTE *); // rax
  __int64 v56; // rax
  struct IDeviceTarget *v57; // r8
  CD2DContext *v58; // rcx
  int v59; // eax
  __int64 v60; // rax
  __int64 v61; // rdi
  __int64 v62; // rax
  unsigned int v63; // ebx
  __int64 v64; // rdx
  __int64 v65; // rcx
  unsigned int v66; // edi
  void *v67; // rax
  void *v68; // r15
  int v69; // eax
  int v70; // edi
  int v71; // eax
  int v72; // r12d
  bool v73; // bl
  __int64 (__fastcall *v74)(__int64, _BYTE *); // rax
  __int64 Size; // rax
  float v76; // xmm6_4
  _DWORD *v77; // rax
  int v78; // edx
  __int64 v79; // rcx
  void (__fastcall *v80)(__int64, _BYTE *); // rax
  CProcessAttributionManager *v81; // rcx
  char v82; // al
  int v83; // [rsp+20h] [rbp-99h]
  float v84; // [rsp+30h] [rbp-89h]
  __int128 v85; // [rsp+50h] [rbp-69h] BYREF
  __int64 v86; // [rsp+60h] [rbp-59h]
  unsigned int v87[2]; // [rsp+70h] [rbp-49h]
  __int128 v88; // [rsp+78h] [rbp-41h] BYREF
  _BYTE v89[8]; // [rsp+90h] [rbp-29h] BYREF
  _BYTE v90[8]; // [rsp+98h] [rbp-21h] BYREF
  _BYTE v91[8]; // [rsp+A0h] [rbp-19h] BYREF
  _BYTE v92[24]; // [rsp+A8h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+4Fh]

  *(_DWORD *)(a1 + 7980) = 0;
  *(_BYTE *)(a1 + 7984) = 0;
  *(_OWORD *)(a1 + 7936) = 0LL;
  *(_OWORD *)(a1 + 7952) = 0LL;
  *(_QWORD *)(a1 + 7968) = 0LL;
  v10 = *(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a2 + 120LL);
  if ( (char *)v10 == (char *)CDeviceTextureTarget::GetRenderTargetInfo )
    RenderTargetInfo = CDeviceTextureTarget::GetRenderTargetInfo(a2, &v88);
  else
    RenderTargetInfo = v10(a2, &v88);
  v12 = *(CMILRefCountImpl **)(a1 + 32);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)RenderTargetInfo;
  *(_QWORD *)v87 = 192LL;
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(RenderTargetInfo + 16);
  if ( *(_QWORD *)(a1 + 208) )
  {
    *(_QWORD *)(a1 + 32) = a2;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    if ( v12 )
      (*(void (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v12 + 16LL))(v12);
    v15 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a2 + 40LL);
    if ( v15 == IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice )
      Device = IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice(a2, v15, v13, v14);
    else
      Device = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
    v17 = *(CD3DDevice **)(a1 + 40);
    *(_QWORD *)(a1 + 40) = Device;
    if ( Device && _InterlockedAdd((volatile signed __int32 *)(Device + 8), 1u) <= 0 )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v83);
    if ( v17 )
      CD3DDevice::Release(v17);
    goto LABEL_13;
  }
  if ( v12 )
  {
    v46 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v12 + 8LL);
    if ( v46 == CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(v12);
    else
      v46(v12);
  }
  v47 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL);
  if ( v47 == IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid )
  {
    IsValid = IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid(a2);
  }
  else if ( v47 == IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid )
  {
    IsValid = IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::IsValid(a2);
  }
  else
  {
    IsValid = v47(a2);
  }
  v27 = IsValid;
  if ( IsValid < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, IsValid, 0x6Cu, 0LL);
LABEL_90:
    wil::com_ptr_t<CCompositionEnvironmentLight,wil::err_returncode_policy>::operator=(
      (__int64 *)(a1 + 32),
      (__int64)v12);
    if ( *(_QWORD *)(a1 + 32) )
      CDrawingContext::UpdateRenderTargetInfo((CDrawingContext *)a1);
    else
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset((volatile signed __int32 **)(a1 + 40));
    goto LABEL_64;
  }
  *(_BYTE *)(a1 + 8065) = 1;
  *(_QWORD *)&v85 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = a2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( (_QWORD)v85 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v85 + 16LL))(v85);
  if ( !*(_QWORD *)(a1 + 40) )
  {
    v51 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a2 + 40LL);
    if ( v51 == IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice )
      v52 = IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice(a2, v51, v49, v50);
    else
      v52 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
    v53 = *(CD3DDevice **)(a1 + 40);
    *(_QWORD *)&v85 = v53;
    *(_QWORD *)(a1 + 40) = v52;
    if ( v52 && _InterlockedAdd((volatile signed __int32 *)(v52 + 8), 1u) <= 0 )
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v83);
      v53 = (CD3DDevice *)v85;
    }
    if ( v53 )
      CD3DDevice::Release(v53);
  }
  v54 = *(_QWORD *)(a1 + 32);
  v55 = *(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v54 + 120LL);
  if ( (char *)v55 == (char *)CDeviceTextureTarget::GetRenderTargetInfo )
    v56 = CDeviceTextureTarget::GetRenderTargetInfo(v54, v92);
  else
    v56 = v55(v54, v92);
  v57 = *(struct IDeviceTarget **)(a1 + 32);
  v58 = (CD2DContext *)(*(_QWORD *)(a1 + 40) + 16LL);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)v56;
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(v56 + 16);
  v59 = CD2DContext::PushTarget(v58, (struct ID2DContextOwner *)(a1 + 24), v57);
  v27 = v59;
  if ( v59 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v59, 0x85u, 0LL);
    goto LABEL_90;
  }
  *(_DWORD *)(a1 + 7980) = 0;
  *(_BYTE *)(a1 + 7984) = 0;
  v60 = *(_QWORD *)(a1 + 752);
  if ( v60 != *(_QWORD *)(a1 + 744) && !*(_QWORD *)(v60 - 184) )
  {
    v79 = *(_QWORD *)(v60 - 192);
    v80 = *(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v79 + 88LL);
    if ( (char *)v80 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
      IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v79, v89);
    else
      v80(v79, v89);
  }
  v61 = *(_QWORD *)(a1 + 32);
  detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::emplace_back<>((_QWORD *)(a1 + 744));
  v62 = *(_QWORD *)(a1 + 752) - 192LL;
  *(_BYTE *)(v62 + 184) = 0;
  *(_QWORD *)v62 = v61;
  v27 = 0;
  *(_QWORD *)(v62 + 40) = 1065353216LL;
  *(_QWORD *)(v62 + 48) = 0LL;
  *(_DWORD *)(v62 + 56) = 0;
  *(_QWORD *)(v62 + 60) = 1065353216LL;
  *(_QWORD *)(v62 + 68) = 0LL;
  *(_DWORD *)(v62 + 76) = 0;
  *(_QWORD *)(v62 + 80) = 1065353216LL;
  *(_QWORD *)(v62 + 88) = 0LL;
  *(_DWORD *)(v62 + 96) = 0;
  *(_DWORD *)(v62 + 100) = 1065353216;
  *(_BYTE *)(v62 + 105) &= 0xE9u;
  *(_BYTE *)(v62 + 105) |= 0x29u;
  *(_BYTE *)(v62 + 104) = -86;
  *(_QWORD *)(v62 + 108) = 1065353216LL;
  *(_QWORD *)(v62 + 116) = 0LL;
  *(_DWORD *)(v62 + 124) = 0;
  *(_QWORD *)(v62 + 128) = 1065353216LL;
  *(_QWORD *)(v62 + 136) = 0LL;
  *(_DWORD *)(v62 + 144) = 0;
  *(_QWORD *)(v62 + 148) = 1065353216LL;
  *(_QWORD *)(v62 + 156) = 0LL;
  *(_DWORD *)(v62 + 164) = 0;
  *(_DWORD *)(v62 + 168) = 1065353216;
  *(_BYTE *)(v62 + 173) &= 0xE9u;
  *(_BYTE *)(v62 + 173) |= 0x29u;
  *(_BYTE *)(v62 + 172) = -86;
  *(_BYTE *)(a1 + 8066) = 0;
LABEL_64:
  if ( v12 )
    (*(void (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v12 + 16LL))(v12);
  if ( (v27 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0xF6u, 0LL);
    return v27;
  }
LABEL_13:
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
  {
    v73 = a3 && !(unsigned __int8)CMILMatrix::IsIdentity<0>(a3);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
    {
      v74 = *(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 88LL);
      if ( (char *)v74 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
        Size = IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(a2, v90);
      else
        Size = v74(a2, v90);
      v76 = (float)*(int *)(Size + 4);
      v77 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 88LL))(a2, v91);
      v84 = (float)(int)*v77;
      McTemplateU0ppffffubr6_EventWriteTransfer(*v77, v78, a1, a2, 0, 0, SLOBYTE(v84), SLOBYTE(v76), v73 ? 0x44 : 0, a3);
    }
  }
  v18 = (_OWORD *)(a1 + 96);
  if ( a3 )
  {
    *v18 = *(_OWORD *)a3;
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(a3 + 16);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(a3 + 32);
    *(_OWORD *)(a1 + 144) = *(_OWORD *)(a3 + 48);
    *(_DWORD *)(a1 + 160) = *(_DWORD *)(a3 + 64);
    v19 = CMILMatrix::IsIdentity<0>(v18);
  }
  else
  {
    *(_DWORD *)(a1 + 160) = 0;
    *(_DWORD *)v18 = 1065353216;
    *(_QWORD *)(a1 + 100) = 0LL;
    *(_QWORD *)(a1 + 108) = 0LL;
    *(_QWORD *)(a1 + 116) = 1065353216LL;
    *(_QWORD *)(a1 + 124) = 0LL;
    *(_DWORD *)(a1 + 132) = 0;
    *(_QWORD *)(a1 + 136) = 1065353216LL;
    *(_QWORD *)(a1 + 144) = 0LL;
    *(_DWORD *)(a1 + 152) = 0;
    *(_DWORD *)(a1 + 156) = 1065353216;
    v82 = *(_BYTE *)(a1 + 161);
    *(_BYTE *)(a1 + 160) = -86;
    *(_BYTE *)(a1 + 161) = v82 & 0xC0 | 0x29;
    v19 = 1;
  }
  *(_BYTE *)(a1 + 8064) = v19;
  if ( a4 )
  {
    *(_OWORD *)(a1 + 80) = *a4;
  }
  else
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    *(_QWORD *)(a1 + 88) = 0LL;
  }
  *(_QWORD *)(a1 + 48) = a6;
  if ( a6 )
  {
    v20 = (CLegacyRenderTarget *)(*a6 + 8LL);
    v21 = *(const struct tagCOMPOSITION_TARGET_ID *(__fastcall **)(CLegacyRenderTarget *__hidden))(*(_QWORD *)v20 + 32LL);
    if ( (char *)v21 == (char *)CLegacyRenderTarget::GetTargetId )
    {
      TargetId = (const struct tagCOMPOSITION_TARGET_ID *)CLegacyRenderTarget::GetTargetId(v20);
    }
    else if ( (char *)v21 == (char *)CDDisplayRenderTarget::GetTargetId )
    {
      TargetId = (const struct tagCOMPOSITION_TARGET_ID *)CDDisplayRenderTarget::GetTargetId(v20);
    }
    else if ( v21 == CLegacyRenderTarget::GetTargetId )
    {
      TargetId = CLegacyRenderTarget::GetTargetId(v20);
    }
    else
    {
      TargetId = v21(v20);
    }
    *(_OWORD *)(a1 + 164) = *(_OWORD *)TargetId;
    *(_QWORD *)(a1 + 180) = *((_QWORD *)TargetId + 2);
    *(_DWORD *)(a1 + 188) = *((_DWORD *)TargetId + 6);
    v23 = 1;
  }
  else
  {
    v23 = 0;
    *(_OWORD *)(a1 + 164) = 0LL;
    v86 = 0LL;
    *(_QWORD *)(a1 + 180) = 0LL;
    *(_DWORD *)(a1 + 188) = 0;
  }
  *(_BYTE *)(a1 + 192) = v23;
  *(_DWORD *)(a1 + 240) = 1;
  *(_QWORD *)(a1 + 244) = 1LL;
  *(_QWORD *)(a1 + 252) = 0LL;
  v24 = *(unsigned int *)(a1 + 3288);
  v25 = *(unsigned int *)(a1 + 3292);
  *(_QWORD *)&v85 = 0LL;
  BYTE8(v85) = 1;
  if ( (_DWORD)v24 == (_DWORD)v25 )
  {
    v63 = 2 * v25;
    if ( (unsigned __int64)(2 * v25) <= 0xFFFFFFFF )
    {
      if ( v63 <= 0x40 )
        v63 = 64;
      v66 = 16 * v24;
      if ( (unsigned __int64)(16 * v24) <= 0xFFFFFFFF )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / v63 <= 0x10 )
        {
          v27 = -2147024809;
        }
        else
        {
          v67 = MIDL_user_allocate(16LL * v63);
          v68 = v67;
          if ( v67 )
          {
            memcpy_0(v67, *(const void **)(a1 + 3280), v66);
            operator delete(*(void **)(a1 + 3280));
            *(_QWORD *)(a1 + 3280) = v68;
            *(_DWORD *)(a1 + 3292) = v63;
            goto LABEL_23;
          }
          v27 = -2147024882;
        }
        v64 = 104LL;
LABEL_71:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v64,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v27);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v27);
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0x13Au, 0LL);
        return v27;
      }
      v64 = 101LL;
    }
    else
    {
      v64 = 98LL;
    }
    v27 = -2147024362;
    goto LABEL_71;
  }
LABEL_23:
  v26 = (void **)(a1 + 432);
  v27 = 0;
  v28 = 0;
  *(_OWORD *)(*(_QWORD *)(a1 + 3280) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 3288))++) = v85;
  v29 = *(_DWORD *)(a1 + 3300);
  if ( v29 <= *(_DWORD *)(a1 + 3288) )
    v29 = *(_DWORD *)(a1 + 3288);
  *(_DWORD *)(a1 + 3300) = v29;
  if ( *(_DWORD *)(a1 + 456) )
  {
    do
    {
      v65 = *((_QWORD *)*v26 + 2 * v28);
      if ( v65 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v65 + 16LL))(v65);
      ++v28;
    }
    while ( v28 < *(_DWORD *)(a1 + 456) );
  }
  v30 = *v26;
  *(_DWORD *)(a1 + 456) = 0;
  if ( v30 != *(void **)(a1 + 440) )
  {
    operator delete(v30);
    *(_QWORD *)(a1 + 432) = *(_QWORD *)(a1 + 440);
    *(_DWORD *)(a1 + 452) = *(_DWORD *)(a1 + 448);
  }
  v31 = *(_QWORD *)(a1 + 424);
  if ( v31 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 8LL))(v31);
    *(_QWORD *)(a1 + 424) = 0LL;
  }
  v32 = *(void **)(a1 + 528);
  *(_DWORD *)(a1 + 552) = 0;
  if ( v32 != *(void **)(a1 + 536) )
  {
    operator delete(v32);
    *(_QWORD *)(a1 + 528) = *(_QWORD *)(a1 + 536);
    *(_DWORD *)(a1 + 548) = *(_DWORD *)(a1 + 544);
  }
  v33 = *(_DWORD **)(a1 + 7992);
  v34 = (unsigned int)tls_index;
  *(_QWORD *)(a1 + 3304) = 0LL;
  *v33 = 0;
  if ( dword_1803FEBB8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v34) + 4LL) )
  {
    Init_thread_header(&dword_1803FEBB8);
    if ( dword_1803FEBB8 == -1 )
    {
      qword_1803FEBC0 = (__int64)CProcessAttributionManager::CreateNullProcessAttribution(v81);
      Init_thread_footer(&dword_1803FEBB8);
    }
  }
  v35 = qword_1803FEBC0;
  v36 = (__int64 *)(a1 + 264);
  v37 = *(_DWORD *)(a1 + 276);
  v88 = 0xBuLL;
  if ( *(_DWORD *)(a1 + 272) == v37 )
  {
    v71 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,64,2,10>::Grow(a1 + 264);
    v72 = v71;
    if ( v71 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)(unsigned int)v71);
      ModuleFailFastForHRESULT(v72, retaddr);
    }
  }
  v38 = *v36;
  v39 = 2LL * *(unsigned int *)(a1 + 272);
  v40 = v88;
  *(_QWORD *)&v88 = v35;
  *(_OWORD *)(v38 + 8 * v39) = v40;
  ++*(_DWORD *)(a1 + 272);
  v41 = *(_DWORD *)(a1 + 284);
  if ( v41 <= *(_DWORD *)(a1 + 272) )
    v41 = *(_DWORD *)(a1 + 272);
  v42 = a1 + 656;
  *((_DWORD *)v36 + 5) = v41;
  v43 = *(_DWORD *)(v42 + 24);
  v44 = v43 + 1;
  if ( v43 + 1 < v43 )
  {
    v70 = -2147024362;
    v87[0] = 181;
    v69 = -2147024362;
    goto LABEL_93;
  }
  if ( v44 <= *(_DWORD *)(v42 + 20) )
  {
    *(_QWORD *)(*(_QWORD *)v42 + 8LL * v43) = v35;
    *(_DWORD *)(v42 + 24) = v44;
    goto LABEL_39;
  }
  *(_QWORD *)&v85 = &v88;
  v69 = DynArrayImpl<0>::Grow(v42, 8u, 1, 0, (unsigned __int64 *)&v85);
  if ( v69 < 0 )
  {
    v70 = v69;
LABEL_93:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v69, v87[0], 0LL);
    ModuleFailFastForHRESULT(v70, retaddr);
  }
  *(_QWORD *)((unsigned int)(8 * (*(_DWORD *)(v42 + 24))++) + *(_QWORD *)v42) = *(_QWORD *)v85;
LABEL_39:
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    CRenderPerf::NotifyBeginFrame((char *)g_pComposition + 16, a5);
  return v27;
}
