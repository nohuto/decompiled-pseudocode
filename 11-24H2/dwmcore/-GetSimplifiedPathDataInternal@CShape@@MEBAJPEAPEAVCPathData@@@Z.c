/*
 * XREFs of ?GetSimplifiedPathDataInternal@CShape@@MEBAJPEAPEAVCPathData@@@Z @ 0x1801ABA00
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z @ 0x18000D9B0 (--4-$ComPtr@VCPathData@@@WRL@Microsoft@@QEAAAEAV012@PEAVCPathData@@@Z.c)
 *     MIDL_user_allocate @ 0x18001C2F0 (MIDL_user_allocate.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ @ 0x18017ECE0 (-InternalRelease@-$ComPtr@VCPathData@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180180410 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?Outline@ID2D1Geometry@@QEBAJPEBUD2D_MATRIX_3X2_F@@PEAUID2D1SimplifiedGeometrySink@@@Z @ 0x180180A5C (-Outline@ID2D1Geometry@@QEBAJPEBUD2D_MATRIX_3X2_F@@PEAUID2D1SimplifiedGeometrySink@@@Z.c)
 *     ?Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z @ 0x1801AD654 (-Open@CPathData@@QEAAJPEAPEAUID2D1SimplifiedGeometrySink@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CShape::GetSimplifiedPathDataInternal(CShape *this, struct CPathData **a2)
{
  __int64 v2; // rax
  __int64 (__fastcall *v5)(CShape *, _QWORD, ID2D1Geometry **); // rbx
  struct ID2D1SimplifiedGeometrySink *v6; // rdi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  ID2D1Geometry *v10; // rcx
  ID2D1Geometry *v12; // rbx
  void (__fastcall *v13)(ID2D1Geometry *, __int64 *); // rsi
  void *v14; // rax
  CPathData *v15; // rax
  CPathData *v16; // rsi
  int v17; // eax
  const struct D2D_MATRIX_3X2_F *v18; // rdx
  unsigned int v19; // [rsp+20h] [rbp-30h]
  CPathData *v20[2]; // [rsp+30h] [rbp-20h] BYREF
  __int128 v21; // [rsp+40h] [rbp-10h] BYREF
  ID2D1Geometry *v22; // [rsp+80h] [rbp+30h] BYREF
  __int64 v23; // [rsp+90h] [rbp+40h] BYREF
  struct ID2D1SimplifiedGeometrySink *v24; // [rsp+98h] [rbp+48h] BYREF

  v2 = *(_QWORD *)this;
  v22 = 0LL;
  v23 = 0LL;
  v20[0] = 0LL;
  v5 = *(__int64 (__fastcall **)(CShape *, _QWORD, ID2D1Geometry **))(v2 + 24);
  v6 = 0LL;
  v24 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v22);
  v7 = v5(this, 0LL, &v22);
  v8 = v7;
  if ( v7 < 0 )
  {
    v19 = 1129;
LABEL_3:
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v7, v19, 0LL);
    goto LABEL_4;
  }
  v12 = v22;
  v13 = *(void (__fastcall **)(ID2D1Geometry *, __int64 *))(*(_QWORD *)v22 + 24LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v23);
  v13(v12, &v23);
  v14 = MIDL_user_allocate(0x48uLL);
  if ( v14 )
  {
    v21 = 0uLL;
    v15 = (CPathData *)CPathData::CPathData((__int64)v14, v23, (size_t *)&v21);
  }
  else
  {
    v15 = 0LL;
  }
  Microsoft::WRL::ComPtr<CPathData>::operator=(v20, v15);
  v16 = v20[0];
  if ( v20[0] )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v24);
    v17 = CPathData::Open(v16, &v24);
    v8 = v17;
    if ( v17 >= 0 )
    {
      v6 = v24;
      v7 = ID2D1Geometry::Outline(v22, v18, v24);
      v8 = v7;
      if ( v7 < 0 )
      {
        v19 = 1138;
        goto LABEL_3;
      }
      v7 = (*(__int64 (__fastcall **)(struct ID2D1SimplifiedGeometrySink *))(*(_QWORD *)v6 + 72LL))(v6);
      v8 = v7;
      if ( v7 < 0 )
      {
        v19 = 1139;
        goto LABEL_3;
      }
      v20[0] = 0LL;
      *a2 = v16;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v17, 0x46Fu, 0LL);
      v6 = v24;
    }
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x46Du, 0LL);
  }
LABEL_4:
  if ( v6 )
    (*(void (__fastcall **)(struct ID2D1SimplifiedGeometrySink *))(*(_QWORD *)v6 + 16LL))(v6);
  Microsoft::WRL::ComPtr<CPathData>::InternalRelease(v20);
  v9 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(ID2D1Geometry *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v8;
}
