/*
 * XREFs of ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18001F754
 * Callers:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCStreamClassPolicyGains@@U?$default_delete@VCStreamClassPolicyGains@@@std@@@2@@std@@@std@@@std@@@2@@Z @ 0x180003534 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180004DE0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x18000A450 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180018E78 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@std@@@std@@YAPEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@AEAV?$allocator@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCDuckingNotification@@$0A@@@@0@AEA_K@Z @ 0x18002B650 (--$_Allocate_at_least_helper@V-$allocator@ULockedListEntry@-$CLockedList_UniqueValuesOnly@VCDuck.c)
 *     ??$_Construct@$01PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x18002B87C (--$_Construct@$01PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x18002BAFC (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@K@std@@@std@@YAPEAKAEAV?$allocator@K@0@AEA_K@Z @ 0x18002FD94 (--$_Allocate_at_least_helper@V-$allocator@K@std@@@std@@YAPEAKAEAV-$allocator@K@0@AEA_K@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180048B94 (_CxxThrowException_0.c)
 */

void __noreturn std::_Throw_bad_array_new_length(void)
{
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  pExceptionObject[2] = 0LL;
  pExceptionObject[1] = "bad array new length";
  pExceptionObject[0] = &std::bad_alloc::`vftable';
  throw (std::bad_array_new_length *)pExceptionObject;
}
