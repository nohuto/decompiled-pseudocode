/*
 * XREFs of ??$?0V?$span_iterator@PEAVCCompositionLight@@@details@gsl@@$0A@@?$vector@PEAVCCompositionLight@@V?$allocator@PEAVCCompositionLight@@@std@@@std@@QEAA@V?$span_iterator@PEAVCCompositionLight@@@details@gsl@@0AEBV?$allocator@PEAVCCompositionLight@@@1@@Z @ 0x1802858B8
 * Callers:
 *     ??0CSpectreCallbackRenderer@@AEAA@PEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MMV?$span@PEAVCCompositionLight@@$0?0@gsl@@@Z @ 0x1802859F4 (--0CSpectreCallbackRenderer@@AEAA@PEAUISpectreWorld@@AEBUD2D_MATRIX_4X4_F@@AEBUD2D_VECTOR_3F@@MM.c)
 * Callees:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180041D40 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??1?$_Tidy_guard@V?$vector@PEAVCCompositionLight@@V?$allocator@PEAVCCompositionLight@@@std@@@std@@@std@@QEAA@XZ @ 0x180250320 (--1-$_Tidy_guard@V-$vector@PEAVCCompositionLight@@V-$allocator@PEAVCCompositionLight@@@std@@@std.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *std::vector<CCompositionLight *>::vector<CCompositionLight *>(_QWORD *a1, __m128i *a2, __m128i *a3, ...)
{
  unsigned __int64 v3; // xmm0_8
  signed __int64 v6; // rbp
  unsigned __int64 v7; // rdi
  SIZE_T size_of; // rax
  char *v9; // rax
  const void *v10; // rdx
  char *v11; // rbx
  __int64 v13; // [rsp+98h] [rbp+20h] BYREF
  va_list va; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v13 = va_arg(va1, _QWORD);
  v3 = a3[1].m128i_u64[0];
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( a2->m128i_i64[0] != a3->m128i_i64[0]
    || _mm_srli_si128(*a2, 8).m128i_u64[0] != _mm_srli_si128(*a3, 8).m128i_u64[0]
    || a2[1].m128i_i64[0] > v3 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  }
  v6 = a3[1].m128i_i64[0] - a2[1].m128i_i64[0];
  v7 = v6 >> 3;
  if ( v6 >> 3 )
  {
    if ( v7 > 0x1FFFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    size_of = std::_Get_size_of_n<8>((a3[1].m128i_i64[0] - a2[1].m128i_i64[0]) >> 3);
    v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
    v10 = (const void *)a2[1].m128i_i64[0];
    *a1 = v9;
    v11 = v9;
    a1[1] = v9;
    a1[2] = &v9[8 * v7];
    memmove_0(v9, v10, v6);
    v13 = 0LL;
    a1[1] = &v11[8 * v7];
    std::_Tidy_guard<std::vector<CCompositionLight *>>::~_Tidy_guard<std::vector<CCompositionLight *>>((__int64 *)va);
  }
  return a1;
}
