/*
 * XREFs of ??$insert@V?$span_iterator@PEAVCOverlayContext@@@details@gsl@@X@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@1@V?$basic_iterator@QEAVCOverlayContext@@@1@V?$span_iterator@PEAVCOverlayContext@@@details@gsl@@1@Z @ 0x18013D0F0
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x18013DBE0 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@Z @ 0x1800C33AC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$unique_ptr@VCCachedRealization@CCachedIma.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@0@0V12@@Z @ 0x18013CFC4 (--$uninitialized_copy@V-$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V-$checked_array_iter.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

detail::liberal_expansion_policy **__fastcall detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,16,1,detail::liberal_expansion_policy>>::insert<gsl::details::span_iterator<COverlayContext *>,void>(
        __int64 *a1,
        detail::liberal_expansion_policy **a2,
        _QWORD *a3,
        __m128i *a4,
        __m128i *a5)
{
  __int64 *v5; // rbx
  _QWORD *v6; // r15
  __m128i v8; // xmm2
  detail::liberal_expansion_policy *v9; // rax
  __m128i v10; // xmm1
  __int64 v11; // r11
  detail::liberal_expansion_policy *v12; // rcx
  __int64 v13; // r14
  unsigned __int64 v14; // rsi
  __int64 v15; // rcx
  unsigned __int64 v16; // r8
  _QWORD *v17; // r10
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rdx
  _QWORD *v20; // r9
  __int64 v21; // rax
  __int64 v22; // xmm1_8
  __m128i v23; // xmm0
  __int64 v24; // rax
  detail::liberal_expansion_policy **v25; // xmm1_8
  detail::liberal_expansion_policy **v26; // r10
  __int64 v27; // r11
  __int64 v28; // rbx
  char *v29; // rax
  detail::liberal_expansion_policy **result; // rax
  _QWORD *v31; // rbx
  signed __int64 v32; // rdi
  __int64 v33; // rax
  _QWORD *v34; // r14
  unsigned __int64 v35; // r14
  unsigned __int64 v36; // rdi
  __int64 v37; // rbx
  __int64 v38; // r8
  const void *v39; // rdx
  __int64 *v40; // rcx
  __int64 v41; // rax
  __m128i v42; // [rsp+20h] [rbp-40h] BYREF
  detail::liberal_expansion_policy **v43; // [rsp+30h] [rbp-30h]
  __m128i v44; // [rsp+40h] [rbp-20h] BYREF
  __int64 v45; // [rsp+50h] [rbp-10h]
  detail::liberal_expansion_policy **v47; // [rsp+A8h] [rbp+48h]
  __int64 v48; // [rsp+B0h] [rbp+50h]

  v47 = a2;
  v5 = a1;
  v6 = (_QWORD *)*a1;
  v8 = *a4;
  v9 = (detail::liberal_expansion_policy *)a4->m128i_i64[0];
  v10 = *a5;
  v11 = (*a3 - *a1) >> 3;
  v12 = (detail::liberal_expansion_policy *)a5->m128i_i64[0];
  v45 = a5[1].m128i_i64[0];
  v43 = (detail::liberal_expansion_policy **)a4[1].m128i_i64[0];
  v48 = v11;
  if ( v12 != v9
    || (v12 = (detail::liberal_expansion_policy *)_mm_srli_si128(v10, 8).m128i_u64[0],
        v12 != (detail::liberal_expansion_policy *)_mm_srli_si128(v8, 8).m128i_i64[0]) )
  {
LABEL_20:
    ((void (__fastcall *)(detail::liberal_expansion_policy *, detail::liberal_expansion_policy **))`gsl::details::get_terminate_handler'::`2'::handler)(
      v12,
      a2);
    __debugbreak();
  }
  v13 = v5[1];
  v14 = (v45 - (__int64)v43) >> 3;
  if ( (v5[2] - v13) >> 3 < v14 )
  {
    v35 = (v13 - (__int64)v6) >> 3;
    if ( v14 + v35 < v35 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x18013D3ADLL);
    }
    v36 = detail::liberal_expansion_policy::expand(v12, (v5[2] - (__int64)v6) >> 3, v14 + v35);
    v42.m128i_i64[0] = (__int64)operator new[](saturated_mul(v36, 8uLL));
    v42.m128i_i64[1] = v35;
    v37 = v42.m128i_i64[0];
    v38 = a1[1];
    v39 = (const void *)*a1;
    v43 = 0LL;
    v44 = v42;
    v45 = 0LL;
    std::uninitialized_copy<std::move_iterator<CBlurredBackdropCache * *>,stdext::checked_array_iterator<CBlurredBackdropCache * *>>(
      (__int64)&v42,
      v39,
      v38,
      &v44);
    v40 = (__int64 *)*a1;
    *a1 = v37;
    v5 = a1;
    if ( v40 == a1 + 3 )
      v40 = 0LL;
    operator delete(v40);
    v6 = (_QWORD *)*a1;
    v11 = v48;
    v13 = *a1 + 8 * v35;
    v41 = *a1 + 8 * v36;
    a1[1] = v13;
    a1[2] = v41;
  }
  v15 = (v13 - (__int64)v6) >> 3;
  v16 = v15 - v11;
  v17 = &v6[v15];
  if ( v14 && (!v17 || (v14 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_6;
  v18 = ((v13 - (__int64)v6) >> 3) - v11;
  v19 = v14;
  if ( v14 < v16 )
    v18 = v14;
  v20 = (_QWORD *)(v13 - 8 * v18);
  if ( (_QWORD *)v13 != v20 )
  {
    v34 = (_QWORD *)(v13 - 8);
    if ( v17 )
    {
      while ( v19 )
      {
        if ( --v19 >= v14 )
          break;
        v17[v19] = *v34;
        if ( v34 == v20 )
          goto LABEL_11;
        --v34;
      }
    }
    goto LABEL_6;
  }
LABEL_11:
  if ( v16 > v14 )
  {
    if ( !v15 || v6 && v15 >= 0 )
    {
      v44.m128i_i64[1] = v15;
      v45 = v15;
      v31 = &v6[v11];
      v44.m128i_i64[0] = (__int64)v6;
      v32 = 8 * v15 - 8 * v14 - 8 * v11;
      v33 = std::_Get_unwrapped_n<stdext::checked_array_iterator<std::unique_ptr<CCachedImageProducer::CCachedRealization> *> &,__int64>(
              &v44,
              -(v32 >> 3));
      memmove_0((void *)(v33 - v32), v31, v32);
      v11 = v48;
      v5 = a1;
      goto LABEL_12;
    }
LABEL_6:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_12:
  v21 = v5[1];
  v22 = a5[1].m128i_i64[0];
  v44 = *a5;
  v23 = *a4;
  v12 = (detail::liberal_expansion_policy *)(v21 + 8 * v14);
  v45 = v22;
  v24 = 8 * v11;
  v25 = (detail::liberal_expansion_policy **)a4[1].m128i_i64[0];
  v26 = (detail::liberal_expansion_policy **)v45;
  v27 = v44.m128i_i64[1];
  v42 = v23;
  v43 = v25;
  a2 = v25;
  v5[1] = (__int64)v12;
  v28 = v44.m128i_i64[0];
  v29 = (char *)v6 + v24 - (_QWORD)v25;
  while ( 1 )
  {
    if ( *(_OWORD *)&v23 != __PAIR128__(v27, v28) )
      goto LABEL_20;
    if ( a2 == v26 )
      break;
    if ( !v23.m128i_i64[0]
      || !v23.m128i_i64[1]
      || v23.m128i_i64[0] > (unsigned __int64)a2
      || (unsigned __int64)a2 >= v23.m128i_i64[1] )
    {
      goto LABEL_20;
    }
    v12 = *a2;
    *(_QWORD *)&v29[(_QWORD)a2] = *a2;
    ++a2;
  }
  result = v47;
  *v47 = (detail::liberal_expansion_policy *)(*a1 + 8 * v48);
  return result;
}
