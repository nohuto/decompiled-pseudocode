/*
 * XREFs of ??4?$_Tgt_state_t@PEBG@std@@QEAAAEAV01@AEBV01@@Z @ 0x180130958
 * Callers:
 *     ?_Do_if@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_if@2@@Z @ 0x180139B48 (-_Do_if@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_if@2@@Z.c)
 *     ?_Do_rep0@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_rep@2@_N@Z @ 0x180139C60 (-_Do_rep0@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_rep@2@_N@Z.c)
 *     ?_Do_rep@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_rep@2@_NH@Z @ 0x180139DE8 (-_Do_rep@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_rep@2@_NH@Z.c)
 *     ?_Match_pat@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x18013A304 (-_Match_pat@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 * Callees:
 *     ??$_Assign_counted_range@PEAU_Grp_t@?$_Tgt_state_t@PEBG@std@@@?$vector@U_Grp_t@?$_Tgt_state_t@PEBG@std@@V?$allocator@U_Grp_t@?$_Tgt_state_t@PEBG@std@@@3@@std@@AEAAXPEAU_Grp_t@?$_Tgt_state_t@PEBG@1@_K@Z @ 0x18012E504 (--$_Assign_counted_range@PEAU_Grp_t@-$_Tgt_state_t@PEBG@std@@@-$vector@U_Grp_t@-$_Tgt_state_t@PE.c)
 *     ??4?$vector@_NV?$allocator@_N@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180130A28 (--4-$vector@_NV-$allocator@_N@std@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

__int64 __fastcall std::_Tgt_state_t<unsigned short const *>::operator=(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = *(_QWORD *)a2;
  std::vector<bool>::operator=(a1 + 8, a2 + 8);
  if ( a1 + 40 != a2 + 40 )
    std::vector<std::_Tgt_state_t<unsigned short const *>::_Grp_t,std::allocator<std::_Tgt_state_t<unsigned short const *>::_Grp_t>>::_Assign_counted_range<std::_Tgt_state_t<unsigned short const *>::_Grp_t *>(
      (void **)(a1 + 40),
      *(char **)(a2 + 40),
      (__int64)(*(_QWORD *)(a2 + 48) - *(_QWORD *)(a2 + 40)) >> 4);
  return a1;
}
