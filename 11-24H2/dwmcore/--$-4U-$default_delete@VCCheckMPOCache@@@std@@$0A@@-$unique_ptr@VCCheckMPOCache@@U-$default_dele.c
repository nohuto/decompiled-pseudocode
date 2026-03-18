/*
 * XREFs of ??$?4U?$default_delete@VCCheckMPOCache@@@std@@$0A@@?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801DE8A0
 * Callers:
 *     ?erase@?$vector@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCCheckMPOCache@@U?$default_delete@VCCheckMPOCache@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1801DE7E8 (-erase@-$vector@V-$unique_ptr@VCCheckMPOCache@@U-$default_delete@VCCheckMPOCache@@@std@@@std@@V-.c)
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CCheckMPOCache_std::default_delete_CCheckMPOCache___________lambda_977d6bda85a50585b288e206ad017f41___ @ 0x1802B8810 (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--unique_ptr_CCheckM.c)
 * Callees:
 *     ??R?$default_delete@VCCheckMPOCache@@@std@@QEBAXPEAVCCheckMPOCache@@@Z @ 0x1801DE8D0 (--R-$default_delete@VCCheckMPOCache@@@std@@QEBAXPEAVCCheckMPOCache@@@Z.c)
 */

__int64 *__fastcall std::unique_ptr<CCheckMPOCache>::operator=<std::default_delete<CCheckMPOCache>,0>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // rdx

  v2 = *a2;
  *a2 = 0LL;
  v4 = *a1;
  *a1 = v2;
  if ( v4 )
    std::default_delete<CCheckMPOCache>::operator()();
  return a1;
}
