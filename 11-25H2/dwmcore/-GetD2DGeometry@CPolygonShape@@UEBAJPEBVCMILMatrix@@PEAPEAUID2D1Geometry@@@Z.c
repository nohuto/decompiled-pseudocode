/*
 * XREFs of ?GetD2DGeometry@CPolygonShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801775C0
 * Callers:
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004DFE0 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180088CB0 (-GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800896E0 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNo.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000CEC0 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18006BC80 (--2@YAPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x180177878 (-GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z.c)
 *     ??0CTransformedGeometryHelper@@AEAA@PEBVCMILMatrix@@@Z @ 0x180177C9C (--0CTransformedGeometryHelper@@AEAA@PEBVCMILMatrix@@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180177CE0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x18019BD20 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?Attach@?$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z @ 0x180210908 (-Attach@-$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPolygonShape::GetD2DGeometry(
        CPolygonShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3,
        __int64 a4)
{
  __int64 v4; // rax
  struct ID2D1Geometry *v5; // rdi
  unsigned int v6; // esi
  const struct CMILMatrix *v8; // rbx
  const struct ID2D1Geometry *v9; // r14
  struct ID2D1Geometry *v10; // rax
  CTransformedGeometryHelper *v12; // rax
  CTransformedGeometryHelper *v13; // rax
  CTransformedGeometryHelper *v14; // rbx
  int D2DGeometry; // eax
  unsigned int v16; // xmm0_4
  unsigned int v17; // xmm1_4
  int (__fastcall **v18)(const struct ID2D1Geometry *, GUID *, __int64 *); // rax
  int (__fastcall *v19)(const struct ID2D1Geometry *, GUID *, __int64 *); // rax
  __int64 v20; // rbx
  void (__fastcall *v21)(__int64, const struct ID2D1Geometry **); // rsi
  int v22; // eax
  __int64 v23; // rcx
  __int64 v24; // rcx
  struct ID2D1Geometry *v25; // [rsp+30h] [rbp-39h] BYREF
  __int64 v26; // [rsp+38h] [rbp-31h] BYREF
  const struct ID2D1Geometry *v27; // [rsp+40h] [rbp-29h] BYREF
  __int64 v28; // [rsp+48h] [rbp-21h] BYREF
  __int128 v29; // [rsp+50h] [rbp-19h] BYREF
  __int64 v30; // [rsp+60h] [rbp-9h]
  __int128 v31; // [rsp+68h] [rbp-1h] BYREF
  __int64 v32; // [rsp+78h] [rbp+Fh]
  __int128 v33; // [rsp+80h] [rbp+17h] BYREF
  int v34; // [rsp+90h] [rbp+27h]
  int v35; // [rsp+94h] [rbp+2Bh]

  v4 = *((_QWORD *)this + 2);
  v5 = 0LL;
  v6 = 0;
  v25 = 0LL;
  v8 = a2;
  v9 = *(const struct ID2D1Geometry **)(v4 + 16);
  if ( !v9 )
    goto LABEL_4;
  if ( !a2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*(_QWORD *)(v4 + 16));
    v5 = v9;
LABEL_4:
    v10 = v5;
    v5 = 0LL;
    *a3 = v10;
    goto LABEL_5;
  }
  LOBYTE(a2) = 1;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<1>(v8, a2, a3, a4) )
  {
    v27 = v9;
    wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)&v27);
    v16 = *(_DWORD *)v8;
    v17 = *((_DWORD *)v8 + 1);
    v18 = *(int (__fastcall ***)(const struct ID2D1Geometry *, GUID *, __int64 *))v9;
    v26 = 0LL;
    *(_QWORD *)&v31 = __PAIR64__(v17, v16);
    v19 = *v18;
    *((_QWORD *)&v31 + 1) = *((_QWORD *)v8 + 2);
    v32 = *((_QWORD *)v8 + 6);
    if ( v19(v9, &GUID_2cd906bb_12e2_11dc_9fed_001143a055f9, &v26) >= 0 )
    {
      v20 = v26;
      v21 = *(void (__fastcall **)(__int64, const struct ID2D1Geometry **))(*(_QWORD *)v26 + 136LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
      v21(v20, &v27);
      v34 = 0;
      v35 = 0;
      v33 = _xmm;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v26 + 144LL))(v26, &v33);
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v29,
        (const struct D2D1::Matrix3x2F *)&v33,
        (const struct D2D1::Matrix3x2F *)&v31);
      v31 = v29;
      v32 = v30;
    }
    v28 = 0LL;
    v22 = (*(__int64 (__fastcall **)(__int64, const struct ID2D1Geometry *, __int128 *, __int64 *))(*(_QWORD *)g_DeviceManager
                                                                                                  + 72LL))(
            g_DeviceManager,
            v27,
            &v31,
            &v28);
    v6 = v22;
    if ( v22 >= 0 )
    {
      Microsoft::WRL::ComPtr<CManipulation>::Attach(&v25, v28);
      v23 = v26;
      if ( v26 )
      {
        v26 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
      goto LABEL_15;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v22, 0x2Eu, 0LL);
    v24 = v26;
    if ( v26 )
    {
      v26 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v27);
  }
  else
  {
    v12 = (CTransformedGeometryHelper *)operator new(0x40uLL);
    if ( v12 )
    {
      v13 = CTransformedGeometryHelper::CTransformedGeometryHelper(v12, v8);
      v14 = v13;
      if ( v13 )
        (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v13 + 8LL))(v13);
    }
    else
    {
      v14 = 0LL;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
    D2DGeometry = CTransformedGeometryHelper::GetD2DGeometry(v14, v9, &v25);
    v6 = D2DGeometry;
    if ( D2DGeometry >= 0 )
    {
      if ( v14 )
        (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v14 + 16LL))(v14);
LABEL_15:
      v5 = v25;
      goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, D2DGeometry, 0x36u, 0LL);
    if ( v14 )
      (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v14 + 16LL))(v14);
    v5 = v25;
  }
LABEL_5:
  if ( v5 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v5 + 16LL))(v5);
  return v6;
}
