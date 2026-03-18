/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVCOverlayContext@@_K0@Z @ 0x1801C8990
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18013DBE0 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@0@0V12@@Z @ 0x18013CFC4 (--$uninitialized_copy@V-$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V-$checked_array_iter.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

char *__fastcall detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::reserve_region(
        detail::liberal_expansion_policy *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v3; // r15
  char *v7; // rdi
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // r10
  unsigned __int64 v11; // rax
  _QWORD *v12; // r9
  __int64 v13; // rbp
  __int64 v14; // rbx
  signed __int64 v16; // r8
  _QWORD *v17; // r15
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // rsi
  LPVOID v22; // rax
  __int64 v23; // r8
  char *v24; // rdx
  LPVOID v25; // rdi
  char *v26; // rcx
  bool v27; // zf
  __int64 v28; // rax
  __int128 v29; // [rsp+20h] [rbp-58h] BYREF
  __int64 v30; // [rsp+30h] [rbp-48h]
  __int128 v31; // [rsp+40h] [rbp-38h] BYREF
  __int64 v32; // [rsp+50h] [rbp-28h]

  v3 = *((_QWORD *)a1 + 1);
  if ( (*((_QWORD *)a1 + 2) - v3) >> 3 < a3 )
  {
    v19 = (v3 - *(_QWORD *)a1) >> 3;
    v20 = v19 + a3;
    if ( v20 < v19 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x1801C8B30LL);
    }
    v21 = detail::liberal_expansion_policy::expand(a1, (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 3, v20);
    v22 = operator new[](saturated_mul(v21, 8uLL));
    v23 = *((_QWORD *)a1 + 1);
    v24 = *(char **)a1;
    *(_QWORD *)&v29 = v22;
    *((_QWORD *)&v29 + 1) = v19;
    v25 = v22;
    v30 = 0LL;
    v31 = v29;
    v32 = 0LL;
    std::uninitialized_copy<std::move_iterator<CBlurredBackdropCache * *>,stdext::checked_array_iterator<CBlurredBackdropCache * *>>(
      (__int64)&v29,
      v24,
      v23,
      &v31);
    v26 = *(char **)a1;
    v27 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
    *(_QWORD *)a1 = v25;
    if ( v27 )
      v26 = 0LL;
    operator delete(v26);
    v3 = *(_QWORD *)a1 + 8 * v19;
    v28 = *(_QWORD *)a1 + 8 * v21;
    *((_QWORD *)a1 + 1) = v3;
    *((_QWORD *)a1 + 2) = v28;
  }
  v7 = *(char **)a1;
  v8 = (v3 - *(_QWORD *)a1) >> 3;
  v9 = v8 - a2;
  v10 = 8 * v8 + *(_QWORD *)a1;
  if ( a3 && (!v10 || (a3 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_5;
  v11 = ((v3 - *(_QWORD *)a1) >> 3) - a2;
  if ( a3 < v9 )
    v11 = a3;
  v12 = (_QWORD *)(v3 - 8 * v11);
  if ( (_QWORD *)v3 != v12 )
  {
    v17 = (_QWORD *)(v3 - 8);
    v18 = a3;
    if ( v10 )
    {
      while ( v18 )
      {
        if ( --v18 >= a3 )
          break;
        *(_QWORD *)(v10 + 8 * v18) = *v17;
        if ( v17 == v12 )
          goto LABEL_9;
        --v17;
      }
    }
LABEL_5:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_9:
  if ( v9 > a3 )
  {
    if ( v8 && (!v7 || v8 < 0) )
      goto LABEL_5;
    v13 = 8 * a2;
    v14 = 8 * a3;
    v16 = 8 * v8 - v14 - v13;
    if ( v16 >> 3 <= 0 )
    {
      if ( v16 >> 3 < 0 )
        goto LABEL_5;
    }
    else if ( v8 < (unsigned __int64)(v16 >> 3) )
    {
      goto LABEL_5;
    }
    memmove_0(&v7[8 * v8 - v16], &v7[v13], v16);
  }
  else
  {
    v13 = 8 * a2;
    v14 = 8 * a3;
  }
  *((_QWORD *)a1 + 1) += v14;
  return &v7[v13];
}
