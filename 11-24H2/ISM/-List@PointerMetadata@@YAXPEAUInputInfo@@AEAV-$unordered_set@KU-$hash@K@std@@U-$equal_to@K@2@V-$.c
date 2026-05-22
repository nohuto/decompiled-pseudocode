/*
 * XREFs of ?List@PointerMetadata@@YAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@@Z @ 0x180048190
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace@K@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@K@std@@@std@@@std@@_N@1@$$QEAK@Z @ 0x18002B674 (--$emplace@K@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-.c)
 *     ?clear@?$_Hash@V?$_Uset_traits@KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@K@2@$0A@@std@@@std@@QEAAXXZ @ 0x180048200 (-clear@-$_Hash@V-$_Uset_traits@KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$alloc.c)
 */

__int64 __fastcall PointerMetadata::List(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 i; // rbx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF
  int v7; // [rsp+40h] [rbp+8h] BYREF

  result = std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::clear(a2);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 316); i = (unsigned int)(i + 1) )
  {
    v7 = *(_DWORD *)(a1 + 144 * i + 324);
    result = std::_Hash<std::_Uset_traits<unsigned long,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<unsigned long>,0>>::emplace<unsigned long>(
               a2,
               (__int64)v6,
               &v7);
  }
  return result;
}
