/*
 * XREFs of ?push_back@?$vector_facade@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@V?$buffer_impl@V?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801DF880
 * Callers:
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x180285A08 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800703BC (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@std@@V?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@stdext@@V?$move_iterator@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@0@0V12@@Z @ 0x1801924DC (--$move@V-$move_iterator@PEAV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNee.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

void *__fastcall detail::vector_facade<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,detail::buffer_impl<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,10,1,detail::liberal_expansion_policy>>::push_back(
        detail::liberal_expansion_policy *a1,
        _OWORD *a2)
{
  _OWORD *v2; // rbx
  unsigned __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // r9
  unsigned __int64 v9; // rdx
  _OWORD *v10; // r11
  __int64 v11; // rax
  void *result; // rax
  _OWORD *v13; // r10
  _OWORD *v14; // r8
  unsigned __int64 v15; // rdi
  LPVOID v16; // rax
  __int64 v17; // r8
  _OWORD *v18; // rdx
  LPVOID v19; // rbx
  _OWORD *v20; // rcx
  bool v21; // zf
  __int64 v22; // rdi
  __int128 v23; // [rsp+20h] [rbp-68h] BYREF
  __int64 v24; // [rsp+30h] [rbp-58h]
  __int128 v25; // [rsp+40h] [rbp-48h] BYREF
  __int64 v26; // [rsp+50h] [rbp-38h]
  void *v27; // [rsp+90h] [rbp+8h] BYREF

  v5 = (__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 4;
  if ( (__int64)(*((_QWORD *)a1 + 2) - *((_QWORD *)a1 + 1)) >> 4 )
    goto LABEL_2;
  if ( v5 + 1 >= v5 )
  {
    v15 = detail::liberal_expansion_policy::expand(a1, (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 4, v5 + 1);
    v16 = operator new[](saturated_mul(v15, 0x10uLL));
    v17 = *((_QWORD *)a1 + 1);
    v18 = *(_OWORD **)a1;
    *(_QWORD *)&v23 = v16;
    v19 = v16;
    *((_QWORD *)&v23 + 1) = v5;
    v24 = 0LL;
    v25 = v23;
    v26 = 0LL;
    std::move<std::move_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>,stdext::checked_array_iterator<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> *>>(
      (__int64)&v23,
      v18,
      v17,
      &v25);
    v20 = *(_OWORD **)a1;
    v21 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    v27 = 0LL;
    *(_QWORD *)a1 = v19;
    if ( v21 )
      v20 = 0LL;
    operator delete(v20);
    v22 = *(_QWORD *)a1 + 16 * v15;
    *((_QWORD *)a1 + 1) = *(_QWORD *)a1 + 16 * v5;
    *((_QWORD *)a1 + 2) = v22;
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v27);
LABEL_2:
    v2 = *(_OWORD **)a1;
    v6 = *((_QWORD *)a1 + 1);
    v7 = (v6 - *(_QWORD *)a1) >> 4;
    v8 = 16 * v7;
    v9 = v7 - v5;
    v10 = (_OWORD *)(16 * v7 + *(_QWORD *)a1);
    if ( !v10 )
      goto LABEL_9;
    v11 = ((__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 4) - v5;
    if ( v9 > 1 )
      v11 = 1LL;
    result = (void *)(16 * v11);
    v13 = (_OWORD *)(v6 - (_QWORD)result);
    if ( v6 == v6 - (_QWORD)result )
      goto LABEL_6;
    goto LABEL_20;
  }
  std::_Xoverflow_error("overflow");
  __debugbreak();
LABEL_20:
  v14 = (_OWORD *)(v6 - 16);
  result = 0LL;
  *v10 = *v14;
  if ( v14 != v13 )
    goto LABEL_9;
LABEL_6:
  if ( v9 > 1 )
  {
    if ( !v7 || v2 && v7 >= 0 )
    {
      if ( (__int64)(v8 - 16 * v5 - 16) >> 4 > 0 )
      {
        if ( v7 >= (unsigned __int64)((__int64)(v8 - 16 * v5 - 16) >> 4) )
          goto LABEL_13;
      }
      else if ( (__int64)(v8 - 16 * v5 - 16) >> 4 >= 0 )
      {
LABEL_13:
        result = memmove_0((char *)v2 + 16 - -16LL * v5, &v2[v5], v8 - 16 * v5 - 16);
        goto LABEL_14;
      }
    }
LABEL_9:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_14:
  *((_QWORD *)a1 + 1) += 16LL;
  v2[v5] = *a2;
  return result;
}
