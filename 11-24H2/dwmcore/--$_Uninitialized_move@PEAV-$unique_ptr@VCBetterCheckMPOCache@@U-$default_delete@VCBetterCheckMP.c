/*
 * XREFs of ??$_Uninitialized_move@PEAV?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@0@@Z @ 0x1802B8398
 * Callers:
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@?$vector@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1802B8250 (--$_Emplace_reallocate@V-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCheckMPOCa.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCBetterCheckMPOCache@@U?$default_delete@VCBetterCheckMPOCache@@@std@@@std@@@0@@Z @ 0x1802B8218 (--$_Destroy_range@V-$allocator@V-$unique_ptr@VCBetterCheckMPOCache@@U-$default_delete@VCBetterCh.c)
 */

_QWORD *__fastcall std::_Uninitialized_move<std::unique_ptr<CBetterCheckMPOCache> *,std::allocator<std::unique_ptr<CBetterCheckMPOCache>>>(
        __int64 *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v4; // r8

  while ( a1 != a2 )
  {
    v4 = *a1;
    *a1 = 0LL;
    *a3++ = v4;
    ++a1;
  }
  std::_Destroy_range<std::allocator<std::unique_ptr<CBetterCheckMPOCache>>>((__int64)a3, (__int64)a3);
  return a3;
}
