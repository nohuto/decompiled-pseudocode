/*
 * XREFs of ?push_back@?$vector_facade@UD2D_POINT_2F@@V?$buffer_impl@UD2D_POINT_2F@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXAEBUD2D_POINT_2F@@@Z @ 0x18006B4EC
 * Callers:
 *     ?AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z @ 0x18006A5F0 (-AddNonIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAXPEAUID2D1GeometrySink@@@Z.c)
 *     ?AddLine@CPolygonBuilder@@EEAAXUD2D_POINT_2F@@@Z @ 0x180264330 (-AddLine@CPolygonBuilder@@EEAAXUD2D_POINT_2F@@@Z.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800703BC (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x1801691D8 (--$uninitialized_move@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x180256DF4 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 */

__int64 __fastcall detail::vector_facade<D2D_POINT_2F,detail::buffer_impl<D2D_POINT_2F,40,1,detail::liberal_expansion_policy>>::push_back(
        detail::liberal_expansion_policy *a1,
        _QWORD *a2)
{
  char *v2; // rbx
  unsigned __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  _QWORD *v9; // r10
  __int64 v10; // rax
  __int64 result; // rax
  _QWORD *v12; // r9
  _QWORD *v13; // r8
  unsigned __int64 v14; // rdi
  void *v15; // rax
  __int64 v16; // r8
  char *v17; // rdx
  void *v18; // rbx
  char *v19; // rcx
  bool v20; // zf
  char *v21; // rcx
  __int128 v22; // [rsp+20h] [rbp-40h] BYREF
  __int64 v23; // [rsp+30h] [rbp-30h]
  __int128 v24; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+50h] [rbp-10h]
  __int64 v26; // [rsp+90h] [rbp+30h] BYREF

  v5 = (__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 3;
  if ( (__int64)(*((_QWORD *)a1 + 2) - *((_QWORD *)a1 + 1)) >> 3 )
    goto LABEL_2;
  if ( v5 + 1 >= v5 )
  {
    v14 = detail::liberal_expansion_policy::expand(a1, (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 3, v5 + 1);
    v15 = operator new[](saturated_mul(v14, 8uLL));
    v16 = *((_QWORD *)a1 + 1);
    v17 = *(char **)a1;
    *(_QWORD *)&v22 = v15;
    v18 = v15;
    *((_QWORD *)&v22 + 1) = v5;
    v23 = 0LL;
    v24 = v22;
    v25 = 0LL;
    ((void (__fastcall *)(__int128 *, char *, __int64, __int128 *))std::uninitialized_move<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
      &v22,
      v17,
      v16,
      &v24);
    v19 = *(char **)a1;
    v20 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    v26 = 0LL;
    *(_QWORD *)a1 = v18;
    if ( v20 )
      v19 = 0LL;
    operator delete(v19);
    v21 = *(char **)a1;
    *((_QWORD *)a1 + 1) = *(_QWORD *)a1 + 8 * v5;
    *((_QWORD *)a1 + 2) = &v21[8 * v14];
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v26);
LABEL_2:
    v2 = *(char **)a1;
    v6 = *((_QWORD *)a1 + 1);
    v7 = (v6 - *(_QWORD *)a1) >> 3;
    v8 = v7 - v5;
    v9 = (_QWORD *)(*(_QWORD *)a1 + 8 * v7);
    if ( !v9 )
      goto LABEL_8;
    v10 = ((__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 3) - v5;
    if ( v8 > 1 )
      v10 = 1LL;
    result = 8 * v10;
    v12 = (_QWORD *)(v6 - result);
    if ( v6 == v6 - result )
      goto LABEL_6;
    goto LABEL_11;
  }
  std::_Xoverflow_error("overflow");
  __debugbreak();
LABEL_11:
  v13 = (_QWORD *)(v6 - 8);
  result = 0LL;
  *v9 = *v13;
  if ( v13 != v12 )
    goto LABEL_8;
LABEL_6:
  if ( v8 > 1 )
  {
    if ( !v7 || v2 && v7 >= 0 )
    {
      *((_QWORD *)&v22 + 1) = v7;
      v23 = v7;
      *(_QWORD *)&v22 = v2;
      result = ((__int64 (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
                 &v24,
                 &v2[8 * v5],
                 &v2[8 * v7 - 8],
                 &v22);
      goto LABEL_7;
    }
LABEL_8:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_7:
  *((_QWORD *)a1 + 1) += 8LL;
  *(_QWORD *)&v2[8 * v5] = *a2;
  return result;
}
