/*
 * XREFs of ?_Tidy@?$vector@IV?$allocator@I@std@@@std@@AEAAXXZ @ 0x18013A880
 * Callers:
 *     ??1?$_Bt_state_t@PEBG@std@@QEAA@XZ @ 0x180130598 (--1-$_Bt_state_t@PEBG@std@@QEAA@XZ.c)
 *     ??1?$_Tgt_state_t@PEBG@std@@QEAA@XZ @ 0x180130658 (--1-$_Tgt_state_t@PEBG@std@@QEAA@XZ.c)
 *     ??1?$_Tidy_guard@V?$vector@IV?$allocator@I@std@@@std@@@std@@QEAA@XZ @ 0x1801306A0 (--1-$_Tidy_guard@V-$vector@IV-$allocator@I@std@@@std@@@std@@QEAA@XZ.c)
 *     ??1?$_Vb_val@V?$allocator@_N@std@@@std@@QEAA@XZ @ 0x1801306E0 (--1-$_Vb_val@V-$allocator@_N@std@@@std@@QEAA@XZ.c)
 *     ?_Match_pat@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x18013A304 (-_Match_pat@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 *     ??$_Reset@PEBG@?$basic_regex@GV?$regex_traits@G@std@@@std@@AEAAXPEBG0W4syntax_option_type@regex_constants@1@@Z @ 0x1801433D8 (--$_Reset@PEBG@-$basic_regex@GV-$regex_traits@G@std@@@std@@AEAAXPEBG0W4syntax_option_type@regex_.c)
 *     ??1?$_Parser@PEBGGV?$regex_traits@G@std@@@std@@QEAA@XZ @ 0x18014418C (--1-$_Parser@PEBGGV-$regex_traits@G@std@@@std@@QEAA@XZ.c)
 *     _AtmosCheck::AtmosCheck_::_1_::dtor$8 @ 0x18016C1B1 (_AtmosCheck--AtmosCheck_--_1_--dtor$8.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180018614 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::vector<unsigned int>::_Tidy(__int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    std::_Deallocate<16,0>(
      v2,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFFCuLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
