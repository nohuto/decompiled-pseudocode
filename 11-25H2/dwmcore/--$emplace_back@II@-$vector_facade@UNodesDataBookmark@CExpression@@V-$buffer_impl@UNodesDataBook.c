/*
 * XREFs of ??$emplace_back@II@?$vector_facade@UNodesDataBookmark@CExpression@@V?$buffer_impl@UNodesDataBookmark@CExpression@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXII@Z @ 0x1802A41AC
 * Callers:
 *     ?ValidateNodes@CExpression@@AEAAJIPEBEPEAI@Z @ 0x1802A521C (-ValidateNodes@CExpression@@AEAAJIPEBEPEAI@Z.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@UNodesDataBookmark@CExpression@@V?$buffer_impl@UNodesDataBookmark@CExpression@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUNodesDataBookmark@CExpression@@_K0@Z @ 0x1802A58D0 (-reserve_region@-$vector_facade@UNodesDataBookmark@CExpression@@V-$buffer_impl@UNodesDataBookmar.c)
 */

_DWORD *__fastcall detail::vector_facade<CExpression::NodesDataBookmark,detail::buffer_impl<CExpression::NodesDataBookmark,16,1,detail::liberal_expansion_policy>>::emplace_back<unsigned int,unsigned int>(
        _QWORD *a1,
        int a2,
        int a3)
{
  _DWORD *result; // rax

  result = (_DWORD *)detail::vector_facade<CExpression::NodesDataBookmark,detail::buffer_impl<CExpression::NodesDataBookmark,16,1,detail::liberal_expansion_policy>>::reserve_region(
                       a1,
                       (__int64)(a1[1] - *a1) >> 3);
  *result = a2;
  result[1] = a3;
  return result;
}
