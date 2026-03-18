/*
 * XREFs of ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800A45E0
 * Callers:
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180013240 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004DFE0 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18007B73C (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?GetWidenedBounds@CShape@@QEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@MPEAUID2D1StrokeStyle1@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18007BB8C (-GetWidenedBounds@CShape@@QEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z @ 0x1800876E0 (-FillShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@@Z.c)
 *     ?FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180089D90 (-FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x1800A4460 (-D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PE.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800A5660 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800B5890 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@@Z @ 0x1800DD364 (-StrokeShapeWithBrush@CDrawingContext@@QEAAJAEBVCShape@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@.c)
 *     ?GetOutline@CShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x180201E80 (-GetOutline@CShape@@UEBAJPEAUID2D1GeometrySink@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000CEC0 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x1800A3AFC (-CreateNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ?HasIntersectingCorners@CRoundedRectangleGeometryData@@QEBA_NXZ @ 0x1800B2FF0 (-HasIntersectingCorners@CRoundedRectangleGeometryData@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x180177878 (-GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z.c)
 *     ??0CTransformedGeometryHelper@@AEAA@PEBVCMILMatrix@@@Z @ 0x180177C9C (--0CTransformedGeometryHelper@@AEAA@PEBVCMILMatrix@@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180177CE0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x18019BD20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x1801A7850 (-CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z.c)
 *     ?Attach@?$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z @ 0x180210908 (-Attach@-$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRoundedRectangleShape::GetD2DGeometry(
        CRoundedRectangleShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3,
        __int64 a4)
{
  int v5; // ebx
  __int64 v6; // rcx
  const struct CMILMatrix *v8; // r14
  int v9; // esi
  __int64 v10; // rax
  CTransformedGeometryHelper *v11; // rdi
  const struct ID2D1Geometry *v12; // rbx
  struct ID2D1Geometry *v13; // rax
  __int64 v15; // r8
  int v16; // eax
  struct ID2D1Geometry *v17; // rcx
  struct ID2D1Geometry *v18; // rcx
  int v19; // eax
  CTransformedGeometryHelper *v20; // rax
  CTransformedGeometryHelper *v21; // rax
  int D2DGeometry; // eax
  unsigned int v23; // xmm1_4
  int (__fastcall **v24)(const struct ID2D1Geometry *, GUID *, __int64 *); // rax
  int (__fastcall *v25)(const struct ID2D1Geometry *, GUID *, __int64 *); // rax
  unsigned int v26; // xmm0_4
  __int64 v27; // rbx
  void (__fastcall *v28)(__int64, const struct ID2D1Geometry **); // rsi
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rcx
  struct ID2D1Geometry *v32; // [rsp+30h] [rbp-39h] BYREF
  __int64 v33; // [rsp+38h] [rbp-31h] BYREF
  const struct ID2D1Geometry *v34; // [rsp+40h] [rbp-29h] BYREF
  __int64 v35; // [rsp+48h] [rbp-21h] BYREF
  __int128 v36; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int64 v37; // [rsp+60h] [rbp-9h]
  __int128 v38; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v39; // [rsp+78h] [rbp+Fh]
  __int128 v40; // [rsp+80h] [rbp+17h] BYREF
  __int64 v41; // [rsp+90h] [rbp+27h]

  v5 = 0;
  v6 = *((_QWORD *)this + 2);
  v8 = a2;
  if ( *(_QWORD *)(v6 + 72) )
    goto LABEL_2;
  v32 = 0LL;
  if ( CRoundedRectangleGeometryData::HasIntersectingCorners((CRoundedRectangleGeometryData *)(v6 + 16)) )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v32);
    v19 = CRoundedRectangleShape::CreateIntersectedD2DGeometry(this, &v32);
    v5 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xD4u, 0LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v32);
      v9 = v5;
      goto LABEL_21;
    }
    goto LABEL_14;
  }
  v16 = CRoundedRectangleShape::CreateNonIntersectedD2DGeometry(this, &v32, v15);
  v5 = v16;
  v9 = v16;
  if ( v16 >= 0 )
  {
LABEL_14:
    a2 = (const struct CMILMatrix *)*((_QWORD *)this + 2);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)a2 + 9, (signed __int64)v32, 0LL) )
      v17 = v32;
    else
      v17 = 0LL;
    if ( v17 )
    {
      v32 = 0LL;
      (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    goto LABEL_2;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xD8u, 0LL);
  v18 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v18 + 16LL))(v18);
    goto LABEL_21;
  }
LABEL_2:
  v9 = v5;
  if ( v5 < 0 )
  {
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0xC3u, 0LL);
    return (unsigned int)v9;
  }
  v10 = *((_QWORD *)this + 2);
  v9 = 0;
  v11 = 0LL;
  v32 = 0LL;
  v12 = *(const struct ID2D1Geometry **)(v10 + 72);
  if ( v12 )
  {
    if ( v8 )
    {
      LOBYTE(a2) = 1;
      if ( (unsigned __int8)CMILMatrix::Is2DAffine<1>(v8, a2, a3, a4) )
      {
        v34 = v12;
        wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)&v34);
        v23 = *((_DWORD *)v8 + 1);
        v24 = *(int (__fastcall ***)(const struct ID2D1Geometry *, GUID *, __int64 *))v12;
        LODWORD(v38) = *(_DWORD *)v8;
        *(_QWORD *)((char *)&v38 + 4) = __PAIR64__(*((_DWORD *)v8 + 4), v23);
        v25 = *v24;
        v26 = *((_DWORD *)v8 + 12);
        HIDWORD(v38) = *((_DWORD *)v8 + 5);
        v39 = __PAIR64__(*((_DWORD *)v8 + 13), v26);
        v33 = 0LL;
        if ( v25(v12, &GUID_2cd906bb_12e2_11dc_9fed_001143a055f9, &v33) >= 0 )
        {
          v27 = v33;
          v28 = *(void (__fastcall **)(__int64, const struct ID2D1Geometry **))(*(_QWORD *)v33 + 136LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v34);
          v28(v27, &v34);
          v40 = _xmm;
          v41 = 0LL;
          (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v33 + 144LL))(v33, &v40);
          D2D1::Matrix3x2F::SetProduct(
            (D2D1::Matrix3x2F *)&v36,
            (const struct D2D1::Matrix3x2F *)&v40,
            (const struct D2D1::Matrix3x2F *)&v38);
          v38 = v36;
          v39 = v37;
        }
        v35 = 0LL;
        v29 = (*(__int64 (__fastcall **)(__int64, const struct ID2D1Geometry *, __int128 *, __int64 *))(*(_QWORD *)g_DeviceManager + 72LL))(
                g_DeviceManager,
                v34,
                &v38,
                &v35);
        v9 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v29, 0x2Eu, 0LL);
          v31 = v33;
          if ( v33 )
          {
            v33 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v34);
          goto LABEL_7;
        }
        Microsoft::WRL::ComPtr<CManipulation>::Attach(&v32, v35);
        v30 = v33;
        if ( v33 )
        {
          v33 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v34);
        v11 = v32;
      }
      else
      {
        v20 = (CTransformedGeometryHelper *)operator new(0x40uLL);
        if ( v20 )
        {
          v21 = CTransformedGeometryHelper::CTransformedGeometryHelper(v20, v8);
          v11 = v21;
          if ( v21 )
            (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v21 + 8LL))(v21);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v32);
        D2DGeometry = CTransformedGeometryHelper::GetD2DGeometry(v11, v12, &v32);
        v9 = D2DGeometry;
        if ( D2DGeometry < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DGeometry, 0x36u, 0LL);
          if ( v11 )
            (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v11 + 16LL))(v11);
          v11 = v32;
          goto LABEL_7;
        }
        if ( v11 )
          (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v11 + 16LL))(v11);
        v11 = v32;
      }
    }
    else
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 8LL))(*(_QWORD *)(v10 + 72));
      v11 = v12;
    }
  }
  v13 = v11;
  v11 = 0LL;
  *a3 = v13;
LABEL_7:
  if ( v11 )
    (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v9 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xC4u, 0LL);
  return (unsigned int)v9;
}
