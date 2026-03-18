/*
 * XREFs of ?Simplify@CPathData@@QEBAJPEAPEAV1@@Z @ 0x1802B6440
 * Callers:
 *     ?GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x180222020 (-GetSimplifiedPathDataInternal@CPathSegmentsShape@@MEBAJPEAPEAVCPathData@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x18000D9B0 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180180410 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z @ 0x1801ACCD0 (-GetD2DGeometry@CPathData@@QEBAJPEAUID2D1Factory@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z @ 0x1801AD654 (-Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPathData::Simplify(CPathData *this, struct CPathData **a2)
{
  bool v3; // zf
  unsigned int v5; // edi
  int v6; // r9d
  struct ID2D1Factory *v7; // rdx
  int D2DGeometry; // eax
  void *v9; // rax
  __int64 v10; // rdx
  CPathData *v11; // rax
  CPathData *v12; // rsi
  struct ID2D1SimplifiedGeometrySink *v13; // rbx
  unsigned int v15; // [rsp+20h] [rbp-20h]
  __int128 v16; // [rsp+30h] [rbp-10h] BYREF
  struct ID2D1SimplifiedGeometrySink *v17; // [rsp+70h] [rbp+30h] BYREF
  struct ID2D1Geometry *v18; // [rsp+80h] [rbp+40h] BYREF
  CPathData *v19; // [rsp+88h] [rbp+48h] BYREF

  v3 = *((_BYTE *)this + 66) == 0xFF;
  v19 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  if ( !v3 )
  {
    v5 = -2003304315;
    v15 = 152;
LABEL_3:
    v6 = v5;
LABEL_19:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, v15, 0LL);
    goto LABEL_20;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
  D2DGeometry = CPathData::GetD2DGeometry(this, v7, &v18);
  v5 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    v15 = 162;
    goto LABEL_18;
  }
  v9 = MIDL_user_allocate(0x48uLL);
  if ( v9 )
  {
    v10 = *((_QWORD *)this + 5);
    v16 = 0uLL;
    v11 = (CPathData *)CPathData::CPathData((__int64)v9, v10, (size_t *)&v16);
  }
  else
  {
    v11 = 0LL;
  }
  Microsoft::WRL::ComPtr<CPathData>::operator=(&v19, v11);
  v12 = v19;
  if ( !v19 )
  {
    v5 = -2147024882;
    v15 = 165;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
  D2DGeometry = CPathData::Open(v12, &v17);
  v5 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    v15 = 167;
    goto LABEL_18;
  }
  v13 = v17;
  D2DGeometry = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, _QWORD, _QWORD))(*(_QWORD *)v18 + 72LL))(
                  v18,
                  0LL,
                  0LL);
  v5 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    v15 = 172;
    goto LABEL_18;
  }
  D2DGeometry = (*(__int64 (__fastcall **)(struct ID2D1SimplifiedGeometrySink *))(*(_QWORD *)v13 + 72LL))(v13);
  v5 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    v15 = 174;
LABEL_18:
    v6 = D2DGeometry;
    goto LABEL_19;
  }
  v19 = 0LL;
  *a2 = v12;
LABEL_20:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v18);
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease(&v19);
  return v5;
}
