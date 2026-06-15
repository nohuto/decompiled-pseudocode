/*
 * XREFs of ?_Xlen@?$vector@_NV?$allocator@_N@std@@@std@@SAXXZ @ 0x18013A928
 * Callers:
 *     ?_Insert_x@?$vector@_NV?$allocator@_N@std@@@std@@QEAA_KV?$_Vb_const_iterator@U?$_Wrap_alloc@V?$allocator@I@std@@@std@@@2@_K@Z @ 0x18013A098 (-_Insert_x@-$vector@_NV-$allocator@_N@std@@@std@@QEAA_KV-$_Vb_const_iterator@U-$_Wrap_alloc@V-$a.c)
 *     ?_Trim@?$vector@_NV?$allocator@_N@std@@@std@@QEAAX_K@Z @ 0x18013A8BC (-_Trim@-$vector@_NV-$allocator@_N@std@@@std@@QEAAX_K@Z.c)
 * Callees:
 *     <none>
 */

void __noreturn std::vector<bool>::_Xlen()
{
  std::_Xlength_error("vector<bool> too long");
}
