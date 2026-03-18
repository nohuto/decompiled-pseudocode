/*
 * XREFs of ?reserve_region@?$vector_facade@GV?$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAG_K0@Z @ 0x180169B0C
 * Callers:
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x18016CE28 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180169C04 (-ensure_extra_capacity@-$buffer_impl@G$0GE@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@G@detail@@V?$checked_array_iterator@PEAG@stdext@@@detail@@YAXV?$basic_iterator@G@0@0V?$checked_array_iterator@PEAG@stdext@@@Z @ 0x180169D34 (--$move_backward_uninitialized@V-$basic_iterator@G@detail@@V-$checked_array_iterator@PEAG@stdext.c)
 *     ??$move_backward@V?$move_iterator@PEAG@std@@V?$checked_array_iterator@PEAG@stdext@@@std@@YA?AV?$checked_array_iterator@PEAG@stdext@@V?$move_iterator@PEAG@0@0V12@@Z @ 0x180290ACC (--$move_backward@V-$move_iterator@PEAG@std@@V-$checked_array_iterator@PEAG@stdext@@@std@@YA-AV-$.c)
 */

__int64 __fastcall detail::vector_facade<unsigned short,detail::buffer_impl<unsigned short,100,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+28h] [rbp-38h]
  __int64 v15; // [rsp+30h] [rbp-30h]
  char v16[32]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+90h] [rbp+30h] BYREF
  __int64 v18; // [rsp+98h] [rbp+38h] BYREF

  detail::buffer_impl<unsigned short,100,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, a3);
  v6 = *a1;
  v7 = a1[1];
  v8 = (v7 - *a1) >> 1;
  v9 = v8 - a2;
  v10 = *a1 + 2 * v8;
  if ( a3 && (!v10 || a3 < 0) )
    goto LABEL_8;
  v17 = a1[1];
  v13 = v10;
  v11 = v8 - a2;
  v14 = a3;
  if ( a3 < v9 )
    v11 = a3;
  v15 = a3;
  v18 = v7 - 2 * v11;
  detail::move_backward_uninitialized<detail::basic_iterator<unsigned short>,stdext::checked_array_iterator<unsigned short *>>(
    &v18,
    &v17,
    &v13);
  if ( v9 > a3 )
  {
    if ( !v8 || v6 && v8 >= 0 )
    {
      v13 = v6;
      v14 = v8;
      v15 = v8;
      ((void (__fastcall *)(char *, __int64, __int64, __int64 *))std::move_backward<std::move_iterator<unsigned short *>,stdext::checked_array_iterator<unsigned short *>>)(
        v16,
        v6 + 2 * a2,
        v6 + 2 * (v8 - a3),
        &v13);
      goto LABEL_7;
    }
LABEL_8:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_7:
  result = v6 + 2 * a2;
  a1[1] += 2 * a3;
  return result;
}
