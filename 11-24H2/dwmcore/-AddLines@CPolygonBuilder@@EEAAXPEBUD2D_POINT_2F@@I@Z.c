/*
 * XREFs of ?AddLines@CPolygonBuilder@@EEAAXPEBUD2D_POINT_2F@@I@Z @ 0x18017F950
 * Callers:
 *     ?GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z @ 0x18017F5D0 (-GetOutline@CPolygonShape@@UEBAJPEAUID2D1GeometrySink@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x1801860D8 (--$uninitialized_move@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_POINT_2F@@@std@@V?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_POINT_2F@@@stdext@@V?$move_iterator@PEAUD2D_POINT_2F@@@0@0V12@@Z @ 0x18024BA24 (--$move_backward@V-$move_iterator@PEAUD2D_POINT_2F@@@std@@V-$checked_array_iterator@PEAUD2D_POIN.c)
 */

void __fastcall CPolygonBuilder::AddLines(CPolygonBuilder *this, const struct D2D_POINT_2F *a2, unsigned int a3)
{
  __int64 v3; // rdi
  const struct D2D_POINT_2F *v4; // rbx
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // r15
  __int64 v8; // r12
  const struct D2D_POINT_2F *v9; // rbp
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // r10
  __int64 v13; // rax
  _QWORD *v14; // r8
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  _QWORD *v18; // r14
  _QWORD *v19; // r9
  unsigned __int64 v20; // rsi
  LPVOID v21; // rax
  __int64 v22; // r8
  __int64 v23; // rdx
  LPVOID v24; // rdi
  CPolygonBuilder *v25; // rcx
  __int128 v26; // [rsp+20h] [rbp-68h] BYREF
  __int64 v27; // [rsp+30h] [rbp-58h]
  __int128 v28; // [rsp+40h] [rbp-48h] BYREF
  __int64 v29; // [rsp+50h] [rbp-38h]

  v3 = *((_QWORD *)this + 2);
  v4 = a2;
  v6 = *((_QWORD *)this + 3);
  v7 = a3;
  v8 = (__int64)(v6 - v3) >> 3;
  v9 = &a2[a3];
  if ( (__int64)(*((_QWORD *)this + 4) - v6) >> 3 < (unsigned __int64)a3 )
  {
    v6 = (__int64)(v6 - v3) >> 3;
    v17 = a3 + v6;
    if ( v7 + v6 < v6 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
LABEL_15:
      v18 = (_QWORD *)(v6 - 8);
      v19 = (_QWORD *)(v12 + 8 * v7);
      if ( v12 )
      {
        while ( v15 )
        {
          --v15;
          --v19;
          if ( v15 >= v7 )
            break;
          *v19 = *v18;
          if ( v18 == v14 )
            goto LABEL_7;
          --v18;
        }
      }
      goto LABEL_12;
    }
    v20 = detail::liberal_expansion_policy::expand(this, (*((_QWORD *)this + 4) - v3) >> 3, v17);
    v21 = operator new[](saturated_mul(v20, 8uLL));
    v22 = *((_QWORD *)this + 3);
    v23 = *((_QWORD *)this + 2);
    *(_QWORD *)&v26 = v21;
    v24 = v21;
    *((_QWORD *)&v26 + 1) = v6;
    v27 = 0LL;
    v28 = v26;
    v29 = 0LL;
    ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::uninitialized_move<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
      &v26,
      v23,
      v22,
      &v28);
    v25 = (CPolygonBuilder *)*((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = v24;
    if ( v25 == (CPolygonBuilder *)((char *)this + 40) )
      v25 = 0LL;
    operator delete(v25);
    v3 = *((_QWORD *)this + 2);
    v6 = v3 + 8 * v6;
    *((_QWORD *)this + 4) = v3 + 8 * v20;
    *((_QWORD *)this + 3) = v6;
  }
  v10 = (__int64)(v6 - v3) >> 3;
  v11 = v10 - v8;
  v12 = v3 + 8 * v10;
  if ( v7 && !v12 )
    goto LABEL_12;
  v13 = ((__int64)(v6 - v3) >> 3) - v8;
  if ( v7 < v11 )
    v13 = v7;
  v14 = (_QWORD *)(v6 - 8 * v13);
  v15 = v7;
  if ( (_QWORD *)v6 != v14 )
    goto LABEL_15;
LABEL_7:
  if ( v11 <= v7 )
    goto LABEL_8;
  if ( v10 && (!v3 || v10 < 0) )
LABEL_12:
    _invalid_parameter_noinfo_noreturn();
  *((_QWORD *)&v26 + 1) = v10;
  v27 = v10;
  *(_QWORD *)&v26 = v3;
  ((void (__fastcall *)(__int128 *, __int64, unsigned __int64, __int128 *))std::move_backward<std::move_iterator<D2D_POINT_2F *>,stdext::checked_array_iterator<D2D_POINT_2F *>>)(
    &v28,
    v3 + 8 * v8,
    v3 + 8 * (v10 - v7),
    &v26);
LABEL_8:
  *((_QWORD *)this + 3) += 8 * v7;
  if ( v4 != v9 )
  {
    v16 = v3 + 8 * v8 - (_QWORD)v4;
    do
    {
      *(const struct D2D_POINT_2F *)((char *)v4 + v16) = *v4;
      ++v4;
    }
    while ( v4 != v9 );
  }
}
