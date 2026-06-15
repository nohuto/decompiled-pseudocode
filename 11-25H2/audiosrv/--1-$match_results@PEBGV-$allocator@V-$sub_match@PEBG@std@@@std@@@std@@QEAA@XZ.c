/*
 * XREFs of ??1?$match_results@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@@std@@QEAA@XZ @ 0x18013B798
 * Callers:
 *     _std::_Regex_replace1_std::back_insert_iterator_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______unsigned_short_const___std::regex_traits_unsigned_short__unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$0 @ 0x1801686DF (_std--_Regex_replace1_std--back_insert_iterator_std--basic_string_unsigned_short_std--char_trait.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180025844 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::match_results<unsigned short const *>::~match_results<unsigned short const *>(_QWORD *a1)
{
  char *v2; // rcx

  v2 = (char *)a1[2];
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (const struct std::nothrow_t *)(24 * ((a1[4] - (_QWORD)v2) / 24LL)));
    a1[2] = 0LL;
    a1[3] = 0LL;
    a1[4] = 0LL;
  }
}
