/*
 * XREFs of ?GenerateDrawListForOverlayColor@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListEntryBuilder@@@Z @ 0x18001B0B0
 * Callers:
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180139F24 (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 * Callees:
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180019EB0 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ?Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z @ 0x18006BF94 (-Create@CGeometryOnlyDrawListBrush@@SAJPEAPEAV1@@Z.c)
 *     ?Free@?$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z @ 0x18006C184 (-Free@-$CThreadLocalObjectCache@VCGeometryOnlyDrawListBrush@@V1@@@SAXPEAX@Z.c)
 *     ?Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ @ 0x180072B00 (-Is2DAxisAlignedPreserving@CMILMatrix@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18009EDD0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x18009EF40 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800A0660 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??_GCDrawListPrimitive0@@UEAAPEAXI@Z @ 0x18016AD30 (--_GCDrawListPrimitive0@@UEAAPEAXI@Z.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18016BE30 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18016C070 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801E53E0 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  bool v12; // al
  int v13; // esi
  int v14; // edi
  int v15; // ebx
  void *v16; // rcx
  _DWORD *v17; // rax
  __int128 v18; // xmm0
  CDrawListPrimitive0 *v19; // rcx
  CDrawListPrimitive0 *v20; // rax
  void *(__fastcall *v21)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  int v22; // eax
  int DrawList; // eax
  __int128 v25; // xmm0
  int v26; // eax
  LPVOID lpMem; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID *p_lpMem; // [rsp+40h] [rbp-C8h]
  struct CGeometryOnlyDrawListBrush *v29; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B8h]
  __int64 v31; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v32[3]; // [rsp+60h] [rbp-A8h] BYREF
  int v33; // [rsp+78h] [rbp-90h]
  int v34; // [rsp+C4h] [rbp-44h]
  char v35; // [rsp+C8h] [rbp-40h]
  CDrawingContext *v36; // [rsp+D8h] [rbp-30h] BYREF
  CDrawListPrimitive0 *v37; // [rsp+E0h] [rbp-28h] BYREF
  unsigned int v38; // [rsp+100h] [rbp-8h]
  int v39; // [rsp+104h] [rbp-4h]
  int v40; // [rsp+108h] [rbp+0h]
  int v41; // [rsp+10Ch] [rbp+4h]
  __int128 v42; // [rsp+110h] [rbp+8h]

  v5 = &v37;
  v36 = this;
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
  v39 = 0;
  v40 = 0;
  v10 = *((_DWORD *)this + 74);
  v38 = 0;
  v41 = 0;
  *(_QWORD *)&v42 = 0x3F8000003F800000LL;
  *((_QWORD *)&v42 + 1) = 0x3F8000003F800000LL;
  *(_OWORD *)&v32[1] = 0LL;
  v33 = 0;
  v34 = 257;
  v35 = 0;
  if ( v10 )
    v11 = (CMILMatrix *)(*((_QWORD *)this + 36) + 68LL * (unsigned int)(v10 - 1));
  else
    v11 = (CMILMatrix *)&CMILMatrix::Identity;
  v12 = CMILMatrix::Is2DAxisAlignedPreserving(v11);
  lpMem = 0LL;
  v42 = *(__int128 *)&`CVisual::SetBlurredWallpaperSurfaceRect'::`2'::sc_defaultValue.r;
  v29 = 0LL;
  v13 = 8 * v12 + 2048;
  LOBYTE(v30) = 1;
  v41 = v13 | 1;
  v14 = v12 ? 0 : 0x3030303;
  p_lpMem = &lpMem;
  v15 = CGeometryOnlyDrawListBrush::Create(&v29);
  if ( (_BYTE)v30 )
  {
    v16 = *p_lpMem;
    *p_lpMem = v29;
    if ( v16 )
      CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(v16);
  }
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v15, 0x19DEu, 0LL);
    if ( lpMem )
      CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
  }
  else
  {
    v17 = lpMem;
    v31 = 0LL;
    *((_BYTE *)lpMem + 52) = 1;
    v18 = (__int128)*a3;
    v17[12] = v14;
    *((_OWORD *)v17 + 2) = v18;
    v19 = v37;
    v20 = (CDrawListPrimitive0 *)lpMem;
    lpMem = 0LL;
    v37 = v20;
    if ( v19 )
    {
      v21 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v19;
      if ( v21 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
      {
        CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v19, 1u);
      }
      else if ( v21 == CSurfaceDrawListBrush::`vector deleting destructor' )
      {
        CSurfaceDrawListBrush::`vector deleting destructor'(v19, 1u);
      }
      else if ( v21 == CDrawListPrimitive0::`scalar deleting destructor' )
      {
        CDrawListPrimitive0::`scalar deleting destructor'(v19, 1u);
      }
      else
      {
        v21(v19, 1u);
      }
    }
    v22 = v38;
    if ( v38 <= 1 )
      v22 = 1;
    v38 = v22;
    std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(&v31);
    if ( lpMem )
      CThreadLocalObjectCache<CGeometryOnlyDrawListBrush,CGeometryOnlyDrawListBrush>::Free(lpMem);
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)&v36,
                 (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v32[1],
                 a5);
    v15 = DrawList;
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DrawList, 0x19EAu, 0LL);
    }
    else if ( a2->a != 0.0 )
    {
      v25 = *(_OWORD *)&a2->r;
      v41 = v13;
      v42 = v25;
      v26 = CBrushDrawListGenerator::GenerateDrawList(
              (CBrushDrawListGenerator *)&v36,
              (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v32[1],
              a5);
      v15 = v26;
      if ( v26 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v26, 0x19F3u, 0LL);
    }
  }
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v36);
  return (unsigned int)v15;
}
