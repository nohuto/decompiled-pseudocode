/*
 * XREFs of ??$_Uninitialized_value_construct_n@V?$allocator@U_Loop_vals_t@std@@@std@@@std@@YAPEAU_Loop_vals_t@0@PEAU10@_KAEAV?$allocator@U_Loop_vals_t@std@@@0@@Z @ 0x18012F8A4
 * Callers:
 *     ??$_Match@V?$allocator@V?$sub_match@PEBG@std@@@std@@@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAA_NPEAV?$match_results@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@@1@_N@Z @ 0x18012F0E8 (--$_Match@V-$allocator@V-$sub_match@PEBG@std@@@std@@@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@U_Grp_t@?$_Tgt_state_t@PEBG@std@@V?$allocator@U_Grp_t@?$_Tgt_state_t@PEBG@std@@@3@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18012F548 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@U_Grp_t@-$_Tgt_state_t@PEBG@std@@V-$alloca.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@U_Loop_vals_t@std@@V?$allocator@U_Loop_vals_t@std@@@2@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18012F600 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@U_Loop_vals_t@std@@V-$allocator@U_Loop_val.c)
 *     ??0?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAA@PEBG0AEBV?$regex_traits@G@1@PEAV_Root_node@1@IW4syntax_option_type@regex_constants@1@W4match_flag_type@51@@Z @ 0x18013022C (--0-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@QEAA@PEBG0AEBV-$regex_traits@G@1@PEAV_Root_n.c)
 * Callees:
 *     memset_0 @ 0x1800A4EB4 (memset_0.c)
 */

char *__fastcall std::_Uninitialized_value_construct_n<std::allocator<std::_Loop_vals_t>>(char *a1, __int64 a2)
{
  char *v2; // rbx
  __int64 v3; // rdi

  v2 = a1;
  if ( a2 )
  {
    v3 = 16 * a2;
    memset_0(a1, 0, 16 * a2);
    v2 += v3;
  }
  return v2;
}
