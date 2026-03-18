/*
 * XREFs of ?GenerateDrawList@CBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180010310
 * Callers:
 *     ?Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800D4130 (-Draw@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?GenerateDrawList@CSurfaceRenderStrategy@CSurfaceBrush@@UEBAJPEAV2@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801FBD50 (-GenerateDrawList@CSurfaceRenderStrategy@CSurfaceBrush@@UEBAJPEAV2@PEAVCDrawingContext@@AEBUD2D_.c)
 * Callees:
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18000F0B8 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x18000F4E0 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?CreateLayoutGeometryDrawListBrush@CBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x180010880 (-CreateLayoutGeometryDrawListBrush@CBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDra.c)
 *     ?Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180011A50 (-Update@CDrawListCache@@QEAAXPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180048730 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEn.c)
 *     ?GetBounds@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007C2E0 (-GetBounds@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POIN.c)
 *     ?GetBounds@CBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007C790 (-GetBounds@CBrush@@UEBAJAEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTAND.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCE00 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z @ 0x1800CCF70 (--_ECMultiPrimitiveDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800CE690 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@@Z @ 0x1800CEB80 (-GetBrushParameters@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@PEAVCBrushDrawListGenerator@@.c)
 *     ??_GCDrawListPrimitive0@@UEAAPEAXI@Z @ 0x1800DECF0 (--_GCDrawListPrimitive0@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x1801251D0 (-CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 *     ?GetBrushParameters@CColorBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180127530 (-GetBrushParameters@CColorBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18012AB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ??0?$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1801EF650 (--0-$com_ptr_t@UID3D11RasterizerState@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x1801FB160 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?IsOpaqueRect@CEffectBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z @ 0x1801FBEA0 (-IsOpaqueRect@CEffectBrush@@UEBA_NAEBUD2D_SIZE_F@@PEAUD2D_RECT_F@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1802E87D0 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBrush::GenerateDrawList(
        CBrushRenderingGraph **this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  CBrushRenderingGraph *v4; // rax
  __int64 (__fastcall *v7)(CNineGridBrush *__hidden, struct CDrawingContext *, const struct D2D_SIZE_F *, struct CDrawListBrush **); // rax
  int LayoutGeometryDrawListBrush; // eax
  CMultiPrimitiveDrawListBrush *v11; // r8
  int v12; // ebx
  void *(__fastcall *v13)(CDrawListPrimitive0 *__hidden, unsigned int); // r9
  void *(__fastcall *v14)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  CBrushRenderingGraph *v15; // rax
  FLOAT height; // xmm1_4
  int (*v17)(CColorBrush *__hidden, struct CBrushDrawListGenerator *); // rax
  int BrushParameters; // eax
  void *(__fastcall *v19)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  int DrawList; // eax
  __int64 v22; // rax
  CBrushRenderingGraph *v23; // rax
  __int64 (__fastcall *v24)(CBrushRenderingGraph **, const struct D2D_SIZE_F *, __int128 *, void *(__fastcall *)(CDrawListPrimitive0 *__hidden, unsigned int)); // rax
  int Bounds; // eax
  CBrushRenderingGraph *v26; // rax
  bool (__fastcall *v27)(CEffectBrush *__hidden, const struct D2D_SIZE_F *, struct D2D_RECT_F *); // rax
  bool IsOpaqueRect; // al
  unsigned int v29; // eax
  int v30; // eax
  unsigned int v31; // [rsp+20h] [rbp-E0h]
  CDrawListPrimitive0 *v32; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v33[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v34; // [rsp+50h] [rbp-B0h]
  int v35; // [rsp+9Ch] [rbp-64h]
  char v36; // [rsp+A0h] [rbp-60h]
  struct D2D_RECT_F v37; // [rsp+B0h] [rbp-50h] BYREF
  char v38; // [rsp+C0h] [rbp-40h]
  __int128 v39; // [rsp+C8h] [rbp-38h] BYREF
  struct CDrawingContext *v40; // [rsp+E0h] [rbp-20h] BYREF
  char v41[8]; // [rsp+E8h] [rbp-18h] BYREF
  char v42[8]; // [rsp+F0h] [rbp-10h] BYREF
  char v43[8]; // [rsp+F8h] [rbp-8h] BYREF
  __int128 v44; // [rsp+100h] [rbp+0h] BYREF
  __int128 v45; // [rsp+110h] [rbp+10h]
  int v46; // [rsp+120h] [rbp+20h]
  int v47; // [rsp+124h] [rbp+24h]
  _BYTE v48[4496]; // [rsp+130h] [rbp+30h] BYREF

  v4 = *this;
  v32 = 0LL;
  *(_QWORD *)&v37.right = 0LL;
  *(_QWORD *)&v37.left = &v32;
  v7 = (__int64 (__fastcall *)(CNineGridBrush *__hidden, struct CDrawingContext *, const struct D2D_SIZE_F *, struct CDrawListBrush **))*((_QWORD *)v4 + 44);
  v38 = 1;
  if ( v7 == CBrush::CreateLayoutGeometryDrawListBrush )
  {
    LayoutGeometryDrawListBrush = CBrush::CreateLayoutGeometryDrawListBrush(
                                    (CBrush *)this,
                                    a2,
                                    a3,
                                    (struct CDrawListBrush **)&v37.right);
  }
  else if ( v7 == CNineGridBrush::CreateLayoutGeometryDrawListBrush )
  {
    LayoutGeometryDrawListBrush = CNineGridBrush::CreateLayoutGeometryDrawListBrush(
                                    (CNineGridBrush *)this,
                                    a2,
                                    a3,
                                    (struct CDrawListBrush **)&v37.right);
  }
  else
  {
    LayoutGeometryDrawListBrush = v7((CNineGridBrush *)this, a2, a3, (struct CDrawListBrush **)&v37.right);
  }
  v12 = LayoutGeometryDrawListBrush;
  v13 = CDrawListPrimitive0::`scalar deleting destructor';
  if ( v38 )
  {
    v11 = **(CMultiPrimitiveDrawListBrush ***)&v37.left;
    **(_QWORD **)&v37.left = *(_QWORD *)&v37.right;
    if ( v11 )
    {
      v14 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v11;
      if ( v14 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
      {
        CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v11, 1u);
      }
      else if ( v14 == CSurfaceDrawListBrush::`vector deleting destructor' )
      {
        CSurfaceDrawListBrush::`vector deleting destructor'(v11, 1u);
      }
      else if ( v14 == CDrawListPrimitive0::`scalar deleting destructor' )
      {
        CDrawListPrimitive0::`scalar deleting destructor'(v11, 1u);
      }
      else
      {
        ((void (__fastcall *)(CMultiPrimitiveDrawListBrush *, __int64, CMultiPrimitiveDrawListBrush *, void *(__fastcall *)(CDrawListPrimitive0 *__hidden, unsigned int)))v14)(
          v11,
          1LL,
          v11,
          CDrawListPrimitive0::`scalar deleting destructor');
      }
    }
  }
  if ( v12 < 0 )
  {
    v31 = 187;
LABEL_23:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18031E8C0, 3u, v12, v31, 0LL);
    goto LABEL_24;
  }
  if ( !this[10] )
  {
    v40 = a2;
    if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      v44 = 0LL;
    else
      wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v41);
    if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
    {
      *((_QWORD *)&v44 + 1) = 0LL;
      *(_QWORD *)&v45 = 0LL;
    }
    else
    {
      wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v42);
    }
    if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> == (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      v45 = 0LL;
    else
      wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(v43);
    if ( (char *)wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy> != (char *)CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      wil::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>::com_ptr_t<ID3D11RasterizerState,wil::err_returncode_policy>(&v44);
    v15 = *this;
    height = a3->height;
    HIDWORD(v44) = LODWORD(a3->width);
    v17 = (int (*)(CColorBrush *__hidden, struct CBrushDrawListGenerator *))*((_QWORD *)v15 + 42);
    *(_QWORD *)&v45 = LODWORD(height);
    DWORD2(v44) = 0;
    *((_QWORD *)&v45 + 1) = 0x3F8000003F800000LL;
    v46 = 1065353216;
    v47 = 1065353216;
    if ( (char *)v17 == (char *)CBitmapRenderStrategy::GetBrushParameters )
    {
      BrushParameters = CBitmapRenderStrategy::GetBrushParameters(
                          (CBitmapRenderStrategy *)this,
                          (const struct CSurfaceBrush *)&v40,
                          v11);
    }
    else if ( (char *)v17 == (char *)CSurfaceBrush::GetBrushParameters )
    {
      BrushParameters = CSurfaceBrush::GetBrushParameters((CSurfaceBrush *)this, (struct CBrushDrawListGenerator *)&v40);
    }
    else if ( v17 == CColorBrush::GetBrushParameters )
    {
      BrushParameters = CColorBrush::GetBrushParameters((CColorBrush *)this, (struct CBrushDrawListGenerator *)&v40);
    }
    else
    {
      BrushParameters = ((__int64 (__fastcall *)(CBrushRenderingGraph **, struct CDrawingContext **, CMultiPrimitiveDrawListBrush *, void *(__fastcall *)(CDrawListPrimitive0 *__hidden, unsigned int)))v17)(
                          this,
                          &v40,
                          v11,
                          v13);
    }
    v12 = BrushParameters;
    if ( BrushParameters < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18031E8C0, 3u, BrushParameters, 0xC0u, 0LL);
    }
    else
    {
      v33[0] = v32;
      v33[1] = 0LL;
      v34 = 0;
      v35 = 257;
      v36 = 0;
      CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v48);
      DrawList = CBrushDrawListGenerator::GenerateDrawList(
                   (CBrushDrawListGenerator *)&v40,
                   (const struct CBrushDrawListGenerator::GenerateDrawListProperties *)v33,
                   (struct CDrawListEntryBuilder *)v48);
      v12 = DrawList;
      if ( DrawList < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18031E8C0, 3u, DrawList, 0xC7u, 0LL);
      else
        CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v48);
      CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v48);
    }
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v40);
    goto LABEL_24;
  }
  v22 = *((_QWORD *)a2 + 5);
  if ( *(int *)(v22 + 616) < 37632 || *(_BYTE *)(v22 + 1497) )
    goto LABEL_24;
  v23 = *this;
  v39 = 0LL;
  v24 = (__int64 (__fastcall *)(CBrushRenderingGraph **, const struct D2D_SIZE_F *, __int128 *, void *(__fastcall *)(CDrawListPrimitive0 *__hidden, unsigned int)))*((_QWORD *)v23 + 23);
  if ( (char *)v24 == (char *)CBrush::GetBounds )
  {
    Bounds = CBrush::GetBounds(this, a3, &v39, v13);
  }
  else if ( (char *)v24 == (char *)CMaskBrush::GetBounds )
  {
    Bounds = CMaskBrush::GetBounds(this, a3, &v39, v13);
  }
  else
  {
    Bounds = v24(this, a3, &v39, v13);
  }
  v12 = Bounds;
  if ( Bounds < 0 )
  {
    v31 = 206;
    goto LABEL_23;
  }
  v26 = *this;
  v37 = 0LL;
  v27 = (bool (__fastcall *)(CEffectBrush *__hidden, const struct D2D_SIZE_F *, struct D2D_RECT_F *))*((_QWORD *)v26 + 40);
  if ( v27 == CEffectBrush::IsOpaqueRect )
    IsOpaqueRect = CEffectBrush::IsOpaqueRect((CEffectBrush *)this, a3, &v37);
  else
    IsOpaqueRect = v27((CEffectBrush *)this, a3, &v37);
  if ( !IsOpaqueRect
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(v37.top - *((float *)&v39 + 1)) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(v37.left - *(float *)&v39) & _xmm) > 0.0000011920929
    || COERCE_FLOAT(COERCE_UNSIGNED_INT(v37.right - *((float *)&v39 + 2)) & _xmm) > 0.0000011920929
    || (v29 = 1, COERCE_FLOAT(COERCE_UNSIGNED_INT(v37.bottom - *((float *)&v39 + 3)) & _xmm) > 0.0000011920929) )
  {
    v29 = 0;
  }
  v30 = CBrushRenderingGraph::RenderSubgraphs(this[10], a2, a3, v32, v29, a4);
  v12 = v30;
  if ( v30 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18031E8C0, 3u, v30, 0xDAu, 0LL);
LABEL_24:
  if ( v32 )
  {
    v19 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v32;
    if ( v19 == CMultiPrimitiveDrawListBrush::`vector deleting destructor' )
    {
      CMultiPrimitiveDrawListBrush::`vector deleting destructor'(v32, 1u);
    }
    else if ( v19 == CSurfaceDrawListBrush::`vector deleting destructor' )
    {
      CSurfaceDrawListBrush::`vector deleting destructor'(v32, 1u);
    }
    else if ( v19 == CDrawListPrimitive0::`scalar deleting destructor' )
    {
      CDrawListPrimitive0::`scalar deleting destructor'(v32, 1u);
    }
    else
    {
      v19(v32, 1u);
    }
  }
  return (unsigned int)v12;
}
