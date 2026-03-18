/*
 * XREFs of ?clear_region@?$vector_facade@UNodesDataBookmark@CExpression@@V?$buffer_impl@UNodesDataBookmark@CExpression@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x18029B924
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x1802383C0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ??1?$vector_facade@UNodesDataBookmark@CExpression@@V?$buffer_impl@UNodesDataBookmark@CExpression@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA@XZ @ 0x18029A538 (--1-$vector_facade@UNodesDataBookmark@CExpression@@V-$buffer_impl@UNodesDataBookmark@CExpression.c)
 *     ?ValidateNodes@CExpression@@AEAAJIPEBEPEAI@Z @ 0x18029B45C (-ValidateNodes@CExpression@@AEAAJIPEBEPEAI@Z.c)
 * Callees:
 *     ??$uninitialized_move@V?$move_iterator@PEAUNodesDataBookmark@CExpression@@@std@@V?$checked_array_iterator@PEAUNodesDataBookmark@CExpression@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUNodesDataBookmark@CExpression@@@stdext@@V?$move_iterator@PEAUNodesDataBookmark@CExpression@@@0@0V12@@Z @ 0x18029A424 (--$uninitialized_move@V-$move_iterator@PEAUNodesDataBookmark@CExpression@@@std@@V-$checked_array.c)
 */

void __fastcall detail::vector_facade<CExpression::NodesDataBookmark,detail::buffer_impl<CExpression::NodesDataBookmark,16,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r8
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  bool v8; // zf
  __int128 v9; // [rsp+20h] [rbp-68h]
  __int128 v10; // [rsp+40h] [rbp-48h] BYREF
  __int64 v11; // [rsp+50h] [rbp-38h]
  _BYTE v12[40]; // [rsp+60h] [rbp-28h] BYREF

  v4 = *a1;
  v6 = (a1[1] - *a1) >> 3;
  v7 = a2 + a3;
  v8 = a2 + a3 == v6;
  if ( a2 + a3 > v6 )
  {
    std::_Xoverflow_error("overflow");
    __debugbreak();
  }
  if ( !v8 )
  {
    *(_QWORD *)&v9 = v4;
    *((_QWORD *)&v9 + 1) = v6;
    if ( a2 && (!v4 || a2 < 0 || v6 < a2) )
      _invalid_parameter_noinfo_noreturn();
    v10 = v9;
    v11 = a2;
    std::uninitialized_move<std::move_iterator<CExpression::NodesDataBookmark *>,stdext::checked_array_iterator<CExpression::NodesDataBookmark *>>(
      (__int64)v12,
      (const void *)(v4 + 8 * v7),
      v4 + 8 * v6,
      &v10);
  }
  a1[1] += -8 * a3;
}
