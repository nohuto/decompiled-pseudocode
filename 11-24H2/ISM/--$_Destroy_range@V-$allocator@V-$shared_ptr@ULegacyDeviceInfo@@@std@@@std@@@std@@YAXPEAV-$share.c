/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@ULegacyDeviceInfo@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@0@@Z @ 0x1800CECD0
 * Callers:
 *     ??$_Uninitialized_move@PEAV?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@YAPEAV?$shared_ptr@ULegacyDeviceInfo@@@0@QEAV10@0PEAV10@AEAV?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@0@@Z @ 0x1800CF0EC (--$_Uninitialized_move@PEAV-$shared_ptr@ULegacyDeviceInfo@@@std@@V-$allocator@V-$shared_ptr@ULeg.c)
 *     ??1?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@QEAA@XZ @ 0x1800CF278 (--1-$vector@V-$shared_ptr@ULegacyDeviceInfo@@@std@@V-$allocator@V-$shared_ptr@ULegacyDeviceInfo@.c)
 *     ??1MPCRawInputProvider@@MEAA@XZ @ 0x1800CF2D4 (--1MPCRawInputProvider@@MEAA@XZ.c)
 *     ?FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ @ 0x1800CF830 (-FlushQueuedDeviceChanges@MPCRawInputProvider@@AEAAXXZ.c)
 *     ?_Change_array@?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@AEAAXQEAV?$shared_ptr@ULegacyDeviceInfo@@@2@_K1@Z @ 0x1800D01F8 (-_Change_array@-$vector@V-$shared_ptr@ULegacyDeviceInfo@@@std@@V-$allocator@V-$shared_ptr@ULegac.c)
 *     _std::vector_std::shared_ptr_LegacyDeviceInfo__std::allocator_std::shared_ptr_LegacyDeviceInfo_____::_Emplace_reallocate_std::shared_ptr_LegacyDeviceInfo__const_&__::_1_::catch$0 @ 0x1801D540A (_std--vector_std--shared_ptr_LegacyDeviceInfo__std--allocator_std--shared_ptr_LegacyDeviceInfo__.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180058904 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 */

void __fastcall std::_Destroy_range<std::allocator<std::shared_ptr<LegacyDeviceInfo>>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  std::_Ref_count_base *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      v4 = *(std::_Ref_count_base **)(v3 + 8);
      if ( v4 )
        std::_Ref_count_base::_Decref(v4);
      v3 += 16LL;
    }
    while ( v3 != a2 );
  }
}
