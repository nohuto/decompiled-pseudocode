/*
 * XREFs of ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x1800CEC00
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18013F440 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x180040140 (McGenEventWrite_EventWriteTransfer.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180053590 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180053B90 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180072D70 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetWorldTransform3x2@CDrawingContext@@UEBAXPEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800CE620 (-GetWorldTransform3x2@CDrawingContext@@UEBAXPEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x1800CE6D0 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800D0B40 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNo.c)
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800D0D60 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x1800F7180 (-DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800F94F0 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_R.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800FC770 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?pop_back@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1800FDC70 (-pop_back@-$vector_facade@UClippingScopeState@CScopedClipStack@@V-$buffer_impl@UClippingScopeSta.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x1800FDDF0 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18016A440 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?GetCurrentZ@CDrawingContext@@UEBAHXZ @ 0x1801C4270 (-GetCurrentZ@CDrawingContext@@UEBAHXZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithBrush(__m128 *this, const struct CShape *a2, struct ID2D1Brush *a3)
{
  __int64 (__fastcall *v4)(CRoundedRectangleShape *, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int v7; // r15d
  __m128 *v8; // rbx
  int D2DGeometry; // eax
  unsigned int v10; // edi
  unsigned __int64 v11; // rax
  __int64 (__fastcall *v12)(CDrawingContext *__hidden); // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int32 v16; // ecx
  unsigned int v17; // edi
  unsigned __int64 v18; // r14
  unsigned int v19; // r12d
  CDrawingContext *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r8
  void (__fastcall **v23)(CDrawingContext *, struct D2D_MATRIX_3X2_F *); // rax
  void (__fastcall *v24)(CDrawingContext *, struct D2D_MATRIX_3X2_F *); // rax
  BOOLEAN v25; // al
  __int64 v26; // r12
  __int64 (__fastcall *v28)(CDrawingContext *__hidden); // rax
  int CurrentZ; // eax
  __int64 v30; // r8
  __int32 v31; // eax
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // r8
  __int64 (__fastcall *v35)(CDrawingContext *__hidden); // rax
  int v36; // eax
  __int64 v37; // r8
  __int64 v38; // rax
  __int64 (__fastcall *v39)(CPolygonShape *); // rax
  int TightBounds; // eax
  const struct CMILMatrix *TopByReference; // rax
  int v42; // r9d
  int v43; // ebx
  unsigned int v44; // eax
  __int32 v45; // ecx
  struct ID2D1Geometry *v46; // [rsp+38h] [rbp-D0h] BYREF
  int v47; // [rsp+40h] [rbp-C8h] BYREF
  int v48; // [rsp+48h] [rbp-C0h] BYREF
  int v49; // [rsp+50h] [rbp-B8h] BYREF
  int v50; // [rsp+58h] [rbp-B0h] BYREF
  int v51; // [rsp+60h] [rbp-A8h] BYREF
  int v52; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v53[3]; // [rsp+70h] [rbp-98h] BYREF
  struct D2D_MATRIX_3X2_F v54; // [rsp+88h] [rbp-80h] BYREF
  __int128 v55; // [rsp+A0h] [rbp-68h] BYREF
  struct D2D_MATRIX_3X2_F v56; // [rsp+B0h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+C8h] [rbp-40h] BYREF
  int *v58; // [rsp+D8h] [rbp-30h]
  __int64 v59; // [rsp+E0h] [rbp-28h]
  int *v60; // [rsp+E8h] [rbp-20h]
  __int64 v61; // [rsp+F0h] [rbp-18h]
  int *v62; // [rsp+F8h] [rbp-10h]
  __int64 v63; // [rsp+100h] [rbp-8h]
  int *v64; // [rsp+108h] [rbp+0h]
  __int64 v65; // [rsp+110h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR v66; // [rsp+118h] [rbp+10h] BYREF
  int *v67; // [rsp+128h] [rbp+20h]
  __int64 v68; // [rsp+130h] [rbp+28h]
  int *v69; // [rsp+138h] [rbp+30h]
  __int64 v70; // [rsp+140h] [rbp+38h]
  struct _EVENT_DATA_DESCRIPTOR v71; // [rsp+148h] [rbp+40h] BYREF
  _QWORD *v72; // [rsp+158h] [rbp+50h]
  __int64 v73; // [rsp+160h] [rbp+58h]
  _QWORD *v74; // [rsp+168h] [rbp+60h]
  __int64 v75; // [rsp+170h] [rbp+68h]

  v4 = *(__int64 (__fastcall **)(CRoundedRectangleShape *, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)a2 + 24LL);
  v7 = 0;
  v46 = 0LL;
  v8 = 0LL;
  if ( (char *)v4 == (char *)CPathSegmentsShape::GetD2DGeometry )
  {
    D2DGeometry = CPathSegmentsShape::GetD2DGeometry(a2, 0LL, &v46);
  }
  else if ( v4 == CRoundedRectangleShape::GetD2DGeometry )
  {
    D2DGeometry = CRoundedRectangleShape::GetD2DGeometry(a2, 0LL, &v46);
  }
  else
  {
    D2DGeometry = v4(a2, 0LL, &v46);
  }
  v10 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, D2DGeometry, 0xA4Eu, 0LL);
    goto LABEL_21;
  }
  v11 = this[47].m128_u64[0];
  if ( v11 != this[46].m128_u64[1] && *(_QWORD *)(v11 - 160) )
  {
    v38 = *(_QWORD *)a2;
    *(_OWORD *)&v53[1] = 0LL;
    v39 = *(__int64 (__fastcall **)(CPolygonShape *))(v38 + 48);
    if ( v39 == CShape::GetTightBounds )
      TightBounds = CShape::GetTightBounds(a2);
    else
      TightBounds = ((__int64 (__fastcall *)(const struct CShape *, _QWORD *, _QWORD))v39)(a2, &v53[1], 0LL);
    v10 = TightBounds;
    if ( TightBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, TightBounds, 0xA55u, 0LL);
      goto LABEL_21;
    }
    *(_QWORD *)&v54.m[2][0] = 0LL;
    *(_OWORD *)&v54.m11 = *(_OWORD *)&v53[1];
    CMatrixStack::GetTopByReference((CMatrixStack *)&this[18]);
    if ( (unsigned __int8)CDrawingContext::DoesCpuClipFullyContainRect(this, &v54) )
    {
      v55 = 0LL;
      TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)&this[18]);
      LOBYTE(v42) = 1;
      v43 = CDrawingContext::PushClippingScope((_DWORD)this, 0, 1, v42, (__int64)TopByReference, (__int64)&v55);
      v10 = v43;
      if ( v43 < 0 )
      {
        v44 = 6726;
      }
      else
      {
        v43 = CDrawingContext::PushGpuClipRectInternal((_DWORD)this, 0, (unsigned int)&v55, 0, 1);
        v10 = v43;
        if ( v43 >= 0 )
        {
          v8 = this;
          goto LABEL_6;
        }
        CDrawingContext::PopClippingScope((CDrawingContext *)this, 0);
        v44 = 6739;
      }
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v44, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v43, 0xA57u, 0LL);
      goto LABEL_21;
    }
  }
LABEL_6:
  v12 = *(__int64 (__fastcall **)(CDrawingContext *__hidden))(this[1].m128_u64[0] + 112);
  if ( v12 == CDrawingContext::ApplyRenderState )
    v13 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  else
    v13 = v12((CDrawingContext *)&this[1]);
  v10 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v13, 0xA5Au, 0LL);
    goto LABEL_20;
  }
  v16 = this[15].m128_i32[2];
  v17 = 0;
  v18 = this[2].m128_u64[1];
  if ( v16 )
  {
    v45 = v16 - 1;
    if ( v45 )
    {
      if ( v45 == 3 )
        v17 = 2;
    }
    else
    {
      v17 = 1;
    }
  }
  v19 = this[15].m128_i32[1] != 0;
  v53[1] = v46;
  v20 = (CDrawingContext *)&this[1].m128_u16[4];
  CD2DContext::FlushDrawList((CD2DContext *)(v18 + 16), v14, v15);
  CD2DContext::EnsureBeginDraw((CD2DContext *)(v18 + 16), v21, v22);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v28 = *(__int64 (__fastcall **)(CDrawingContext *__hidden))(*(_QWORD *)v20 + 8LL);
    if ( v28 == CDrawingContext::GetCurrentZ )
      CurrentZ = CDrawingContext::GetCurrentZ(v20);
    else
      CurrentZ = v28(v20);
    v48 = CurrentZ;
    v47 = 3;
    v67 = &v47;
    v68 = 4LL;
    v69 = &v48;
    v70 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      (const EVENT_DESCRIPTOR *)"1",
      v30,
      3u,
      &v66);
  }
  v23 = *(void (__fastcall ***)(CDrawingContext *, struct D2D_MATRIX_3X2_F *))v20;
  memset(&v54, 0, sizeof(v54));
  v24 = *v23;
  if ( v24 == CDrawingContext::GetWorldTransform3x2 )
    CDrawingContext::GetWorldTransform3x2(v20, &v54);
  else
    v24(v20, &v54);
  (*(void (__fastcall **)(_QWORD, struct D2D_MATRIX_3X2_F *))(**(_QWORD **)(v18 + 216) + 240LL))(
    *(_QWORD *)(v18 + 216),
    &v54);
  if ( v17 != *(_DWORD *)(v18 + 412) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v18 + 216) + 624LL))(*(_QWORD *)(v18 + 216), v17);
    *(_DWORD *)(v18 + 412) = v17;
  }
  if ( v19 != *(_DWORD *)(v18 + 408) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v18 + 216) + 256LL))(*(_QWORD *)(v18 + 216), v19);
    *(_DWORD *)(v18 + 408) = v19;
  }
  v56 = v54;
  v25 = EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT);
  v26 = v53[1];
  if ( !v25 )
    goto LABEL_18;
  v32 = *(_QWORD *)v53[1];
  v55 = 0LL;
  v33 = (*(__int64 (__fastcall **)(_QWORD, struct D2D_MATRIX_3X2_F *, __int128 *))(v32 + 32))(v53[1], &v56, &v55);
  v7 = v33;
  v10 = v33;
  if ( v33 >= 0 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v58 = &v49;
      v52 = HIDWORD(v55);
      v60 = &v50;
      v62 = &v51;
      v64 = &v52;
      v51 = DWORD2(v55);
      v50 = DWORD1(v55);
      v49 = v55;
      v59 = 4LL;
      v61 = 4LL;
      v63 = 4LL;
      v65 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT,
        v34,
        5u,
        &v57);
    }
LABEL_18:
    (*(void (__fastcall **)(_QWORD, __int64, struct ID2D1Brush *, _QWORD))(**(_QWORD **)(v18 + 216) + 184LL))(
      *(_QWORD *)(v18 + 216),
      v26,
      a3,
      0LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v35 = *(__int64 (__fastcall **)(CDrawingContext *__hidden))(*(_QWORD *)v20 + 8LL);
      if ( v35 == CDrawingContext::GetCurrentZ )
        v36 = CDrawingContext::GetCurrentZ(v20);
      else
        v36 = v35(v20);
      LODWORD(v53[1]) = v36;
      LODWORD(v53[0]) = 3;
      v72 = v53;
      v73 = 4LL;
      v74 = &v53[1];
      v75 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Stop,
        v37,
        3u,
        &v71);
    }
    v10 = v7;
    if ( v7 >= 0 )
      goto LABEL_20;
    goto LABEL_60;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v33, 0x410u, 0LL);
LABEL_60:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, 0xA60u, 0LL);
LABEL_20:
  if ( v8 )
  {
    v31 = v8[195].m128_i32[0];
    if ( v31 )
      v8[195].m128_i32[0] = v31 - 1;
    --*(_QWORD *)(v8[47].m128_u64[0] - 184);
    v8[504].m128_i8[1] = 1;
    detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::pop_back(&v8[46].m128_u16[4]);
  }
LABEL_21:
  if ( v46 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v46 + 16LL))(v46);
  return v10;
}
