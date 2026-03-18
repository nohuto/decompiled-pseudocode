/*
 * XREFs of ?BeginFigure@CPolygonBuilder@@EEAAXUD2D_POINT_2F@@W4D2D1_FIGURE_BEGIN@@@Z @ 0x18017F810
 * Callers:
 *     ?GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x18017F5D0 (-GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x180046790 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x1801860D8 (--$uninitialized_move@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x18024BA24 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 */

void __fastcall CPolygonBuilder::BeginFigure(CPolygonBuilder *this, struct D2D_POINT_2F a2, enum D2D1_FIGURE_BEGIN a3)
{
  __int64 v3; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rcx
  unsigned __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  _QWORD *v14; // r10
  __int64 v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // r9
  _QWORD *v18; // r8
  unsigned __int64 v19; // rdi
  LPVOID v20; // rax
  __int64 v21; // r8
  __int64 v22; // rdx
  LPVOID v23; // rbx
  CPolygonBuilder *v24; // rcx
  __int64 v25; // rcx
  __int128 v26; // [rsp+20h] [rbp-50h] BYREF
  __int64 v27; // [rsp+30h] [rbp-40h]
  __int128 v28; // [rsp+40h] [rbp-30h] BYREF
  __int64 v29; // [rsp+50h] [rbp-20h]
  void *v30; // [rsp+A0h] [rbp+30h] BYREF

  v6 = *((_QWORD *)this + 3);
  v7 = (v6 - *((_QWORD *)this + 2)) >> 3;
  if ( v7 )
  {
    v6 -= 8 * v7;
    *((_QWORD *)this + 3) = v6;
  }
  v8 = v6 - *((_QWORD *)this + 2);
  v9 = *((_QWORD *)this + 4);
  v10 = v8 >> 3;
  if ( (v9 - v6) >> 3 )
  {
LABEL_4:
    v3 = *((_QWORD *)this + 2);
    v11 = *((_QWORD *)this + 3);
    v12 = (v11 - v3) >> 3;
    v13 = v12 - v10;
    v14 = (_QWORD *)(v3 + 8 * v12);
    if ( !v14 )
      goto LABEL_10;
    v15 = ((*((_QWORD *)this + 3) - v3) >> 3) - v10;
    if ( v13 > 1 )
      v15 = 1LL;
    v16 = 8 * v15;
    v17 = (_QWORD *)(v11 - v16);
    if ( v11 == v11 - v16 )
      goto LABEL_8;
    goto LABEL_13;
  }
  if ( v10 + 1 >= v10 )
  {
    v19 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)((v9 - *((_QWORD *)this + 2)) >> 3),
            (v9 - *((_QWORD *)this + 2)) >> 3,
            v10 + 1);
    v20 = operator new[](saturated_mul(v19, 8uLL));
    v21 = *((_QWORD *)this + 3);
    v22 = *((_QWORD *)this + 2);
    *(_QWORD *)&v26 = v20;
    v23 = v20;
    *((_QWORD *)&v26 + 1) = v10;
    v27 = 0LL;
    v28 = v26;
    v29 = 0LL;
    ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::uninitialized_move<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
      &v26,
      v22,
      v21,
      &v28);
    v24 = (CPolygonBuilder *)*((_QWORD *)this + 2);
    v30 = 0LL;
    *((_QWORD *)this + 2) = v23;
    if ( v24 == (CPolygonBuilder *)((char *)this + 40) )
      v24 = 0LL;
    operator delete(v24);
    v25 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 3) = v25 + 8 * v10;
    *((_QWORD *)this + 4) = v25 + 8 * v19;
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v30);
    goto LABEL_4;
  }
  std::_Xoverflow_error("overflow");
  __debugbreak();
LABEL_13:
  v18 = (_QWORD *)(v11 - 8);
  *v14 = *v18;
  if ( v18 != v17 )
    goto LABEL_10;
LABEL_8:
  if ( v13 > 1 )
  {
    if ( !v12 || v3 && v12 >= 0 )
    {
      *((_QWORD *)&v26 + 1) = v12;
      v27 = v12;
      *(_QWORD *)&v26 = v3;
      ((void (__fastcall *)(__int128 *, unsigned __int64, __int64, __int128 *))std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
        &v28,
        v3 + 8 * v10,
        v3 + 8 * (v12 - 1),
        &v26);
      goto LABEL_9;
    }
LABEL_10:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_9:
  *((_QWORD *)this + 3) += 8LL;
  *(struct D2D_POINT_2F *)(v3 + 8 * v10) = a2;
}
