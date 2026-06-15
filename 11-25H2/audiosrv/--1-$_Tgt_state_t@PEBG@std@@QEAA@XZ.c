/*
 * XREFs of ??1?$_Tgt_state_t@PEBG@std@@QEAA@XZ @ 0x180128598
 * Callers:
 *     ??1?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@QEAA@XZ @ 0x18012853C (--1-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@QEAA@XZ.c)
 *     ?_Do_if@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_if@2@@Z @ 0x180130A78 (-_Do_if@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_if@2@@Z.c)
 *     ?_Do_rep0@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_rep@2@_N@Z @ 0x180130B90 (-_Do_rep0@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_rep@2@_N@Z.c)
 *     ?_Do_rep@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_rep@2@_NH@Z @ 0x180130D18 (-_Do_rep@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_rep@2@_NH@Z.c)
 *     _std::_Matcher_unsigned_short_const___unsigned_short_std::regex_traits_unsigned_short__unsigned_short_const___::_Matcher_unsigned_short_const___unsigned_short_std::regex_traits_unsigned_short__unsigned_short_const____::_1_::dtor$0 @ 0x18016811F (_std--_Matcher_unsigned_short_const___unsigned_short_std--regex_traits_unsigned_short__unsigned_.c)
 *     _std::_Matcher_unsigned_short_const___unsigned_short_std::regex_traits_unsigned_short__unsigned_short_const___::_Matcher_unsigned_short_const___unsigned_short_std::regex_traits_unsigned_short__unsigned_short_const____::_1_::dtor$1 @ 0x180168131 (_std--_Matcher_unsigned_short_const___unsigned_short_std--regex_traits_unsigned_sho_ea_180168131.c)
 *     _std::_Matcher_unsigned_short_const___unsigned_short_std::regex_traits_unsigned_short__unsigned_short_const___::_Do_rep0_::_1_::dtor$1 @ 0x1801683EF (_std--_Matcher_unsigned_short_const___unsigned_short_std--regex_traits_unsigned_sho_ea_1801683EF.c)
 *     _std::_Matcher_unsigned_short_const___unsigned_short_std::regex_traits_unsigned_short__unsigned_short_const___::_Do_rep0_::_1_::dtor$0 @ 0x180168401 (_std--_Matcher_unsigned_short_const___unsigned_short_std--regex_traits_unsigned_sho_ea_180168401.c)
 *     _std::_Matcher_unsigned_short_const___unsigned_short_std::regex_traits_unsigned_short__unsigned_short_const___::_Do_rep_::_1_::dtor$0 @ 0x180168413 (_std--_Matcher_unsigned_short_const___unsigned_short_std--regex_traits_unsigned_sho_ea_180168413.c)
 * Callees:
 *     ??1?$vector@U_Loop_vals_t@std@@V?$allocator@U_Loop_vals_t@std@@@2@@std@@QEAA@XZ @ 0x180087958 (--1-$vector@U_Loop_vals_t@std@@V-$allocator@U_Loop_vals_t@std@@@2@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::_Tgt_state_t<unsigned short const *>::~_Tgt_state_t<unsigned short const *>(__int64 a1)
{
  std::vector<std::_Loop_vals_t>::~vector<std::_Loop_vals_t>(a1 + 40);
  return std::vector<unsigned int>::_Tidy(a1 + 8);
}
