/*
 * XREFs of ?GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18029F4C0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x18000D9B0 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1CShapePtr@@QEAA@XZ @ 0x180079AF0 (--1CShapePtr@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z @ 0x18017CF08 (--0CPathSegmentsShape@@QEAA@PEBVCPathData@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180180410 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z @ 0x1801AD654 (-Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLineGeometry::GetShapeDataCore(
        CLineGeometry *this,
        const struct D2D_SIZE_F *a2,
        CRectanglesShape **a3)
{
  CPathData *v5; // rax
  CPathData *v6; // rdi
  unsigned int v7; // ebx
  int v8; // eax
  struct ID2D1SimplifiedGeometrySink *v9; // rbx
  CPathSegmentsShape *v10; // rax
  CPathSegmentsShape *v11; // rdi
  unsigned int v13; // [rsp+20h] [rbp-38h]
  struct CPathData *v14[2]; // [rsp+30h] [rbp-28h] BYREF
  size_t v15[3]; // [rsp+40h] [rbp-18h] BYREF
  struct ID2D1SimplifiedGeometrySink *v16; // [rsp+78h] [rbp+20h] BYREF

  v14[0] = 0LL;
  v16 = 0LL;
  v5 = (CPathData *)MIDL_user_allocate(0x48uLL);
  if ( v5 )
  {
    *(_OWORD *)v15 = 0uLL;
    v5 = (CPathData *)CPathData::CPathData((__int64)v5, g_DeviceManager, v15);
  }
  Microsoft::WRL::ComPtr<CPathData>::operator=(v14, v5);
  v6 = v14[0];
  if ( !v14[0] )
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x53u, 0LL);
    goto LABEL_14;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  v8 = CPathData::Open(v6, &v16);
  v7 = v8;
  if ( v8 < 0 )
  {
    v13 = 85;
    goto LABEL_13;
  }
  v9 = v16;
  (*(void (__fastcall **)(struct ID2D1SimplifiedGeometrySink *, unsigned __int64, __int64))(*(_QWORD *)v16 + 40LL))(
    v16,
    _mm_unpacklo_ps((__m128)*((unsigned int *)this + 34), (__m128)*((unsigned int *)this + 35)).m128_u64[0],
    1LL);
  (*(void (__fastcall **)(struct ID2D1SimplifiedGeometrySink *, char *, __int64))(*(_QWORD *)v9 + 48LL))(
    v9,
    (char *)this + 144,
    1LL);
  (*(void (__fastcall **)(struct ID2D1SimplifiedGeometrySink *, _QWORD))(*(_QWORD *)v9 + 64LL))(v9, 0LL);
  v8 = (*(__int64 (__fastcall **)(struct ID2D1SimplifiedGeometrySink *))(*(_QWORD *)v9 + 72LL))(v9);
  v7 = v8;
  if ( v8 < 0 )
  {
    v13 = 91;
LABEL_13:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, v13, 0LL);
    goto LABEL_14;
  }
  v10 = (CPathSegmentsShape *)MIDL_user_allocate(0x18uLL);
  if ( v10 && (v11 = CPathSegmentsShape::CPathSegmentsShape(v10, v6)) != 0LL )
  {
    CShapePtr::~CShapePtr(a3);
    *a3 = v11;
    *((_BYTE *)a3 + 8) = 1;
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x5Eu, 0LL);
  }
LABEL_14:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease(v14);
  return v7;
}
