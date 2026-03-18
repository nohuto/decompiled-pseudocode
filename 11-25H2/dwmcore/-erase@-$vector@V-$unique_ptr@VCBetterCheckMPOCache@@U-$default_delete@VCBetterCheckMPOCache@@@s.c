/*
 * XREFs of ?erase@?$vector@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@2@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@std@@@std@@@2@0@Z @ 0x1802C49E0
 * Callers:
 *     ?RemoveStaleCheckMPOCaches@CD3DDevice@@AEAAXXZ @ 0x1802460F8 (-RemoveStaleCheckMPOCaches@CD3DDevice@@AEAAXXZ.c)
 * Callees:
 *     ??$?4U?$default_delete@VCBetterCheckMPOCache@@@std@@$0A@@?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802C16A4 (--$-4U-$default_delete@VCBetterCheckMPOCache@@@std@@$0A@@-$unique_ptr@VCBetterCheckMPOCache@@U-$.c)
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@0@@Z @ 0x1802C1858 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCh.c)
 */

__int64 **__fastcall std::vector<std::unique_ptr<CBetterCheckMPOCache>>::erase(
        __int64 a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v4; // rsi
  __int64 *v8; // r15
  __int64 *v9; // rdi
  __int64 **result; // rax

  v4 = a4;
  if ( a3 != a4 )
  {
    v8 = *(__int64 **)(a1 + 8);
    v9 = a3;
    if ( a4 != v8 )
    {
      do
        std::unique_ptr<CBetterCheckMPOCache>::operator=<std::default_delete<CBetterCheckMPOCache>,0>(v9++, v4++);
      while ( v4 != v8 );
    }
    std::_Destroy_range<std::allocator<std::unique_ptr<CBetterCheckMPOCache>>>((__int64)v9, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 8) = v9;
  }
  result = a2;
  *a2 = a3;
  return result;
}
