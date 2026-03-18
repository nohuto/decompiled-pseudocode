/*
 * XREFs of ?reserve_region@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSourceCVI@CVisualSurface@@_K0@Z @ 0x180185748
 * Callers:
 *     ??$emplace@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@H@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USourceCVI@CVisualSurface@@@1@V?$basic_iterator@$$CBUSourceCVI@CVisualSurface@@@1@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@H@Z @ 0x180007AC0 (--$emplace@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@H@-$vector_facade.c)
 *     ??$emplace@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@_K@?$vector_facade@USourceCVI@CVisualSurface@@V?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USourceCVI@CVisualSurface@@@1@V?$basic_iterator@$$CBUSourceCVI@CVisualSurface@@@1@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@_K@Z @ 0x180185A5C (--$emplace@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@_K@-$vector_facad.c)
 * Callees:
 *     ??$destruct_range@USourceCVI@CVisualSurface@@@detail@@YAXPEAUSourceCVI@CVisualSurface@@0@Z @ 0x180185884 (--$destruct_range@USourceCVI@CVisualSurface@@@detail@@YAXPEAUSourceCVI@CVisualSurface@@0@Z.c)
 *     ?ensure_extra_capacity@?$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801858BC (-ensure_extra_capacity@-$buffer_impl@USourceCVI@CVisualSurface@@$03$00Vliberal_expansion_policy@.c)
 *     ??$move_backward@V?$move_iterator@PEAUSourceCVI@CVisualSurface@@@std@@V?$checked_array_iterator@PEAUSourceCVI@CVisualSurface@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSourceCVI@CVisualSurface@@@stdext@@V?$move_iterator@PEAUSourceCVI@CVisualSurface@@@0@0V12@@Z @ 0x18029ADAC (--$move_backward@V-$move_iterator@PEAUSourceCVI@CVisualSurface@@@std@@V-$checked_array_iterator@.c)
 */

void *__fastcall detail::vector_facade<CVisualSurface::SourceCVI,detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rdi
  __int64 *v5; // r9
  __int64 v6; // r8
  unsigned __int64 v7; // r11
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 *v10; // r10
  __int64 v11; // rbx
  void *v12; // rbx
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rdx
  __int64 v16; // rax
  __int64 v17; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-38h]
  __int64 v19; // [rsp+30h] [rbp-30h]
  _BYTE v20[16]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<CVisualSurface::SourceCVI,4,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1LL);
  v4 = *a1;
  v5 = (__int64 *)a1[1];
  v19 = 0LL;
  v6 = ((__int64)v5 - v4) >> 4;
  v18 = 1LL;
  v21 = 0LL;
  v7 = v6 - a2;
  v17 = v4 + 16 * v6;
  if ( !v17 )
    goto LABEL_8;
  v21 = 1LL;
  v8 = v6 - a2;
  if ( v7 > 1 )
    v8 = 1LL;
  v9 = 16 * v8;
  v10 = &v5[v9 / 0xFFFFFFFFFFFFFFF8uLL];
  v19 = 1LL;
  if ( v5 != &v5[v9 / 0xFFFFFFFFFFFFFFF8uLL] )
  {
    v14 = v19;
    v15 = (_QWORD *)(v17 + 16);
    do
    {
      v5 -= 2;
      if ( !v17 )
        goto LABEL_8;
      if ( !v14 )
        goto LABEL_8;
      --v14;
      v15 -= 2;
      if ( v14 >= v18 )
        goto LABEL_8;
      v16 = *v5;
      *v5 = 0LL;
      *v15 = v16;
      v15[1] = v5[1];
    }
    while ( v5 != v10 );
  }
  if ( v7 > 1 )
  {
    if ( !v6 || v4 && v6 >= 0 )
    {
      v18 = v6;
      v19 = v6;
      v11 = 16 * a2;
      v17 = v4;
      ((void (__fastcall *)(_BYTE *, __int64, __int64, __int64 *))std::move_backward<std::move_iterator<CVisualSurface::SourceCVI *>,stdext::checked_array_iterator<CVisualSurface::SourceCVI *>>)(
        v20,
        16 * a2 + v4,
        v4 + 16 * v6 - 16,
        &v17);
      goto LABEL_7;
    }
LABEL_8:
    _invalid_parameter_noinfo_noreturn();
  }
  v11 = 16 * a2;
LABEL_7:
  v12 = (void *)(v4 + v11);
  detail::destruct_range<CVisualSurface::SourceCVI>(v12);
  a1[1] += 16LL;
  return v12;
}
