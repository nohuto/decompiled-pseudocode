/*
 * XREFs of ?reserve_region@?$vector_facade@UConstantBufferRow@CCustomKernelEffect@@V?$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUConstantBufferRow@CCustomKernelEffect@@_K0@Z @ 0x18006FAA4
 * Callers:
 *     ??$insert@V?$span_iterator@$$CBUKernelTap@@@details@gsl@@X@?$vector_facade@UConstantBufferRow@CCustomKernelEffect@@V?$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@UConstantBufferRow@CCustomKernelEffect@@@1@V?$basic_iterator@$$CBUConstantBufferRow@CCustomKernelEffect@@@1@V?$span_iterator@$$CBUKernelTap@@@details@gsl@@1@Z @ 0x18006F954 (--$insert@V-$span_iterator@$$CBUKernelTap@@@details@gsl@@X@-$vector_facade@UConstantBufferRow@CC.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18006FBCC (-ensure_extra_capacity@-$buffer_impl@UConstantBufferRow@CCustomKernelEffect@@$07$00Vliberal_expa.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@UConstantBufferRow@CCustomKernelEffect@@@detail@@V?$checked_array_iterator@PEAUConstantBufferRow@CCustomKernelEffect@@@stdext@@@detail@@YAXV?$basic_iterator@UConstantBufferRow@CCustomKernelEffect@@@0@0V?$checked_array_iterator@PEAUConstantBufferRow@CCustomKernelEffect@@@stdext@@@Z @ 0x18006FD20 (--$move_backward_uninitialized@V-$basic_iterator@UConstantBufferRow@CCustomKernelEffect@@@detail.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_RECT_F@@@std@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@V?$move_iterator@PEAUD2D_RECT_F@@@0@0V12@@Z @ 0x180256CEC (--$move_backward@V-$move_iterator@PEAUD2D_RECT_F@@@std@@V-$checked_array_iterator@PEAUD2D_RECT_F.c)
 */

__int64 __fastcall detail::vector_facade<CCustomKernelEffect::ConstantBufferRow,detail::buffer_impl<CCustomKernelEffect::ConstantBufferRow,8,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rsi
  unsigned __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h]
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]
  __int64 v18; // [rsp+90h] [rbp+30h] BYREF
  __int64 v19; // [rsp+98h] [rbp+38h] BYREF

  detail::buffer_impl<CCustomKernelEffect::ConstantBufferRow,8,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    a3);
  v15 = 0LL;
  v6 = *a1;
  v7 = a1[1];
  v8 = v7 - *a1;
  *((_QWORD *)&v14 + 1) = a3;
  v9 = v8 >> 4;
  v15 = 0LL;
  v10 = v9 - a2;
  *(_QWORD *)&v14 = v6 + 16 * v9;
  if ( a3 && (!(v6 + 16 * v9) || a3 < 0) )
    goto LABEL_9;
  v18 = v7;
  v15 = a3;
  v11 = v9 - a2;
  v16 = v14;
  if ( a3 < v10 )
    v11 = a3;
  v17 = a3;
  v19 = v7 - 16 * v11;
  detail::move_backward_uninitialized<detail::basic_iterator<CCustomKernelEffect::ConstantBufferRow>,stdext::checked_array_iterator<CCustomKernelEffect::ConstantBufferRow *>>(
    &v19,
    &v18,
    &v16);
  if ( v10 > a3 )
  {
    if ( !v9 || v6 && v9 >= 0 )
    {
      v12 = 16 * a2;
      *(_QWORD *)&v14 = v6;
      *((_QWORD *)&v14 + 1) = v9;
      v15 = v9;
      ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::move_backward<std::move_iterator<D2D_RECT_F *>,stdext::checked_array_iterator<D2D_RECT_F *>>)(
        &v16,
        v12 + v6,
        v6 + 16 * (v9 - a3),
        &v14);
      goto LABEL_8;
    }
LABEL_9:
    _invalid_parameter_noinfo_noreturn();
  }
  v12 = 16 * a2;
LABEL_8:
  a1[1] += 16 * a3;
  return v12 + v6;
}
