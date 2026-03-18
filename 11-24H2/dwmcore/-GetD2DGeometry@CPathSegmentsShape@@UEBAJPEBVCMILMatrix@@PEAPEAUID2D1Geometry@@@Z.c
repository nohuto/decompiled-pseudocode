/*
 * XREFs of ?GetD2DGeometry@CPathSegmentsShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800D0D60
 * Callers:
 *     ?D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x180072BF0 (-D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PE.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800737F0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800C1560 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800CE960 (-FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x1800CEC00 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800D0110 (-GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800D0B40 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNo.c)
 *     ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x1800FD464 (-StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18013F440 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014C84C (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetWidenedBounds@CShape@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18014CC9C (-GetWidenedBounds@CShape@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800454A4 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??4?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1PathGeometry@@@Z @ 0x18007A980 (--4-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@QEAAAEAV012@PEAUID2D1PathGeometry@@@Z.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AA30 (-InternalRelease@-$CMILRefCountBaseT@UIUnknown@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ @ 0x18007AB80 (-InternalRelease@-$CMILRefCountBaseT@VIDeviceResource@@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800956F8 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800B95C0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x180123F98 (-GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z.c)
 *     ??0CTransformedGeometryHelper@@AEAA@PEBVCMILMatrix@@@Z @ 0x1801243BC (--0CTransformedGeometryHelper@@AEAA@PEBVCMILMatrix@@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180124400 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z @ 0x1801AD410 (-PushIntoSink@CPathData@@AEBAJPEAUID2D1GeometrySink@@@Z.c)
 *     ?Attach@?$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z @ 0x1802043E4 (-Attach@-$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPathSegmentsShape::GetD2DGeometry(
        CPathSegmentsShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  __int64 (__fastcall *v3)(struct CMILPoolResource *); // r9
  struct ID2D1Geometry *v4; // rdi
  CCachedVisualImage *v5; // rsi
  int v6; // r14d
  __int64 v8; // r15
  __int64 (__fastcall *v9)(CGlobalDrawingContext *); // rdx
  __int64 (__fastcall *v10)(CCachedVisualImage *, __int64, __int64); // r8
  __int64 *v11; // r12
  CCachedVisualImage *v12; // rbx
  CCachedVisualImage *v13; // rcx
  __int64 (__fastcall *v14)(CCachedVisualImage *, __int64, __int64); // rax
  struct ID2D1Geometry *v15; // rax
  __int64 v17; // rax
  __int64 (__fastcall *v18)(__int64 *, CCachedVisualImage **); // rbx
  int v19; // eax
  CCachedVisualImage *v20; // rbx
  __int64 (__fastcall *v21)(CCachedVisualImage *, struct ID2D1GeometrySink **); // rdi
  int v22; // eax
  int v23; // eax
  int v24; // eax
  struct ID2D1GeometrySink *v25; // rcx
  CTransformedGeometryHelper *v26; // rax
  CTransformedGeometryHelper *v27; // rax
  CTransformedGeometryHelper *v28; // rbx
  int D2DGeometry; // eax
  struct ID2D1GeometrySink *v30; // rcx
  unsigned int v31; // xmm1_4
  int (__fastcall **v32)(CCachedVisualImage *, GUID *, __int64 *); // rax
  int (__fastcall *v33)(CCachedVisualImage *, GUID *, __int64 *); // rax
  unsigned int v34; // xmm0_4
  __int64 v35; // rbx
  void (__fastcall *v36)(__int64, CCachedVisualImage **); // r14
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rcx
  struct ID2D1GeometrySink *v40; // [rsp+38h] [rbp-69h] BYREF
  CCachedVisualImage *v41; // [rsp+40h] [rbp-61h] BYREF
  struct ID2D1Geometry *v42; // [rsp+48h] [rbp-59h] BYREF
  __int64 v43; // [rsp+50h] [rbp-51h] BYREF
  CCachedVisualImage *v44; // [rsp+58h] [rbp-49h] BYREF
  __int64 v45; // [rsp+60h] [rbp-41h] BYREF
  struct ID2D1Geometry **v46; // [rsp+68h] [rbp-39h]
  __int128 v47; // [rsp+70h] [rbp-31h] BYREF
  unsigned __int64 v48; // [rsp+80h] [rbp-21h]
  __int128 v49; // [rsp+88h] [rbp-19h] BYREF
  unsigned __int64 v50; // [rsp+98h] [rbp-9h]
  __int128 v51; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v52; // [rsp+B0h] [rbp+Fh]

  v3 = CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v8 = *((_QWORD *)this + 2);
  v9 = CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease;
  v46 = a3;
  v10 = CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease;
  v41 = 0LL;
  v11 = *(__int64 **)(v8 + 40);
  if ( *(_QWORD *)(v8 + 56) )
  {
    v12 = *(CCachedVisualImage **)(v8 + 56);
    if ( v41 != v12 )
    {
      if ( v12 )
      {
        (*(void (__fastcall **)(_QWORD, __int64 (__fastcall *)(CGlobalDrawingContext *), __int64 (__fastcall *)(CCachedVisualImage *, __int64, __int64), __int64 (__fastcall *)(struct CMILPoolResource *)))(*(_QWORD *)v12 + 8LL))(
          *(_QWORD *)(v8 + 56),
          CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease,
          CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease,
          CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease);
        v9 = CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease;
        v10 = CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease;
        v3 = CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease;
      }
      v41 = v12;
    }
LABEL_6:
    v5 = v41;
    v41 = 0LL;
    goto LABEL_7;
  }
  v17 = *v11;
  v40 = 0LL;
  v18 = *(__int64 (__fastcall **)(__int64 *, CCachedVisualImage **))(v17 + 80);
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(
    &v41,
    (__int64)CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease,
    (__int64)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease);
  v19 = v18(v11, &v41);
  v6 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, 0x67u, 0LL);
  }
  else
  {
    v20 = v41;
    v21 = *(__int64 (__fastcall **)(CCachedVisualImage *, struct ID2D1GeometrySink **))(*(_QWORD *)v41 + 136LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v40);
    v22 = v21(v20, &v40);
    v6 = v22;
    if ( v22 < 0 )
    {
      v4 = 0LL;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x68u, 0LL);
    }
    else
    {
      v23 = CPathData::PushIntoSink((CPathData *)v8, v40);
      v6 = v23;
      if ( v23 < 0 )
      {
        v4 = 0LL;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v23, 0x6Au, 0LL);
      }
      else
      {
        v24 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v40 + 72LL))(v40);
        v6 = v24;
        if ( v24 >= 0 )
        {
          if ( v11 == *(__int64 **)(v8 + 40) )
          {
            if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 56), (signed __int64)v41, 0LL) )
              Microsoft::WRL::ComPtr<ID2D1PathGeometry>::operator=(
                &v41,
                *(CGlobalDrawingContext **)(v8 + 56),
                (__int64)v10);
            else
              (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v8 + 56) + 8LL))(*(_QWORD *)(v8 + 56));
          }
          v25 = v40;
          v4 = 0LL;
          if ( v40 )
          {
            v40 = 0LL;
            (*(void (__fastcall **)(struct ID2D1GeometrySink *, __int64 (__fastcall *)(CGlobalDrawingContext *), __int64 (__fastcall *)(CCachedVisualImage *, __int64, __int64), __int64 (__fastcall *)(struct CMILPoolResource *)))(*(_QWORD *)v25 + 16LL))(
              v25,
              v9,
              v10,
              v3);
          }
          goto LABEL_6;
        }
        v4 = 0LL;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x6Cu, 0LL);
      }
    }
    v30 = v40;
    if ( v40 )
    {
      v40 = 0LL;
      (*(void (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v30 + 16LL))(v30);
    }
  }
LABEL_7:
  v13 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    v14 = *(__int64 (__fastcall **)(CCachedVisualImage *, __int64, __int64))(*(_QWORD *)v13 + 16LL);
    if ( (char *)v14 == (char *)CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease )
    {
      CMILRefCountBaseT<IUnknown,CMilObjectDeleter>::InternalRelease(v13);
    }
    else if ( v14 == CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
    {
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(
        v13,
        (__int64)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease,
        (__int64)v10);
    }
    else if ( (char *)v14 == (char *)CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease )
    {
      CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease(v13);
    }
    else
    {
      ((void (__fastcall *)(CCachedVisualImage *, __int64 (__fastcall *)(struct CMILPoolResource *), __int64 (__fastcall *)(CCachedVisualImage *, __int64, __int64), __int64 (__fastcall *)(struct CMILPoolResource *)))v14)(
        v13,
        CMILRefCountBaseT<IDeviceResource,CMilObjectDeleter>::InternalRelease,
        v10,
        v3);
    }
  }
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x1Au, 0LL);
    goto LABEL_21;
  }
  v42 = 0LL;
  v6 = 0;
  if ( v5 )
  {
    if ( a2 )
    {
      LOBYTE(v9) = 1;
      if ( (unsigned __int8)CMILMatrix::Is2DAffine<1>(a2, v9) )
      {
        v44 = v5;
        wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)&v44);
        v31 = *((_DWORD *)a2 + 1);
        v32 = *(int (__fastcall ***)(CCachedVisualImage *, GUID *, __int64 *))v5;
        LODWORD(v49) = *(_DWORD *)a2;
        *(_QWORD *)((char *)&v49 + 4) = __PAIR64__(*((_DWORD *)a2 + 4), v31);
        v33 = *v32;
        v34 = *((_DWORD *)a2 + 12);
        HIDWORD(v49) = *((_DWORD *)a2 + 5);
        v50 = __PAIR64__(*((_DWORD *)a2 + 13), v34);
        v43 = 0LL;
        if ( v33(v5, &GUID_2cd906bb_12e2_11dc_9fed_001143a055f9, &v43) >= 0 )
        {
          v35 = v43;
          v36 = *(void (__fastcall **)(__int64, CCachedVisualImage **))(*(_QWORD *)v43 + 136LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v44);
          v36(v35, &v44);
          v51 = _xmm;
          v52 = 0LL;
          (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v43 + 144LL))(v43, &v51);
          D2D1::Matrix3x2F::SetProduct(
            (D2D1::Matrix3x2F *)&v47,
            (const struct D2D1::Matrix3x2F *)&v51,
            (const struct D2D1::Matrix3x2F *)&v49);
          v49 = v47;
          v50 = v48;
        }
        v45 = 0LL;
        v37 = (*(__int64 (__fastcall **)(__int64, CCachedVisualImage *, __int128 *, __int64 *))(*(_QWORD *)g_DeviceManager
                                                                                              + 72LL))(
                g_DeviceManager,
                v44,
                &v49,
                &v45);
        v6 = v37;
        if ( v37 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v37, 0x2Eu, 0LL);
          v39 = v43;
          if ( v43 )
          {
            v43 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v44);
          goto LABEL_17;
        }
        Microsoft::WRL::ComPtr<CManipulation>::Attach(&v42, v45);
        v38 = v43;
        if ( v43 )
        {
          v43 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v44);
        v4 = v42;
      }
      else
      {
        v26 = (CTransformedGeometryHelper *)operator new(0x40uLL);
        if ( v26 )
        {
          v27 = CTransformedGeometryHelper::CTransformedGeometryHelper(v26, a2);
          v28 = v27;
          if ( v27 )
            (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v27 + 8LL))(v27);
        }
        else
        {
          v28 = 0LL;
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v42);
        D2DGeometry = CTransformedGeometryHelper::GetD2DGeometry(v28, v5, &v42);
        v6 = D2DGeometry;
        if ( D2DGeometry < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, D2DGeometry, 0x36u, 0LL);
          if ( v28 )
            (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v28 + 16LL))(v28);
          v4 = v42;
          goto LABEL_17;
        }
        if ( v28 )
          (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v28 + 16LL))(v28);
        v4 = v42;
      }
    }
    else
    {
      (*(void (__fastcall **)(CCachedVisualImage *, __int64 (__fastcall *)(CGlobalDrawingContext *), __int64 (__fastcall *)(CCachedVisualImage *, __int64, __int64), __int64 (__fastcall *)(struct CMILPoolResource *)))(*(_QWORD *)v5 + 8LL))(
        v5,
        v9,
        v10,
        v3);
      v4 = v5;
    }
  }
  v15 = v4;
  v4 = 0LL;
  *v46 = v15;
LABEL_17:
  if ( v4 )
    (*(void (__fastcall **)(struct ID2D1Geometry *, __int64 (__fastcall *)(CGlobalDrawingContext *), __int64 (__fastcall *)(CCachedVisualImage *, __int64, __int64), __int64 (__fastcall *)(struct CMILPoolResource *)))(*(_QWORD *)v4 + 16LL))(
      v4,
      v9,
      v10,
      v3);
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x1Cu, 0LL);
LABEL_21:
  if ( v5 )
    (*(void (__fastcall **)(CCachedVisualImage *, __int64 (__fastcall *)(CGlobalDrawingContext *), __int64 (__fastcall *)(CCachedVisualImage *, __int64, __int64), __int64 (__fastcall *)(struct CMILPoolResource *)))(*(_QWORD *)v5 + 16LL))(
      v5,
      v9,
      v10,
      v3);
  return (unsigned int)v6;
}
