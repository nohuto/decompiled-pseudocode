/*
 * XREFs of ?SetSingleRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x180079C30
 * Callers:
 *     ?Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800712E0 (-Insert@CDrawListEntryBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc.c)
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEBV3@PEBVCSurfaceRenderStrategy@1@@Z @ 0x180133850 (-SetSurface@CSurfaceBrush@@QEAAJPEAVCResource@@AEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_P.c)
 *     ?ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSURFACE@@@Z @ 0x180133B60 (-ProcessSetSurface@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSURFACE.c)
 *     ?ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDATE@@PEBXI@Z @ 0x1801A0974 (-ProcessSegmentUpdate@CGenericInk@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GENERICINK_SEGMENTUPDA.c)
 *     ??0CRectanglesShape@@QEAA@AEBUtagRECT@@@Z @ 0x1801EC3A8 (--0CRectanglesShape@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x1802375F0 (-RenderContent@CWindowNode@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@_J@Z @ 0x1800BC0FC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRectanglesShape::SetSingleRect(CRectanglesShape *this, const struct D2D_RECT_F *a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  CCachedVisualImage *v7; // rcx
  void (*v8)(void); // rax
  __int64 v9; // rdx
  __int128 v10; // xmm0
  __int64 v11; // rbx
  unsigned __int64 v12; // rdi
  __int64 v13; // r9
  __int64 v14; // rcx
  unsigned __int64 v15; // r10
  _OWORD *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  _OWORD *v19; // r8
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rdx
  void *v23; // rax
  const void *v24; // rbx
  void *v25; // rbp
  signed __int64 v26; // rsi
  void *v27; // rax
  CRectanglesShape *v28; // rcx
  _OWORD *v29; // rdx
  __int128 v30; // [rsp+20h] [rbp-78h]
  __int128 v31; // [rsp+50h] [rbp-48h] BYREF
  __int64 v32; // [rsp+60h] [rbp-38h]

  v5 = *((_QWORD *)this + 3);
  v6 = (v5 - *((_QWORD *)this + 2)) >> 4;
  if ( v6 )
    *((_QWORD *)this + 3) = v5 - 16 * v6;
  v7 = (CCachedVisualImage *)*((_QWORD *)this + 7);
  if ( v7 )
  {
    v8 = *(void (**)(void))(*(_QWORD *)v7 + 16LL);
    if ( (char *)v8 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(
        v7,
        (__int64)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease,
        a3);
    else
      v8();
    *((_QWORD *)this + 7) = 0LL;
  }
  v9 = *((_QWORD *)this + 3);
  v10 = (__int128)*a2;
  v11 = *((_QWORD *)this + 2);
  v12 = (v9 - v11) >> 4;
  if ( !((*((_QWORD *)this + 4) - v9) >> 4) )
  {
    v20 = v12 + 1;
    v21 = (*((_QWORD *)this + 4) - v11) >> 4;
    if ( v12 + 1 < v12 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      goto LABEL_25;
    }
    v22 = v21 >> 1;
    if ( v21 <= ~(v21 >> 1) && v22 + v21 >= v20 )
      v20 = v22 + v21;
    v23 = operator new[](saturated_mul(v20, 0x10uLL));
    v24 = (const void *)*((_QWORD *)this + 2);
    v25 = v23;
    *(_QWORD *)&v30 = v23;
    v26 = *((_QWORD *)this + 3) - (_QWORD)v24;
    *((_QWORD *)&v30 + 1) = v12;
    v31 = v30;
    v32 = 0LL;
    v27 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *> &,__int64>(
                    &v31,
                    v26 >> 4);
    memmove_0(v27, v24, v26);
    v28 = (CRectanglesShape *)*((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = v25;
    if ( v28 == (CRectanglesShape *)((char *)this + 40) )
      v28 = 0LL;
    operator delete(v28);
    v11 = *((_QWORD *)this + 2);
    v9 = v11 + 16 * v12;
    *((_QWORD *)this + 3) = v9;
    *((_QWORD *)this + 4) = v11 + 16 * v20;
  }
  v13 = (v9 - v11) >> 4;
  v14 = 16 * v13;
  v15 = v13 - v12;
  v16 = (_OWORD *)(16 * v13 + v11);
  if ( !v16 )
    goto LABEL_20;
  v17 = ((v9 - v11) >> 4) - v12;
  if ( v15 > 1 )
    v17 = 1LL;
  v18 = 16 * v17;
  v19 = (_OWORD *)(v9 - v18);
  if ( v9 != v9 - v18 )
  {
    v29 = (_OWORD *)(v9 - 16);
    *v16 = *v29;
    if ( v29 != v19 )
LABEL_20:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v15 > 1 )
  {
    if ( !v13 )
      goto LABEL_17;
    if ( !v11 )
      goto LABEL_20;
    if ( v13 >= 0 )
    {
LABEL_17:
      if ( (__int64)(16 * v13 - 16 * v12 - 16) >> 4 > 0 )
      {
        if ( v13 < (unsigned __int64)((__int64)(16 * v13 - 16 * v12 - 16) >> 4) )
          goto LABEL_20;
      }
      else if ( (__int64)(16 * v13 - 16 * v12 - 16) >> 4 < 0 )
      {
        goto LABEL_20;
      }
      memmove_0(
        (void *)(v11 + v14 - (16 * v13 - 16 * v12 - 16)),
        (const void *)(v11 + 16 * v12),
        16 * v13 - 16 * v12 - 16);
      goto LABEL_13;
    }
LABEL_25:
    if ( v13 )
      goto LABEL_20;
    goto LABEL_17;
  }
LABEL_13:
  *((_QWORD *)this + 3) += 16LL;
  *(_OWORD *)(v11 + 16 * v12) = v10;
}
