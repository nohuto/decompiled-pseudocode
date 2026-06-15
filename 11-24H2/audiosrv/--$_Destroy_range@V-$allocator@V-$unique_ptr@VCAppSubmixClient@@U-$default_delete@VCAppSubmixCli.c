/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@std@@@std@@YAXPEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@0@QEAV10@AEAV?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@0@@Z @ 0x1800A25F4
 * Callers:
 *     ??1CAppSubmixClientContext@@QEAA@XZ @ 0x18006E53C (--1CAppSubmixClientContext@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@?$vector@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@2@@std@@AEAAPEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@1@QEAV21@$$QEAV21@@Z @ 0x1800ACED8 (--$_Emplace_reallocate@V-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSubmixClient@@@st.c)
 *     ??$_Uninitialized_move@PEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@V?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@2@@std@@YAPEAV?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@@0@@Z @ 0x1800AD168 (--$_Uninitialized_move@PEAV-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSubmixClient@@.c)
 *     ?DeleteAppSubmixClient@CProcessSubmixManager@@UEAAXPEAPEAVCAppSubmixClient@@@Z @ 0x1800ADB30 (-DeleteAppSubmixClient@CProcessSubmixManager@@UEAAXPEAPEAVCAppSubmixClient@@@Z.c)
 *     _std::vector_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient____std::allocator_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient_______::_Emplace_reallocate_std::unique_ptr_CAppSubmixClient_std::default_delete_CAppSubmixClient______::_1_::catch$0 @ 0x18016CFAB (_std--vector_std--unique_ptr_CAppSubmixClient_std--default_delete_CAppSubmixClient____std--alloc.c)
 * Callees:
 *     ??1?$unique_ptr@VCAppSubmixClient@@U?$default_delete@VCAppSubmixClient@@@std@@@std@@QEAA@XZ @ 0x1800186F4 (--1-$unique_ptr@VCAppSubmixClient@@U-$default_delete@VCAppSubmixClient@@@std@@@std@@QEAA@XZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::unique_ptr<CAppSubmixClient>>>(__int64 **a1, __int64 **a2)
{
  __int64 **v3; // rbx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      std::unique_ptr<CAppSubmixClient>::~unique_ptr<CAppSubmixClient>(v3++);
    while ( v3 != a2 );
  }
}
