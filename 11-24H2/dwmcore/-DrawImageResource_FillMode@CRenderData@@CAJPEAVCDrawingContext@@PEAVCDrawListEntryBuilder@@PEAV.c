/*
 * XREFs of ?DrawImageResource_FillMode@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@PEBUD2D_RECT_F@@3M@Z @ 0x18024498C
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@IV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x18013BB14 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 *     ?DrawImageResource_TileMode@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAVCImageSource@@MAEBUD2D_POINT_2F@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18024461C (-DrawImageResource_TileMode@CRenderData@@CAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@PEAV.c)
 * Callees:
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z @ 0x180019E24 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@@Z.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x18004AC10 (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z @ 0x18004BC04 (--0CDrawListBitmap@@QEAA@PEAVIBitmapResource@@@Z.c)
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ?IsSameVisualTree@CCachedVisualImage@@QEBA_NPEBVCVisualTree@@@Z @ 0x18006E9FC (-IsSameVisualTree@CCachedVisualImage@@QEBA_NPEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800A0660 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ??R?$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z @ 0x1800B9DE4 (--R-$default_delete@VCSurfaceDrawListBrush@@@std@@QEBAXPEAVCSurfaceDrawListBrush@@@Z.c)
 *     ??1?$unique_ptr@VCSurfaceDrawListBrush@@U?$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x1800B9E10 (--1-$unique_ptr@VCSurfaceDrawListBrush@@U-$default_delete@VCSurfaceDrawListBrush@@@std@@@std@@QE.c)
 *     ?CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1800BA160 (-CreateWithContentRect@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBUD2D_RECT.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z @ 0x1800D1630 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUD2D_RECT_F@@AEAU1@@Z.c)
 *     ?AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@@Z @ 0x18016AC8C (-AttachInput@CBrushDrawListGenerator@@QEAAXI$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_delet.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18016BE30 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18016C070 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  CSurfaceDrawListBrush *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  int v14; // edi
  unsigned __int8 (__fastcall *v15)(struct CImageSource *, __int64); // rax
  struct D2D_MATRIX_3X2_F *v16; // r9
  __int64 v17; // rax
  int v18; // eax
  char v19; // al
  __int64 v20; // rcx
  CSurfaceDrawListBrush *v21; // rdx
  CSurfaceDrawListBrush *v22; // rax
  __int64 v23; // xmm1_8
  __int64 v24; // rdx
  __int64 v25; // r8
  int DrawList; // eax
  __int64 v27; // rcx
  CSurfaceDrawListBrush *v29[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int16 v30; // [rsp+40h] [rbp-C0h] BYREF
  char v31; // [rsp+42h] [rbp-BEh]
  struct D2D_RECT_F v32; // [rsp+50h] [rbp-B0h] BYREF
  struct CDrawListEntryBuilder *v33; // [rsp+60h] [rbp-A0h]
  struct D2D_RECT_F v34; // [rsp+68h] [rbp-98h] BYREF
  __int64 v35; // [rsp+78h] [rbp-88h]
  _BYTE v36[8]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v37; // [rsp+88h] [rbp-78h]
  __int128 v38; // [rsp+A0h] [rbp-60h] BYREF
  int v39; // [rsp+B0h] [rbp-50h]
  int v40; // [rsp+FCh] [rbp-4h]
  char v41; // [rsp+100h] [rbp+0h]
  _BYTE v42[64]; // [rsp+110h] [rbp+10h] BYREF
  int v43; // [rsp+150h] [rbp+50h]
  struct D2D_RECT_F v44; // [rsp+160h] [rbp+60h] BYREF
  char v45; // [rsp+170h] [rbp+70h]
  struct D2D_RECT_F v46; // [rsp+178h] [rbp+78h] BYREF
  CDrawingContext *v47[6]; // [rsp+190h] [rbp+90h] BYREF
  int v48; // [rsp+1C4h] [rbp+C4h]
  int v49; // [rsp+1C8h] [rbp+C8h]
  int v50; // [rsp+1CCh] [rbp+CCh]
  int v51; // [rsp+1D0h] [rbp+D0h]
  float v52; // [rsp+1D4h] [rbp+D4h]

  v6 = (__int64 *)((char *)a3 + 72);
  v33 = a2;
  v10 = 0;
  CDrawListBitmap::CDrawListBitmap(
    (CDrawListBitmap *)v36,
    (struct IBitmapResource *)(((unsigned __int64)a3 + 72) & ((unsigned __int128)-(__int128)(unsigned __int64)a3 >> 64)));
  CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v47, (struct CDrawingContext *)a1);
  v39 = 0;
  v38 = 0LL;
  v40 = 257;
  v41 = 0;
  if ( v37 )
  {
    v13 = *(_QWORD *)a3;
    v14 = 128;
    v52 = a6;
    v49 = 1065353216;
    v15 = *(unsigned __int8 (__fastcall **)(struct CImageSource *, __int64))(v13 + 64);
    v50 = 1065353216;
    v51 = 1065353216;
    if ( v15(a3, 18LL) && CCachedVisualImage::IsSameVisualTree(a3, a1[993]) )
      v14 = 192;
    v48 = v14;
    v32 = 0LL;
    v44 = 0LL;
    if ( a4 && a5 )
      goto LABEL_14;
    v17 = *v6;
    v43 = 0;
    v46 = 0LL;
    v29[0] = 0LL;
    v18 = (*(__int64 (__fastcall **)(__int64 *, CSurfaceDrawListBrush **))(v17 + 64))(v6, v29);
    v10 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, 0x471u, 0LL);
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v29);
      goto LABEL_28;
    }
    v19 = (*(__int64 (__fastcall **)(CSurfaceDrawListBrush *, _BYTE *, struct D2D_RECT_F *))(*(_QWORD *)v29[0] + 40LL))(
            v29[0],
            v42,
            &v46);
    v32 = v46;
    if ( v19 )
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)v42, &v46, &v44.left);
    else
      v44 = v46;
    if ( v29[0] )
      (*(void (__fastcall **)(CSurfaceDrawListBrush *))(*(_QWORD *)v29[0] + 16LL))(v29[0]);
    if ( a4 )
LABEL_14:
      v32 = *a4;
    if ( a5 )
      v44 = *a5;
    v35 = 0LL;
    v34 = 0LL;
    if ( D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v32, &v44, &v34, v16) )
    {
      v29[0] = 0LL;
      *(_QWORD *)&v44.left = v29;
      v30 = SamplerMode::k_ClampClampLinear;
      v31 = 1;
      *(_QWORD *)&v44.right = 0LL;
      v45 = 1;
      v10 = CSurfaceDrawListBrush::CreateWithContentRect((__int64)v36, &v30, &v32.left, (__int64)&v44.right);
      if ( v45 )
      {
        v20 = *(_QWORD *)&v44.left;
        v21 = **(CSurfaceDrawListBrush ***)&v44.left;
        **(_QWORD **)&v44.left = *(_QWORD *)&v44.right;
        if ( v21 )
          std::default_delete<CSurfaceDrawListBrush>::operator()(v20, v21);
      }
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x499u, 0LL);
      }
      else
      {
        v22 = v29[0];
        v23 = v35;
        *(struct D2D_RECT_F *)((char *)v29[0] + 8) = v34;
        *((_QWORD *)v22 + 3) = v23;
        *(CSurfaceDrawListBrush **)&v32.left = v29[0];
        v29[0] = 0LL;
        CBrushDrawListGenerator::AttachInput((__int64)v47, 0, (__int64 *)&v32);
        std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>((CMultiPrimitiveDrawListBrush **)&v32, v24, v25);
        DrawList = CBrushDrawListGenerator::GenerateDrawList(
                     v47,
                     (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)&v38,
                     v33);
        v10 = DrawList;
        if ( DrawList < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, DrawList, 0x49Eu, 0LL);
          std::unique_ptr<CSurfaceDrawListBrush>::~unique_ptr<CSurfaceDrawListBrush>(v29);
          goto LABEL_28;
        }
      }
      v11 = v29[0];
      if ( v29[0] )
        std::default_delete<CSurfaceDrawListBrush>::operator()(v27, v29[0]);
    }
  }
LABEL_28:
  CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v47, (__int64)v11, v12);
  CDrawListBitmap::~CDrawListBitmap((CDrawListBitmap *)v36);
  return (unsigned int)v10;
}
