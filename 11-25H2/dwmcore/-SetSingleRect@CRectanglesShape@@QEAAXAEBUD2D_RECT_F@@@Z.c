/*
 * XREFs of ?SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x1800ABA50
 * Callers:
 *     ?ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSURFACE@@@Z @ 0x180022644 (-ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSURFACE.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResource@@PEBVCShape@@_NH@Z @ 0x1800727D4 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIBitmapResourc.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18008FC40 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ?SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBV3@PEBVCSurfaceRenderStrategy@1@@Z @ 0x180113FBC (-SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x1801AA8F8 (-ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDA.c)
 *     ?RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z @ 0x1802131D4 (-RenderBlackContent@CWindowNode@@AEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@Z @ 0x1800E243C (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRectanglesShape::SetSingleRect(CRectanglesShape *this, const struct D2D_RECT_F *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  CResource *v6; // rcx
  void (*v7)(void); // rax
  __int64 v8; // rdx
  __int128 v9; // xmm0
  __int64 v10; // rbx
  unsigned __int64 v11; // rdi
  __int64 v12; // r9
  __int64 v13; // rcx
  unsigned __int64 v14; // r10
  _OWORD *v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  _OWORD *v18; // r8
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  void *v22; // rax
  const void *v23; // rbx
  void *v24; // rbp
  signed __int64 v25; // rsi
  void *v26; // rax
  CRectanglesShape *v27; // rcx
  _OWORD *v28; // rdx
  __int128 v29; // [rsp+20h] [rbp-78h]
  __int128 v30; // [rsp+50h] [rbp-48h] BYREF
  __int64 v31; // [rsp+60h] [rbp-38h]

  v4 = *((_QWORD *)this + 3);
  v5 = (v4 - *((_QWORD *)this + 2)) >> 4;
  if ( v5 )
    *((_QWORD *)this + 3) = v4 - 16 * v5;
  v6 = (CResource *)*((_QWORD *)this + 7);
  if ( v6 )
  {
    v7 = *(void (**)(void))(*(_QWORD *)v6 + 16LL);
    if ( (char *)v7 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v6);
    else
      v7();
    *((_QWORD *)this + 7) = 0LL;
  }
  v8 = *((_QWORD *)this + 3);
  v9 = (__int128)*a2;
  v10 = *((_QWORD *)this + 2);
  v11 = (v8 - v10) >> 4;
  if ( !((*((_QWORD *)this + 4) - v8) >> 4) )
  {
    v19 = v11 + 1;
    v20 = (*((_QWORD *)this + 4) - v10) >> 4;
    if ( v11 + 1 < v11 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      goto LABEL_25;
    }
    v21 = v20 >> 1;
    if ( v20 <= ~(v20 >> 1) && v21 + v20 >= v19 )
      v19 = v21 + v20;
    v22 = operator new[](saturated_mul(v19, 0x10uLL));
    v23 = (const void *)*((_QWORD *)this + 2);
    v24 = v22;
    *(_QWORD *)&v29 = v22;
    v25 = *((_QWORD *)this + 3) - (_QWORD)v23;
    *((_QWORD *)&v29 + 1) = v11;
    v30 = v29;
    v31 = 0LL;
    v26 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *> &,__int64>(
                    &v30,
                    v25 >> 4);
    memmove_0(v26, v23, v25);
    v27 = (CRectanglesShape *)*((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = v24;
    if ( v27 == (CRectanglesShape *)((char *)this + 40) )
      v27 = 0LL;
    operator delete(v27);
    v10 = *((_QWORD *)this + 2);
    v8 = v10 + 16 * v11;
    *((_QWORD *)this + 3) = v8;
    *((_QWORD *)this + 4) = v10 + 16 * v19;
  }
  v12 = (v8 - v10) >> 4;
  v13 = 16 * v12;
  v14 = v12 - v11;
  v15 = (_OWORD *)(16 * v12 + v10);
  if ( !v15 )
    goto LABEL_20;
  v16 = ((v8 - v10) >> 4) - v11;
  if ( v14 > 1 )
    v16 = 1LL;
  v17 = 16 * v16;
  v18 = (_OWORD *)(v8 - v17);
  if ( v8 != v8 - v17 )
  {
    v28 = (_OWORD *)(v8 - 16);
    *v15 = *v28;
    if ( v28 != v18 )
LABEL_20:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v14 > 1 )
  {
    if ( !v12 )
      goto LABEL_17;
    if ( !v10 )
      goto LABEL_20;
    if ( v12 >= 0 )
    {
LABEL_17:
      if ( (__int64)(16 * v12 - 16 * v11 - 16) >> 4 > 0 )
      {
        if ( v12 < (unsigned __int64)((__int64)(16 * v12 - 16 * v11 - 16) >> 4) )
          goto LABEL_20;
      }
      else if ( (__int64)(16 * v12 - 16 * v11 - 16) >> 4 < 0 )
      {
        goto LABEL_20;
      }
      memmove_0(
        (void *)(v10 + v13 - (16 * v12 - 16 * v11 - 16)),
        (const void *)(v10 + 16 * v11),
        16 * v12 - 16 * v11 - 16);
      goto LABEL_13;
    }
LABEL_25:
    if ( v12 )
      goto LABEL_20;
    goto LABEL_17;
  }
LABEL_13:
  *((_QWORD *)this + 3) += 16LL;
  *(_OWORD *)(v10 + 16 * v11) = v9;
}
