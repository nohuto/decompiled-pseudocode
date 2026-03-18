/*
 * XREFs of ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180056D30
 * Callers:
 *     ?Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4Enum@MilStretch@@AEBVRenderTargetInfo@@@Z @ 0x18000B988 (-Update@CCachedTarget@CCachedVisualImage@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180057F90 (-Render@CLegacyRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderForCapture@CaptureBitsResponse@@IEAAJXZ @ 0x1800615F8 (-RenderForCapture@CaptureBitsResponse@@IEAAJXZ.c)
 *     ?RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180097480 (-RenderTargetDirty@COffScreenRenderTarget@@MEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 *     ?Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180098EA4 (-Render@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180099330 (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     gsl::final_action__lambda_ba5ae30a73ee47c0ba16de7014a41d5d___::_final_action__lambda_ba5ae30a73ee47c0ba16de7014a41d5d___ @ 0x18021372C (gsl--final_action__lambda_ba5ae30a73ee47c0ba16de7014a41d5d___--_final_action__lambda_ba5ae30a73e.c)
 *     ?Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180280800 (-Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCMILMatrix@@PEAW4ProtectionMode@1@@Z @ 0x180281850 (-RenderDirtyRegion@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVISwapChain@@AEBVCMILMat.c)
 *     gsl::final_action__lambda_a963e2fac1282037e8b8d37b07854811___::_final_action__lambda_a963e2fac1282037e8b8d37b07854811___ @ 0x180281F34 (gsl--final_action__lambda_a963e2fac1282037e8b8d37b07854811___--_final_action__lambda_a963e2fac12.c)
 *     gsl::final_action__lambda_21858384f40d571ee451d04104df5963___::_final_action__lambda_21858384f40d571ee451d04104df5963___ @ 0x180284DEC (gsl--final_action__lambda_21858384f40d571ee451d04104df5963___--_final_action__lambda_21858384f40.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTexture@@II@Z @ 0x1802D0A38 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCDrawingContext@@PEAVCHolographicInteropTextu.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180053B90 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?RestoreDrawingContextFlags@CDrawingContext@@UEAAXPEBUDrawingContextFlags@@_N@Z @ 0x180055BA0 (-RestoreDrawingContextFlags@CDrawingContext@@UEAAXPEBUDrawingContextFlags@@_N@Z.c)
 *     ?EndDraw@CD2DContext@@AEAAJXZ @ 0x180056980 (-EndDraw@CD2DContext@@AEAAJXZ.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x180057310 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180057BD0 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x1800DA570 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x1800FABC0 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180106F10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?GetMonitorTarget@CDrawingContext@@QEBAPEAVIMonitorTarget@@XZ @ 0x18018E73C (-GetMonitorTarget@CDrawingContext@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ??$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z @ 0x1801CADF4 (--$SAFE_DELETE@VCD2DTarget@@@@YAXAEAPEAVCD2DTarget@@@Z.c)
 *     ?FlushD2DInternal@CD2DContext@@AEAAJXZ @ 0x1801FD688 (-FlushD2DInternal@CD2DContext@@AEAAJXZ.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x180250164 (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ?NotifyEndFrame@CRenderPerf@@QEAAXXZ @ 0x180265794 (-NotifyEndFrame@CRenderPerf@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::EndFrame(CD3DDevice **this)
{
  int v2; // esi
  __int64 v3; // rdx
  __int64 v4; // r8
  CD3DDevice *v5; // rcx
  CMILRefCountImpl *v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // r8
  int v10; // eax
  ULONGLONG v11; // r14
  __int64 v12; // rdx
  CD3DDevice *v13; // rax
  int v14; // r15d
  char v15; // zf
  const struct DrawingContextFlags *v16; // rdx
  void (__fastcall *v17)(CDrawingContext *, const struct DrawingContextFlags *, char); // rax
  CDrawingContext *v18; // rcx
  __int64 v19; // r8
  _BYTE *v20; // rcx
  bool (__fastcall *v21)(CDeviceTextureTarget *__hidden); // rdx
  bool (__fastcall *v22)(CDeviceTextureTarget *__hidden); // rax
  char v23; // al
  int v24; // eax
  int v25; // r14d
  CD3DDevice *v26; // rcx
  int v27; // eax
  __int64 v28; // r15
  unsigned int (__fastcall *v29)(CMILRefCountImpl *__hidden); // rax
  __int64 v30; // r8
  __int64 v31; // rdx
  struct IMonitorTarget *MonitorTarget; // rax
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  int Ptr; // r9d
  int (__fastcall ***v37)(_QWORD, GUID *, struct _EVENT_DATA_DESCRIPTOR *); // rax
  int (__fastcall ***v38)(_QWORD, GUID *, struct _EVENT_DATA_DESCRIPTOR *); // rcx
  int (__fastcall **v39)(_QWORD, GUID *, struct _EVENT_DATA_DESCRIPTOR *); // rax
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+30h] [rbp-48h] BYREF

  v2 = 0;
  CDrawingContext::PopAllStacks((CDrawingContext *)this);
  if ( !this[4] )
    goto LABEL_2;
  v7 = 0LL;
  v8 = (__int64)this[5] + 16;
  CD2DContext::FlushDrawList((CD2DContext *)v8, v3, v4);
  v10 = *(_DWORD *)(v8 + 352);
  v11 = 0LL;
  v12 = (unsigned int)(v10 - 1);
  if ( v10 )
    v11 = *(_QWORD *)(*(_QWORD *)(v8 + 328) + 8 * v12);
  *(_DWORD *)(v8 + 352) = v12;
  v13 = this[3];
  v14 = v12;
  v15 = (_DWORD)v12 == 0;
  v40.Ptr = v11;
  v16 = (const struct DrawingContextFlags *)(v11 + 72);
  LOBYTE(v9) = v15;
  v17 = (void (__fastcall *)(CDrawingContext *, const struct DrawingContextFlags *, char))*((_QWORD *)v13 + 4);
  v18 = (CDrawingContext *)(this + 3);
  if ( v17 == CDrawingContext::RestoreDrawingContextFlags )
    CDrawingContext::RestoreDrawingContextFlags(v18, v16, v15);
  else
    v17(v18, v16, v9);
  v2 = -2003304307;
  if ( v14 )
  {
    v27 = *(_DWORD *)(v8 + 352);
    v28 = 0LL;
    if ( v27 )
      v28 = *(_QWORD *)(*(_QWORD *)(v8 + 328) + 8LL * (unsigned int)(v27 - 1));
    v7 = *(CMILRefCountImpl **)(v28 + 24);
    v29 = *(unsigned int (__fastcall **)(CMILRefCountImpl *__hidden))(*(_QWORD *)v7 + 8LL);
    if ( v29 == CMILRefCountImpl::AddReference )
      CMILRefCountImpl::AddReference(v7);
    else
      v29(v7);
    if ( *(_BYTE *)(v8 + 437) )
    {
      if ( !*(_BYTE *)(v28 + 78) )
      {
        v30 = *(_QWORD *)(v28 + 40);
        v31 = *(_QWORD *)(v28 + 32);
        *(_QWORD *)(v28 + 16) = v8;
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(v8 + 208) + 56LL))(
          *(_QWORD *)(v8 + 208),
          v31,
          v30);
        *(_BYTE *)(v28 + 78) = 1;
        CD2DTarget::ApplyCurrentClip((CD2DTarget *)v28);
      }
      if ( *(_BYTE *)(v11 + 80) )
      {
        if ( *(_BYTE *)(v11 + 79) )
        {
          v35 = CD2DContext::FlushD2DInternal((CD2DContext *)v8);
          if ( v35 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v35, 0x2DFu, 0LL);
        }
        else
        {
          *(_BYTE *)(v28 + 80) = 1;
        }
      }
    }
    if ( *(_DWORD *)(v8 + 1096) )
    {
      v25 = -2003304307;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304307, 0x2E8u, 0LL);
    }
    else
    {
      v25 = 0;
    }
    SAFE_DELETE<CD2DTarget>(&v40);
  }
  else
  {
    if ( *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 32LL) - *(_QWORD *)(*((_QWORD *)g_pComposition + 77) + 24LL) == 8LL
      && ((v20 = *(_BYTE **)(v11 + 24),
           v21 = CDeviceTextureTarget::IsDisplayTarget,
           v22 = *(bool (__fastcall **)(CDeviceTextureTarget *__hidden))(*(_QWORD *)v20 + 128LL),
           v22 != CDeviceTextureTarget::IsDisplayTarget)
        ? (v23 = ((__int64 (*)(void))v22)())
        : (v23 = v20[33]),
          v23) )
    {
      *(_QWORD *)(v8 + 424) = v11;
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(v8 + 208) + 56LL))(*(_QWORD *)(v8 + 208), 0LL, 0LL);
      SAFE_DELETE<CD2DTarget>(&v40);
    }
    v24 = CD2DContext::EndDraw((CD2DContext *)v8, (__int64)v21, v19);
    v25 = v24;
    if ( v24 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v24, 0x2FEu, 0LL);
  }
  if ( *(_DWORD *)(v8 + 1096)
    || v25 != -2005532292 && v25 != -2147024882 && v25 != -2005270523
    || !*(_DWORD *)(v8 + 432) )
  {
    goto LABEL_26;
  }
  if ( v25 != -2005270523 )
  {
LABEL_56:
    CD2DContext::TempDisableHardwareProtection((CD2DContext *)v8);
    goto LABEL_26;
  }
  v33 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 536) + 312LL))(*(_QWORD *)(v8 + 536));
  v34 = *(_DWORD *)(v8 + 1096);
  if ( v33 == -2005270480 )
  {
    if ( v34 )
      goto LABEL_56;
    *(_DWORD *)(v8 + 1096) = -2005270480;
    CD2DContext::TempDisableHardwareProtection((CD2DContext *)v8);
LABEL_26:
    if ( v25 >= 0 )
      goto LABEL_27;
    goto LABEL_57;
  }
  if ( !v34 )
    *(_DWORD *)(v8 + 1096) = -2005270523;
LABEL_57:
  if ( *(_DWORD *)(v8 + 1096) )
  {
LABEL_29:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0xC4u, 0LL);
    goto LABEL_30;
  }
LABEL_27:
  LODWORD(v40.Ptr) = 0;
  if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v25, 0LL, &v40) )
  {
    Ptr = v40.Ptr;
    if ( LODWORD(v40.Ptr) == -2003304307 )
    {
      if ( v25 >= 0 )
        v25 = -2003304307;
      if ( !*(_DWORD *)(v8 + 1096) )
        *(_DWORD *)(v8 + 1096) = v25;
    }
    v25 = Ptr;
    if ( Ptr < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, Ptr, 0xB31u, 0LL);
  }
  v2 = v25;
  if ( v25 < 0 )
    goto LABEL_29;
LABEL_30:
  if ( g_LockAndReadD2DTarget )
    (*(void (__fastcall **)(CD3DDevice *, char *))(*(_QWORD *)this[4] + 112LL))(this[4], (char *)this + 24);
  v26 = this[4];
  this[4] = 0LL;
  if ( v26 )
    (*(void (__fastcall **)(CD3DDevice *))(*(_QWORD *)v26 + 16LL))(v26);
  *((_BYTE *)this + 8065) = 1;
  if ( v7 )
    (*(void (__fastcall **)(CMILRefCountImpl *))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x15Au, 0LL);
    goto LABEL_3;
  }
LABEL_2:
  if ( *(_DWORD *)this[999] )
  {
    MonitorTarget = CDrawingContext::GetMonitorTarget((CDrawingContext *)this);
    if ( MonitorTarget )
    {
      v37 = (int (__fastcall ***)(_QWORD, GUID *, struct _EVENT_DATA_DESCRIPTOR *))(*(__int64 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)MonitorTarget + 224LL))(MonitorTarget);
      v38 = v37;
      if ( v37 )
      {
        v39 = *v37;
        v40.Ptr = 0LL;
        if ( (*v39)(v38, &GUID_78f95c0d_ffd7_47bf_b918_8d28789a139f, &v40) >= 0 )
          (*(void (__fastcall **)(ULONGLONG, char *))(*(_QWORD *)v40.Ptr + 104LL))(v40.Ptr, (char *)this + 7992);
        if ( v40.Ptr )
          (*(void (__fastcall **)(ULONGLONG))(*(_QWORD *)v40.Ptr + 16LL))(v40.Ptr);
      }
    }
    *(_DWORD *)this[999] = 0;
  }
LABEL_3:
  if ( (Microsoft_Windows_Dwm_CompositorEnableBits & 2) != 0 )
    CRenderPerf::NotifyEndFrame((CGlobalComposition *)((char *)g_pComposition + 16));
  v5 = this[5];
  this[5] = 0LL;
  if ( v5 )
    CD3DDevice::Release(v5);
  this[6] = 0LL;
  this[413] = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x2000) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWING_CONTEXT_FRAME_Stop,
      v4,
      1u,
      &v40);
  return (unsigned int)v2;
}
