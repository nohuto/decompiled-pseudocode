/*
 * XREFs of ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180099DE8
 * Callers:
 *     ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180098EA4 (-Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180026BE0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x18002C7D0 (-NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18003E020 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x180055E00 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180056180 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x18005CC10 (McTemplateU0x_EventWriteTransfer.c)
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800607B0 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x180061250 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0qdffff_EventWriteTransfer @ 0x1800988F0 (McTemplateU0qdffff_EventWriteTransfer.c)
 *     ?PresentNeeded@CDirectFlipInfo@@QEBA_NXZ @ 0x180098DF4 (-PresentNeeded@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?Reset@?$CMergedRectBase@$07@@QEAAXXZ @ 0x18009A1D4 (-Reset@-$CMergedRectBase@$07@@QEAAXXZ.c)
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x18009B4A0 (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?GetOcclusionContext@CMonitorDirty@@UEAAPEBVCOcclusionContext@@XZ @ 0x1800D50B0 (-GetOcclusionContext@CMonitorDirty@@UEAAPEBVCOcclusionContext@@XZ.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800D5570 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUD2D_RECT_F@@U.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x1800D5FC8 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800FC770 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x1801B0C50 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801B1284 (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801EC14C (-NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?SetFullTightDirtyRegion@CMonitorDirty@@QEAAXXZ @ 0x18022369C (-SetFullTightDirtyRegion@CMonitorDirty@@QEAAXXZ.c)
 *     ?GetDeviceTarget@CDirectFlipInfo@@QEAAJPEAPEAVIDeviceTarget@@@Z @ 0x180226FB4 (-GetDeviceTarget@CDirectFlipInfo@@QEAAJPEAPEAVIDeviceTarget@@@Z.c)
 *     ?GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCOcclusionContext@@@Z @ 0x18022DC14 (-GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCOcclusionContext@@@Z.c)
 *     ?Optimize@?$CMergedRectBase@$07@@AEAAXXZ @ 0x180241D00 (-Optimize@-$CMergedRectBase@$07@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDDisplayRenderTarget::RenderDirtyRegion(
        CDDisplayRenderTarget *this,
        struct CDrawingContext *a2,
        struct CComposeTop *a3)
{
  double v3; // xmm2_8
  CMonitorDirty *v4; // r12
  int v6; // ebx
  _DWORD *v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r14
  struct CVisualTree *v11; // rcx
  __int64 v12; // xmm1_8
  int EffectiveDirectFlipMode; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  float *v18; // rsi
  float *v19; // r14
  float *v20; // r12
  float *v21; // rbx
  float v22; // xmm1_4
  float v23; // xmm0_4
  unsigned int v24; // xmm1_4
  struct CVisualTree *v25; // rdx
  int v26; // eax
  char *v27; // rcx
  int *v28; // rax
  CDDisplaySwapChain *v29; // rcx
  struct CComposeTop *v30; // rax
  __int64 v31; // r8
  CDirectFlipInfo *v33; // rbx
  int CutoffZ; // eax
  int DeviceTarget; // eax
  __int64 v36; // rax
  int v37; // eax
  int v38; // eax
  float v39; // xmm1_4
  const int *v40; // rdx
  unsigned int v41; // [rsp+20h] [rbp-99h]
  unsigned __int64 v42; // [rsp+28h] [rbp-91h]
  char v43; // [rsp+40h] [rbp-79h]
  char v44; // [rsp+41h] [rbp-78h]
  int v45; // [rsp+48h] [rbp-71h] BYREF
  struct COcclusionContext *OcclusionContext; // [rsp+50h] [rbp-69h]
  struct CComposeTop *v47; // [rsp+58h] [rbp-61h]
  __int128 v48; // [rsp+60h] [rbp-59h] BYREF
  __int64 v49; // [rsp+70h] [rbp-49h]
  struct IDeviceTarget *v50[2]; // [rsp+78h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v51; // [rsp+90h] [rbp-29h] BYREF
  __int128 *v52; // [rsp+A0h] [rbp-19h]
  __int64 v53; // [rsp+A8h] [rbp-11h]
  int *v54; // [rsp+B0h] [rbp-9h]
  __int64 v55; // [rsp+B8h] [rbp-1h]
  struct IDeviceTarget **v56; // [rsp+C0h] [rbp+7h]
  __int64 v57; // [rsp+C8h] [rbp+Fh]

  v4 = (CDDisplayRenderTarget *)((char *)this + 30776);
  v47 = a3;
  v6 = 0;
  v44 = 0;
  v8 = (_DWORD *)((char *)this + 30792);
  OcclusionContext = CMonitorDirty::GetOcclusionContext((CDDisplayRenderTarget *)((char *)this + 30776));
  *((_DWORD *)OcclusionContext + 390) = 0x7FFFFFFF;
  if ( !*((_BYTE *)this + 31232) )
    CMergedRectBase<8>::Optimize((char *)this + 30792);
  v10 = (unsigned int)*v8;
  if ( this == (CDDisplayRenderTarget *)-30796LL && *v8 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v45 = 0;
    LODWORD(v50[0]) = v10;
    v52 = &v48;
    *(_QWORD *)&v48 = a2;
    v54 = &v45;
    v53 = 8LL;
    v56 = v50;
    v55 = 4LL;
    v57 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      (const EVENT_DESCRIPTOR *)";",
      v9,
      4u,
      &v51);
  }
  v11 = (struct CVisualTree *)*((_QWORD *)this + 24);
  v12 = *((_QWORD *)this + 4140);
  v48 = *((_OWORD *)this + 2069);
  v49 = v12;
  CDesktopTree::UpdateCVIRenderTargets(v11);
  EffectiveDirectFlipMode = COverlayContext::GetEffectiveDirectFlipMode((char *)this + 224);
  if ( EffectiveDirectFlipMode == 1 )
  {
    if ( !CDirectFlipInfo::PresentNeeded(*((CDirectFlipInfo **)this + 2467)) )
      goto LABEL_22;
    goto LABEL_9;
  }
  if ( EffectiveDirectFlipMode == 2 )
  {
    dword_1803FA754 |= 2u;
    goto LABEL_22;
  }
  v17 = (unsigned int)(EffectiveDirectFlipMode - 3);
  if ( (unsigned int)v17 >= 2 )
    goto LABEL_9;
  v33 = (CDirectFlipInfo *)*((_QWORD *)this + 2467);
  CutoffZ = CDirectFlipInfo::GetCutoffZ(v33, OcclusionContext);
  v50[0] = 0LL;
  *((_DWORD *)OcclusionContext + 390) = CutoffZ;
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)v50);
  DeviceTarget = CDirectFlipInfo::GetDeviceTarget(v33, v50);
  v6 = DeviceTarget;
  if ( DeviceTarget < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DeviceTarget, 0x418u, 0LL);
    goto LABEL_43;
  }
  if ( RenderTargetInfo::IsHDR((CDDisplayRenderTarget *)((char *)this + 33104)) )
  {
    v36 = (*(__int64 (__fastcall **)(char *, __int128 *))(*((_QWORD *)v50[0] + 1) + 24LL))((char *)v50[0] + 8, &v48);
    if ( IsDXGIColorSpaceHDR(*(enum DXGI_COLOR_SPACE_TYPE *)(v36 + 8)) )
      (*(void (__fastcall **)(struct IDeviceTarget *))(*(_QWORD *)v50[0] + 160LL))(v50[0]);
  }
  v37 = CDrawingContext::PushRenderTarget(a2, v50[0]);
  v6 = v37;
  if ( v37 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v37, 0x420u, 0LL);
LABEL_43:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v50);
    goto LABEL_22;
  }
  v44 = 1;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v50);
LABEL_9:
  if ( *((_BYTE *)this + 19313) )
    goto LABEL_25;
  if ( *((_BYTE *)this + 30769) )
  {
    v38 = *((_DWORD *)this + 30);
    *(_QWORD *)&v48 = 0LL;
    *(struct _D3DCOLORVALUE *)v50 = *(const struct _D3DCOLORVALUE *)&_xmm.r;
    v39 = (float)*((int *)this + 31);
    *((float *)&v48 + 2) = (float)v38;
    *((float *)&v48 + 3) = v39;
    v26 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a2, 0, (unsigned int)&v48, 1, 1);
    v6 = v26;
    if ( v26 < 0 )
    {
      v41 = 1077;
LABEL_31:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, v41, 0LL);
      goto LABEL_22;
    }
    v6 = (**((__int64 (__fastcall ***)(char *, struct IDeviceTarget **))a2 + 2))((char *)a2 + 16, v50);
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, v40, 0, v6, 0x43Du, (void *)((unsigned __int64)v40 & v42));
      goto LABEL_22;
    }
    CDDisplayRenderTarget::NotifyRenderedRect(this, v40, 0LL);
    CMonitorDirty::SetFullTightDirtyRegion(v4);
    *((_BYTE *)this + 30769) = 0;
  }
  if ( *((_BYTE *)this + 19313) || (v43 = 1, !*((_BYTE *)this + 30771)) )
LABEL_25:
    v43 = 0;
  v18 = (float *)((char *)this + 30804);
  v19 = (float *)((char *)this + 16 * v10 + 30796);
  while ( 1 )
  {
    v20 = v18 - 2;
    if ( v18 - 2 == v19 )
      break;
    v21 = v18 + 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qdffff_EventWriteTransfer(
        v17,
        v14,
        v15,
        v16,
        *(_DWORD *)v20,
        *((_DWORD *)v18 - 1),
        *(_DWORD *)v18,
        *(_DWORD *)v21);
    v22 = *v21 - *(v18 - 1);
    v23 = *v18 - *v20;
    v49 = 0LL;
    dword_1803FA768 += (int)(float)(v22 * v23);
    v24 = *((_DWORD *)v18 - 1);
    v25 = (struct CVisualTree *)*((_QWORD *)this + 14);
    *(float *)&v48 = *v20;
    *(_QWORD *)((char *)&v48 + 4) = __PAIR64__(*(_DWORD *)v18, v24);
    *((float *)&v48 + 3) = *v21;
    v26 = CDrawingContext::DrawVisualTree(a2, v25, 1, v43, 0LL);
    v6 = v26;
    if ( v26 < 0 )
    {
      v41 = 1118;
      goto LABEL_31;
    }
    v27 = (char *)this + (*((_BYTE *)this + 19313) != 0 ? 30700LL : 30564LL);
    v48 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>(v27, v18 - 2, &v48);
    v28 = PixelAlign((int *)v50, (unsigned int *)&v48, v3);
    v29 = (CDDisplaySwapChain *)(*((_QWORD *)this + 26) + 24LL);
    v48 = *(_OWORD *)v28;
    COverlaySwapChain::NotifyRenderedRect(v29, (int *)&v48);
    v30 = v47;
    *((_BYTE *)this + 33520) = 1;
    if ( v30 )
    {
      v26 = CComposeTop::SubtractOverdraw(v30, v18 - 2);
      v6 = v26;
      if ( v26 < 0 )
      {
        v41 = 1126;
        goto LABEL_31;
      }
    }
    v18 += 4;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0x_EventWriteTransfer(v17, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop, (__int64)a2);
LABEL_22:
  CMergedRectBase<8>::Reset((char *)this + 30792);
  *((_WORD *)this + 16544) = 0;
  if ( v44 )
    CDrawingContext::PopRenderTargetInternal(a2, 0LL, v31);
  return (unsigned int)v6;
}
