/*
 * XREFs of ??1?$list@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18023363C
 * Callers:
 *     _std::unordered_map_unsigned___int64_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_std::pair_unsigned___int64_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_________::unordered_map_unsigned___int64_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_std::pair_unsigned___int64_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short__________::_1_::dtor$1 @ 0x1806D08DD (_std--unordered_map_unsigned___int64_std--basic_string_unsigned_short_std--char_traits_unsigned_.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800C3EB0 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$basic_string@GU-$char_traits@G@std.c)
 */

void __fastcall std::list<std::pair<unsigned __int64 const,std::wstring>>::~list<std::pair<unsigned __int64 const,std::wstring>>(
        __int64 *a1)
{
  std::_List_node<std::pair<unsigned __int64 const,std::wstring>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::wstring>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((void *)*a1, (const struct std::nothrow_t *)0x38);
}
