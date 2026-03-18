/*
 * XREFs of ??$_Insert_counted_range@PEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@?$vector@V?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@V?$allocator@V?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@std@@@std@@@1@PEBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@_K@Z @ 0x180078D94
 * Callers:
 *     ?SetOrAppendRectangles@?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@AEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@_N@Z @ 0x180078C78 (-SetOrAppendRectangles@-$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@AEAAJAEBV-$sp.c)
 *     ?SetRectangles@?$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x180078D0C (-SetRectangles@-$CRegionGeometryGeneratedT@VCRegionGeometry@@VCGeometry@@@@QEAAJAEBV-$span@$$CBV.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18006BBB0 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18006BBE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

void __fastcall std::vector<TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_>>::_Insert_counted_range<TMilRect_<int,tagRECT,D2D_POINTANDSIZE_L,Mil3DRectL,RectUniqueness::_CMilRectL_> const *>(
        __int64 a1,
        _BYTE *a2,
        const void *a3,
        unsigned __int64 a4)
{
  _BYTE *v4; // rbp
  _BYTE *v6; // r13
  __int64 v8; // rcx
  unsigned __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // r12
  unsigned __int64 v14; // r14
  char *v15; // rdi
  const void *v16; // rdx
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  SIZE_T size_of; // rax
  char *v21; // r12
  size_t v22; // r8
  const void *v23; // rdx
  char *v24; // rcx

  if ( a4 )
  {
    v4 = *(_BYTE **)(a1 + 8);
    v6 = *(_BYTE **)a1;
    v8 = *(_QWORD *)(a1 + 16);
    if ( a4 <= (v8 - (__int64)v4) >> 4 )
    {
      v13 = 16 * a4;
      v14 = (v4 - a2) >> 4;
      if ( a4 < v14 )
      {
        memmove_0(v4, &v4[-v13], 16 * a4);
        *(_QWORD *)(a1 + 8) = &v4[v13];
        memmove_0(&a2[16 * a4], a2, (size_t)&v4[-16LL * a4 - (_QWORD)a2]);
        v16 = a3;
      }
      else
      {
        v15 = &a2[v13];
        memmove_0(&a2[v13], a2, v4 - a2);
        v16 = a3;
        *(_QWORD *)(a1 + 8) = &v15[16 * v14];
      }
      memmove_0(a2, v16, 16 * a4);
    }
    else
    {
      v11 = 0xFFFFFFFFFFFFFFFLL;
      v12 = (v4 - v6) >> 4;
      if ( a4 > 0xFFFFFFFFFFFFFFFLL - v12 )
        std::_Xlength_error("vector too long");
      v17 = v12 + a4;
      v18 = (v8 - (__int64)v6) >> 4;
      v19 = v18 >> 1;
      if ( v18 <= 0xFFFFFFFFFFFFFFFLL - (v18 >> 1) )
      {
        v11 = v19 + v18;
        if ( v19 + v18 < v17 )
          v11 = v17;
      }
      size_of = std::_Get_size_of_n<16>(v11);
      v21 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      memmove_0(&v21[16 * ((a2 - v6) >> 4)], a3, 16 * a4);
      if ( a4 == 1 && a2 == v4 )
      {
        v22 = v4 - v6;
        v23 = v6;
        v24 = v21;
      }
      else
      {
        memmove_0(v21, v6, a2 - v6);
        v22 = v4 - a2;
        v23 = a2;
        v24 = &v21[16 * a4 + 16 * ((a2 - v6) >> 4)];
      }
      memmove_0(v24, v23, v22);
      if ( *(_QWORD *)a1 )
        std::_Deallocate<16,0>(*(_QWORD **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL);
      *(_QWORD *)a1 = v21;
      *(_QWORD *)(a1 + 8) = &v21[16 * v17];
      *(_QWORD *)(a1 + 16) = &v21[16 * v11];
    }
  }
}
