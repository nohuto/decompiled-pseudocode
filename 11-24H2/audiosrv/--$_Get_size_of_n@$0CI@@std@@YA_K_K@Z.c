/*
 * XREFs of ??$_Get_size_of_n@$0CI@@std@@YA_K_K@Z @ 0x18009BBF0
 * Callers:
 *     _dynamic_initializer_for__s_validSettingsForSchema__ @ 0x180008A90 (_dynamic_initializer_for__s_validSettingsForSchema__.c)
 *     ??$_Emplace_reallocate@AEBV?$basic_regex@GV?$regex_traits@G@std@@@std@@@?$vector@V?$basic_regex@GV?$regex_traits@G@std@@@std@@V?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@2@@std@@AEAAPEAV?$basic_regex@GV?$regex_traits@G@std@@@1@QEAV21@AEBV21@@Z @ 0x180142A98 (--$_Emplace_reallocate@AEBV-$basic_regex@GV-$regex_traits@G@std@@@std@@@-$vector@V-$basic_regex@.c)
 *     ??$emplace@AEBU?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@?$_Hash@V?$_Umap_traits@U_GUID@@W4ValidEffectPackConfigurationSettings@@V?$_Uhash_compare@U_GUID@@U?$hash@U_GUID@@@std@@U?$equal_to@U_GUID@@@3@@std@@V?$allocator@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@1@@Z @ 0x180143520 (--$emplace@AEBU-$pair@$$CBU_GUID@@W4ValidEffectPackConfigurationSettings@@@std@@@-$_Hash@V-$_Uma.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18009BC20 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<40>(unsigned __int64 a1)
{
  if ( a1 > 0x666666666666666LL )
    std::_Throw_bad_array_new_length();
  return 40 * a1;
}
