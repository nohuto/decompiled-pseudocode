/*
 * XREFs of _std::vector_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord__std::allocator_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord_____::_Emplace_reallocate_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord____::_1_::catch$0 @ 0x1806F7346
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@0@@Z @ 0x1801C793C (--$_Destroy_range@V-$allocator@V-$shared_ptr@UFlyoutInstanceRecord@SnapFlyoutHost@@@std@@@std@@@.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord__std::allocator_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord_____::_Emplace_reallocate_std::shared_ptr_SnapFlyoutHost::FlyoutInstanceRecord____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::shared_ptr<SnapFlyoutHost::FlyoutInstanceRecord>>>(
    *(_QWORD *)(a2 + 112),
    *(_QWORD *)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(16LL * *(_QWORD *)(a2 + 120)));
  throw;
}
