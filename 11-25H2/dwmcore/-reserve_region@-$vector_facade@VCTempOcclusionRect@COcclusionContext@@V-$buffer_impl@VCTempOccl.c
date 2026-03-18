/*
 * XREFs of ?reserve_region@?$vector_facade@VCTempOcclusionRect@COcclusionContext@@V?$buffer_impl@VCTempOcclusionRect@COcclusionContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCTempOcclusionRect@COcclusionContext@@_K0@Z @ 0x1802864AC
 * Callers:
 *     ?CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_NPEAV2@@Z @ 0x180285A08 (-CollectRectangleForOcclusion@COcclusionContext@@AEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAVCTempOcclusionRect@COcclusionContext@@@std@@V?$checked_array_iterator@PEAVCTempOcclusionRect@COcclusionContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCTempOcclusionRect@COcclusionContext@@@stdext@@V?$move_iterator@PEAVCTempOcclusionRect@COcclusionContext@@@0@0V12@@Z @ 0x1802857D8 (--$move_backward@V-$move_iterator@PEAVCTempOcclusionRect@COcclusionContext@@@std@@V-$checked_arr.c)
 *     ?ensure_extra_capacity@?$buffer_impl@VCTempOcclusionRect@COcclusionContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180286370 (-ensure_extra_capacity@-$buffer_impl@VCTempOcclusionRect@COcclusionContext@@$09$00Vliberal_expan.c)
 */

char *__fastcall detail::vector_facade<COcclusionContext::CTempOcclusionRect,detail::buffer_impl<COcclusionContext::CTempOcclusionRect,10,1,detail::liberal_expansion_policy>>::reserve_region(
        const void **a1,
        __int64 a2)
{
  char *v4; // rbx
  char *v5; // r9
  signed __int64 v6; // r8
  unsigned __int64 v7; // r11
  __int64 v8; // rax
  __int64 v9; // rax
  char *v10; // r10
  __int64 v11; // rcx
  char *v12; // rdx
  __int64 v13; // rdi
  char *v15; // [rsp+20h] [rbp-60h]
  __int128 v16; // [rsp+20h] [rbp-60h]
  __int128 v17; // [rsp+40h] [rbp-40h] BYREF
  __int64 v18; // [rsp+50h] [rbp-30h]
  char v19[32]; // [rsp+60h] [rbp-20h] BYREF

  detail::buffer_impl<COcclusionContext::CTempOcclusionRect,10,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1uLL);
  v4 = (char *)*a1;
  v5 = (char *)a1[1];
  v6 = 0xCCCCCCCCCCCCCCCDuLL * ((v5 - (_BYTE *)*a1) >> 2);
  v18 = 0LL;
  v7 = v6 - a2;
  v15 = &v4[20 * v6];
  if ( !v15 )
    goto LABEL_16;
  v18 = 1LL;
  v8 = v6 - a2;
  if ( v7 > 1 )
    v8 = 1LL;
  v9 = 20 * v8;
  v10 = &v5[-v9];
  if ( v5 != &v5[-v9] )
  {
    v11 = 1LL;
    v12 = v15 + 20;
    while ( 1 )
    {
      v5 -= 20;
      if ( !v11 )
        break;
      --v11;
      v12 -= 20;
      if ( v11 )
        break;
      *(_OWORD *)v12 = *(_OWORD *)v5;
      *((_DWORD *)v12 + 4) = *((_DWORD *)v5 + 4);
      if ( v5 == v10 )
        goto LABEL_9;
    }
LABEL_16:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_9:
  if ( v7 <= 1 )
  {
    v13 = 20 * a2;
  }
  else
  {
    *(_QWORD *)&v16 = v4;
    *((_QWORD *)&v16 + 1) = v6;
    if ( v6 && (!v4 || v6 < 0) )
      goto LABEL_16;
    v13 = 20 * a2;
    v17 = v16;
    v18 = v6;
    std::move_backward<std::move_iterator<COcclusionContext::CTempOcclusionRect *>,stdext::checked_array_iterator<COcclusionContext::CTempOcclusionRect *>>(
      (__int64)v19,
      &v4[v13],
      (__int64)&v4[20 * v6 - 20],
      &v17);
  }
  a1[1] = (char *)a1[1] + 20;
  return &v4[v13];
}
