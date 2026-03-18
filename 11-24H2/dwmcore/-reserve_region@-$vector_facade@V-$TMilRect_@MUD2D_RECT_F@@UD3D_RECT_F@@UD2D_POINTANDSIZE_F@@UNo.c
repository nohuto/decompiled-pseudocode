/*
 * XREFs of ?reserve_region@?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_K0@Z @ 0x18006A4F0
 * Callers:
 *     ?resize@?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x18006A450 (-resize@-$vector_facade@V-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@.c)
 *     ?DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV?$TMilRect_@HUtagRECT@@UD2D_POINTANDSIZE_L@@UMil3DRectL@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x180242F58 (-DrawAsOverlay@CDrawingContext@@QEAA_NPEAVIBitmapResource@@PEAV-$TMilRect_@HUtagRECT@@UD2D_POINT.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

unsigned __int64 __fastcall detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,4,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // xmm1_8
  __int64 v6; // rcx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rbx
  signed __int64 v18; // r8
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  void *v22; // rbp
  __int64 v23; // rax
  void *v24; // rdx
  void *v25; // rcx
  _OWORD *v26; // r10
  unsigned __int64 v27; // rax
  __int64 v28; // [rsp+20h] [rbp-58h]
  unsigned __int64 v29; // [rsp+28h] [rbp-50h]
  unsigned __int64 v30; // [rsp+30h] [rbp-48h]

  v6 = *(_QWORD *)(a1 + 16);
  v8 = *(_QWORD *)(a1 + 8);
  if ( (__int64)(v6 - v8) >> 4 < a3 )
  {
    v8 = (__int64)(v8 - *(_QWORD *)a1) >> 4;
    v20 = (v6 - *(_QWORD *)a1) >> 4;
    v9 = v8 + a3;
    if ( v8 + a3 < v8 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
LABEL_34:
      v26 = (_OWORD *)(v3 + 16 * a3);
      v27 = v30;
      while ( 1 )
      {
        v8 -= 16LL;
        if ( !v28 )
          goto LABEL_14;
        if ( !v27 )
          goto LABEL_14;
        --v27;
        --v26;
        if ( v27 >= v29 )
          goto LABEL_14;
        *v26 = *(_OWORD *)v8;
        if ( v8 == v15 )
          goto LABEL_8;
      }
    }
    v21 = v20 >> 1;
    if ( v20 <= ~(v20 >> 1) && v21 + v20 >= v9 )
      v9 = v21 + v20;
    v22 = operator new[](saturated_mul(v9, 0x10uLL));
    v23 = (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4;
    if ( v23 < 0 || v23 > 0 && v8 < v23 )
      goto LABEL_14;
    memmove_0(v22, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    v24 = *(void **)a1;
    v25 = 0LL;
    *(_QWORD *)a1 = v22;
    if ( v24 != (void *)(a1 + 24) )
      v25 = v24;
    operator delete(v25);
    v8 = *(_QWORD *)a1 + 16 * v8;
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a1 + 16 * v9;
    *(_QWORD *)(a1 + 8) = v8;
  }
  v9 = *(_QWORD *)a1;
  v10 = (__int64)(v8 - *(_QWORD *)a1) >> 4;
  v29 = a3;
  v11 = 16 * v10;
  v12 = v10 - a2;
  v28 = 16 * v10 + *(_QWORD *)a1;
  v3 = v28;
  if ( a3 && (!(16 * v10 + *(_QWORD *)a1) || (a3 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_14;
  v13 = v10 - a2;
  if ( a3 < v12 )
    v13 = a3;
  v14 = 16 * v13;
  v15 = v8 - v14;
  v30 = a3;
  if ( v8 != v8 - v14 )
    goto LABEL_34;
LABEL_8:
  if ( v12 > a3 )
  {
    if ( !v10 || v9 && v10 >= 0 )
    {
      v16 = 16 * a2;
      v17 = 16 * a3;
      v18 = v11 - v16 - v17;
      if ( v18 >> 4 <= 0 )
      {
        if ( v18 >> 4 < 0 )
          goto LABEL_14;
        goto LABEL_17;
      }
      if ( v10 >= (unsigned __int64)(v18 >> 4) )
      {
LABEL_17:
        memmove_0((void *)(v9 + 16 * v10 - v18), (const void *)(v16 + v9), v18);
        goto LABEL_16;
      }
    }
LABEL_14:
    _invalid_parameter_noinfo_noreturn();
  }
  v16 = 16 * a2;
  v17 = 16 * a3;
LABEL_16:
  *(_QWORD *)(a1 + 8) += v17;
  return v16 + v9;
}
