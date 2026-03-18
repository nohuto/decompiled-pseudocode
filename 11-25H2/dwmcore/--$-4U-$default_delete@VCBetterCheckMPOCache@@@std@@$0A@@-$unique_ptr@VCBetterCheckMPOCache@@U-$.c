/*
 * XREFs of ??$?4U?$default_delete@VCBetterCheckMPOCache@@@std@@$0A@@?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802C16A4
 * Callers:
 *     std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CBetterCheckMPOCache_std::default_delete_CBetterCheckMPOCache___________lambda_fe304b6b2b6f0e67e1f1dd6983e4971f___ @ 0x1802C1DAC (std--remove_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_std--unique_ptr_CBetter.c)
 *     ?erase@?$vector@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1802C49E0 (-erase@-$vector@V-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCheckMPOCache@@@s.c)
 * Callees:
 *     ??R?$default_delete@VCBetterCheckMPOCache@@@std@@QEBAXPEAVCBetterCheckMPOCache@@@Z @ 0x1802C235C (--R-$default_delete@VCBetterCheckMPOCache@@@std@@QEBAXPEAVCBetterCheckMPOCache@@@Z.c)
 */

__int64 *__fastcall std::unique_ptr<CBetterCheckMPOCache>::operator=<std::default_delete<CBetterCheckMPOCache>,0>(
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
    std::default_delete<CBetterCheckMPOCache>::operator()();
  return a1;
}
