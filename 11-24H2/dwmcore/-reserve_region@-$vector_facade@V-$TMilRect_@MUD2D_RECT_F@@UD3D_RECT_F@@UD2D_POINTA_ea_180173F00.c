/*
 * XREFs of ?reserve_region@?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_K0@Z @ 0x180173F00
 * Callers:
 *     ?IntersectWithRect@CRegionShape@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x180173C70 (-IntersectWithRect@CRegionShape@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSI.c)
 *     ?AddRectWithPartialOcclusion@CRectanglesShape@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1801746A0 (-AddRectWithPartialOcclusion@CRectanglesShape@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@U.c)
 *     ?GetUnOccludedWorldShape@CRectanglesShape@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180174930 (-GetUnOccludedWorldShape@CRectanglesShape@@UEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?SetDirtyRects@CCompositionDynamicTexture@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x180295728 (-SetDirtyRects@CCompositionDynamicTexture@@QEAAJAEBV-$span@$$CBV-$TMilRect_@HUtagRECT@@UD2D_POIN.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

unsigned __int64 __fastcall detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,1,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int128 v3; // xmm1
  __int64 v5; // rcx
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rbx
  signed __int64 v19; // r8
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  void *v22; // r15
  __int64 v23; // rax
  void *v24; // rcx
  bool v25; // zf
  _OWORD *v26; // r10
  unsigned __int64 v27; // rax
  __int128 v28; // [rsp+20h] [rbp-58h]

  v5 = *(_QWORD *)(a1 + 16);
  v8 = *(_QWORD *)(a1 + 8);
  if ( (__int64)(v5 - v8) >> 4 >= a3 )
    goto LABEL_2;
  v8 = (__int64)(v8 - *(_QWORD *)a1) >> 4;
  v20 = (v5 - *(_QWORD *)a1) >> 4;
  v9 = v8 + a3;
  if ( v8 + a3 >= v8 )
  {
    v21 = v20 >> 1;
    if ( v20 <= ~(v20 >> 1) && v21 + v20 >= v9 )
      v9 = v21 + v20;
    v22 = operator new[](saturated_mul(v9, 0x10uLL));
    v23 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
    if ( v23 < 0 || v23 > 0 && v8 < v23 )
      goto LABEL_14;
    memmove_0(v22, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    v24 = *(void **)a1;
    v25 = *(_QWORD *)a1 == a1 + 24;
    *(_QWORD *)a1 = v22;
    if ( v25 )
      v24 = 0LL;
    operator delete(v24);
    v8 = *(_QWORD *)a1 + 16 * v8;
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a1 + 16 * v9;
    *(_QWORD *)(a1 + 8) = v8;
LABEL_2:
    v9 = *(_QWORD *)a1;
    v10 = (__int64)(v8 - *(_QWORD *)a1) >> 4;
    *((_QWORD *)&v28 + 1) = a3;
    v11 = 16 * v10;
    v12 = v10 - a2;
    *(_QWORD *)&v28 = 16 * v10 + *(_QWORD *)a1;
    v3 = v28;
    if ( !a3 )
      goto LABEL_5;
    if ( !(16 * v10 + *(_QWORD *)a1) )
      goto LABEL_14;
    if ( (a3 & 0x8000000000000000uLL) == 0LL )
      goto LABEL_5;
    goto LABEL_23;
  }
  std::_Xoverflow_error("overflow");
  __debugbreak();
LABEL_23:
  if ( a3 )
    goto LABEL_14;
LABEL_5:
  v13 = v12;
  if ( a3 < v12 )
    v13 = a3;
  v14 = 16 * v13;
  v15 = v8 - v14;
  if ( v8 != v8 - v14 )
  {
    v26 = (_OWORD *)(v3 + 16 * a3);
    v27 = a3;
    do
    {
      v8 -= 16LL;
      if ( !(_QWORD)v3 )
        goto LABEL_14;
      if ( !v27 )
        goto LABEL_14;
      --v27;
      --v26;
      if ( v27 >= *((_QWORD *)&v3 + 1) )
        goto LABEL_14;
      *v26 = *(_OWORD *)v8;
    }
    while ( v8 != v15 );
  }
  if ( v12 > a3 )
  {
    if ( !v10 || v9 && v10 >= 0 )
    {
      v16 = 16 * a2;
      v17 = 16 * a3;
      v19 = v11 - v16 - v17;
      if ( v19 >> 4 <= 0 )
      {
        if ( v19 >> 4 < 0 )
          goto LABEL_14;
LABEL_18:
        memmove_0((void *)(v9 + 16 * v10 - v19), (const void *)(v16 + v9), v19);
        goto LABEL_10;
      }
      if ( v10 >= (unsigned __int64)(v19 >> 4) )
        goto LABEL_18;
    }
LABEL_14:
    _invalid_parameter_noinfo_noreturn();
  }
  v16 = 16 * a2;
  v17 = 16 * a3;
LABEL_10:
  *(_QWORD *)(a1 + 8) += v17;
  return v16 + v9;
}
