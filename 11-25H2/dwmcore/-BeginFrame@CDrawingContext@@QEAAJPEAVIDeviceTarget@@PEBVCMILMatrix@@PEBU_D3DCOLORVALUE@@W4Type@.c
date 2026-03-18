/*
 * XREFs of ?BeginFrame@CDrawingContext@@QEAAJPEAVIDeviceTarget@@PEBVCMILMatrix@@PEBU_D3DCOLORVALUE@@W4Type@IRenderTarget@@PEAVCOverlayContext@@@Z @ 0x180087DA0
 * Callers:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18000C52C (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x18007609C (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z @ 0x180081A90 (-BeginFrame@CSubDrawingContext@@AEAAJAEBVCMILMatrix@@@Z.c)
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180086570 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1800C54D0 (-RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800C6C14 (-Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800C7228 (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z @ 0x1801DB3D0 (-EnsureDeviceTexture@CStockBitmapProducer@@UEAAJAEBVRenderTargetInfo@@PEAPEAVIDeviceTexture@@@Z.c)
 *     ?Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028B550 (-Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCMILMatrix@@PEAW4ProtectionMode@1@@Z @ 0x18028C5A0 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCMILMat.c)
 *     _lambda_5aff48886c632e43686d56bde1b6617b_::operator() @ 0x18028CDE0 (_lambda_5aff48886c632e43686d56bde1b6617b_--operator().c)
 *     ?RenderCursors_Feature_FixCaptureMagnifierCursors_Off@CCaptureRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18028DA5C (-RenderCursors_Feature_FixCaptureMagnifierCursors_Off@CCaptureRenderTarget@@IEAAJPEAVCDrawingCon.c)
 *     ?AddShadowToShape@CCursorState@@AEAA?AV?$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z @ 0x1802BB74C (-AddShadowToShape@CCursorState@@AEAA-AV-$shared_ptr@UShapeData@CCursorState@@@std@@AEBV23@@Z.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x1802D9CD8 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 * Callees:
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180089340 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     MIDL_user_allocate @ 0x1800B12F0 (MIDL_user_allocate.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x1800B2860 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B2FCC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x1800D7AD0 (-PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z.c)
 *     ??$emplace_back@$$V@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800D90D0 (--$emplace_back@$$V@-$vector_facade@UClippingScopeState@CScopedClipStack@@V-$buffer_impl@UClippi.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800DA620 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x1800DA640 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCCompositionEnvironmentLight@@@Z @ 0x180103E3C (--4-$com_ptr_t@VCCompositionEnvironmentLight@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVC.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18010FE30 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?Grow@?$CWatermarkStack@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0EA@$01$09@@AEAAJ_KIIPEAPEAX@Z @ 0x180118D80 (-Grow@-$CWatermarkStack@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F_ea_180118D80.c)
 *     ?IsValid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBAJXZ @ 0x180146290 (-IsValid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@UEBAJXZ.c)
 *     ?GetRenderTargetInfo@CDeviceTextureTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x180147060 (-GetRenderTargetInfo@CDeviceTextureTarget@@UEBA-AVRenderTargetInfo@@XZ.c)
 *     ?GetTargetId@CLegacyRenderTarget@@UEBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x1801C0B90 (-GetTargetId@CLegacyRenderTarget@@UEBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 *     ?UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ @ 0x1801E4F64 (-UpdateRenderTargetInfo@CDrawingContext@@AEAAXXZ.c)
 *     ?CreateNullProcessAttribution@CProcessAttributionManager@@AEAAPEAVCProcessAttribution@@XZ @ 0x1801E6B70 (-CreateNullProcessAttribution@CProcessAttributionManager@@AEAAPEAVCProcessAttribution@@XZ.c)
 *     ?NotifyBeginFrame@CRenderPerf@@QEAAXW4Type@IRenderTarget@@@Z @ 0x18023A8CC (-NotifyBeginFrame@CRenderPerf@@QEAAXW4Type@IRenderTarget@@@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18024A244 (ModuleFailFastForHRESULT.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180255010 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x18025C7C0 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18025C828 (_Init_thread_header.c)
 *     ?GetTargetId@CDDisplayRenderTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x180281D70 (-GetTargetId@CDDisplayRenderTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 *     ?GetTargetId@CLegacyRenderTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x180281DC0 (-GetTargetId@CLegacyRenderTarget@@WEI@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 *     ?GetDevice@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAPEAVCD3DDevice@@XZ @ 0x1802D6C50 (-GetDevice@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAPEAVCD3DDevic.c)
 *     ?GetSize@?$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA?AUD2D_SIZE_U@@XZ @ 0x1802D6D50 (-GetSize@-$IDeviceSurfaceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WLI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?IsValid@?$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAJXZ @ 0x1802D6E90 (-IsValid@-$IDeviceResourceMethodsT@VCD2DBitmap@@VIDeviceTextureTarget@@@@WBAA@EBAJXZ.c)
 *     memcpy_0 @ 0x1802E8974 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  float v76; // xmm0_4
  __int64 (__fastcall *v77)(__int64, _BYTE *); // rax
  int *v78; // rax
  int v79; // ecx
  __int64 v80; // r8
  __int64 v81; // rcx
  void (__fastcall *v82)(__int64, _BYTE *); // rax
  CProcessAttributionManager *v83; // rcx
  char v84; // al
  int v85; // [rsp+20h] [rbp-E0h]
  int v86; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v87; // [rsp+30h] [rbp-D0h] BYREF
  int v88; // [rsp+38h] [rbp-C8h] BYREF
  int v89; // [rsp+40h] [rbp-C0h] BYREF
  float v90; // [rsp+48h] [rbp-B8h] BYREF
  float v91; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v92; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v93; // [rsp+68h] [rbp-98h]
  unsigned int v94[2]; // [rsp+78h] [rbp-88h]
  __int128 v95; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v96[8]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v97[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v98; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v99; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v100[8]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v101[32]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v102[16]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v103; // [rsp+F0h] [rbp-10h]
  __int64 v104; // [rsp+F8h] [rbp-8h]
  __int64 *v105; // [rsp+100h] [rbp+0h]
  __int64 v106; // [rsp+108h] [rbp+8h]
  int *v107; // [rsp+110h] [rbp+10h]
  __int64 v108; // [rsp+118h] [rbp+18h]
  int *v109; // [rsp+120h] [rbp+20h]
  __int64 v110; // [rsp+128h] [rbp+28h]
  float *v111; // [rsp+130h] [rbp+30h]
  __int64 v112; // [rsp+138h] [rbp+38h]
  float *v113; // [rsp+140h] [rbp+40h]
  __int64 v114; // [rsp+148h] [rbp+48h]
  unsigned __int8 *v115; // [rsp+150h] [rbp+50h]
  __int64 v116; // [rsp+158h] [rbp+58h]
  __int64 v117; // [rsp+160h] [rbp+60h]
  int v118; // [rsp+168h] [rbp+68h]
  int v119; // [rsp+16Ch] [rbp+6Ch]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  *(_DWORD *)(a1 + 7980) = 0;
  *(_BYTE *)(a1 + 7984) = 0;
  *(_OWORD *)(a1 + 7936) = 0LL;
  *(_OWORD *)(a1 + 7952) = 0LL;
  *(_QWORD *)(a1 + 7968) = 0LL;
  v10 = *(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a2 + 120LL);
  if ( (char *)v10 == (char *)CDeviceTextureTarget::GetRenderTargetInfo )
    RenderTargetInfo = CDeviceTextureTarget::GetRenderTargetInfo(a2, &v95);
  else
    RenderTargetInfo = v10(a2, &v95);
  v12 = *(CMILRefCountImpl **)(a1 + 32);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)RenderTargetInfo;
  *(_QWORD *)v94 = 192LL;
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
        v85);
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, IsValid, 0x6Cu, 0LL);
LABEL_90:
    wil::com_ptr_t<CCompositionEnvironmentLight,wil::err_returncode_policy>::operator=(a1 + 32, v12);
    if ( *(_QWORD *)(a1 + 32) )
      CDrawingContext::UpdateRenderTargetInfo((CDrawingContext *)a1);
    else
      wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(a1 + 40);
    goto LABEL_64;
  }
  *(_BYTE *)(a1 + 8065) = 1;
  *(_QWORD *)&v92 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(a1 + 32) = a2;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  if ( (_QWORD)v92 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v92 + 16LL))(v92);
  if ( !*(_QWORD *)(a1 + 40) )
  {
    v51 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a2 + 40LL);
    if ( v51 == IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice )
      v52 = IDeviceResourceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetDevice(a2, v51, v49, v50);
    else
      v52 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 40LL))(a2);
    v53 = *(CD3DDevice **)(a1 + 40);
    *(_QWORD *)&v92 = v53;
    *(_QWORD *)(a1 + 40) = v52;
    if ( v52 && _InterlockedAdd((volatile signed __int32 *)(v52 + 8), 1u) <= 0 )
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x18,
        (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
        (const char *)0x8007029CLL,
        v85);
      v53 = (CD3DDevice *)v92;
    }
    if ( v53 )
      CD3DDevice::Release(v53);
  }
  v54 = *(_QWORD *)(a1 + 32);
  v55 = *(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v54 + 120LL);
  if ( (char *)v55 == (char *)CDeviceTextureTarget::GetRenderTargetInfo )
    v56 = CDeviceTextureTarget::GetRenderTargetInfo(v54, v101);
  else
    v56 = v55(v54, v101);
  v57 = *(struct IDeviceTarget **)(a1 + 32);
  v58 = (CD2DContext *)(*(_QWORD *)(a1 + 40) + 16LL);
  *(_OWORD *)(a1 + 56) = *(_OWORD *)v56;
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(v56 + 16);
  v59 = CD2DContext::PushTarget(v58, (struct ID2DContextOwner *)(a1 + 24), v57);
  v27 = v59;
  if ( v59 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, 0x85u, 0LL);
    goto LABEL_90;
  }
  *(_DWORD *)(a1 + 7980) = 0;
  *(_BYTE *)(a1 + 7984) = 0;
  v60 = *(_QWORD *)(a1 + 752);
  if ( v60 != *(_QWORD *)(a1 + 744) && !*(_QWORD *)(v60 - 184) )
  {
    v81 = *(_QWORD *)(v60 - 192);
    v82 = *(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v81 + 88LL);
    if ( (char *)v82 == (char *)IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize )
      IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(v81, v96);
    else
      v82(v81, v96);
  }
  v61 = *(_QWORD *)(a1 + 32);
  detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::emplace_back<>(a1 + 744);
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
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0xF6u, 0LL);
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
        Size = IDeviceSurfaceMethodsT<CD2DBitmap,IDeviceTextureTarget>::GetSize(a2, v97);
      else
        Size = v74(a2, v97);
      v76 = (float)*(int *)(Size + 4);
      v77 = *(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 88LL);
      v91 = v76;
      v78 = (int *)v77(a2, v100);
      v89 = 0;
      v88 = 0;
      v99 = a2;
      v79 = *v78;
      v98 = a1;
      v104 = 8LL;
      v106 = 8LL;
      v103 = &v98;
      v105 = &v99;
      v107 = &v88;
      v109 = &v89;
      v111 = &v90;
      v113 = &v91;
      v115 = &v87;
      v87 = v73 ? 0x44 : 0;
      v118 = v87;
      v90 = (float)v79;
      v108 = 4LL;
      v110 = 4LL;
      v112 = 4LL;
      v114 = 4LL;
      v116 = 1LL;
      v117 = a3;
      v119 = 0;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWING_CONTEXT_FRAME_Start,
        v80,
        9LL,
        v102);
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
    v84 = *(_BYTE *)(a1 + 161);
    *(_BYTE *)(a1 + 160) = -86;
    *(_BYTE *)(a1 + 161) = v84 & 0xC0 | 0x29;
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
    v93 = 0LL;
    *(_QWORD *)(a1 + 180) = 0LL;
    *(_DWORD *)(a1 + 188) = 0;
  }
  *(_BYTE *)(a1 + 192) = v23;
  *(_DWORD *)(a1 + 240) = 1;
  *(_QWORD *)(a1 + 244) = 1LL;
  *(_QWORD *)(a1 + 252) = 0LL;
  v24 = *(unsigned int *)(a1 + 3288);
  v25 = *(unsigned int *)(a1 + 3292);
  *(_QWORD *)&v92 = 0LL;
  BYTE8(v92) = 1;
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
          (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v27,
          v85);
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x83,
          (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
          (const char *)v27,
          v86);
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x13Au, 0LL);
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
  *(_OWORD *)(*(_QWORD *)(a1 + 3280) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 3288))++) = v92;
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
  if ( dword_18040ACC8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v34) + 4LL) )
  {
    Init_thread_header(&dword_18040ACC8);
    if ( dword_18040ACC8 == -1 )
    {
      qword_18040ACD0 = (__int64)CProcessAttributionManager::CreateNullProcessAttribution(v83);
      Init_thread_footer(&dword_18040ACC8);
    }
  }
  v35 = qword_18040ACD0;
  v36 = (__int64 *)(a1 + 264);
  v37 = *(_DWORD *)(a1 + 276);
  v95 = 0xBuLL;
  if ( *(_DWORD *)(a1 + 272) == v37 )
  {
    v71 = CWatermarkStack<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,64,2,10>::Grow(a1 + 264);
    v72 = v71;
    if ( v71 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x83,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\common\\WatermarkStack.inl",
        (const char *)(unsigned int)v71,
        a1 + 264);
      ModuleFailFastForHRESULT(v72, retaddr);
    }
  }
  v38 = *v36;
  v39 = 2LL * *(unsigned int *)(a1 + 272);
  v40 = v95;
  *(_QWORD *)&v95 = v35;
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
    v94[0] = 181;
    v69 = -2147024362;
    goto LABEL_93;
  }
  if ( v44 <= *(_DWORD *)(v42 + 20) )
  {
    *(_QWORD *)(*(_QWORD *)v42 + 8LL * v43) = v35;
    *(_DWORD *)(v42 + 24) = v44;
    goto LABEL_39;
  }
  *(_QWORD *)&v92 = &v95;
  v69 = DynArrayImpl<0>::Grow(v42, 8, 1, 0, (__int64)&v92);
  if ( v69 < 0 )
  {
    v70 = v69;
LABEL_93:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v69, v94[0], 0LL);
    ModuleFailFastForHRESULT(v70, retaddr);
  }
  *(_QWORD *)((unsigned int)(8 * (*(_DWORD *)(v42 + 24))++) + *(_QWORD *)v42) = *(_QWORD *)v92;
LABEL_39:
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    CRenderPerf::NotifyBeginFrame((char *)g_pComposition + 16, a5);
  return v27;
}
