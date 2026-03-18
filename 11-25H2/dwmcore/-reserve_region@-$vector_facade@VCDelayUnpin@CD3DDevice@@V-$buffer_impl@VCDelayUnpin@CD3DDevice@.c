/*
 * XREFs of ?reserve_region@?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCDelayUnpin@CD3DDevice@@_K0@Z @ 0x18024F0A8
 * Callers:
 *     ?DelayUnpinResources@CD3DDevice@@QEAAXV?$span@PEAVISwapChainRealization@@$0?0@gsl@@U_LUID@@II@Z @ 0x1802C3644 (-DelayUnpinResources@CD3DDevice@@QEAAXV-$span@PEAVISwapChainRealization@@$0-0@gsl@@U_LUID@@II@Z.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18024F21C (-ensure_extra_capacity@-$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@de.c)
 *     ??$destruct_range@VCDelayUnpin@CD3DDevice@@@detail@@YAXPEAVCDelayUnpin@CD3DDevice@@0@Z @ 0x18024F364 (--$destruct_range@VCDelayUnpin@CD3DDevice@@@detail@@YAXPEAVCDelayUnpin@CD3DDevice@@0@Z.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@VCDelayUnpin@CD3DDevice@@@detail@@V?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@@detail@@YAXV?$basic_iterator@VCDelayUnpin@CD3DDevice@@@0@0V?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@@Z @ 0x18024F39C (--$move_backward_uninitialized@V-$basic_iterator@VCDelayUnpin@CD3DDevice@@@detail@@V-$checked_ar.c)
 *     ??$move_backward@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@std@@V?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCDelayUnpin@CD3DDevice@@@stdext@@V?$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@0@0V12@@Z @ 0x1802C1B2C (--$move_backward@V-$move_iterator@PEAVCDelayUnpin@CD3DDevice@@@std@@V-$checked_array_iterator@PE.c)
 */

__int64 __fastcall detail::vector_facade<CD3DDevice::CDelayUnpin,detail::buffer_impl<CD3DDevice::CDelayUnpin,7,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rbx
  signed __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int128 v13; // [rsp+20h] [rbp-40h] BYREF
  __int64 v14; // [rsp+30h] [rbp-30h]
  __int128 v15; // [rsp+40h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]
  __int64 v17; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+50h] BYREF

  v18 = a3;
  detail::buffer_impl<CD3DDevice::CDelayUnpin,7,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1LL);
  v14 = 0LL;
  v5 = *a1;
  v6 = a1[1];
  v7 = v6 - *a1;
  *((_QWORD *)&v13 + 1) = 1LL;
  v8 = 0xAAAAAAAAAAAAAAABuLL * (v7 >> 3);
  v14 = 0LL;
  v9 = v8 - a2;
  *(_QWORD *)&v13 = v5 + 24 * v8;
  if ( !(_QWORD)v13 )
    goto LABEL_11;
  v18 = v6;
  v14 = 1LL;
  v10 = v8 - a2;
  v15 = v13;
  if ( v9 > 1 )
    v10 = 1LL;
  v16 = 1LL;
  v17 = v6 - 24 * v10;
  detail::move_backward_uninitialized<detail::basic_iterator<CD3DDevice::CDelayUnpin>,stdext::checked_array_iterator<CD3DDevice::CDelayUnpin *>>(
    &v17,
    &v18,
    &v15);
  if ( v9 <= 1 )
  {
    v11 = 24 * a2;
    goto LABEL_10;
  }
  if ( v8 && (!v5 || v8 < 0) )
LABEL_11:
    _invalid_parameter_noinfo_noreturn();
  *(_QWORD *)&v13 = v5;
  v11 = 24 * a2;
  *((_QWORD *)&v13 + 1) = v8;
  v14 = v8;
  ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::move_backward<std::move_iterator<CD3DDevice::CDelayUnpin *>,stdext::checked_array_iterator<CD3DDevice::CDelayUnpin *>>)(
    &v15,
    24 * a2 + v5,
    v5 + 24 * (v8 - 1),
    &v13);
LABEL_10:
  detail::destruct_range<CD3DDevice::CDelayUnpin>((void *)(v11 + v5));
  a1[1] += 24LL;
  return v11 + v5;
}
