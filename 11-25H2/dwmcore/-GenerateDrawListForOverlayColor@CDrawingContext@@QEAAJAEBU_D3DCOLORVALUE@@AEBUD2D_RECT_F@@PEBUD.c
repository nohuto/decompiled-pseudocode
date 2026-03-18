/*
 * XREFs of ?GenerateDrawListForOverlayColor@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListEntryBuilder@@@Z @ 0x18012A860
 * Callers:
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000DD2C (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 * Callees:
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180048730 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x180091460 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCE00 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCF70 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800CE690 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??_GCDrawListPrimitive0@@UEAAPEAXI@Z @ 0x1800DECF0 (--_GCDrawListPrimitive0@@UEAAPEAXI@Z.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800E0800 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z @ 0x180126B64 (-Free@-$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x180126F18 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180129660 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801EF650 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDrawingContext::GenerateDrawListForOverlayColor(
        CDrawingContext *this,
        const struct _D3DCOLORVALUE *a2,
        const struct D2D_RECT_F *a3,
        const struct D2D_MATRIX_3X2_F *a4,
        struct CDrawListEntryBuilder *a5)
{
  CDrawListPrimitive0 **v5; // rbx
  __int64 v9; // rdi
  int v10; // eax
  CMILMatrix *v11; // rcx
  unsigned __int8 v12; // al
  int v13; // esi
  int v14; // edi
  __int64 v15; // rdx
  int v16; // ebx
  _QWORD *v17; // rcx
  _DWORD *v18; // rax
  __int128 v19; // xmm0
  CDrawListPrimitive0 *v20; // rcx
  CDrawListPrimitive0 *v21; // rax
  CDrawListPrimitive0 *(__fastcall *v22)(CDrawListPrimitive0 *, char); // rax
  int v23; // eax
  int v24; // eax
  __int128 v26; // xmm0
  int v27; // eax
  LPVOID lpMem; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID *p_lpMem; // [rsp+40h] [rbp-C8h]
  struct CGeometryOnlyDrawListBrush *v30; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+50h] [rbp-B8h]
  CMultiPrimitiveDrawListBrush *v32; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v33[3]; // [rsp+60h] [rbp-A8h] BYREF
  int v34; // [rsp+78h] [rbp-90h]
  int v35; // [rsp+C4h] [rbp-44h]
  char v36; // [rsp+C8h] [rbp-40h]
  CDrawingContext *v37; // [rsp+D8h] [rbp-30h] BYREF
  CDrawListPrimitive0 *v38; // [rsp+E0h] [rbp-28h] BYREF
  unsigned int v39; // [rsp+100h] [rbp-8h]
  int v40; // [rsp+104h] [rbp-4h]
  int v41; // [rsp+108h] [rbp+0h]
  int v42; // [rsp+10Ch] [rbp+4h]
  __int128 v43; // [rsp+110h] [rbp+8h]

  v5 = &v38;
  v37 = this;
  v9 = 4LL;
  do
  {
    --v9;
    if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation((CDirtyRegionAnnotation *)v5);
    else
      wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v5);
    ++v5;
  }
  while ( v9 );
  v40 = 0;
  v41 = 0;
  v10 = *((_DWORD *)this + 74);
  v39 = 0;
  v42 = 0;
  *(_QWORD *)&v43 = 0x3F8000003F800000LL;
  *((_QWORD *)&v43 + 1) = 0x3F8000003F800000LL;
  *(_OWORD *)&v33[1] = 0LL;
  v34 = 0;
  v35 = 257;
  v36 = 0;
  if ( v10 )
    v11 = (CMILMatrix *)(*((_QWORD *)this + 36) + 68LL * (unsigned int)(v10 - 1));
  else
    v11 = (CMILMatrix *)&CMILMatrix::Identity;
  v12 = CMILMatrix::Is2DAxisAlignedPreserving(v11);
  lpMem = 0LL;
  v43 = *(__int128 *)&`CVisual::SetBlurredWallpaperSurfaceRect'::`2'::sc_defaultValue.r;
  v30 = 0LL;
  v13 = 8 * v12 + 2048;
  LOBYTE(v31) = 1;
  v42 = v13 | 1;
  v14 = v12 != 0 ? 0 : 0x3030303;
  p_lpMem = &lpMem;
  v16 = CGeometryOnlyDrawListBrush::Create(&v30, v15);
  if ( (_BYTE)v31 )
  {
    v17 = *p_lpMem;
    *p_lpMem = v30;
    if ( v17 )
      CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v17);
  }
  if ( v16 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x19B6u, 0LL);
    if ( lpMem )
      CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
  }
  else
  {
    v18 = lpMem;
    v32 = 0LL;
    *((_BYTE *)lpMem + 52) = 1;
    v19 = (__int128)*a3;
    v18[12] = v14;
    *((_OWORD *)v18 + 2) = v19;
    v20 = v38;
    v21 = (CDrawListPrimitive0 *)lpMem;
    lpMem = 0LL;
    v38 = v21;
    if ( v20 )
    {
      v22 = **(CDrawListPrimitive0 *(__fastcall ***)(CDrawListPrimitive0 *, char))v20;
      if ( v22 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
      {
        CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v20, 1);
      }
      else if ( v22 == CSurfaceDrawListBrush::`vector deleting destructor' )
      {
        CSurfaceDrawListBrush::`vector deleting destructor'(v20, 1);
      }
      else if ( v22 == CDrawListPrimitive0::`scalar deleting destructor' )
      {
        CDrawListPrimitive0::`scalar deleting destructor'(v20, 1);
      }
      else
      {
        v22(v20, 1);
      }
    }
    v23 = v39;
    if ( v39 <= 1 )
      v23 = 1;
    v39 = v23;
    std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v32);
    if ( lpMem )
      CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
    v24 = CBrushDrawListGenerator::GenerateDrawList(
            &v37,
            (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v33[1],
            a5);
    v16 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x19C2u, 0LL);
    }
    else if ( a2->a != 0.0 )
    {
      v26 = *(_OWORD *)&a2->r;
      v42 = v13;
      v43 = v26;
      v27 = CBrushDrawListGenerator::GenerateDrawList(
              &v37,
              (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v33[1],
              a5);
      v16 = v27;
      if ( v27 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v27, 0x19CBu, 0LL);
    }
  }
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v37);
  return (unsigned int)v16;
}
