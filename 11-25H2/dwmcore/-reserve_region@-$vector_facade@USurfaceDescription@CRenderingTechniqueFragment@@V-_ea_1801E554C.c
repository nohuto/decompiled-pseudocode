/*
 * XREFs of ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x1801E554C
 * Callers:
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800705E0 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18006ED1C (-ensure_extra_capacity@-$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vl.c)
 *     ??$move_backward@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180291AB8 (--$move_backward@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$c.c)
 */

char *__fastcall detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,16,1,detail::liberal_expansion_policy>>::reserve_region(
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
  __int64 v11; // rdi
  unsigned __int64 v13; // rcx
  char *v14; // rdx
  char *v15; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-38h]
  __int64 v17; // [rsp+30h] [rbp-30h]
  char v18[16]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1uLL);
  v4 = (char *)*a1;
  v17 = 0LL;
  v5 = (char *)a1[1];
  v16 = 1LL;
  v6 = 0xAAAAAAAAAAAAAAABuLL * ((v5 - v4) >> 2);
  v19 = 0LL;
  v7 = v6 - a2;
  v15 = &v4[4 * ((v5 - v4) >> 2)];
  if ( !v15 )
    goto LABEL_10;
  v19 = 1LL;
  v8 = v6 - a2;
  if ( v7 > 1 )
    v8 = 1LL;
  v17 = 1LL;
  v9 = 12 * v8;
  v10 = &v5[-v9];
  if ( v5 != &v5[-v9] )
  {
    v13 = v17;
    v14 = v15 + 12;
    do
    {
      v5 -= 12;
      if ( !v15 )
        goto LABEL_10;
      if ( !v13 )
        goto LABEL_10;
      --v13;
      v14 -= 12;
      if ( v13 >= v16 )
        goto LABEL_10;
      *(_QWORD *)v14 = *(_QWORD *)v5;
      *((_DWORD *)v14 + 2) = *((_DWORD *)v5 + 2);
    }
    while ( v5 != v10 );
  }
  if ( v7 > 1 )
  {
    if ( !v6 || v4 && v6 >= 0 )
    {
      v16 = v6;
      v17 = v6;
      v11 = 12 * a2;
      v15 = v4;
      ((void (__fastcall *)(char *, char *, char *, char **))std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>)(
        v18,
        &v4[v11],
        &v4[12 * v6 - 12],
        &v15);
      goto LABEL_7;
    }
LABEL_10:
    _invalid_parameter_noinfo_noreturn();
  }
  v11 = 12 * a2;
LABEL_7:
  a1[1] = (char *)a1[1] + 12;
  return &v4[v11];
}
