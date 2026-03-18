/*
 * XREFs of ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x18006EB60
 * Callers:
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x18006E5C4 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 * Callees:
 *     ??$move_backward_uninitialized@V?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@detail@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@detail@@YAXV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@0@0V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@Z @ 0x18006ECAC (--$move_backward_uninitialized@V-$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment.c)
 *     ?ensure_extra_capacity@?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18006ED1C (-ensure_extra_capacity@-$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vl.c)
 *     ??$move_backward@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180291AB8 (--$move_backward@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$c.c)
 */

__int64 __fastcall detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdi
  signed __int64 v9; // rdi
  unsigned __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // r14
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h]
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]
  __int64 v18; // [rsp+90h] [rbp+30h] BYREF
  __int64 v19; // [rsp+98h] [rbp+38h] BYREF

  detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    a3);
  v15 = 0LL;
  v6 = *a1;
  v7 = a1[1];
  v8 = v7 - *a1;
  *((_QWORD *)&v14 + 1) = a3;
  v9 = 0xAAAAAAAAAAAAAAABuLL * (v8 >> 2);
  v15 = 0LL;
  v10 = v9 - a2;
  *(_QWORD *)&v14 = v6 + 12 * v9;
  if ( a3 && (!(v6 + 12 * v9) || a3 < 0) )
    goto LABEL_9;
  v18 = v7;
  v15 = a3;
  v11 = v9 - a2;
  v16 = v14;
  if ( a3 < v10 )
    v11 = a3;
  v17 = a3;
  v19 = v7 - 12 * v11;
  detail::move_backward_uninitialized<detail::basic_iterator<CRenderingTechniqueFragment::SurfaceDescription>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
    &v19,
    &v18,
    &v16);
  if ( v10 > a3 )
  {
    if ( !v9 || v6 && v9 >= 0 )
    {
      *(_QWORD *)&v14 = v6;
      *((_QWORD *)&v14 + 1) = v9;
      v15 = v9;
      v12 = 12 * a2;
      ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>)(
        &v16,
        v12 + v6,
        v6 + 12 * (v9 - a3),
        &v14);
      goto LABEL_8;
    }
LABEL_9:
    _invalid_parameter_noinfo_noreturn();
  }
  v12 = 12 * a2;
LABEL_8:
  a1[1] += 12 * a3;
  return v12 + v6;
}
