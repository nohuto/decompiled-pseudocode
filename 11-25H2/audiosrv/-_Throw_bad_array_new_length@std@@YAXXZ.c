/*
 * XREFs of ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009F330
 * Callers:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180021374 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@std@@@2@@Z @ 0x1800218BC (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1800218BC.c)
 *     ??$_Get_size_of_n@$01@std@@YA_K_K@Z @ 0x180061AE0 (--$_Get_size_of_n@$01@std@@YA_K_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x18006A6DC (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18007F5E8 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x18009F300 (--$_Get_size_of_n@$0CI@@std@@YA_K_K@Z.c)
 *     ??$_Get_size_of_n@$0BE@@std@@YA_K_K@Z @ 0x1800A3A80 (--$_Get_size_of_n@$0BE@@std@@YA_K_K@Z.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x1800A5C0C (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1800A5F88 (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Get_size_of_n@$0DA@@std@@YA_K_K@Z @ 0x1800C7DF0 (--$_Get_size_of_n@$0DA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate_at_least_helper@V?$allocator@V?$function@$$A6AX_N@Z@std@@@std@@@std@@YAPEAV?$function@$$A6AX_N@Z@0@AEAV?$allocator@V?$function@$$A6AX_N@Z@std@@@0@AEA_K@Z @ 0x1800D2CF4 (--$_Allocate_at_least_helper@V-$allocator@V-$function@$$A6AX_N@Z@std@@@std@@@std@@YAPEAV-$functi.c)
 *     ??$_Get_size_of_n@$03@std@@YA_K_K@Z @ 0x180126EA4 (--$_Get_size_of_n@$03@std@@YA_K_K@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18015E870 (_CxxThrowException_0.c)
 */

void __noreturn std::_Throw_bad_array_new_length(void)
{
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  pExceptionObject[2] = 0LL;
  pExceptionObject[1] = "bad array new length";
  pExceptionObject[0] = &std::bad_alloc::`vftable';
  throw (std::bad_array_new_length *)pExceptionObject;
}
