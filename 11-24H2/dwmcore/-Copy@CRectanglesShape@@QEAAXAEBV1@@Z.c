/*
 * XREFs of ?Copy@CRectanglesShape@@QEAAXAEBV1@@Z @ 0x180173910
 * Callers:
 *     ?GetDirtyRegion@CGenericInk@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x1801730D0 (-GetDirtyRegion@CGenericInk@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 *     ?GetDirtyRegion@CPrimitiveGroup@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x1801738E0 (-GetDirtyRegion@CPrimitiveGroup@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 *     ?GetDirtyRegion@CCompositionDynamicTexture@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z @ 0x180295610 (-GetDirtyRegion@CCompositionDynamicTexture@@UEBA_NAEBUD2D_SIZE_F@@PEAVCRectanglesShape@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x1800797F0 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x180175224 (--$move@V-$move_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNee.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CRectanglesShape::Copy(CRectanglesShape *this, const struct CRectanglesShape *a2, __int64 a3)
{
  const struct CRectanglesShape *v3; // r14
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rbx
  CCachedVisualImage *v8; // rcx
  void (*v9)(void); // rax
  unsigned __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rdi
  _OWORD *v13; // r12
  CCachedVisualImage *v14; // rbp
  __int64 v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r11
  unsigned __int64 v18; // r8
  __int64 v19; // r10
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rdx
  _OWORD *v22; // r9
  __int128 v23; // xmm0
  CCachedVisualImage *v24; // xmm1_8
  _OWORD *v25; // rbx
  CCachedVisualImage *i; // rax
  __int128 v27; // xmm0
  unsigned __int64 v28; // r12
  unsigned __int64 v29; // rsi
  LPVOID v30; // rax
  __int64 v31; // r8
  __int64 v32; // rdx
  LPVOID v33; // rdi
  CRectanglesShape *v34; // rcx
  _OWORD *v35; // r12
  _OWORD *v36; // rax
  __int128 v37; // [rsp+20h] [rbp-88h] BYREF
  CCachedVisualImage *v38; // [rsp+30h] [rbp-78h]
  __int128 v39; // [rsp+40h] [rbp-68h]
  const struct CRectanglesShape *v40; // [rsp+50h] [rbp-58h]
  __int128 v41; // [rsp+60h] [rbp-48h] BYREF
  __int64 v42; // [rsp+70h] [rbp-38h]

  v3 = (const struct CRectanglesShape *)*((_QWORD *)a2 + 2);
  v5 = *((_QWORD *)this + 3);
  v6 = (v5 - *((_QWORD *)this + 2)) >> 4;
  v7 = (__int64)(*((_QWORD *)a2 + 3) - (_QWORD)v3) >> 4;
  if ( v6 )
    *((_QWORD *)this + 3) = v5 - 16 * v6;
  v8 = (CCachedVisualImage *)*((_QWORD *)this + 7);
  if ( v8 )
  {
    v9 = *(void (**)(void))(*(_QWORD *)v8 + 16LL);
    if ( (char *)v9 == (char *)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease )
      CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(
        v8,
        (__int64)CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease,
        a3);
    else
      v9();
    *((_QWORD *)this + 7) = 0LL;
  }
  v10 = (unsigned int)v7;
  if ( !v3 && (_DWORD)v7 )
  {
LABEL_25:
    ((void (__fastcall *)(CCachedVisualImage *, const struct CRectanglesShape *))`gsl::details::get_terminate_handler'::`2'::handler)(
      v8,
      a2);
    __debugbreak();
  }
  v11 = *((_QWORD *)this + 4);
  v12 = *((_QWORD *)this + 2);
  v13 = (_OWORD *)*((_QWORD *)this + 3);
  v14 = (const struct CRectanglesShape *)((char *)v3 + 16 * (unsigned int)v7);
  v15 = ((__int64)v13 - v12) >> 4;
  *(_QWORD *)&v39 = v3;
  *((_QWORD *)&v39 + 1) = (char *)v3 + 16 * v10;
  v40 = v3;
  if ( (v11 - (__int64)v13) >> 4 < v10 )
  {
    v28 = ((__int64)v13 - v12) >> 4;
    if ( v28 + v10 < v28 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      goto LABEL_38;
    }
    v29 = detail::liberal_expansion_policy::expand(v8, (v11 - v12) >> 4, v28 + v10);
    v30 = operator new[](saturated_mul(v29, 0x10uLL));
    v31 = *((_QWORD *)this + 3);
    v32 = *((_QWORD *)this + 2);
    *(_QWORD *)&v37 = v30;
    v33 = v30;
    *((_QWORD *)&v37 + 1) = v28;
    v38 = 0LL;
    v41 = v37;
    v42 = 0LL;
    std::move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
      &v37,
      v32,
      v31,
      &v41);
    v34 = (CRectanglesShape *)*((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = v33;
    if ( v34 == (CRectanglesShape *)((char *)this + 40) )
      v34 = 0LL;
    operator delete(v34);
    v12 = *((_QWORD *)this + 2);
    v13 = (_OWORD *)(v12 + 16 * v28);
    *((_QWORD *)this + 3) = v13;
    *((_QWORD *)this + 4) = v12 + 16 * v29;
  }
  v16 = ((__int64)v13 - v12) >> 4;
  v17 = 16 * v16;
  v18 = v16 - v15;
  v19 = 16 * v16 + v12;
  if ( v10 && !v19 )
    goto LABEL_32;
  v20 = (((__int64)v13 - v12) >> 4) - v15;
  v21 = v10;
  if ( v10 < v18 )
    v20 = v10;
  v22 = &v13[-v20];
  if ( v13 != v22 )
  {
    v35 = v13 - 1;
    v36 = (_OWORD *)(v19 + 16 * v10);
    if ( v19 )
    {
      while ( v21 )
      {
        --v21;
        --v36;
        if ( v21 >= v10 )
          break;
        *v36 = *v35;
        if ( v35 == v22 )
          goto LABEL_14;
        --v35;
      }
    }
    goto LABEL_32;
  }
LABEL_14:
  if ( v18 > v10 )
  {
    if ( !v16 )
      goto LABEL_30;
    if ( !v12 )
      goto LABEL_32;
    if ( v16 >= 0 )
    {
LABEL_30:
      if ( (__int64)(16 * (v16 - v10) - 16 * v15) >> 4 <= 0 )
      {
        if ( (__int64)(16 * (v16 - v10) - 16 * v15) >> 4 < 0 )
          goto LABEL_32;
LABEL_33:
        memmove_0(
          (void *)(v17 + v12 - (16 * (v16 - v10) - 16 * v15)),
          (const void *)(v12 + 16 * v15),
          16 * (v16 - v10) - 16 * v15);
        goto LABEL_15;
      }
      if ( v16 >= (unsigned __int64)((__int64)(16 * (v16 - v10) - 16 * v15) >> 4) )
        goto LABEL_33;
LABEL_32:
      _invalid_parameter_noinfo_noreturn();
    }
LABEL_38:
    if ( v16 )
      goto LABEL_32;
    goto LABEL_30;
  }
LABEL_15:
  v23 = v39;
  v24 = v40;
  *((_QWORD *)this + 3) += 16 * v10;
  v37 = v23;
  v8 = (CCachedVisualImage *)*((_QWORD *)&v23 + 1);
  a2 = (const struct CRectanglesShape *)v23;
  v38 = v24;
  v25 = (_OWORD *)(v12 + 16 * v15);
  for ( i = v24; ; i = (CCachedVisualImage *)((char *)i + 16) )
  {
    if ( v8 != v14 || a2 != v3 )
      goto LABEL_25;
    if ( i == v14 )
      break;
    if ( !a2 || !v8 || a2 > i || i >= v8 )
      goto LABEL_25;
    v27 = *(_OWORD *)i;
    *v25++ = v27;
  }
}
