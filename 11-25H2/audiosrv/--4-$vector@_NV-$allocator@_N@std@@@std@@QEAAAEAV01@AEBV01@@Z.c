/*
 * XREFs of ??4?$vector@_NV?$allocator@_N@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18012895C
 * Callers:
 *     ??4?$_Tgt_state_t@PEBG@std@@QEAAAEAV01@AEBV01@@Z @ 0x18012888C (--4-$_Tgt_state_t@PEBG@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_Do_rep0@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_rep@2@_N@Z @ 0x180130B90 (-_Do_rep0@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_rep@2@_N@Z.c)
 *     ?_Match_pat@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x180131234 (-_Match_pat@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 * Callees:
 *     ??$_Assign_counted_range@PEAI@?$vector@IV?$allocator@I@std@@@std@@AEAAXPEAI_K@Z @ 0x180126538 (--$_Assign_counted_range@PEAI@-$vector@IV-$allocator@I@std@@@std@@AEAAXPEAI_K@Z.c)
 */

__int64 __fastcall std::vector<bool>::operator=(__int64 a1, __int64 a2)
{
  if ( a1 != a2 )
  {
    std::vector<unsigned int>::_Assign_counted_range<unsigned int *>(
      (char **)a1,
      *(char **)a2,
      (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2);
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  }
  return a1;
}
