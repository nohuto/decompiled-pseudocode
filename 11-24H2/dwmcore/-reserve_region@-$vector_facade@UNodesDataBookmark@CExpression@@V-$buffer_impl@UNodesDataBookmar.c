/*
 * XREFs of ?reserve_region@?$vector_facade@UNodesDataBookmark@CExpression@@V?$buffer_impl@UNodesDataBookmark@CExpression@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUNodesDataBookmark@CExpression@@_K0@Z @ 0x18029BB10
 * Callers:
 *     ??$emplace_back@II@?$vector_facade@UNodesDataBookmark@CExpression@@V?$buffer_impl@UNodesDataBookmark@CExpression@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXII@Z @ 0x18029A3EC (--$emplace_back@II@-$vector_facade@UNodesDataBookmark@CExpression@@V-$buffer_impl@UNodesDataBook.c)
 * Callees:
 *     ??$move_backward@V?$move_iterator@PEAUNodesDataBookmark@CExpression@@@std@@V?$checked_array_iterator@PEAUNodesDataBookmark@CExpression@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUNodesDataBookmark@CExpression@@@stdext@@V?$move_iterator@PEAUNodesDataBookmark@CExpression@@@0@0V12@@Z @ 0x18029A4B4 (--$move_backward@V-$move_iterator@PEAUNodesDataBookmark@CExpression@@@std@@V-$checked_array_iter.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UNodesDataBookmark@CExpression@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x18029B9F4 (-ensure_extra_capacity@-$buffer_impl@UNodesDataBookmark@CExpression@@$0BA@$00Vliberal_expansion_.c)
 */

char *__fastcall detail::vector_facade<CExpression::NodesDataBookmark,detail::buffer_impl<CExpression::NodesDataBookmark,16,1,detail::liberal_expansion_policy>>::reserve_region(
        const void **a1,
        __int64 a2)
{
  char *v4; // rbx
  char *v5; // r9
  __int64 v6; // r8
  unsigned __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // rax
  char *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rsi
  char *v14; // [rsp+20h] [rbp-60h]
  __int128 v15; // [rsp+20h] [rbp-60h]
  __int128 v16; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+50h] [rbp-30h]
  char v18[32]; // [rsp+60h] [rbp-20h] BYREF

  detail::buffer_impl<CExpression::NodesDataBookmark,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1uLL);
  v4 = (char *)*a1;
  v5 = (char *)a1[1];
  v6 = (v5 - (_BYTE *)*a1) >> 3;
  v17 = 0LL;
  v7 = v6 - a2;
  v14 = &v4[8 * v6];
  if ( !v14 )
    goto LABEL_15;
  v17 = 1LL;
  v8 = v6 - a2;
  if ( v7 > 1 )
    v8 = 1LL;
  v9 = 8 * v8;
  v10 = &v5[-v9];
  if ( v5 != &v5[-v9] )
  {
    v11 = 1LL;
    v12 = 1LL;
    while ( 1 )
    {
      v5 -= 8;
      if ( !v11 )
        break;
      v11 = v12 - 1;
      v12 = v11;
      if ( v11 )
        break;
      *(_QWORD *)v14 = *(_QWORD *)v5;
      if ( v5 == v10 )
        goto LABEL_9;
    }
LABEL_15:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_9:
  if ( v7 > 1 )
  {
    *(_QWORD *)&v15 = v4;
    *((_QWORD *)&v15 + 1) = v6;
    if ( v6 && (!v4 || v6 < 0) )
      goto LABEL_15;
    v16 = v15;
    v17 = v6;
    std::move_backward<std::move_iterator<CExpression::NodesDataBookmark *>,stdext::checked_array_iterator<CExpression::NodesDataBookmark *>>(
      (__int64)v18,
      &v4[8 * a2],
      (__int64)&v4[8 * v6 - 8],
      &v16);
  }
  a1[1] = (char *)a1[1] + 8;
  return &v4[8 * a2];
}
