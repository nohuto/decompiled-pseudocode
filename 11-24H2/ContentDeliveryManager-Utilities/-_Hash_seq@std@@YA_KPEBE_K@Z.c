/*
 * XREFs of ?_Hash_seq@std@@YA_KPEBE_K@Z @ 0x180064224
 * Callers:
 *     ?_Hashval@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEBA_KAEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@2@@Z @ 0x180064268 (-_Hashval@-$_Hash@V-$_Uset_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@st.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::_Hash_seq(const unsigned __int8 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 i; // r8
  __int64 v4; // rax

  v2 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; v2 < a2; i = 0x100000001B3LL * (v4 ^ i) )
    v4 = a1[v2++];
  return i ^ HIDWORD(i);
}
