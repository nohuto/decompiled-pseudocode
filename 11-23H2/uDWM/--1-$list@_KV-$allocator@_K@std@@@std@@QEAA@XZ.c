/*
 * XREFs of ??1?$list@_KV?$allocator@_K@std@@@std@@QEAA@XZ @ 0x1800F0F4C
 * Callers:
 *     _std::_Hash_std::_Uset_traits_unsigned___int64_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_unsigned___int64__0___::_Hash_std::_Uset_traits_unsigned___int64_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_unsigned___int64__0____::_1_::dtor$0 @ 0x1800F06D8 (_std--_Hash_std--_Uset_traits_unsigned___int64_std--_Uhash_compare_unsigned___int64_std--hash_un.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001F154 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

__int64 __fastcall std::list<unsigned __int64>::~list<unsigned __int64>(void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v3, 0x18uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  return std::_Deallocate<16,0>(*a1, 0x18uLL);
}
