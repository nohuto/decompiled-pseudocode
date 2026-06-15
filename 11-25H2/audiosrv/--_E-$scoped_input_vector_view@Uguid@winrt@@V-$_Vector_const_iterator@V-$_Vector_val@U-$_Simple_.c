/*
 * XREFs of ??_E?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@UEAAPEAXI@Z @ 0x1800E0610
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800DF8F0 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 */

volatile signed __int32 *__fastcall winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>::`vector deleting destructor'(
        volatile signed __int32 *a1,
        char a2)
{
  _InterlockedDecrement(a1 + 2);
  winrt::impl::atomic_ref_count::operator--(&`winrt::get_module_lock'::`2'::s_lock);
  if ( (a2 & 1) != 0 )
    operator delete((void *)a1, (const struct std::nothrow_t *)0x38);
  return a1;
}
