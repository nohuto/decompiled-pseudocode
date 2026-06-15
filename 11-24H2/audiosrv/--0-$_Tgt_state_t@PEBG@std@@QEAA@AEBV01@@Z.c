/*
 * XREFs of ??0?$_Tgt_state_t@PEBG@std@@QEAA@AEBV01@@Z @ 0x18013033C
 * Callers:
 *     ?_Do_if@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_if@2@@Z @ 0x180139B48 (-_Do_if@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_if@2@@Z.c)
 *     ?_Do_rep0@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_rep@2@_N@Z @ 0x180139C60 (-_Do_rep0@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_rep@2@_N@Z.c)
 *     ?_Do_rep@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_rep@2@_NH@Z @ 0x180139DE8 (-_Do_rep@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_rep@2@_NH@Z.c)
 * Callees:
 *     ??0?$_Bt_state_t@PEBG@std@@QEAA@AEBV01@@Z @ 0x1801301E0 (--0-$_Bt_state_t@PEBG@std@@QEAA@AEBV01@@Z.c)
 *     ??0?$vector@U_Grp_t@?$_Tgt_state_t@PEBG@std@@V?$allocator@U_Grp_t@?$_Tgt_state_t@PEBG@std@@@3@@std@@QEAA@AEBV01@@Z @ 0x180130424 (--0-$vector@U_Grp_t@-$_Tgt_state_t@PEBG@std@@V-$allocator@U_Grp_t@-$_Tgt_state_t@PEBG@std@@@3@@s.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_Tgt_state_t<unsigned short const *>::_Tgt_state_t<unsigned short const *>(
        _QWORD *a1,
        _QWORD *a2)
{
  std::_Bt_state_t<unsigned short const *>::_Bt_state_t<unsigned short const *>(a1, a2);
  std::vector<std::_Tgt_state_t<unsigned short const *>::_Grp_t,std::allocator<std::_Tgt_state_t<unsigned short const *>::_Grp_t>>::vector<std::_Tgt_state_t<unsigned short const *>::_Grp_t,std::allocator<std::_Tgt_state_t<unsigned short const *>::_Grp_t>>(
    a1 + 5,
    a2 + 5);
  return a1;
}
