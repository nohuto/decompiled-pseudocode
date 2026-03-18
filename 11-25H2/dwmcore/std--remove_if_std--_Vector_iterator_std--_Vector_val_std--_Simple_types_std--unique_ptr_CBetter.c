/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CBetterCheckMPOCache_std::default_delete_CBetterCheckMPOCache___________lambda_fe304b6b2b6f0e67e1f1dd6983e4971f___ @ 0x1802C1DAC
 * Callers:
 *     ?RemoveStaleCheckMPOCaches@CD3DDevice@@AEAAXXZ @ 0x1802460F8 (-RemoveStaleCheckMPOCaches@CD3DDevice@@AEAAXXZ.c)
 * Callees:
 *     ??$?4U?$default_delete@VCBetterCheckMPOCache@@@std@@$0A@@?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802C16A4 (--$-4U-$default_delete@VCBetterCheckMPOCache@@@std@@$0A@@-$unique_ptr@VCBetterCheckMPOCache@@U-$.c)
 */

__int64 **__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::unique_ptr_CBetterCheckMPOCache_std::default_delete_CBetterCheckMPOCache___________lambda_fe304b6b2b6f0e67e1f1dd6983e4971f___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        __int64 a4)
{
  __int64 *i; // rsi
  __int64 *j; // r14
  __int64 **result; // rax

  for ( i = a2; i != a3; ++i )
  {
    if ( (unsigned __int64)(a4 - *(_QWORD *)(*i + 480)) > 0x1E )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 1; j != a3; ++j )
    {
      if ( (unsigned __int64)(a4 - *(_QWORD *)(*j + 480)) <= 0x1E )
        std::unique_ptr<CBetterCheckMPOCache>::operator=<std::default_delete<CBetterCheckMPOCache>,0>(i++, j);
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
