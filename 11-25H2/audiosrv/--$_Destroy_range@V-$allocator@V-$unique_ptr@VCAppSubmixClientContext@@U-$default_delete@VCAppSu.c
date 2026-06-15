/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@0@@Z @ 0x1800B04B0
 * Callers:
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@?$vector@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800B0630 (--$_Emplace_reallocate@V-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSubmixClie.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@@0@@Z @ 0x1800B07D4 (--$_Uninitialized_move@PEAV-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSubmixC.c)
 *     ??1CProcessSubmixManager@@UEAA@XZ @ 0x1800B0CD8 (--1CProcessSubmixManager@@UEAA@XZ.c)
 *     ?DeleteAppSubmixClient@CProcessSubmixManager@@UEAAXPEAPEAVCAppSubmixClient@@@Z @ 0x1800B0EF0 (-DeleteAppSubmixClient@CProcessSubmixManager@@UEAAXPEAPEAVCAppSubmixClient@@@Z.c)
 *     _std::vector_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext____std::allocator_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext_______::_Emplace_reallocate_std::unique_ptr_CAppSubmixClientContext_std::default_delete_CAppSubmixClientContext______::_1_::catch$0 @ 0x180163CAC (_std--vector_std--unique_ptr_CAppSubmixClientContext_std--default_delete_CAppSubmixClientContext.c)
 * Callees:
 *     ??1?$unique_ptr@VCAppSubmixClientContext@@U?$default_delete@VCAppSubmixClientContext@@@std@@@std@@QEAA@XZ @ 0x1800B0C88 (--1-$unique_ptr@VCAppSubmixClientContext@@U-$default_delete@VCAppSubmixClientContext@@@std@@@std.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<std::unique_ptr<CAppSubmixClientContext>>>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      result = std::unique_ptr<CAppSubmixClientContext>::~unique_ptr<CAppSubmixClientContext>(v3);
      v3 += 8LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
