/*
 * XREFs of ?TransformGeometry@CTransformedGeometryHelper@@SAJPEBVCMILMatrix@@PEAUID2D1Geometry@@PEAPEAU3@@Z @ 0x180177720
 * Callers:
 *     ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1802641E0 (-GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
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

__int64 __fastcall CTransformedGeometryHelper::TransformGeometry(
        const struct CMILMatrix *a1,
        struct ID2D1Geometry *a2,
        struct ID2D1Geometry **a3,
        __int64 a4)
{
  CTransformedGeometryHelper *v4; // rdi
  unsigned int v5; // r15d
  struct ID2D1Geometry *v7; // rbx
  struct ID2D1Geometry *v9; // rax
  CTransformedGeometryHelper *v11; // rax
  CTransformedGeometryHelper *v12; // rax
  int D2DGeometry; // eax
  unsigned int v14; // xmm1_4
  int (__fastcall **v15)(struct ID2D1Geometry *, GUID *, __int64 *); // rax
  int (__fastcall *v16)(struct ID2D1Geometry *, GUID *, __int64 *); // rax
  unsigned int v17; // xmm0_4
  __int64 v18; // rbx
  void (__fastcall *v19)(__int64, struct ID2D1Geometry **); // rsi
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  struct ID2D1Geometry *v23; // [rsp+30h] [rbp-39h] BYREF
  __int64 v24; // [rsp+38h] [rbp-31h] BYREF
  struct ID2D1Geometry *v25; // [rsp+40h] [rbp-29h] BYREF
  __int64 v26; // [rsp+48h] [rbp-21h] BYREF
  __int128 v27; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int64 v28; // [rsp+60h] [rbp-9h]
  __int128 v29; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v30; // [rsp+78h] [rbp+Fh]
  __int128 v31; // [rsp+80h] [rbp+17h] BYREF
  __int64 v32; // [rsp+90h] [rbp+27h]

  v4 = 0LL;
  v5 = 0;
  v23 = 0LL;
  v7 = a2;
  if ( !a2 )
    goto LABEL_4;
  if ( !a1 )
  {
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)a2 + 8LL))(a2);
    v4 = v7;
LABEL_4:
    v9 = v4;
    v4 = 0LL;
    *a3 = v9;
    goto LABEL_5;
  }
  LOBYTE(a2) = 1;
  if ( (unsigned __int8)CMILMatrix::Is2DAffine<1>(a1, a2, a3, a4) )
  {
    v25 = v7;
    wil::com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>::~com_ptr_t<IHolographicFrameProcessor,wil::err_returncode_policy>((__int64 *)&v25);
    v14 = *((_DWORD *)a1 + 1);
    v15 = *(int (__fastcall ***)(struct ID2D1Geometry *, GUID *, __int64 *))v7;
    LODWORD(v29) = *(_DWORD *)a1;
    *(_QWORD *)((char *)&v29 + 4) = __PAIR64__(*((_DWORD *)a1 + 4), v14);
    v16 = *v15;
    v17 = *((_DWORD *)a1 + 12);
    HIDWORD(v29) = *((_DWORD *)a1 + 5);
    v30 = __PAIR64__(*((_DWORD *)a1 + 13), v17);
    v24 = 0LL;
    if ( v16(v7, &GUID_2cd906bb_12e2_11dc_9fed_001143a055f9, &v24) >= 0 )
    {
      v18 = v24;
      v19 = *(void (__fastcall **)(__int64, struct ID2D1Geometry **))(*(_QWORD *)v24 + 136LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
      v19(v18, &v25);
      v31 = _xmm;
      v32 = 0LL;
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v24 + 144LL))(v24, &v31);
      D2D1::Matrix3x2F::SetProduct(
        (D2D1::Matrix3x2F *)&v27,
        (const struct D2D1::Matrix3x2F *)&v31,
        (const struct D2D1::Matrix3x2F *)&v29);
      v29 = v27;
      v30 = v28;
    }
    v26 = 0LL;
    v20 = (*(__int64 (__fastcall **)(__int64, struct ID2D1Geometry *, __int128 *, __int64 *))(*(_QWORD *)g_DeviceManager
                                                                                            + 72LL))(
            g_DeviceManager,
            v25,
            &v29,
            &v26);
    v5 = v20;
    if ( v20 >= 0 )
    {
      Microsoft::WRL::ComPtr<CManipulation>::Attach(&v23, v26);
      v21 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
      v4 = v23;
      goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v20, 0x2Eu, 0LL);
    v22 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v25);
  }
  else
  {
    v11 = (CTransformedGeometryHelper *)operator new(0x40uLL);
    if ( v11 )
    {
      v12 = CTransformedGeometryHelper::CTransformedGeometryHelper(v11, a1);
      v4 = v12;
      if ( v12 )
        (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v12 + 8LL))(v12);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
    D2DGeometry = CTransformedGeometryHelper::GetD2DGeometry(v4, v7, &v23);
    v5 = D2DGeometry;
    if ( D2DGeometry >= 0 )
    {
      if ( v4 )
        (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v4 + 16LL))(v4);
      v4 = v23;
      goto LABEL_4;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, D2DGeometry, 0x36u, 0LL);
    if ( v4 )
      (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v4 + 16LL))(v4);
    v4 = v23;
  }
LABEL_5:
  if ( v4 )
    (*(void (__fastcall **)(CTransformedGeometryHelper *))(*(_QWORD *)v4 + 16LL))(v4);
  return v5;
}
