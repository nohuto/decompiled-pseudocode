/*
 * XREFs of ?resize@?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180174CF8
 * Callers:
 *     ?GetUnOccludedWorldShape@CRectanglesShape@@UEBAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@AEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x180174930 (-GetUnOccludedWorldShape@CRectanglesShape@@UEBAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x180175224 (--$move@V-$move_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNee.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

_UNKNOWN **__fastcall detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,1,1,detail::liberal_expansion_policy>>::resize(
        detail::liberal_expansion_policy *a1,
        unsigned __int64 a2,
        _OWORD *a3)
{
  _UNKNOWN **result; // rax
  __int64 v4; // rbx
  _OWORD *v5; // rdi
  char *v6; // r12
  unsigned __int64 v7; // rsi
  unsigned __int64 v9; // r14
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned __int64 v12; // rdx
  char *v13; // r11
  unsigned __int64 v14; // rax
  _OWORD *v15; // r10
  char *v16; // rsi
  signed __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdx
  unsigned __int64 v21; // rdi
  LPVOID v22; // rax
  __int64 v23; // r8
  char *v24; // rdx
  LPVOID v25; // rbx
  char *v26; // rcx
  bool v27; // zf
  __int64 v28; // rdi
  _OWORD *v29; // rbx
  unsigned __int64 v30; // r9
  char *v31; // rax
  __int128 v32; // [rsp+20h] [rbp-40h] BYREF
  __int64 v33; // [rsp+30h] [rbp-30h]
  __int128 v34; // [rsp+40h] [rbp-20h] BYREF
  __int64 v35; // [rsp+50h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+28h] BYREF

  result = &retaddr;
  v4 = *((_QWORD *)a1 + 1);
  v5 = a3;
  v6 = *(char **)a1;
  v7 = (v4 - *(_QWORD *)a1) >> 4;
  if ( a2 <= v7 )
  {
    v9 = 16 * a2;
    v18 = (__int64)(16 * a2) >> 4;
    v19 = (__int64)(v4 - 16 * a2 - (_QWORD)v6) >> 4;
    v20 = v19 + v18;
    if ( v19 + v18 <= v7 )
    {
      if ( v20 != v7 )
      {
        if ( v18 && (!v6 || v18 < 0 || v7 < v18) )
          goto LABEL_15;
        v33 = v18;
        *(_QWORD *)&v32 = v6;
        *((_QWORD *)&v32 + 1) = v7;
        result = (_UNKNOWN **)std::move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
                                &v34,
                                &v6[16 * v20],
                                &v6[16 * v7],
                                &v32);
      }
      *((_QWORD *)a1 + 1) += -16 * v19;
      return result;
    }
    goto LABEL_23;
  }
  v9 = a2 - v7;
  if ( (*((_QWORD *)a1 + 2) - v4) >> 4 >= a2 - v7 )
    goto LABEL_3;
  if ( a2 < v7 )
  {
LABEL_23:
    std::_Xoverflow_error("overflow");
    __debugbreak();
LABEL_24:
    if ( v10 )
      goto LABEL_15;
    goto LABEL_17;
  }
  v21 = detail::liberal_expansion_policy::expand(a1, (__int64)(*((_QWORD *)a1 + 2) - (_QWORD)v6) >> 4, a2);
  v22 = operator new[](saturated_mul(v21, 0x10uLL));
  v23 = *((_QWORD *)a1 + 1);
  v24 = *(char **)a1;
  *(_QWORD *)&v32 = v22;
  v25 = v22;
  *((_QWORD *)&v32 + 1) = v7;
  v33 = 0LL;
  v34 = v32;
  v35 = 0LL;
  std::move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
    &v32,
    v24,
    v23,
    &v34);
  v26 = *(char **)a1;
  v27 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
  *(_QWORD *)a1 = v25;
  if ( v27 )
    v26 = 0LL;
  operator delete(v26);
  v6 = *(char **)a1;
  v4 = *(_QWORD *)a1 + 16 * v7;
  v28 = *(_QWORD *)a1 + 16 * v21;
  *((_QWORD *)a1 + 1) = v4;
  *((_QWORD *)a1 + 2) = v28;
  v5 = a3;
LABEL_3:
  v10 = (v4 - (__int64)v6) >> 4;
  v11 = 16 * v10;
  v12 = v10 - v7;
  v13 = &v6[16 * v10];
  if ( v9 && (!v13 || (v9 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_15;
  v14 = ((v4 - (__int64)v6) >> 4) - v7;
  if ( v9 < v12 )
    v14 = v9;
  v15 = (_OWORD *)(v4 - 16 * v14);
  if ( (_OWORD *)v4 != v15 )
  {
    v29 = (_OWORD *)(v4 - 16);
    v30 = v9;
    v31 = &v13[16 * v9];
    if ( v13 )
    {
      while ( v30 )
      {
        --v30;
        v31 -= 16;
        if ( v30 >= v9 )
          break;
        *(_OWORD *)v31 = *v29;
        if ( v29 == v15 )
          goto LABEL_9;
        --v29;
      }
    }
    goto LABEL_15;
  }
LABEL_9:
  if ( v12 <= v9 )
    goto LABEL_10;
  if ( v10 )
  {
    if ( !v6 )
      goto LABEL_15;
    if ( v10 < 0 )
      goto LABEL_24;
  }
LABEL_17:
  v17 = v11 - 16 * v9 - 16 * v7;
  if ( v17 >> 4 > 0 )
  {
    if ( v10 >= (unsigned __int64)(v17 >> 4) )
      goto LABEL_19;
LABEL_15:
    _invalid_parameter_noinfo_noreturn();
  }
  if ( v17 >> 4 < 0 )
    goto LABEL_15;
LABEL_19:
  memmove_0(&v6[16 * v10 - v17], &v6[16 * v7], v17);
LABEL_10:
  result = (_UNKNOWN **)(16 * v9);
  v16 = &v6[16 * v7];
  for ( *((_QWORD *)a1 + 1) += 16 * v9; v9; --v9 )
  {
    *(_OWORD *)v16 = *v5;
    v16 += 16;
  }
  return result;
}
