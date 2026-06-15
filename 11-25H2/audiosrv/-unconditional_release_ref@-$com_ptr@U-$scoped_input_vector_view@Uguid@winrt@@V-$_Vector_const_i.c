/*
 * XREFs of ?unconditional_release_ref@?$com_ptr@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800E41D4
 * Callers:
 *     ??1iterator@?$iterable_base@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@Uguid@3@Uno_collection_version@23@@winrt@@UEAA@XZ @ 0x1800DF784 (--1iterator@-$iterable_base@U-$scoped_input_vector_view@Uguid@winrt@@V-$_Vector_const_iterator@V.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::com_ptr<winrt::impl::scoped_input_vector_view<winrt::guid,std::_Vector_const_iterator<std::_Vector_val<std::_Simple_types<winrt::guid>>>>>::unconditional_release_ref(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *v1; // r8
  __int64 result; // rax

  v1 = *a1;
  *a1 = 0LL;
  result = (unsigned int)_InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
  {
    *((_DWORD *)v1 + 2) = 1;
    if ( v1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 8LL))(v1, 1LL);
  }
  return result;
}
