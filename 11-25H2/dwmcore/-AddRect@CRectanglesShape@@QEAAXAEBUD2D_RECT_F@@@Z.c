/*
 * XREFs of ?AddRect@CRectanglesShape@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x180191568
 * Callers:
 *     ?IntersectWithRect@CRectanglesShape@@QEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAPEAVCShape@@@Z @ 0x180190FA0 (-IntersectWithRect@CRectanglesShape@@QEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?TransformDirtyRegion@CSurfaceBrush@@QEBA_NPEBVCMILMatrix@@AEBUD2D_SIZE_F@@AEBVCRectanglesShape@@PEAV4@@Z @ 0x18019137C (-TransformDirtyRegion@CSurfaceBrush@@QEBA_NPEBVCMILMatrix@@AEBUD2D_SIZE_F@@AEBVCRectanglesShape@.c)
 *     ?SetDirtyRects@CCompositionDynamicTexture@@QEAAJAEBV?$span@$$CBV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x1802A10D8 (-SetDirtyRects@CCompositionDynamicTexture@@QEAAJAEBV-$span@$$CBV-$TMilRect_@HUtagRECT@@UD2D_POIN.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x1801924DC (--$move@V-$move_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNee.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

void __fastcall CRectanglesShape::AddRect(CRectanglesShape *this, const __m128i *a2)
{
  __int64 v2; // rbx
  __m128i v4; // xmm6
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // r9
  unsigned __int64 v10; // r8
  _OWORD *v11; // r11
  __int64 v12; // rax
  __int64 v13; // rax
  _OWORD *v14; // r10
  unsigned __int64 v15; // rdi
  LPVOID v16; // rax
  __int64 v17; // r8
  __int64 v18; // rdx
  LPVOID v19; // rbx
  CRectanglesShape *v20; // rcx
  _OWORD *v21; // rdx
  __int128 v22; // [rsp+20h] [rbp-68h] BYREF
  __int64 v23; // [rsp+30h] [rbp-58h]
  __int128 v24; // [rsp+40h] [rbp-48h] BYREF
  __int64 v25; // [rsp+50h] [rbp-38h]

  v2 = *((_QWORD *)this + 2);
  v4 = _mm_loadu_si128(a2);
  v5 = *((_QWORD *)this + 3);
  v6 = *((_QWORD *)this + 4);
  v7 = (v5 - v2) >> 4;
  if ( !((v6 - v5) >> 4) )
  {
    if ( v7 + 1 < v7 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      goto LABEL_19;
    }
    v15 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)((v6 - v2) >> 4),
            (v6 - v2) >> 4,
            v7 + 1);
    v16 = operator new[](saturated_mul(v15, 0x10uLL));
    v17 = *((_QWORD *)this + 3);
    v18 = *((_QWORD *)this + 2);
    *(_QWORD *)&v22 = v16;
    v19 = v16;
    *((_QWORD *)&v22 + 1) = v7;
    v23 = 0LL;
    v24 = v22;
    v25 = 0LL;
    std::move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
      &v22,
      v18,
      v17,
      &v24);
    v20 = (CRectanglesShape *)*((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = v19;
    if ( v20 == (CRectanglesShape *)((char *)this + 40) )
      v20 = 0LL;
    operator delete(v20);
    v2 = *((_QWORD *)this + 2);
    v5 = v2 + 16 * v7;
    *((_QWORD *)this + 3) = v5;
    *((_QWORD *)this + 4) = v2 + 16 * v15;
  }
  v8 = (v5 - v2) >> 4;
  v9 = 16 * v8;
  v10 = v8 - v7;
  v11 = (_OWORD *)(16 * v8 + v2);
  if ( !v11 )
    goto LABEL_10;
  v12 = ((v5 - v2) >> 4) - v7;
  if ( v10 > 1 )
    v12 = 1LL;
  v13 = 16 * v12;
  v14 = (_OWORD *)(v5 - v13);
  if ( v5 != v5 - v13 )
  {
    v21 = (_OWORD *)(v5 - 16);
    *v11 = *v21;
    if ( v21 != v14 )
LABEL_10:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v10 > 1 )
  {
    if ( !v8 )
      goto LABEL_12;
    if ( !v2 )
      goto LABEL_10;
    if ( v8 >= 0 )
    {
LABEL_12:
      if ( (__int64)(v9 - 16 * v7 - 16) >> 4 > 0 )
      {
        if ( v8 < (unsigned __int64)((__int64)(v9 - 16 * v7 - 16) >> 4) )
          goto LABEL_10;
      }
      else if ( (__int64)(v9 - 16 * v7 - 16) >> 4 < 0 )
      {
        goto LABEL_10;
      }
      memmove_0((void *)(v2 + 16 - -16LL * v7), (const void *)(v2 + 16 * v7), v9 - 16 * v7 - 16);
      goto LABEL_7;
    }
LABEL_19:
    if ( v8 )
      goto LABEL_10;
    goto LABEL_12;
  }
LABEL_7:
  *((_QWORD *)this + 3) += 16LL;
  *(__m128i *)(v2 + 16 * v7) = v4;
}
