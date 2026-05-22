/*
 * XREFs of ??1?$list@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@V?$allocator@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18006F8F0
 * Callers:
 *     _std::unordered_map_IInputTarget___std::unordered_set_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_unsigned_long____std::hash_IInputTarget____std::equal_to_IInputTarget____std::allocator_std::pair_IInputTarget___const_std::unordered_set_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_unsigned_long_________::unordered_map_IInputTarget___std::unordered_set_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_unsigned_long____std::hash_IInputTarget____std::equal_to_IInputTarget____std::allocator_std::pair_IInputTarget___const_std::unordered_set_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long__std::allocator_unsigned_long__________::_1_::dtor$1 @ 0x1801D0854 (_std--unordered_map_IInputTarget___std--unordered_set_unsigned_long_std--hash_unsig_ea_1801D0854.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@QEAUIInputTarget@@V?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18009B8C0 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@QEAUIInputTarget@@V-$unordered_set@KU-$hash@K@st.c)
 */

void __fastcall std::list<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>>::~list<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>>(
        void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rdx
  _QWORD *v4; // rbx

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_List_node<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<IInputTarget * const,std::unordered_set<unsigned long>>,void *>>>();
      v3 = v4;
    }
    while ( v4 );
  }
  operator delete(*a1, (const struct std::nothrow_t *)0x58);
}
