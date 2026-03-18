/*
 * XREFs of ?GetD2DGeometry@CPolygonShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180123CE0
 * Callers:
 *     ?GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800D0110 (-GetTightBounds@CRoundedRectangleShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POI.c)
 *     ?GetTightBounds@CShape@@UEBAJPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800D0B40 (-GetTightBounds@CShape@@UEBAJPEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNo.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180146340 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180041E40 (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800454A4 (--1-$com_ptr_t@UIHolographicFrameProcessor@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x1800B95C0 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x180123F98 (-GetD2DGeometry@CTransformedGeometryHelper@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z.c)
 *     ??0CTransformedGeometryHelper@@AEAA@PEBVCMILMatrix@@@Z @ 0x1801243BC (--0CTransformedGeometryHelper@@AEAA@PEBVCMILMatrix@@@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180124400 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Attach@?$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z @ 0x1802043E4 (-Attach@-$ComPtr@VCManipulation@@@WRL@Microsoft@@QEAAXPEAVCManipulation@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPolygonShape::GetD2DGeometry(
        CPolygonShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  __int64 v3; // rax
  struct ID2D1Geometry *v4; // rdi
  unsigned int v5; // esi
  const struct CMILMatrix *v7; // rbx
  const struct ID2D1Geometry *v8; // r14
  struct ID2D1Geometry *v9; // rax
  CTransformedGeometryHelper *v11; // rax
  CTransformedGeometryHelper *v12; // rax
  CTransformedGeometryHelper *v13; // rbx
  int D2DGeometry; // eax
  unsigned int v15; // xmm0_4
  unsigned int v16; // xmm1_4
  int (__fastcall **v17)(const struct ID2D1Geometry *, GUID *, __int64 *); // rax
  int (__fastcall *v18)(const struct ID2D1Geometry *, GUID *, __int64 *); // rax
  __int64 v19; // rbx
  void (__fastcall *v20)(__int64, const struct ID2D1Geometry **); // rsi
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  struct ID2D1Geometry *v24; // [rsp+30h] [rbp-39h] BYREF
  __int64 v25; // [rsp+38h] [rbp-31h] BYREF
  const struct ID2D1Geometry *v26; // [rsp+40h] [rbp-29h] BYREF
  __int64 v27; // [rsp+48h] [rbp-21h] BYREF
  __int128 v28; // [rsp+50h] [rbp-19h] BYREF
  __int64 v29; // [rsp+60h] [rbp-9h]
  __int128 v30; // [rsp+68h] [rbp-1h] BYREF
  __int64 v31; // [rsp+78h] [rbp+Fh]
  __int128 v32; // [rsp+80h] [rbp+17h] BYREF
  int v33; // [rsp+90h] [rbp+27h]
  int v34; // [rsp+94h] [rbp+2Bh]

  v3 = *((_QWORD *)this + 2);
  v4 = 0LL;
  v5 = 0;
  v24 = 0LL;
  v7 = a2;
  v8 = *(const struct ID2D1Geometry **)(v3 + 16);
  if ( !v8 )
    goto LABEL_4;
  if ( !a2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*(_QWORD *)(v3 + 16));
    v4 = v8;
LABEL_4:
    v9 = v4;
    v4 = 0LL;
    *a3 = v9;
    goto LABEL_5;
  }
  LOBYTE(a2) = 1;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<1>(v7, a2) )
  {
    v26 = v8;
    wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)&v26);
    v15 = *(_DWORD *)v7;
    v16 = *((_DWORD *)v7 + 1);
    v17 = *(int (__fastcall ***)(const struct ID2D1Geometry *, GUID *, __int64 *))v8;
    v25 = 0LL;
    *(_QWORD *)&v30 = __PAIR64__(v16, v15);
    v18 = *v17;
    *((_QWORD *)&v30 + 1) = *((_QWORD *)v7 + 2);
    v31 = *((_QWORD *)v7 + 6);
    if ( v18(v8, &GUID_2cd906bb_12e2_11dc_9fed_001143a055f9, &v25) >= 0 )
    {
      v19 = v25;
      v20 = *(void (__fastcall **)(__int64, const struct ID2D1Geometry **))(*(_QWORD *)v25 + 136LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
      v20(v19, &v26);
      v33 = 0;
      v34 = 0;
      v32 = _xmm;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v25 + 144LL))(v25, &v32);
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v28,
        (const struct D2D1::Matrix3x2F *)&v32,
        (const struct D2D1::Matrix3x2F *)&v30);
      v30 = v28;
      v31 = v29;
    }
    v27 = 0LL;
    v21 = (*(__int64 (__fastcall **)(__int64, const struct ID2D1Geometry *, __int128 *, __int64 *))(*(_QWORD *)g_DeviceManager
                                                                                                  + 72LL))(
            g_DeviceManager,
            v26,
            &v30,
            &v27);
    v5 = v21;
    if ( v21 >= 0 )
    {
      Microsoft::WRL::ComPtr<CManipulation>::Attach(&v24, v27);
      v22 = v25;
      if ( v25 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
      goto LABEL_15;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v21, 0x2Eu, 0LL);
    v23 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
  }
  else
  {
    v11 = (CTransformedGeometryHelper *)operator new(0x40uLL);
    if ( v11 )
    {
      v12 = CTransformedGeometryHelper::CTransformedGeometryHelper(v11, v7);
      v13 = v12;
      if ( v12 )
        (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v12 + 8LL))(v12);
    }
    else
    {
      v13 = 0LL;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
    D2DGeometry = CTransformedGeometryHelper::GetD2DGeometry(v13, v8, &v24);
    v5 = D2DGeometry;
    if ( D2DGeometry >= 0 )
    {
      if ( v13 )
        (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v13 + 16LL))(v13);
LABEL_15:
      v4 = v24;
      goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, D2DGeometry, 0x36u, 0LL);
    if ( v13 )
      (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v13 + 16LL))(v13);
    v4 = v24;
  }
LABEL_5:
  if ( v4 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v4 + 16LL))(v4);
  return v5;
}
