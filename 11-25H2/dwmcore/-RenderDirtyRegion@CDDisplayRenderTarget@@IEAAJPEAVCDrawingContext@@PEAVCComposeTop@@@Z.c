/*
 * XREFs of ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x1800C7D98
 * Callers:
 *     ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1800C6C14 (-Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18002E7F0 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsHDR@RenderTargetInfo@@QEBA_NXZ @ 0x180040190 (-IsHDR@RenderTargetInfo@@QEBA_NXZ.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180041FB8 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetOcclusionContext@CMonitorDirty@@UEAAPEBVCOcclusionContext@@XZ @ 0x180053710 (-GetOcclusionContext@CMonitorDirty@@UEAAPEBVCOcclusionContext@@XZ.c)
 *     ?UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180053BD0 (-UpdateCVIRenderTargets@CDesktopTree@@QEBAXAEBVRenderTargetInfo@@AEBV-$TMilRect_@MUD2D_RECT_F@@U.c)
 *     ?DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCOcclusionContext@@W4Enum@ClearMode@@_NPEAVCVisual@@@Z @ 0x180054628 (-DrawVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT.c)
 *     ?NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180065B10 (-NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil.c)
 *     ?SubtractOverdraw@CComposeTop@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180075104 (-SubtractOverdraw@CComposeTop@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE.c)
 *     ?PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z @ 0x180076980 (-PopGpuClipRectInternal@CDrawingContext@@AEAAX_N@Z.c)
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x180099B50 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniq.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     McTemplateU0qdffff_EventWriteTransfer @ 0x1800C6660 (McTemplateU0qdffff_EventWriteTransfer.c)
 *     ?PresentNeeded@CDirectFlipInfo@@QEBA_NXZ @ 0x1800C6B64 (-PresentNeeded@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?Reset@?$CMergedRectBase@$07@@QEAAXXZ @ 0x1800C8194 (-Reset@-$CMergedRectBase@$07@@QEAAXXZ.c)
 *     ?GetEffectiveDirectFlipMode@COverlayContext@@QEBA?AW4Enum@DirectFlipMode@@XZ @ 0x1800C95D0 (-GetEffectiveDirectFlipMode@COverlayContext@@QEBA-AW4Enum@DirectFlipMode@@XZ.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z @ 0x1800D8850 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIDeviceTarget@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800D8BD0 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800DC130 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1801EB924 (McTemplateU0x_EventWriteTransfer.c)
 *     ?NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_N@Z @ 0x1801F8C50 (-NotifyRenderedRect@CDDisplayRenderTarget@@IEAAXPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?SetFullTightDirtyRegion@CMonitorDirty@@QEAAXXZ @ 0x18022EE3C (-SetFullTightDirtyRegion@CMonitorDirty@@QEAAXXZ.c)
 *     ?GetDeviceTarget@CDirectFlipInfo@@QEAAJPEAPEAVIDeviceTarget@@@Z @ 0x180232A94 (-GetDeviceTarget@CDirectFlipInfo@@QEAAJPEAPEAVIDeviceTarget@@@Z.c)
 *     ?GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCOcclusionContext@@@Z @ 0x1802399B4 (-GetCutoffZ@CDirectFlipInfo@@QEBAHPEBVCOcclusionContext@@@Z.c)
 *     ?Optimize@?$CMergedRectBase@$07@@AEAAXXZ @ 0x180249274 (-Optimize@-$CMergedRectBase@$07@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?GetClearMode@CDDisplayRenderTarget@@MEBA?AW4Enum@ClearMode@@XZ @ 0x1802810F0 (-GetClearMode@CDDisplayRenderTarget@@MEBA-AW4Enum@ClearMode@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  int ClearMode; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  bool v19; // zf
  float *v20; // rsi
  float *v21; // r14
  float *v22; // r12
  float *v23; // rbx
  float v24; // xmm1_4
  float v25; // xmm0_4
  unsigned int v26; // xmm1_4
  CVisualTree *v27; // rdx
  int v28; // eax
  char *v29; // rcx
  int *v30; // rax
  CDDisplaySwapChain *v31; // rcx
  __int64 v32; // rax
  CDirectFlipInfo *v34; // rbx
  int CutoffZ; // eax
  int DeviceTarget; // eax
  __int64 v37; // rax
  int v38; // eax
  int v39; // eax
  float v40; // xmm1_4
  const int *v41; // rdx
  unsigned int v42; // [rsp+20h] [rbp-A9h]
  unsigned __int64 v43; // [rsp+28h] [rbp-A1h]
  char v44; // [rsp+40h] [rbp-89h]
  char v45; // [rsp+41h] [rbp-88h]
  int v46; // [rsp+48h] [rbp-81h] BYREF
  struct COcclusionContext *OcclusionContext; // [rsp+50h] [rbp-79h]
  struct CComposeTop *v48; // [rsp+58h] [rbp-71h]
  __int128 v49; // [rsp+60h] [rbp-69h] BYREF
  __int64 v50; // [rsp+70h] [rbp-59h]
  struct IDeviceTarget *v51[2]; // [rsp+78h] [rbp-51h] BYREF
  __int128 v52; // [rsp+88h] [rbp-41h] BYREF
  int v53; // [rsp+98h] [rbp-31h]
  int v54; // [rsp+9Ch] [rbp-2Dh]
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+A0h] [rbp-29h] BYREF
  __int128 *v56; // [rsp+B0h] [rbp-19h]
  __int64 v57; // [rsp+B8h] [rbp-11h]
  int *v58; // [rsp+C0h] [rbp-9h]
  __int64 v59; // [rsp+C8h] [rbp-1h]
  struct IDeviceTarget **v60; // [rsp+D0h] [rbp+7h]
  __int64 v61; // [rsp+D8h] [rbp+Fh]

  v4 = (CDDisplayRenderTarget *)((char *)this + 31160);
  v48 = a3;
  v6 = 0;
  v45 = 0;
  v8 = (_DWORD *)((char *)this + 31176);
  OcclusionContext = CMonitorDirty::GetOcclusionContext(
                       (CDDisplayRenderTarget *)((char *)this + 31160),
                       (__int64)a2,
                       v3);
  *((_DWORD *)OcclusionContext + 390) = 0x7FFFFFFF;
  if ( !*((_BYTE *)this + 31616) )
    CMergedRectBase<8>::Optimize((char *)this + 31176);
  v10 = (unsigned int)*v8;
  if ( this == (CDDisplayRenderTarget *)-31180LL && *v8 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v46 = 0;
    LODWORD(v51[0]) = v10;
    v56 = &v52;
    *(_QWORD *)&v52 = a2;
    v58 = &v46;
    v57 = 8LL;
    v60 = v51;
    v59 = 4LL;
    v61 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Start,
      v9,
      4u,
      &v55);
  }
  v11 = (struct CVisualTree *)*((_QWORD *)this + 24);
  v12 = *((_QWORD *)this + 4188);
  v49 = *((_OWORD *)this + 2093);
  v50 = v12;
  CDesktopTree::UpdateCVIRenderTargets(v11, (__int64)&v49, (struct D2D_RECT_F *)((char *)this + 30904));
  EffectiveDirectFlipMode = COverlayContext::GetEffectiveDirectFlipMode((char *)this + 224);
  if ( EffectiveDirectFlipMode == 1 )
  {
    if ( !CDirectFlipInfo::PresentNeeded(*((CDirectFlipInfo **)this + 2496)) )
      goto LABEL_22;
  }
  else
  {
    if ( EffectiveDirectFlipMode == 2 )
    {
      dword_1804067B4 |= 2u;
      goto LABEL_22;
    }
    if ( (unsigned int)(EffectiveDirectFlipMode - 3) < 2 )
    {
      v34 = (CDirectFlipInfo *)*((_QWORD *)this + 2496);
      CutoffZ = CDirectFlipInfo::GetCutoffZ(v34, OcclusionContext);
      v51[0] = 0LL;
      *((_DWORD *)OcclusionContext + 390) = CutoffZ;
      wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)v51);
      DeviceTarget = CDirectFlipInfo::GetDeviceTarget(v34, v51);
      v6 = DeviceTarget;
      if ( DeviceTarget < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DeviceTarget, 0x470u, 0LL);
      }
      else
      {
        if ( RenderTargetInfo::IsHDR((CDDisplayRenderTarget *)((char *)this + 33488)) )
        {
          v37 = (*(__int64 (__fastcall **)(char *, __int128 *))(*((_QWORD *)v51[0] + 1) + 24LL))(
                  (char *)v51[0] + 8,
                  &v52);
          if ( IsDXGIColorSpaceHDR(*(enum DXGI_COLOR_SPACE_TYPE *)(v37 + 8)) )
            (*(void (__fastcall **)(struct IDeviceTarget *))(*(_QWORD *)v51[0] + 160LL))(v51[0]);
        }
        v38 = CDrawingContext::PushRenderTarget(a2, v51[0]);
        v6 = v38;
        if ( v38 >= 0 )
        {
          v45 = 1;
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v51);
          goto LABEL_9;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v38, 0x478u, 0LL);
      }
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v51);
      goto LABEL_22;
    }
  }
LABEL_9:
  if ( !*((_BYTE *)this + 19697) && *((_BYTE *)this + 31153) )
  {
    v39 = *((_DWORD *)this + 30);
    *(_QWORD *)&v52 = 0LL;
    *(struct _D3DCOLORVALUE *)v51 = *(const struct _D3DCOLORVALUE *)&_xmm.r;
    v40 = (float)*((int *)this + 31);
    *((float *)&v52 + 2) = (float)v39;
    *((float *)&v52 + 3) = v40;
    v28 = CDrawingContext::PushGpuClipRectInternal((_DWORD)a2, 0, (unsigned int)&v52, 1, 1);
    v6 = v28;
    if ( v28 < 0 )
    {
      v42 = 1165;
LABEL_31:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v28, v42, 0LL);
      goto LABEL_22;
    }
    v6 = (**((__int64 (__fastcall ***)(char *, struct IDeviceTarget **))a2 + 2))((char *)a2 + 16, v51);
    CDrawingContext::PopGpuClipRectInternal(a2, 0);
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, v41, 0, v6, 0x495u, (void *)((unsigned __int64)v41 & v43));
      goto LABEL_22;
    }
    CDDisplayRenderTarget::NotifyRenderedRect(this, v41, 0LL);
    CMonitorDirty::SetFullTightDirtyRegion(v4);
    *((_BYTE *)this + 31153) = 0;
  }
  ClearMode = CDDisplayRenderTarget::GetClearMode(this);
  v19 = *((_BYTE *)this + 19697) == 0;
  LODWORD(v51[0]) = ClearMode;
  if ( !v19 || (v44 = 1, !*((_BYTE *)this + 31155)) )
    v44 = 0;
  v20 = (float *)((char *)this + 31188);
  v21 = (float *)((char *)this + 16 * v10 + 31180);
  while ( 1 )
  {
    v22 = v20 - 2;
    if ( v20 - 2 == v21 )
      break;
    v23 = v20 + 1;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      McTemplateU0qdffff_EventWriteTransfer(
        v16,
        v15,
        v17,
        v18,
        *(_DWORD *)v22,
        *((_DWORD *)v20 - 1),
        *(_DWORD *)v20,
        *(_DWORD *)v23);
    v24 = *v20 - *v22;
    v25 = *v23 - *(v20 - 1);
    v53 = 0;
    v54 = 0;
    dword_1804067C8 += (int)(float)(v24 * v25);
    v26 = *((_DWORD *)v20 - 1);
    v27 = (CVisualTree *)*((_QWORD *)this + 14);
    *(float *)&v52 = *v22;
    *(_QWORD *)((char *)&v52 + 4) = __PAIR64__(*(_DWORD *)v20, v26);
    *((float *)&v52 + 3) = *v23;
    v28 = CDrawingContext::DrawVisualTree(a2, v27, (__int64)&v52, OcclusionContext, (int)v51[0], v44, 0LL);
    v6 = v28;
    if ( v28 < 0 )
    {
      v42 = 1206;
      goto LABEL_31;
    }
    v29 = (char *)this + (*((_BYTE *)this + 19697) != 0 ? 31084LL : 30948LL);
    v52 = 0LL;
    CMILMatrix::Transform2DBoundsHelper<0>((__int64)v29, (const struct D2D_RECT_F *)(v20 - 2), (float *)&v52);
    v30 = PixelAlign((int *)&v49, (unsigned int *)&v52, v3);
    v31 = (CDDisplaySwapChain *)(*((_QWORD *)this + 26) + 24LL);
    v52 = *(_OWORD *)v30;
    COverlaySwapChain::NotifyRenderedRect(v31, (int *)&v52);
    v32 = (__int64)v48;
    *((_BYTE *)this + 33904) = 1;
    if ( v32 )
    {
      v28 = CComposeTop::SubtractOverdraw(v32, (__int64)(v20 - 2));
      v6 = v28;
      if ( v28 < 0 )
      {
        v42 = 1214;
        goto LABEL_31;
      }
    }
    v20 += 4;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0x_EventWriteTransfer(v16, &EVTDESC_MILEVENT_MEDIA_UCE_RENDEREVENT_Stop, a2);
LABEL_22:
  CMergedRectBase<8>::Reset((char *)this + 31176);
  *((_WORD *)this + 16736) = 0;
  if ( v45 )
    CDrawingContext::PopRenderTargetInternal(a2, 0);
  return (unsigned int)v6;
}
