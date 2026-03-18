/*
 * XREFs of ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180072D70
 * Callers:
 *     ?D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x180072BF0 (-D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PE.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800737F0 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800C1560 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x1800CE960 (-FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x1800CEC00 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x1800FD464 (-StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x18013F440 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180146340 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18014C84C (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetWidenedBounds@CShape@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18014CC9C (-GetWidenedBounds@CShape@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?GetOutline@CShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x1801D38E0 (-GetOutline@CShape@@UEBAJPEAUID2D1GeometrySink@@@Z.c)
 * Callees:
 *     ?HasIntersectingCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x18001DF30 (-HasIntersectingCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800454A4 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800B95C0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x180123F98 (-GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z.c)
 *     ??0CTransformedGeometryHelper@@AEAA@PEBVCMILMatrix@@@Z @ 0x1801243BC (--0CTransformedGeometryHelper@@AEAA@PEBVCMILMatrix@@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180124400 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x1801AC390 (-CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x1801AD040 (-CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ?Attach@?$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z @ 0x1802043E4 (-Attach@-$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRoundedRectangleShape::GetD2DGeometry(
        CRoundedRectangleShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  int v4; // ebx
  __int64 v5; // rcx
  const struct CMILMatrix *v7; // r14
  int v8; // esi
  __int64 v9; // rax
  CTransformedGeometryHelper *v10; // rdi
  const struct ID2D1Geometry *v11; // rbx
  struct ID2D1Geometry *v12; // rax
  int v14; // eax
  struct ID2D1Geometry *v15; // rcx
  struct ID2D1Geometry *v16; // rcx
  int v17; // eax
  CTransformedGeometryHelper *v18; // rax
  CTransformedGeometryHelper *v19; // rax
  int D2DGeometry; // eax
  unsigned int v21; // xmm1_4
  int (__fastcall **v22)(const struct ID2D1Geometry *, GUID *, __int64 *); // rax
  int (__fastcall *v23)(const struct ID2D1Geometry *, GUID *, __int64 *); // rax
  unsigned int v24; // xmm0_4
  __int64 v25; // rbx
  void (__fastcall *v26)(__int64, const struct ID2D1Geometry **); // rsi
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  struct ID2D1Geometry *v30; // [rsp+30h] [rbp-39h] BYREF
  __int64 v31; // [rsp+38h] [rbp-31h] BYREF
  const struct ID2D1Geometry *v32; // [rsp+40h] [rbp-29h] BYREF
  __int64 v33; // [rsp+48h] [rbp-21h] BYREF
  __int128 v34; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int64 v35; // [rsp+60h] [rbp-9h]
  __int128 v36; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v37; // [rsp+78h] [rbp+Fh]
  __int128 v38; // [rsp+80h] [rbp+17h] BYREF
  __int64 v39; // [rsp+90h] [rbp+27h]

  v4 = 0;
  v5 = *((_QWORD *)this + 2);
  v7 = a2;
  if ( *(_QWORD *)(v5 + 72) )
    goto LABEL_2;
  v30 = 0LL;
  if ( CRoundedRectangleGeometryData::HasIntersectingCorners((CRoundedRectangleGeometryData *)(v5 + 16)) )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
    v17 = CRoundedRectangleShape::CreateIntersectedD2DGeometry(this, &v30);
    v4 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xD4u, 0LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
      v8 = v4;
      goto LABEL_21;
    }
    goto LABEL_14;
  }
  v14 = CRoundedRectangleShape::CreateNonIntersectedD2DGeometry(this, &v30);
  v4 = v14;
  v8 = v14;
  if ( v14 >= 0 )
  {
LABEL_14:
    a2 = (const struct CMILMatrix *)*((_QWORD *)this + 2);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 9, (signed __int64)v30, 0LL) )
      v15 = v30;
    else
      v15 = 0LL;
    if ( v15 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v15 + 16LL))(v15);
    }
    goto LABEL_2;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v14, 0xD8u, 0LL);
  v16 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v16 + 16LL))(v16);
    goto LABEL_21;
  }
LABEL_2:
  v8 = v4;
  if ( v4 < 0 )
  {
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xC3u, 0LL);
    return (unsigned int)v8;
  }
  v9 = *((_QWORD *)this + 2);
  v8 = 0;
  v10 = 0LL;
  v30 = 0LL;
  v11 = *(const struct ID2D1Geometry **)(v9 + 72);
  if ( v11 )
  {
    if ( v7 )
    {
      LOBYTE(a2) = 1;
      if ( (unsigned __int8)CMILMatrix::Is2DAffine<1>(v7, a2) )
      {
        v32 = v11;
        wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)&v32);
        v21 = *((_DWORD *)v7 + 1);
        v22 = *(int (__fastcall ***)(const struct ID2D1Geometry *, GUID *, __int64 *))v11;
        LODWORD(v36) = *(_DWORD *)v7;
        *(_QWORD *)((char *)&v36 + 4) = __PAIR64__(*((_DWORD *)v7 + 4), v21);
        v23 = *v22;
        v24 = *((_DWORD *)v7 + 12);
        HIDWORD(v36) = *((_DWORD *)v7 + 5);
        v37 = __PAIR64__(*((_DWORD *)v7 + 13), v24);
        v31 = 0LL;
        if ( v23(v11, &GUID_2cd906bb_12e2_11dc_9fed_001143a055f9, &v31) >= 0 )
        {
          v25 = v31;
          v26 = *(void (__fastcall **)(__int64, const struct ID2D1Geometry **))(*(_QWORD *)v31 + 136LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v32);
          v26(v25, &v32);
          v38 = _xmm;
          v39 = 0LL;
          (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v31 + 144LL))(v31, &v38);
          D2D1::Matrix3x2F::SetProduct(
            (D2D1::Matrix3x2F *)&v34,
            (const struct D2D1::Matrix3x2F *)&v38,
            (const struct D2D1::Matrix3x2F *)&v36);
          v36 = v34;
          v37 = v35;
        }
        v33 = 0LL;
        v27 = (*(__int64 (__fastcall **)(__int64, const struct ID2D1Geometry *, __int128 *, __int64 *))(*(_QWORD *)g_DeviceManager + 72LL))(
                g_DeviceManager,
                v32,
                &v36,
                &v33);
        v8 = v27;
        if ( v27 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v27, 0x2Eu, 0LL);
          v29 = v31;
          if ( v31 )
          {
            v31 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v32);
          goto LABEL_7;
        }
        Microsoft::WRL::ComPtr<CManipulation>::Attach(&v30, v33);
        v28 = v31;
        if ( v31 )
        {
          v31 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v32);
        v10 = v30;
      }
      else
      {
        v18 = (CTransformedGeometryHelper *)operator new(0x40uLL);
        if ( v18 )
        {
          v19 = CTransformedGeometryHelper::CTransformedGeometryHelper(v18, v7);
          v10 = v19;
          if ( v19 )
            (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v19 + 8LL))(v19);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v30);
        D2DGeometry = CTransformedGeometryHelper::GetD2DGeometry(v10, v11, &v30);
        v8 = D2DGeometry;
        if ( D2DGeometry < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DGeometry, 0x36u, 0LL);
          if ( v10 )
            (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v10 + 16LL))(v10);
          v10 = v30;
          goto LABEL_7;
        }
        if ( v10 )
          (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v10 + 16LL))(v10);
        v10 = v30;
      }
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(*(_QWORD *)(v9 + 72));
      v10 = v11;
    }
  }
  v12 = v10;
  v10 = 0LL;
  *a3 = v12;
LABEL_7:
  if ( v10 )
    (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0xC4u, 0LL);
  return (unsigned int)v8;
}
