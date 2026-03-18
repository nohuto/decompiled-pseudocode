/*
 * XREFs of ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x1800876E0
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180013240 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?GetCurrentZ@CDrawingContext@@UEBAHXZ @ 0x18002B3F0 (-GetCurrentZ@CDrawingContext@@UEBAHXZ.c)
 *     ?DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@@Z @ 0x180082100 (-DoesCpuClipFullyContainRect@CDrawingContext@@QEBA_NAEBV-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@.c)
 *     ?PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180084CA0 (-PushClippingScope@CDrawingContext@@AEAAJPEBVCVisual@@_N1PEBVCMILMatrix@@PEAV-$TMilRect_@MUD2D_R.c)
 *     ?GetWorldTransform3x2@CDrawingContext@@UEBAXPEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800873A0 (-GetWorldTransform3x2@CDrawingContext@@UEBAXPEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180087450 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800896E0 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNo.c)
 *     ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180089900 (-GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800A45E0 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     McGenEventWrite_EventWriteTransfer @ 0x1800B1240 (McGenEventWrite_EventWriteTransfer.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x1800D5FE0 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800D65E0 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800DC130 (-PushGpuClipRectInternal@CDrawingContext@@AEAAJPEBVCVisual@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_R.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18010B800 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?pop_back@?$vector_facade@UClippingScopeState@CScopedClipStack@@V?$buffer_impl@UClippingScopeState@CScopedClipStack@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x180114CC0 (-pop_back@-$vector_facade@UClippingScopeState@CScopedClipStack@@V-$buffer_impl@UClippingScopeSta.c)
 *     ?PopClippingScope@CDrawingContext@@AEAAX_N@Z @ 0x180114E40 (-PopClippingScope@CDrawingContext@@AEAAX_N@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::FillShapeWithBrush(
        CDrawingContext *this,
        const struct CShape *a2,
        struct ID2D1Brush *a3)
{
  int (*v4)(CPathSegmentsShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int v7; // r15d
  CDrawingContext *v8; // rbx
  int D2DGeometry; // eax
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 (__fastcall *v12)(CDrawingContext *__hidden); // rax
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // edi
  __int64 v16; // r14
  unsigned int v17; // r12d
  CDrawingContext *v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // r8
  void (__fastcall **v21)(CDrawingContext *, struct D2D_MATRIX_3X2_F *); // rax
  void (__fastcall *v22)(CDrawingContext *, struct D2D_MATRIX_3X2_F *); // rax
  BOOLEAN v23; // al
  __int64 v24; // r12
  __int64 (__fastcall *v26)(CDrawingContext *); // rax
  int CurrentZ; // eax
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // rax
  int v31; // eax
  __int64 v32; // r8
  __int64 (__fastcall *v33)(CDrawingContext *); // rax
  int v34; // eax
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 (__fastcall *v37)(CPolygonShape *); // rax
  int TightBounds; // eax
  const struct CMILMatrix *TopByReference; // rax
  const struct CMILMatrix *v40; // rax
  int v41; // ebx
  unsigned int v42; // eax
  int v43; // ecx
  struct ID2D1Geometry *v44; // [rsp+38h] [rbp-D0h] BYREF
  int v45; // [rsp+40h] [rbp-C8h] BYREF
  int v46; // [rsp+48h] [rbp-C0h] BYREF
  int v47; // [rsp+50h] [rbp-B8h] BYREF
  int v48; // [rsp+58h] [rbp-B0h] BYREF
  int v49; // [rsp+60h] [rbp-A8h] BYREF
  int v50; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v51[3]; // [rsp+70h] [rbp-98h] BYREF
  struct D2D_MATRIX_3X2_F v52; // [rsp+88h] [rbp-80h] BYREF
  __int128 v53; // [rsp+A0h] [rbp-68h] BYREF
  struct D2D_MATRIX_3X2_F v54; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v55[16]; // [rsp+C8h] [rbp-40h] BYREF
  int *v56; // [rsp+D8h] [rbp-30h]
  __int64 v57; // [rsp+E0h] [rbp-28h]
  int *v58; // [rsp+E8h] [rbp-20h]
  __int64 v59; // [rsp+F0h] [rbp-18h]
  int *v60; // [rsp+F8h] [rbp-10h]
  __int64 v61; // [rsp+100h] [rbp-8h]
  int *v62; // [rsp+108h] [rbp+0h]
  __int64 v63; // [rsp+110h] [rbp+8h]
  _BYTE v64[16]; // [rsp+118h] [rbp+10h] BYREF
  int *v65; // [rsp+128h] [rbp+20h]
  __int64 v66; // [rsp+130h] [rbp+28h]
  int *v67; // [rsp+138h] [rbp+30h]
  __int64 v68; // [rsp+140h] [rbp+38h]
  _BYTE v69[16]; // [rsp+148h] [rbp+40h] BYREF
  _QWORD *v70; // [rsp+158h] [rbp+50h]
  __int64 v71; // [rsp+160h] [rbp+58h]
  _QWORD *v72; // [rsp+168h] [rbp+60h]
  __int64 v73; // [rsp+170h] [rbp+68h]

  v4 = *(int (**)(CPathSegmentsShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)a2 + 24LL);
  v7 = 0;
  v44 = 0LL;
  v8 = 0LL;
  if ( v4 == CPathSegmentsShape::GetD2DGeometry )
  {
    D2DGeometry = CPathSegmentsShape::GetD2DGeometry(a2, 0LL, &v44);
  }
  else if ( (char *)v4 == (char *)CRoundedRectangleShape::GetD2DGeometry )
  {
    D2DGeometry = CRoundedRectangleShape::GetD2DGeometry(a2, 0LL, &v44);
  }
  else
  {
    D2DGeometry = ((__int64 (__fastcall *)(const struct CShape *, _QWORD, struct ID2D1Geometry **))v4)(a2, 0LL, &v44);
  }
  v10 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DGeometry, 0xA4Eu, 0LL);
    goto LABEL_21;
  }
  v11 = *((_QWORD *)this + 94);
  if ( v11 != *((_QWORD *)this + 93) && *(_QWORD *)(v11 - 160) )
  {
    v36 = *(_QWORD *)a2;
    *(_OWORD *)&v51[1] = 0LL;
    v37 = *(__int64 (__fastcall **)(CPolygonShape *))(v36 + 48);
    if ( v37 == CShape::GetTightBounds )
      TightBounds = CShape::GetTightBounds(a2);
    else
      TightBounds = ((__int64 (__fastcall *)(const struct CShape *, _QWORD *, _QWORD))v37)(a2, &v51[1], 0LL);
    v10 = TightBounds;
    if ( TightBounds < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, TightBounds, 0xA55u, 0LL);
      goto LABEL_21;
    }
    *(_QWORD *)&v52.m[2][0] = 0LL;
    *(_OWORD *)&v52.m11 = *(_OWORD *)&v51[1];
    TopByReference = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 288));
    if ( CDrawingContext::DoesCpuClipFullyContainRect((__int64)this, (__int64)&v52, (__int64)TopByReference) )
    {
      v53 = 0LL;
      v40 = CMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 288));
      v41 = CDrawingContext::PushClippingScope(this, 0LL, 1, 1u, (__int64)v40, (float *)&v53);
      v10 = v41;
      if ( v41 < 0 )
      {
        v42 = 6686;
      }
      else
      {
        v41 = CDrawingContext::PushGpuClipRectInternal((_DWORD)this, 0, (unsigned int)&v53, 0, 1);
        v10 = v41;
        if ( v41 >= 0 )
        {
          v8 = this;
          goto LABEL_6;
        }
        CDrawingContext::PopClippingScope(this, 0);
        v42 = 6699;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, v42, 0LL);
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v41, 0xA57u, 0LL);
      goto LABEL_21;
    }
  }
LABEL_6:
  v12 = *(__int64 (__fastcall **)(CDrawingContext *__hidden))(*((_QWORD *)this + 2) + 112LL);
  if ( v12 == CDrawingContext::ApplyRenderState )
    v13 = CDrawingContext::ApplyRenderStateInternal(this, 0);
  else
    v13 = v12((CDrawingContext *)((char *)this + 16));
  v10 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xA5Au, 0LL);
    goto LABEL_20;
  }
  v14 = *((_DWORD *)this + 62);
  v15 = 0;
  v16 = *((_QWORD *)this + 5);
  if ( v14 )
  {
    v43 = v14 - 1;
    if ( v43 )
    {
      if ( v43 == 3 )
        v15 = 2;
    }
    else
    {
      v15 = 1;
    }
  }
  v17 = *((_DWORD *)this + 61) != 0;
  v51[1] = v44;
  v18 = (CDrawingContext *)((char *)this + 24);
  CD2DContext::FlushDrawList((CD2DContext *)(v16 + 16));
  CD2DContext::EnsureBeginDraw((CD2DContext *)(v16 + 16), v19, v20);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
  {
    v26 = *(__int64 (__fastcall **)(CDrawingContext *))(*(_QWORD *)v18 + 8LL);
    if ( v26 == CDrawingContext::GetCurrentZ )
      CurrentZ = CDrawingContext::GetCurrentZ(v18);
    else
      CurrentZ = v26(v18);
    v46 = CurrentZ;
    v45 = 3;
    v65 = &v45;
    v66 = 4LL;
    v67 = &v46;
    v68 = 4LL;
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_ETWGUID_DRAWEVENT_Start,
      v28,
      3LL,
      v64);
  }
  v21 = *(void (__fastcall ***)(CDrawingContext *, struct D2D_MATRIX_3X2_F *))v18;
  memset(&v52, 0, sizeof(v52));
  v22 = *v21;
  if ( v22 == CDrawingContext::GetWorldTransform3x2 )
    CDrawingContext::GetWorldTransform3x2(v18, &v52);
  else
    v22(v18, &v52);
  (*(void (__fastcall **)(_QWORD, struct D2D_MATRIX_3X2_F *))(**(_QWORD **)(v16 + 216) + 240LL))(
    *(_QWORD *)(v16 + 216),
    &v52);
  if ( v15 != *(_DWORD *)(v16 + 412) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v16 + 216) + 624LL))(*(_QWORD *)(v16 + 216), v15);
    *(_DWORD *)(v16 + 412) = v15;
  }
  if ( v17 != *(_DWORD *)(v16 + 408) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v16 + 216) + 256LL))(*(_QWORD *)(v16 + 216), v17);
    *(_DWORD *)(v16 + 408) = v17;
  }
  v54 = v52;
  v23 = EventEnabled(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_ETWGUID_DRAWEVENT);
  v24 = v51[1];
  if ( !v23 )
    goto LABEL_18;
  v30 = *(_QWORD *)v51[1];
  v53 = 0LL;
  v31 = (*(__int64 (__fastcall **)(_QWORD, struct D2D_MATRIX_3X2_F *, __int128 *))(v30 + 32))(v51[1], &v54, &v53);
  v7 = v31;
  v10 = v31;
  if ( v31 >= 0 )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v56 = &v47;
      v50 = HIDWORD(v53);
      v58 = &v48;
      v60 = &v49;
      v62 = &v50;
      v49 = DWORD2(v53);
      v48 = DWORD1(v53);
      v47 = v53;
      v57 = 4LL;
      v59 = 4LL;
      v61 = 4LL;
      v63 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT,
        v32,
        5LL,
        v55);
    }
LABEL_18:
    (*(void (__fastcall **)(_QWORD, __int64, struct ID2D1Brush *, _QWORD))(**(_QWORD **)(v16 + 216) + 184LL))(
      *(_QWORD *)(v16 + 216),
      v24,
      a3,
      0LL);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    {
      v33 = *(__int64 (__fastcall **)(CDrawingContext *))(*(_QWORD *)v18 + 8LL);
      if ( v33 == CDrawingContext::GetCurrentZ )
        v34 = CDrawingContext::GetCurrentZ(v18);
      else
        v34 = v33(v18);
      LODWORD(v51[1]) = v34;
      LODWORD(v51[0]) = 3;
      v70 = v51;
      v71 = 4LL;
      v72 = &v51[1];
      v73 = 4LL;
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_ETWGUID_DRAWEVENT_Stop,
        v35,
        3LL,
        v69);
    }
    v10 = v7;
    if ( v7 >= 0 )
      goto LABEL_20;
    goto LABEL_60;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v31, 0x410u, 0LL);
LABEL_60:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xA60u, 0LL);
LABEL_20:
  if ( v8 )
  {
    v29 = *((_DWORD *)v8 + 780);
    if ( v29 )
      *((_DWORD *)v8 + 780) = v29 - 1;
    --*(_QWORD *)(*((_QWORD *)v8 + 94) - 184LL);
    *((_BYTE *)v8 + 8065) = 1;
    detail::vector_facade<CScopedClipStack::ClippingScopeState,detail::buffer_impl<CScopedClipStack::ClippingScopeState,10,1,detail::liberal_expansion_policy>>::pop_back((char *)v8 + 744);
  }
LABEL_21:
  if ( v44 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v44 + 16LL))(v44);
  return v10;
}
