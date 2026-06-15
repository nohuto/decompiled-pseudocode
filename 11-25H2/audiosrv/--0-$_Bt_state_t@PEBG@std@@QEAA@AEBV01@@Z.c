/*
 * XREFs of ??0?$_Bt_state_t@PEBG@std@@QEAA@AEBV01@@Z @ 0x180128120
 * Callers:
 *     ??0?$_Tgt_state_t@PEBG@std@@QEAA@AEBV01@@Z @ 0x18012827C (--0-$_Tgt_state_t@PEBG@std@@QEAA@AEBV01@@Z.c)
 *     ?_Match_pat@?$_Matcher@PEBGGV?$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z @ 0x180131234 (-_Match_pat@-$_Matcher@PEBGGV-$regex_traits@G@std@@PEBG@std@@AEAA_NPEAV_Node_base@2@@Z.c)
 * Callees:
 *     ??0?$vector@IV?$allocator@I@std@@@std@@QEAA@AEBV01@@Z @ 0x1801282BC (--0-$vector@IV-$allocator@I@std@@@std@@QEAA@AEBV01@@Z.c)
 */

_QWORD *__fastcall std::_Bt_state_t<unsigned short const *>::_Bt_state_t<unsigned short const *>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v2; // rbx

  v2 = a2 + 1;
  *a1 = *a2;
  std::vector<unsigned int>::vector<unsigned int>(a1 + 1, a2 + 1);
  a1[4] = v2[3];
  return a1;
}
