/*
 * XREFs of ?Copy@CRectanglesShape@@QEAAXAEBV1@@Z @ 0x180192150
 * Callers:
 *     ?GetDirtyRegion@CPrimitiveGroup@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x180192120 (-GetDirtyRegion@CPrimitiveGroup@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 *     ?GetDirtyRegion@CGenericInk@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x18022A910 (-GetDirtyRegion@CGenericInk@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 *     ?GetDirtyRegion@CCompositionDynamicTexture@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x1802A0FC0 (-GetDirtyRegion@CCompositionDynamicTexture@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800AB610 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x1801924DC (--$move@V-$move_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNee.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRectanglesShape::Copy(CRectanglesShape *this, const struct CRectanglesShape *a2)
{
  const struct CRectanglesShape *v2; // r14
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rbx
  CResource *v7; // rcx
  void (*v8)(void); // rax
  unsigned __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rdi
  _OWORD *v12; // r12
  CResource *v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // r11
  unsigned __int64 v17; // r8
  __int64 v18; // r10
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdx
  _OWORD *v21; // r9
  __int128 v22; // xmm0
  CResource *v23; // xmm1_8
  _OWORD *v24; // rbx
  CResource *i; // rax
  __int128 v26; // xmm0
  unsigned __int64 v27; // r12
  unsigned __int64 v28; // rsi
  LPVOID v29; // rax
  __int64 v30; // r8
  __int64 v31; // rdx
  LPVOID v32; // rdi
  CRectanglesShape *v33; // rcx
  _OWORD *v34; // r12
  _OWORD *v35; // rax
  __int128 v36; // [rsp+20h] [rbp-88h] BYREF
  CResource *v37; // [rsp+30h] [rbp-78h]
  __int128 v38; // [rsp+40h] [rbp-68h]
  const struct CRectanglesShape *v39; // [rsp+50h] [rbp-58h]
  __int128 v40; // [rsp+60h] [rbp-48h] BYREF
  __int64 v41; // [rsp+70h] [rbp-38h]

  v2 = (const struct CRectanglesShape *)*((_QWORD *)a2 + 2);
  v4 = *((_QWORD *)this + 3);
  v5 = (v4 - *((_QWORD *)this + 2)) >> 4;
  v6 = (__int64)(*((_QWORD *)a2 + 3) - (_QWORD)v2) >> 4;
  if ( v5 )
    *((_QWORD *)this + 3) = v4 - 16 * v5;
  v7 = (CResource *)*((_QWORD *)this + 7);
  if ( v7 )
  {
    v8 = *(void (**)(void))(*(_QWORD *)v7 + 16LL);
    if ( (char *)v8 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v7);
    else
      v8();
    *((_QWORD *)this + 7) = 0LL;
  }
  v9 = (unsigned int)v6;
  if ( !v2 && (_DWORD)v6 )
  {
LABEL_25:
    ((void (__fastcall *)(CResource *, const struct CRectanglesShape *))`gsl::details::get_terminate_handler'::`2'::handler)(
      v7,
      a2);
    __debugbreak();
  }
  v10 = *((_QWORD *)this + 4);
  v11 = *((_QWORD *)this + 2);
  v12 = (_OWORD *)*((_QWORD *)this + 3);
  v13 = (const struct CRectanglesShape *)((char *)v2 + 16 * (unsigned int)v6);
  v14 = ((__int64)v12 - v11) >> 4;
  *(_QWORD *)&v38 = v2;
  *((_QWORD *)&v38 + 1) = (char *)v2 + 16 * v9;
  v39 = v2;
  if ( (v10 - (__int64)v12) >> 4 < v9 )
  {
    v27 = ((__int64)v12 - v11) >> 4;
    if ( v27 + v9 < v27 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      goto LABEL_38;
    }
    v28 = detail::liberal_expansion_policy::expand(v7, (v10 - v11) >> 4, v27 + v9);
    v29 = operator new[](saturated_mul(v28, 0x10uLL));
    v30 = *((_QWORD *)this + 3);
    v31 = *((_QWORD *)this + 2);
    *(_QWORD *)&v36 = v29;
    v32 = v29;
    *((_QWORD *)&v36 + 1) = v27;
    v37 = 0LL;
    v40 = v36;
    v41 = 0LL;
    std::move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
      &v36,
      v31,
      v30,
      &v40);
    v33 = (CRectanglesShape *)*((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = v32;
    if ( v33 == (CRectanglesShape *)((char *)this + 40) )
      v33 = 0LL;
    operator delete(v33);
    v11 = *((_QWORD *)this + 2);
    v12 = (_OWORD *)(v11 + 16 * v27);
    *((_QWORD *)this + 3) = v12;
    *((_QWORD *)this + 4) = v11 + 16 * v28;
  }
  v15 = ((__int64)v12 - v11) >> 4;
  v16 = 16 * v15;
  v17 = v15 - v14;
  v18 = 16 * v15 + v11;
  if ( v9 && !v18 )
    goto LABEL_32;
  v19 = (((__int64)v12 - v11) >> 4) - v14;
  v20 = v9;
  if ( v9 < v17 )
    v19 = v9;
  v21 = &v12[-v19];
  if ( v12 != v21 )
  {
    v34 = v12 - 1;
    v35 = (_OWORD *)(v18 + 16 * v9);
    if ( v18 )
    {
      while ( v20 )
      {
        --v20;
        --v35;
        if ( v20 >= v9 )
          break;
        *v35 = *v34;
        if ( v34 == v21 )
          goto LABEL_14;
        --v34;
      }
    }
    goto LABEL_32;
  }
LABEL_14:
  if ( v17 > v9 )
  {
    if ( !v15 )
      goto LABEL_30;
    if ( !v11 )
      goto LABEL_32;
    if ( v15 >= 0 )
    {
LABEL_30:
      if ( (__int64)(16 * (v15 - v9) - 16 * v14) >> 4 <= 0 )
      {
        if ( (__int64)(16 * (v15 - v9) - 16 * v14) >> 4 < 0 )
          goto LABEL_32;
LABEL_33:
        memmove_0(
          (void *)(v16 + v11 - (16 * (v15 - v9) - 16 * v14)),
          (const void *)(v11 + 16 * v14),
          16 * (v15 - v9) - 16 * v14);
        goto LABEL_15;
      }
      if ( v15 >= (unsigned __int64)((__int64)(16 * (v15 - v9) - 16 * v14) >> 4) )
        goto LABEL_33;
LABEL_32:
      _invalid_parameter_noinfo_noreturn();
    }
LABEL_38:
    if ( v15 )
      goto LABEL_32;
    goto LABEL_30;
  }
LABEL_15:
  v22 = v38;
  v23 = v39;
  *((_QWORD *)this + 3) += 16 * v9;
  v36 = v22;
  v7 = (CResource *)*((_QWORD *)&v22 + 1);
  a2 = (const struct CRectanglesShape *)v22;
  v37 = v23;
  v24 = (_OWORD *)(v11 + 16 * v14);
  for ( i = v23; ; i = (CResource *)((char *)i + 16) )
  {
    if ( v7 != v13 || a2 != v2 )
      goto LABEL_25;
    if ( i == v13 )
      break;
    if ( !a2 || !v7 || a2 > i || i >= v7 )
      goto LABEL_25;
    v26 = *(_OWORD *)i;
    *v24++ = v26;
  }
}
