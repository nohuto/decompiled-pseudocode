/*
 * XREFs of ?reserve_region@?$vector_facade@PEBVCRenderingTechniqueFragment@@V?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEBVCRenderingTechniqueFragment@@_K0@Z @ 0x18006E88C
 * Callers:
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x18006E5C4 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18006E9D4 (-ensure_extra_capacity@-$buffer_impl@PEBVCRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@_J@Z @ 0x18006EB14 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAPEBVCRenderingTechniqueFragment@@@stdext@@_J.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<CRenderingTechniqueFragment const *,detail::buffer_impl<CRenderingTechniqueFragment const *,16,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // r9
  _QWORD *v8; // r11
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // r10
  __int64 v12; // rsi
  signed __int64 v13; // rdi
  __int64 v14; // rax
  _QWORD *v16; // rdx
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  detail::buffer_impl<CRenderingTechniqueFragment const *,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1LL);
  v4 = *a1;
  v5 = a1[1];
  v6 = (v5 - *a1) >> 3;
  v7 = v6 - a2;
  v8 = (_QWORD *)(8 * v6 + *a1);
  if ( !v8 )
    goto LABEL_2;
  v9 = ((a1[1] - *a1) >> 3) - a2;
  if ( v7 > 1 )
    v9 = 1LL;
  v10 = 8 * v9;
  v11 = (_QWORD *)(v5 - v10);
  if ( v5 != v5 - v10 )
  {
    v16 = (_QWORD *)(v5 - 8);
    *v8 = *v16;
    if ( v16 != v11 )
LABEL_2:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v7 <= 1 )
  {
    v12 = 8 * a2;
  }
  else
  {
    if ( v6 && (!v4 || v6 < 0) )
      goto LABEL_2;
    v12 = 8 * a2;
    v17[0] = v4;
    v17[1] = v6;
    v17[2] = v6;
    v13 = 8 * v6 - v12 - 8;
    v14 = std::_Get_unwrapped_n<stdext::checked_array_iterator<CRenderingTechniqueFragment const * *> &,__int64>(
            v17,
            -(v13 >> 3));
    memmove_0((void *)(v14 - v13), (const void *)(v12 + v4), v13);
  }
  a1[1] += 8LL;
  return v12 + v4;
}
