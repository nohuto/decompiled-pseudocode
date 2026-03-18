/*
 * XREFs of ?erase@?$vector_facade@PEAVCVisualTree@@V?$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCVisualTree@@@2@V?$basic_iterator@QEAVCVisualTree@@@2@0@Z @ 0x18025CA38
 * Callers:
 *     ?CleanTrees@CComposition@@IEAAJXZ @ 0x18003C140 (-CleanTrees@CComposition@@IEAAJXZ.c)
 * Callees:
 *     ?erase_unchecked@?$vector_facade@PEAVCVisualTree@@V?$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@PEAVCVisualTree@@@2@V?$basic_iterator@QEAVCVisualTree@@@2@0@Z @ 0x18008CE1C (-erase_unchecked@-$vector_facade@PEAVCVisualTree@@V-$buffer_impl@PEAVCVisualTree@@$0BA@$00Vliber.c)
 */

_QWORD *__fastcall detail::vector_facade<CVisualTree *,detail::buffer_impl<CVisualTree *,16,1,detail::liberal_expansion_policy>>::erase(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v6 = *a4;
  v7 = *a3;
  detail::vector_facade<CVisualTree *,detail::buffer_impl<CVisualTree *,16,1,detail::liberal_expansion_policy>>::erase_unchecked(
    a1,
    a2,
    &v7,
    &v6);
  return a2;
}
