/*
 * XREFs of ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x140057D1C
 * Callers:
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x140016FB4 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x140018224 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x140048BB8 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x140057680 (--$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@Z @ 0x140066AE0 (--$_Reallocate_for@V_lambda_05cef1f6fdf474c9f3ed207deba0f73b_@@PEBG@-$basic_string@GU-$char_trai.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x14005A1E0 (_CxxThrowException_0.c)
 */

void __noreturn std::_Throw_bad_array_new_length(void)
{
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  pExceptionObject[2] = 0LL;
  pExceptionObject[1] = "bad array new length";
  pExceptionObject[0] = &std::bad_array_new_length::`vftable';
  throw (std::bad_array_new_length *)pExceptionObject;
}
