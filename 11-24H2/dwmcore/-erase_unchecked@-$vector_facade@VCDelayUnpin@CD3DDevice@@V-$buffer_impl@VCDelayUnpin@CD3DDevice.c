/*
 * XREFs of ?erase_unchecked@?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAA?AV?$basic_iterator@VCDelayUnpin@CD3DDevice@@@2@V?$basic_iterator@$$CBVCDelayUnpin@CD3DDevice@@@2@0@Z @ 0x1802450C0
 * Callers:
 *     ?erase@?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@VCDelayUnpin@CD3DDevice@@@2@V?$basic_iterator@$$CBVCDelayUnpin@CD3DDevice@@@2@@Z @ 0x180245088 (-erase@-$vector_facade@VCDelayUnpin@CD3DDevice@@V-$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vl.c)
 * Callees:
 *     ?clear_region@?$vector_facade@VCDelayUnpin@CD3DDevice@@V?$buffer_impl@VCDelayUnpin@CD3DDevice@@$06$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180245134 (-clear_region@-$vector_facade@VCDelayUnpin@CD3DDevice@@V-$buffer_impl@VCDelayUnpin@CD3DDevice@@$.c)
 */

_QWORD *__fastcall detail::vector_facade<CD3DDevice::CDelayUnpin,detail::buffer_impl<CD3DDevice::CDelayUnpin,7,1,detail::liberal_expansion_policy>>::erase_unchecked(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  unsigned __int64 v5; // rbx
  _QWORD *result; // rax

  v5 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*a3 - *a1) >> 3);
  detail::vector_facade<CD3DDevice::CDelayUnpin,detail::buffer_impl<CD3DDevice::CDelayUnpin,7,1,detail::liberal_expansion_policy>>::clear_region(
    a1,
    v5,
    0xAAAAAAAAAAAAAAABuLL * ((__int64)(*a4 - *a3) >> 3));
  result = a2;
  *a2 = *a1 + 24 * v5;
  return result;
}
