/*
 * XREFs of ?erase_unchecked@?$vector_facade@PEAVCVisualTree@@V?$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVCVisualTree@@@2@V?$basic_iterator@QEAVCVisualTree@@@2@0@Z @ 0x1801ABDD4
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x180098020 (-CleanTrees@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?clear_region@?$vector_facade@PEAVCVisualTree@@V?$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801AC2E8 (-clear_region@-$vector_facade@PEAVCVisualTree@@V-$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_.c)
 */

_QWORD *__fastcall detail::vector_facade<CVisualTree *,detail::buffer_impl<CVisualTree *,16,1,detail::liberal_expansion_policy>>::erase_unchecked(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // rbx

  v4 = (__int64)(*a3 - *a1) >> 3;
  detail::vector_facade<CVisualTree *,detail::buffer_impl<CVisualTree *,16,1,detail::liberal_expansion_policy>>::clear_region(
    a1,
    v4);
  *a2 = *a1 + 8 * v4;
  return a2;
}
