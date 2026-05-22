/*
 * XREFs of ??1?$vector@V?$shared_ptr@ULegacyDeviceInfo@@@std@@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@2@@std@@QEAA@XZ @ 0x1800CC8E4
 * Callers:
 *     _MPCRawInputProvider::FlushQueuedDeviceChanges_::_1_::dtor$0 @ 0x1801CDF19 (_MPCRawInputProvider--FlushQueuedDeviceChanges_--_1_--dtor$0.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001AB00 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@ULegacyDeviceInfo@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@ULegacyDeviceInfo@@@std@@@0@@Z @ 0x1800CC33C (--$_Destroy_range@V-$allocator@V-$shared_ptr@ULegacyDeviceInfo@@@std@@@std@@@std@@YAXPEAV-$share.c)
 */

void __fastcall std::vector<std::shared_ptr<LegacyDeviceInfo>>::~vector<std::shared_ptr<LegacyDeviceInfo>>(__int64 a1)
{
  char *v2; // rcx

  v2 = *(char **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<std::shared_ptr<LegacyDeviceInfo>>>((__int64)v2, *(_QWORD *)(a1 + 8));
    std::_Deallocate<16,0>(
      *(char **)a1,
      (const struct std::nothrow_t *)((*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF0uLL));
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
