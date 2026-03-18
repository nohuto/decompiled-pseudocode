/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCOverlayContext@@_K0@Z @ 0x1801BA4D0
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180102130 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@0@0V12@@Z @ 0x1801017D8 (--$uninitialized_copy@V-$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V-$checked_array_iter.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

char *__fastcall detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2)
{
  __int64 v2; // rbp
  char *v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  _QWORD *v8; // r10
  __int64 v9; // rcx
  _QWORD *v10; // r8
  __int64 v11; // r14
  _QWORD *v13; // rbp
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rdi
  LPVOID v16; // rax
  __int64 v17; // r8
  char *v18; // rdx
  LPVOID v19; // rbx
  char *v20; // rcx
  bool v21; // zf
  __int64 v22; // rax
  __int128 v23; // [rsp+20h] [rbp-58h] BYREF
  __int64 v24; // [rsp+30h] [rbp-48h]
  __int128 v25; // [rsp+40h] [rbp-38h] BYREF
  __int64 v26; // [rsp+50h] [rbp-28h]

  v2 = *((_QWORD *)a1 + 1);
  if ( !((*((_QWORD *)a1 + 2) - v2) >> 3) )
  {
    v14 = (v2 - *(_QWORD *)a1) >> 3;
    if ( v14 + 1 < v14 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x1801BA647LL);
    }
    v15 = detail::liberal_expansion_policy::expand(a1, (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 3, v14 + 1);
    v16 = operator new[](saturated_mul(v15, 8uLL));
    v17 = *((_QWORD *)a1 + 1);
    v18 = *(char **)a1;
    *(_QWORD *)&v23 = v16;
    *((_QWORD *)&v23 + 1) = v14;
    v19 = v16;
    v24 = 0LL;
    v25 = v23;
    v26 = 0LL;
    std::uninitialized_copy<std::move_iterator<CBlurredBackdropCache * *>,stdext::checked_array_iterator<CBlurredBackdropCache * *>>(
      (__int64)&v23,
      v18,
      v17,
      &v25);
    v20 = *(char **)a1;
    v21 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v19;
    if ( v21 )
      v20 = 0LL;
    operator delete(v20);
    v2 = *(_QWORD *)a1 + 8 * v14;
    v22 = *(_QWORD *)a1 + 8 * v15;
    *((_QWORD *)a1 + 1) = v2;
    *((_QWORD *)a1 + 2) = v22;
  }
  v5 = *(char **)a1;
  v6 = (v2 - *(_QWORD *)a1) >> 3;
  v7 = v6 - a2;
  v8 = (_QWORD *)(8 * v6 + *(_QWORD *)a1);
  if ( !v8 )
    goto LABEL_9;
  v9 = ((v2 - *(_QWORD *)a1) >> 3) - a2;
  if ( v7 > 1 )
    v9 = 1LL;
  v10 = (_QWORD *)(v2 - 8 * v9);
  if ( (_QWORD *)v2 != v10 )
  {
    v13 = (_QWORD *)(v2 - 8);
    *v8 = *v13;
    if ( v13 != v10 )
LABEL_9:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v7 > 1 )
  {
    if ( v6 && (!v5 || v6 < 0) )
      goto LABEL_9;
    v11 = 8 * a2;
    if ( (8 * v6 - v11 - 8) >> 3 <= 0 )
    {
      if ( (8 * v6 - v11 - 8) >> 3 < 0 )
        goto LABEL_9;
    }
    else if ( v6 < (unsigned __int64)((8 * v6 - v11 - 8) >> 3) )
    {
      goto LABEL_9;
    }
    memmove_0((void *)(8 * v6 - (8 * v6 - (_QWORD)&v5[v11] - 8)), &v5[v11], 8 * v6 - v11 - 8);
  }
  else
  {
    v11 = 8 * a2;
  }
  *((_QWORD *)a1 + 1) += 8LL;
  return &v5[v11];
}
