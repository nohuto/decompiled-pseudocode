/*
 * XREFs of ?DrawImageResource_FillMode@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@PEBUD2D_RECT_F@@3M@Z @ 0x18024E820
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18000F914 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?DrawImageResource_TileMode@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@MAEBUD2D_POINT_2F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18024E4B0 (-DrawImageResource_TileMode@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAV.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002F800 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180048730 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800A0250 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800CE690 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x1800D0080 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800DE8E0 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x1800DEA78 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x1800DEC4C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800DF4AC (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800E0800 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x1801295D4 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ?IsSameVisualTree@CCachedVisualImage@@QEBA_NPEBVCVisualTree@@@Z @ 0x18016E7C4 (-IsSameVisualTree@CCachedVisualImage@@QEBA_NPEBVCVisualTree@@@Z.c)
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x18019D050 (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18019D07C (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderData::DrawImageResource_FillMode(
        const struct CVisualTree **a1,
        struct CDrawListEntryBuilder *a2,
        struct CImageSource *a3,
        const struct D2D_RECT_F *a4,
        const struct D2D_RECT_F *a5,
        float a6)
{
  __int64 *v6; // r12
  int v10; // ebx
  __int64 v11; // rax
  int v12; // edi
  unsigned __int8 (__fastcall *v13)(struct CImageSource *, __int64); // rax
  struct D2D_MATRIX_3X2_F *v14; // r9
  __int64 v15; // rax
  int v16; // eax
  char v17; // al
  __int64 v18; // rcx
  CSurfaceDrawListBrush *v19; // rdx
  CSurfaceDrawListBrush *v20; // rax
  __int64 v21; // xmm1_8
  int DrawList; // eax
  __int64 v23; // rcx
  CSurfaceDrawListBrush *v25[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v26; // [rsp+40h] [rbp-C0h] BYREF
  char v27; // [rsp+42h] [rbp-BEh]
  struct D2D_RECT_F v28; // [rsp+50h] [rbp-B0h] BYREF
  struct CDrawListEntryBuilder *v29; // [rsp+60h] [rbp-A0h]
  struct D2D_RECT_F v30; // [rsp+68h] [rbp-98h] BYREF
  __int64 v31; // [rsp+78h] [rbp-88h]
  _BYTE v32[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v33; // [rsp+88h] [rbp-78h]
  __int128 v34; // [rsp+A0h] [rbp-60h] BYREF
  int v35; // [rsp+B0h] [rbp-50h]
  int v36; // [rsp+FCh] [rbp-4h]
  char v37; // [rsp+100h] [rbp+0h]
  _BYTE v38[64]; // [rsp+110h] [rbp+10h] BYREF
  int v39; // [rsp+150h] [rbp+50h]
  struct D2D_RECT_F v40; // [rsp+160h] [rbp+60h] BYREF
  char v41; // [rsp+170h] [rbp+70h]
  struct D2D_RECT_F v42; // [rsp+178h] [rbp+78h] BYREF
  CDrawingContext *v43[6]; // [rsp+190h] [rbp+90h] BYREF
  int v44; // [rsp+1C4h] [rbp+C4h]
  int v45; // [rsp+1C8h] [rbp+C8h]
  int v46; // [rsp+1CCh] [rbp+CCh]
  int v47; // [rsp+1D0h] [rbp+D0h]
  float v48; // [rsp+1D4h] [rbp+D4h]

  v6 = (__int64 *)((char *)a3 + 72);
  v29 = a2;
  v10 = 0;
  CDrawListBitmap::CDrawListBitmap(
    (CDrawListBitmap *)v32,
    (struct IBitmapResource *)(((unsigned __int64)a3 + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)a3 >> 64)));
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v43, (struct CDrawingContext *)a1);
  v35 = 0;
  v34 = 0LL;
  v36 = 257;
  v37 = 0;
  if ( v33 )
  {
    v11 = *(_QWORD *)a3;
    v12 = 128;
    v48 = a6;
    v45 = 1065353216;
    v13 = *(unsigned __int8 (__fastcall **)(struct CImageSource *, __int64))(v11 + 64);
    v46 = 1065353216;
    v47 = 1065353216;
    if ( v13(a3, 18LL) && CCachedVisualImage::IsSameVisualTree(a3, a1[993]) )
      v12 = 192;
    v44 = v12;
    v28 = 0LL;
    v40 = 0LL;
    if ( a4 && a5 )
      goto LABEL_14;
    v15 = *v6;
    v39 = 0;
    v42 = 0LL;
    v25[0] = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64 *, CSurfaceDrawListBrush **))(v15 + 64))(v6, v25);
    v10 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v16, 0x471u, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v25);
      goto LABEL_28;
    }
    v17 = (*(__int64 (__fastcall **)(CSurfaceDrawListBrush *, _BYTE *, struct D2D_RECT_F *))(*(_QWORD *)v25[0] + 40LL))(
            v25[0],
            v38,
            &v42);
    v28 = v42;
    if ( v17 )
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v38, &v42, &v40.left);
    else
      v40 = v42;
    if ( v25[0] )
      (*(void (__fastcall **)(CSurfaceDrawListBrush *))(*(_QWORD *)v25[0] + 16LL))(v25[0]);
    if ( a4 )
LABEL_14:
      v28 = *a4;
    if ( a5 )
      v40 = *a5;
    v31 = 0LL;
    v30 = 0LL;
    if ( D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v28, &v40, &v30, v14) )
    {
      v25[0] = 0LL;
      *(_QWORD *)&v40.left = v25;
      v26 = SamplerMode::k_ClampClampLinear;
      v27 = 1;
      *(_QWORD *)&v40.right = 0LL;
      v41 = 1;
      v10 = CSurfaceDrawListBrush::CreateWithContentRect((__int64)v32, &v26, &v28.left, (__int64)&v40.right);
      if ( v41 )
      {
        v18 = *(_QWORD *)&v40.left;
        v19 = **(CSurfaceDrawListBrush ***)&v40.left;
        **(_QWORD **)&v40.left = *(_QWORD *)&v40.right;
        if ( v19 )
          std::default_delete<CSurfaceDrawListBrush>::operator()(v18, v19);
      }
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x499u, 0LL);
      }
      else
      {
        v20 = v25[0];
        v21 = v31;
        *(struct D2D_RECT_F *)((char *)v25[0] + 8) = v30;
        *((_QWORD *)v20 + 3) = v21;
        *(CSurfaceDrawListBrush **)&v28.left = v25[0];
        v25[0] = 0LL;
        CBrushDrawListGenerator::AttachInput((__int64)v43, 0, (__int64 *)&v28);
        std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>((CMultiPrimitiveDrawListBrush **)&v28);
        DrawList = CBrushDrawListGenerator::GenerateDrawList(
                     v43,
                     (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v34,
                     v29);
        v10 = DrawList;
        if ( DrawList < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DrawList, 0x49Eu, 0LL);
          std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(v25);
          goto LABEL_28;
        }
      }
      if ( v25[0] )
        std::default_delete<CSurfaceDrawListBrush>::operator()(v23, v25[0]);
    }
  }
LABEL_28:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v43);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v32);
  return (unsigned int)v10;
}
