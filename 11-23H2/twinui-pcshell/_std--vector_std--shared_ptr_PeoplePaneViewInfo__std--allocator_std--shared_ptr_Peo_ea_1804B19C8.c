/*
 * XREFs of _std::vector_std::shared_ptr_PeoplePaneViewInfo__std::allocator_std::shared_ptr_PeoplePaneViewInfo_____::_Emplace_reallocate_std::shared_ptr_PeoplePaneViewInfo____::_1_::catch$3 @ 0x1804B19C8
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@0@@Z @ 0x1802D7364 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@.c)
 */

void __fastcall __noreturn std::vector_std::shared_ptr_PeoplePaneViewInfo__std::allocator_std::shared_ptr_PeoplePaneViewInfo_____::_Emplace_reallocate_std::shared_ptr_PeoplePaneViewInfo____::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>(
    *(_QWORD *)(a2 + 112),
    *(_QWORD *)(a2 + 120));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 16LL * *(_QWORD *)(a2 + 136));
  throw;
}
