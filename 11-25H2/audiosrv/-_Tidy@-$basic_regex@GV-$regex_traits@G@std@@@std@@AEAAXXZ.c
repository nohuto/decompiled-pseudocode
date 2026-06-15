/*
 * XREFs of ?_Tidy@?$basic_regex@GV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x180140764
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$basic_regex@GV?$regex_traits@G@std@@@std@@V?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@2@@std@@YAPEAV?$basic_regex@GV?$regex_traits@G@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$basic_regex@GV?$regex_traits@G@std@@@std@@@0@@Z @ 0x18013A9E4 (--$_Uninitialized_move@PEAV-$basic_regex@GV-$regex_traits@G@std@@@std@@V-$allocator@V-$basic_reg.c)
 *     ??1?$basic_regex@GV?$regex_traits@G@std@@@std@@QEAA@XZ @ 0x18013B6F8 (--1-$basic_regex@GV-$regex_traits@G@std@@@std@@QEAA@XZ.c)
 *     ?_Reset@?$basic_regex@GV?$regex_traits@G@std@@@std@@AEAAXPEAV_Root_node@2@@Z @ 0x1801403C0 (-_Reset@-$basic_regex@GV-$regex_traits@G@std@@@std@@AEAAXPEAV_Root_node@2@@Z.c)
 * Callees:
 *     ?_Destroy_node@std@@YAXPEAV_Node_base@1@0@Z @ 0x18013F65C (-_Destroy_node@std@@YAXPEAV_Node_base@1@0@Z.c)
 */

void __fastcall std::basic_regex<unsigned short,std::regex_traits<unsigned short>>::_Tidy(struct std::_Node_base **a1)
{
  struct std::_Node_base *v2; // rcx

  v2 = *a1;
  if ( v2 && _InterlockedExchangeAdd((volatile signed __int32 *)v2 + 11, 0xFFFFFFFF) == 1 )
    std::_Destroy_node(*a1, 0LL);
  *a1 = 0LL;
}
