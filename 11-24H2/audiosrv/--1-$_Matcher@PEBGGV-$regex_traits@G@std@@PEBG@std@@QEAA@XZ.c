/*
 * XREFs of ??1?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAA@XZ @ 0x1801305FC
 * Callers:
 *     ??$regex_match@GV?$regex_traits@G@std@@@std@@YA_NPEBGAEBV?$basic_regex@GV?$regex_traits@G@std@@@0@W4match_flag_type@regex_constants@0@@Z @ 0x18012FD5C (--$regex_match@GV-$regex_traits@G@std@@@std@@YA_NPEBGAEBV-$basic_regex@GV-$regex_traits@G@std@@@.c)
 *     ??$_Regex_search2@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@GV?$regex_traits@G@2@PEBG@std@@YA_NPEBG0PEAV?$match_results@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@@0@AEBV?$basic_regex@GV?$regex_traits@G@std@@@0@W4match_flag_type@regex_constants@0@0@Z @ 0x180143270 (--$_Regex_search2@PEBGV-$allocator@V-$sub_match@PEBG@std@@@std@@GV-$regex_traits@G@2@PEBG@std@@Y.c)
 *     _std::_Regex_search2_unsigned_short_const___std::allocator_std::sub_match_unsigned_short_const______unsigned_short_std::regex_traits_unsigned_short__unsigned_short_const____::_1_::dtor$0 @ 0x180171665 (_std--_Regex_search2_unsigned_short_const___std--allocator_std--sub_match_unsigned_short_const__.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$_Tgt_state_t@PEBG@std@@QEAA@XZ @ 0x180130658 (--1-$_Tgt_state_t@PEBG@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>::~_Matcher<unsigned short const *,unsigned short,std::regex_traits<unsigned short>,unsigned short const *>(
        _QWORD *a1)
{
  char *v2; // rcx

  v2 = (char *)a1[16];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)((a1[18] - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL));
    a1[16] = 0LL;
    a1[17] = 0LL;
    a1[18] = 0LL;
  }
  std::_Tgt_state_t<unsigned short const *>::~_Tgt_state_t<unsigned short const *>(a1 + 8);
  return std::_Tgt_state_t<unsigned short const *>::~_Tgt_state_t<unsigned short const *>(a1);
}
