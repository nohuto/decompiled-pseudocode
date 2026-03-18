/*
 * XREFs of ?reserve_region@?$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V?$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUVertexXYW_ColorDW_UV2_AAFixup@@_K0@Z @ 0x1802083A0
 * Callers:
 *     ?resize@?$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V?$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x1802082E8 (-resize@-$vector_facade@UVertexXYW_ColorDW_UV2_AAFixup@@V-$buffer_impl@UVertexXYW_ColorDW_UV2_AA.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1802084CC (-ensure_extra_capacity@-$buffer_impl@UVertexXYW_ColorDW_UV2_AAFixup@@$0CI@$00Vliberal_expansion_.c)
 *     ??$move_backward@V?$move_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@std@@V?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@stdext@@V?$move_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@0@0V12@@Z @ 0x18029429C (--$move_backward@V-$move_iterator@PEAUVertexXYW_ColorDW_UV2_AAFixup@@@std@@V-$checked_array_iter.c)
 */

__int64 __fastcall detail::vector_facade<VertexXYW_ColorDW_UV2_AAFixup,detail::buffer_impl<VertexXYW_ColorDW_UV2_AAFixup,40,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v6; // rsi
  _OWORD *v7; // rdx
  __int64 v8; // r9
  unsigned __int64 v9; // r10
  __int64 v10; // rax
  __int64 v11; // rax
  _OWORD *v12; // r8
  __int64 v13; // rdi
  _OWORD *v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-38h]
  __int64 v19; // [rsp+30h] [rbp-30h]
  char v20[16]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<VertexXYW_ColorDW_UV2_AAFixup,40,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    a3);
  v6 = *a1;
  v19 = 0LL;
  v7 = (_OWORD *)a1[1];
  v18 = a3;
  v8 = ((__int64)v7 - v6) >> 6;
  v21 = 0LL;
  v9 = v8 - a2;
  v17 = v6 + (v8 << 6);
  if ( a3 && (!(v6 + (v8 << 6)) || a3 < 0) )
    goto LABEL_10;
  v21 = a3;
  v10 = v8 - a2;
  if ( a3 < v9 )
    v10 = a3;
  v11 = v10 << 6;
  v12 = (_OWORD *)((char *)v7 - v11);
  v19 = a3;
  if ( v7 != (_OWORD *)((char *)v7 - v11) )
  {
    v15 = (_OWORD *)(v17 + (a3 << 6));
    v16 = v19;
    do
    {
      v7 -= 4;
      if ( !v17 )
        goto LABEL_10;
      if ( !v16 )
        goto LABEL_10;
      --v16;
      v15 -= 4;
      if ( v16 >= v18 )
        goto LABEL_10;
      *v15 = *v7;
      v15[1] = v7[1];
      v15[2] = v7[2];
      v15[3] = v7[3];
    }
    while ( v7 != v12 );
  }
  if ( v9 > a3 )
  {
    if ( !v8 || v6 && v8 >= 0 )
    {
      v13 = a2 << 6;
      v18 = v8;
      v19 = v8;
      v17 = v6;
      ((void (__fastcall *)(char *, __int64, __int64, __int64 *))std::move_backward<std::move_iterator<VertexXYW_ColorDW_UV2_AAFixup *>,stdext::checked_array_iterator<VertexXYW_ColorDW_UV2_AAFixup *>>)(
        v20,
        v13 + v6,
        v6 + ((v8 - a3) << 6),
        &v17);
      goto LABEL_9;
    }
LABEL_10:
    _invalid_parameter_noinfo_noreturn();
  }
  v13 = a2 << 6;
LABEL_9:
  a1[1] += a3 << 6;
  return v13 + v6;
}
