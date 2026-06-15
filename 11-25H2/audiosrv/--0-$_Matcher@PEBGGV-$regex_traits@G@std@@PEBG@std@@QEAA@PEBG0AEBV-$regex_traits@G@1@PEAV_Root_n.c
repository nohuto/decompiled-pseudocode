/*
 * XREFs of ??0?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAA@PEBG0AEBV?$regex_traits@G@1@PEAV_Root_node@1@IW4syntax_option_type@regex_constants@1@W4match_flag_type@51@@Z @ 0x18012816C
 * Callers:
 *     ??$regex_match@GV?$regex_traits@G@std@@@std@@YA_NPEBGAEBV?$basic_regex@GV?$regex_traits@G@std@@@0@W4match_flag_type@regex_constants@0@@Z @ 0x180127C9C (--$regex_match@GV-$regex_traits@G@std@@@std@@YA_NPEBGAEBV-$basic_regex@GV-$regex_traits@G@std@@@.c)
 *     ??$_Regex_search2@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@GV?$regex_traits@G@2@PEBG@std@@YA_NPEBG0PEAV?$match_results@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@@0@AEBV?$basic_regex@GV?$regex_traits@G@std@@@0@W4match_flag_type@regex_constants@0@0@Z @ 0x18013A820 (--$_Regex_search2@PEBGV-$allocator@V-$sub_match@PEBG@std@@@std@@GV-$regex_traits@G@2@PEBG@std@@Y.c)
 * Callees:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@U_Loop_vals_t@std@@V?$allocator@U_Loop_vals_t@std@@@2@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801276F4 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@U_Loop_vals_t@std@@V-$allocator@U_Loop_val.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@U_Loop_vals_t@std@@@std@@@std@@YAPEAU_Loop_vals_t@0@PEAU10@_KAEAV?$allocator@U_Loop_vals_t@std@@@0@@Z @ 0x180127998 (--$_Uninitialized_value_construct_n@V-$allocator@U_Loop_vals_t@std@@@std@@@std@@YAPEAU_Loop_vals.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7,
        int a8)
{
  bool v9; // cl
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rcx

  v9 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 160) = a3;
  *(_QWORD *)(a1 + 168) = a2;
  *(_QWORD *)(a1 + 176) = a5;
  *(_DWORD *)(a1 + 184) = a7;
  *(_DWORD *)(a1 + 188) = a8;
  *(_BYTE *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 196) = a6;
  if ( (*(_BYTE *)(a5 + 12) & 8) != 0 )
    v9 = (a8 & 0x10) == 0;
  *(_BYTE *)(a1 + 200) = v9;
  *(_QWORD *)(a1 + 208) = a4;
  v10 = *(unsigned int *)(a5 + 36);
  v11 = *(__int64 *)(a1 + 136) >> 4;
  if ( v10 >= v11 )
  {
    if ( v10 > v11 )
    {
      if ( v10 <= *(__int64 *)(a1 + 144) >> 4 )
        *(_QWORD *)(a1 + 136) = std::_Uninitialized_value_construct_n<std::allocator<std::_Loop_vals_t>>(
                                  *(char **)(a1 + 136),
                                  v10 - v11);
      else
        std::vector<std::_Loop_vals_t>::_Resize_reallocate<std::_Value_init_tag>(a1 + 128, v10);
    }
  }
  else
  {
    *(_QWORD *)(a1 + 136) = 16 * v10;
  }
  return a1;
}
