/*
 * XREFs of ??1?$list@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@V?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@2@@std@@QEAA@XZ @ 0x1800EE504
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned_long_InputInfoValidator___std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__InputInfoValidator______0___::_Hash_std::_Umap_traits_unsigned_long_InputInfoValidator___std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__InputInfoValidator______0____::_1_::dtor$0 @ 0x1801CC24F (_std--_Hash_std--_Umap_traits_unsigned_long_InputInfoValidator___std--_Uhash_compare_unsigned_lo.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<std::pair<unsigned long const,InputInfoValidator *>>::~list<std::pair<unsigned long const,InputInfoValidator *>>(
        char **a1)
{
  char **v1; // rdx
  char *v3; // rcx
  char *v4; // rbx

  v1 = (char **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = *(char **)v3;
      std::_Deallocate<16,0>(v3, (const struct std::nothrow_t *)0x20);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x20);
}
