/*
 * XREFs of ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18007BDE0
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x180079314 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x18007B73C (-FillContainsPoint@CShapePtr@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z @ 0x180089D90 (-FillContainsPoint@CShape@@QEBAJAEBUD2D_POINT_2F@@PEA_N@Z.c)
 *     ?D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x1800A4460 (-D2DGeometryFromShape@CDrawingContext@@AEAAJPEBVCShape@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PE.c)
 *     ?PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAUNodeEffects@1@PEA_N@Z @ 0x1800A5660 (-PushLocalSpaceClipAndAlphaInternal@CDrawingContext@@AEAAJPEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_REC.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800B5890 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?EnsureD2DGeometry@CRegionShape@@AEBAJXZ @ 0x18007BE8C (-EnsureD2DGeometry@CRegionShape@@AEBAJXZ.c)
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180084294 (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x18019E7F0 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     ?AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUD2D_RECT_F@@PEBVCMILMatrix@@PEAUID2D1GeometrySink@@@Z @ 0x1802B7AC8 (-AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUD2D_RECT_F@@PEBVCMILMatrix@@PEAUID2D1GeometrySin.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRegionShape::GetD2DGeometry(
        struct ID2D1Geometry **this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  int v6; // eax
  unsigned int v7; // edi
  struct ID2D1Geometry *v8; // rbx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 i; // rax
  FastRegion::Internal::CRgnData *v14; // rcx
  int v15; // eax
  struct ID2D1GeometrySink *v16; // [rsp+30h] [rbp-39h] BYREF
  struct ID2D1Geometry *v17; // [rsp+38h] [rbp-31h] BYREF
  _DWORD v18[4]; // [rsp+40h] [rbp-29h]
  char v19[8]; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int64 v20; // [rsp+58h] [rbp-11h]
  _DWORD *v21; // [rsp+60h] [rbp-9h]
  __int64 v22; // [rsp+68h] [rbp-1h]
  int v23; // [rsp+70h] [rbp+7h]
  struct D2D_RECT_F v24; // [rsp+80h] [rbp+17h] BYREF

  v6 = CRegionShape::EnsureD2DGeometry((CRegionShape *)this);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0xCBu, 0LL);
    return v7;
  }
  if ( !a2 )
  {
    v8 = this[11];
    if ( v8 )
      (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v8 + 8LL))(this[11]);
    goto LABEL_5;
  }
  v16 = 0LL;
  v17 = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, struct ID2D1Geometry **))(*(_QWORD *)g_DeviceManager + 80LL))(
          g_DeviceManager,
          &v17);
  v7 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xDBu, 0LL);
    goto LABEL_19;
  }
  v11 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, struct ID2D1GeometrySink **))(*(_QWORD *)v17 + 136LL))(
          v17,
          &v16);
  v7 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xDDu, 0LL);
    goto LABEL_19;
  }
  FastRegion::CRegion::BeginIterator(this + 2, v19);
  while ( (unsigned __int64)v21 < v20 )
  {
    v18[1] = *v21;
    v18[3] = v21[2];
    v12 = 2 * v23;
    v18[0] = *(_DWORD *)(v22 + 4 * v12);
    v18[2] = *(_DWORD *)(v22 + 4 * v12 + 4);
    for ( i = 0LL; i < 4; ++i )
      *(float *)((char *)&v24.left + i * 4) = (float)(int)v18[i];
    AddTransformedRectToD2DRgnGeometrySink(&v24, a2, v16);
    FastRegion::Internal::CRgnData::StepIterator(v14, (struct FastRegion::CRegion::Iterator *)v19);
  }
  v15 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v16 + 72LL))(v16);
  v7 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0xECu, 0LL);
LABEL_19:
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
    return v7;
  }
  v8 = v17;
  v17 = 0LL;
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v16);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v17);
LABEL_5:
  *a3 = v8;
  return v7;
}
