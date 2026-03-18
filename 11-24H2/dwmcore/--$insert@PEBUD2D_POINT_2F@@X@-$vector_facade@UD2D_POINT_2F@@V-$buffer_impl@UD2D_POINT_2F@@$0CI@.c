/*
 * XREFs of ??$insert@PEBUD2D_POINT_2F@@X@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UD2D_POINT_2F@@@1@V?$basic_iterator@$$CBUD2D_POINT_2F@@@1@PEBUD2D_POINT_2F@@1@Z @ 0x1800417CC
 * Callers:
 *     ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x1800407B0 (-AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x180046790 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x1801860D8 (--$uninitialized_move@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x18024BA24 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 */

_QWORD *__fastcall detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::insert<D2D_POINT_2F const *,void>(
        detail::liberal_expansion_policy *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  _QWORD *v7; // r14
  __int64 v9; // r12
  __int64 v10; // r13
  unsigned __int64 v11; // rsi
  _QWORD *v12; // r8
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  __int64 v15; // r11
  unsigned __int64 v16; // rax
  _QWORD *v17; // r9
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  _QWORD *result; // rax
  unsigned __int64 v21; // r12
  _QWORD *v22; // r8
  _QWORD *v23; // r10
  unsigned __int64 v24; // rdi
  void *v25; // rax
  __int64 v26; // r8
  void *v27; // rbx
  _QWORD *v28; // rdx
  _QWORD *v29; // rcx
  _QWORD *v30; // rcx
  __int128 v31; // [rsp+20h] [rbp-40h] BYREF
  __int64 v32; // [rsp+30h] [rbp-30h]
  __int128 v33; // [rsp+40h] [rbp-20h] BYREF
  __int64 v34; // [rsp+50h] [rbp-10h]
  __int64 v35; // [rsp+A0h] [rbp+40h] BYREF
  _QWORD *v36; // [rsp+A8h] [rbp+48h]

  v36 = a2;
  v6 = a2;
  v7 = a4;
  v9 = *((_QWORD *)a1 + 1);
  v10 = (__int64)(*a3 - *(_QWORD *)a1) >> 3;
  v11 = a5 - a4;
  if ( (*((_QWORD *)a1 + 2) - v9) >> 3 < v11 )
  {
    v21 = (v9 - *(_QWORD *)a1) >> 3;
    if ( v11 + v21 < v21 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      goto LABEL_16;
    }
    v24 = detail::liberal_expansion_policy::expand(a1, (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 3, v11 + v21);
    v25 = operator new[](saturated_mul(v24, 8uLL));
    v32 = 0LL;
    v26 = *((_QWORD *)a1 + 1);
    v27 = v25;
    v28 = *(_QWORD **)a1;
    *(_QWORD *)&v31 = v25;
    *((_QWORD *)&v31 + 1) = v21;
    v34 = 0LL;
    v33 = v31;
    ((void (__fastcall *)(__int128 *, _QWORD *, __int64, __int128 *))std::uninitialized_move<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
      &v31,
      v28,
      v26,
      &v33);
    v29 = *(_QWORD **)a1;
    *(_QWORD *)a1 = v27;
    v35 = 0LL;
    if ( v29 == (_QWORD *)((char *)a1 + 24) )
      v29 = 0LL;
    operator delete(v29);
    v30 = *(_QWORD **)a1;
    *((_QWORD *)a1 + 1) = *(_QWORD *)a1 + 8 * v21;
    *((_QWORD *)a1 + 2) = &v30[v24];
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v35);
    v6 = v36;
  }
  v5 = *(_QWORD **)a1;
  v12 = (_QWORD *)*((_QWORD *)a1 + 1);
  v13 = ((__int64)v12 - *(_QWORD *)a1) >> 3;
  v14 = v13 - v10;
  v15 = *(_QWORD *)a1 + 8 * v13;
  if ( v11 && (!v15 || (v11 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_5;
  v16 = ((__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 3) - v10;
  if ( v11 < v14 )
    v16 = v11;
  v17 = &v12[-v16];
  v18 = v11;
  if ( v12 != v17 )
  {
LABEL_16:
    v22 = v12 - 1;
    v23 = (_QWORD *)(v15 + 8 * v11);
    if ( v15 )
    {
      while ( v18 )
      {
        --v18;
        --v23;
        if ( v18 >= v11 )
          break;
        *v23 = *v22;
        if ( v22 == v17 )
          goto LABEL_9;
        --v22;
      }
    }
LABEL_5:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_9:
  if ( v14 > v11 )
  {
    if ( v13 && (!v5 || v13 < 0) )
      goto LABEL_5;
    *((_QWORD *)&v31 + 1) = v13;
    v32 = v13;
    *(_QWORD *)&v31 = v5;
    ((void (__fastcall *)(__int128 *, _QWORD *, _QWORD *, __int128 *))std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
      &v33,
      &v5[v10],
      &v5[v13 - v11],
      &v31);
  }
  *((_QWORD *)a1 + 1) += 8 * v11;
  if ( v7 != a5 )
  {
    v19 = (__int64)v5 + 8 * v10 - (_QWORD)v7;
    do
    {
      *(_QWORD *)((char *)v7 + v19) = *v7;
      ++v7;
    }
    while ( v7 != a5 );
  }
  result = v6;
  *v6 = *(_QWORD *)a1 + 8 * v10;
  return result;
}
