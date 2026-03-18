/*
 * XREFs of ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180053B90
 * Callers:
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180053590 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?SetClip@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180054820 (-SetClip@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z @ 0x180055080 (-PushTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAVIDeviceTarget@@@Z.c)
 *     ?PopTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z @ 0x180055720 (-PopTarget@CD2DContext@@UEAAJPEAVID2DContextOwner@@PEAPEAVIDeviceTarget@@@Z.c)
 *     ?PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180056180 (-PopRenderTargetInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x180056D30 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?FillShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800CE290 (-FillShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANT.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x1800CEC00 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x1800F5FD0 (-FillEffect@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POI.c)
 *     ?PushLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800F9DF0 (-PushLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MA.c)
 *     ?PopLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@@Z @ 0x1800F9FC0 (-PopLayer@CD2DContext@@UEAAXPEBVID2DContextOwner@@@Z.c)
 *     ?RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800FA500 (-RestoreState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800FA800 (-ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x1800FC580 (-Clear@CDrawingContext@@UEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800FD720 (-DrawShape@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@MPEAUID2D1.c)
 *     ?EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18010A010 (-EnsureDrawListBatch@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18013F440 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?Clear@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z @ 0x1801DC010 (-Clear@CD2DContext@@UEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z @ 0x1801FD630 (-FlushD2D@CD2DContext@@UEAAJPEBVID2DContextOwner@@@Z.c)
 *     ?DrawGenericInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUIDCompositionDirectInkWetStrokePartner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@M_N@Z @ 0x18020D4F0 (-DrawGenericInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUIDCompositionDirectInkWetStrokePartn.c)
 *     ?DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMILMatrix@@@Z @ 0x18026494C (-DrawScene3D@CDrawingContext@@QEAAJPEAUISpectreWorld@@PEAVCCompositionEnvironmentLight@@AEBVCMIL.c)
 *     ?DrawImage@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_POINT_2F@@@Z @ 0x1802BB7B0 (-DrawImage@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_POINT_2F@@@Z.c)
 *     ?DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1802BB810 (-DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkS.c)
 *     ?DrawTextW@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@W4D2D1_DRAW_TEXT_OPTIONS@@W4DWRITE_MEASURING_MODE@@@Z @ 0x1802BB8D0 (-DrawTextW@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@A.c)
 *     ?DrawYCbCrBitmap@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEBUD2D_RECT_F@@MW4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x1802BB9B0 (-DrawYCbCrBitmap@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_.c)
 *     ?FillRectangleWithSolidColor@CD2DContext@@UEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1802BBCC0 (-FillRectangleWithSolidColor@CD2DContext@@UEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOL.c)
 *     ?FillRectangles@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUD2D_RECT_F@@IPEAUID2D1Brush@@AEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@U_CMILSurfaceRect_@RectUniqueness@@UNotNeeded@4@@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1802BBF10 (-FillRectangles@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEBUD2D_RECT_F@@IPEAUID2D1Brush@@AEBV-$T.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?FlushBottomLayer@CBatchOptimizer@@AEAAXXZ @ 0x180054000 (-FlushBottomLayer@CBatchOptimizer@@AEAAXXZ.c)
 *     ?TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ @ 0x180054AF0 (-TryMergeOneLayer@CBatchOptimizer@@AEAA_NXZ.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x1800FABC0 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     ?DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z @ 0x180188864 (-DiscardEmptyLayers@CBatchOptimizer@@AEAAXHI@Z.c)
 *     ??1CDrawListEntryBatch@@EEAA@XZ @ 0x1801B1A68 (--1CDrawListEntryBatch@@EEAA@XZ.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180249CC0 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CD2DContext::FlushDrawList(CD2DContext *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rbp
  int v6; // eax
  __int64 v7; // r9
  int v8; // eax
  int v9; // r10d
  _DWORD *v10; // rdx
  __int64 v12; // rcx
  volatile signed __int32 *v13; // rdi
  volatile signed __int32 *v15; // rbx
  __int64 v16; // rcx
  int v17; // edi
  int v18; // edi
  void *(__fastcall *v19)(CDrawListEntryBatch *__hidden, unsigned int); // rax
  __int64 v20; // r8
  unsigned int i; // r14d
  __int64 v22; // rdi
  __int64 v23; // r8
  __int64 v24; // rdx
  int v25; // [rsp+20h] [rbp-B8h]
  int v26; // [rsp+30h] [rbp-A8h] BYREF
  int v27; // [rsp+38h] [rbp-A0h] BYREF
  int v28; // [rsp+40h] [rbp-98h] BYREF
  int v29; // [rsp+48h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v30; // [rsp+50h] [rbp-88h] BYREF
  int *v31; // [rsp+60h] [rbp-78h]
  __int64 v32; // [rsp+68h] [rbp-70h]
  int *v33; // [rsp+70h] [rbp-68h]
  __int64 v34; // [rsp+78h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR v35; // [rsp+80h] [rbp-58h] BYREF
  int *v36; // [rsp+90h] [rbp-48h]
  __int64 v37; // [rsp+98h] [rbp-40h]
  int *v38; // [rsp+A0h] [rbp-38h]
  __int64 v39; // [rsp+A8h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  if ( *((_QWORD *)this + 17) )
  {
    v4 = *((_QWORD *)this + 18);
    v5 = 0LL;
    if ( v4 )
    {
      while ( *(_BYTE *)(v4 + 4240) )
      {
        if ( *(_DWORD *)(v4 + 32) <= 1u )
          break;
        CBatchOptimizer::TryMergeOneLayer((CBatchOptimizer *)v4);
      }
      v6 = *(_DWORD *)(v4 + 32);
      if ( v6 )
      {
        while ( !*(_DWORD *)(520LL * *(int *)(v4 + 4LL * (v6 - 1) + 48) + v4 + 100) )
        {
          CBatchOptimizer::DiscardEmptyLayers((CBatchOptimizer *)v4, v6 - 1, 1u);
          v6 = *(_DWORD *)(v4 + 32);
          if ( !v6 )
            goto LABEL_12;
        }
        do
        {
          CBatchOptimizer::FlushBottomLayer((CBatchOptimizer *)v4);
          v7 = 0LL;
          v8 = *(_DWORD *)(v4 + 32) - 1;
          if ( *(_DWORD *)(v4 + 32) != 1 )
          {
            v9 = *(_DWORD *)(v4 + 48);
            v10 = (_DWORD *)(v4 + 48);
            a3 = v8;
            do
            {
              ++v7;
              *v10 = v10[1];
              ++v10;
            }
            while ( v7 != v8 );
            *(_DWORD *)(v4 + 4LL * v8 + 48) = v9;
          }
        }
        while ( (*(_DWORD *)(v4 + 32))-- != 1 );
      }
LABEL_12:
      *(_BYTE *)(v4 + 4240) = 0;
      *(_OWORD *)(v4 + 16) = SharedStateLayer::StateBlock::kBlank;
      *(_DWORD *)(v4 + 48) = 0;
      *(_DWORD *)(v4 + 52) = 1;
      *(_DWORD *)(v4 + 56) = 2;
      *(_DWORD *)(v4 + 60) = 3;
      *(_DWORD *)(v4 + 64) = 4;
      *(_DWORD *)(v4 + 68) = 5;
      *(_DWORD *)(v4 + 72) = 6;
      *(_DWORD *)(v4 + 76) = 7;
    }
    v12 = *((_QWORD *)this + 17);
    *(_DWORD *)(v12 + 44) = *((_DWORD *)this + 8);
    *(_QWORD *)(v12 + 32) = 0LL;
    v13 = (volatile signed __int32 *)*((_QWORD *)this + 17);
    *((_QWORD *)this + 17) = 0LL;
    if ( v13 )
    {
      v15 = v13;
      if ( !*((_BYTE *)this + 437) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        {
          v27 = 0;
          v31 = &v26;
          v26 = 16;
          v33 = &v27;
          v32 = 4LL;
          v34 = 4LL;
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            (const EVENT_DESCRIPTOR *)"1",
            a3,
            3u,
            &v30);
        }
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 25) + 384LL))(*((_QWORD *)this + 25));
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
        {
          v29 = 0;
          v36 = &v28;
          v28 = 16;
          v38 = &v29;
          v37 = 4LL;
          v39 = 4LL;
          McGenEventWrite_EventWriteTransfer(
            &Microsoft_Windows_Dwm_Core_Provider_Context,
            &EVTDESC_ETWGUID_DRAWEVENT_Stop,
            v20,
            3u,
            &v35);
        }
        for ( i = 0; i < *((_DWORD *)this + 88); v5 = v22 )
        {
          v22 = *(_QWORD *)(*((_QWORD *)this + 41) + 8LL * i);
          if ( v5 )
            *(_BYTE *)(v5 + 78) = 0;
          if ( !*(_BYTE *)(v22 + 78) )
          {
            v23 = *(_QWORD *)(v22 + 40);
            v24 = *(_QWORD *)(v22 + 32);
            *(_QWORD *)(v22 + 16) = this;
            (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 26) + 56LL))(
              *((_QWORD *)this + 26),
              v24,
              v23);
            *(_BYTE *)(v22 + 78) = 1;
            CD2DTarget::ApplyCurrentClip((CD2DTarget *)v22);
          }
          ++i;
        }
        *((_BYTE *)this + 437) = 1;
      }
      v16 = *((_QWORD *)this + 26);
      *((_BYTE *)this + 438) = 1;
      (*(void (__fastcall **)(__int64, volatile signed __int32 *))(*(_QWORD *)v16 + 120LL))(v16, v15);
      v17 = _InterlockedDecrement(v15 + 2);
      if ( v17 < -1 )
        wil::details::in1diag3::Log_Hr(
          retaddr,
          (void *)0x26,
          (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
          (const char *)0x8007029CLL,
          v25);
      if ( !v17 )
      {
        if ( _InterlockedAdd(v15 + 2, 1u) <= 0 )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x18,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v25);
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 40LL))(v15);
        v18 = _InterlockedDecrement(v15 + 2);
        if ( v18 < -1 )
          wil::details::in1diag3::Log_Hr(
            retaddr,
            (void *)0x26,
            (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
            (const char *)0x8007029CLL,
            v25);
        if ( !v18 )
        {
          if ( _InterlockedDecrement(v15 + 2) < -1 )
            wil::details::in1diag3::Log_Hr(
              retaddr,
              (void *)0x26,
              (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
              (const char *)0x8007029CLL,
              v25);
          v19 = *(void *(__fastcall **)(CDrawListEntryBatch *__hidden, unsigned int))(*(_QWORD *)v15 + 32LL);
          if ( v19 == CDrawListEntryBatch::`scalar deleting destructor' )
          {
            CDrawListEntryBatch::~CDrawListEntryBatch((CDrawListEntryBatch *)v15);
            operator delete((void *)v15, 0xB8uLL);
          }
          else
          {
            v19((CDrawListEntryBatch *)v15, 1u);
          }
        }
      }
    }
  }
  return 0LL;
}
