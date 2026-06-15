/*
 * XREFs of ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x18013AC78
 * Callers:
 *     ??$_Lookup_equiv@GV?$regex_traits@G@std@@@std@@YA_NGPEBU?$_Sequence@G@0@AEBV?$regex_traits@G@0@@Z @ 0x18012EF34 (--$_Lookup_equiv@GV-$regex_traits@G@std@@@std@@YA_NGPEBU-$_Sequence@G@0@AEBV-$regex_traits@G@0@@.c)
 *     ??$_Copy_unchecked@PEBGPEBGV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@YA?AV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@PEBG0V10@@Z @ 0x180142A04 (--$_Copy_unchecked@PEBGPEBGV-$back_insert_iterator@V-$basic_string@GU-$char_traits@G@std@@V-$all.c)
 *     ??$_Format_default@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@PEBGV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YA?AV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEBV?$match_results@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@@0@V10@PEBG2W4match_flag_type@regex_constants@0@@Z @ 0x180142C60 (--$_Format_default@PEBGV-$allocator@V-$sub_match@PEBG@std@@@std@@PEBGV-$back_insert_iterator@V-$.c)
 *     ??$_Format_sed@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@PEBGV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@YA?AV?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@0@AEBV?$match_results@PEBGV?$allocator@V?$sub_match@PEBG@std@@@std@@@0@V10@PEBG2W4match_flag_type@regex_constants@0@@Z @ 0x180142E90 (--$_Format_sed@PEBGV-$allocator@V-$sub_match@PEBG@std@@@std@@PEBGV-$back_insert_iterator@V-$basi.c)
 *     ??4?$back_insert_iterator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAAAEAV01@$$QEAG@Z @ 0x180144584 (--4-$back_insert_iterator@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QE.c)
 *     ??$getline@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@YAAEAV?$basic_istream@GU?$char_traits@G@std@@@0@$$QEAV10@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@G@Z @ 0x18015FBCC (--$getline@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@YAAEAV-$basic_istream@GU-$char_traits@G.c)
 * Callees:
 *     ?_Myptr@?$_String_val@U?$_Simple_types@G@std@@@std@@QEAAPEAGXZ @ 0x1800620CC (-_Myptr@-$_String_val@U-$_Simple_types@G@std@@@std@@QEAAPEAGXZ.c)
 */

const void **__fastcall std::wstring::push_back(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  const void **result; // rax
  __int16 v4; // dx
  __int64 v5; // r8

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 >= *(_QWORD *)(a1 + 24) )
    return std::wstring::_Reallocate_grow_by<_lambda_3fdb14453883e86a37ebade6a7a0ebb0_,unsigned short>(
             (const void **)a1,
             a2,
             v2,
             a2);
  *(_QWORD *)(a1 + 16) = v2 + 1;
  result = (const void **)std::_String_val<std::_Simple_types<unsigned short>>::_Myptr(a1, a2);
  *((_WORD *)result + v5) = v4;
  *((_WORD *)result + v5 + 1) = 0;
  return result;
}
