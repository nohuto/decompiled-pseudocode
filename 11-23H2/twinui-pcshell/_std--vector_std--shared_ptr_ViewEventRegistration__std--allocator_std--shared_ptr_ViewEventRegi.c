/*
 * XREFs of _std::vector_std::shared_ptr_ViewEventRegistration__std::allocator_std::shared_ptr_ViewEventRegistration_____::_Emplace_reallocate_std::shared_ptr_ViewEventRegistration__const_&__::_1_::catch$0 @ 0x1802B91E1
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@std@@@std@@YAXPEAV?$shared_ptr@UViewEventRegistration@@@0@QEAV10@AEAV?$allocator@V?$shared_ptr@UViewEventRegistration@@@std@@@0@@Z @ 0x1800AE108 (--$_Destroy_range@V-$allocator@V-$shared_ptr@UViewEventRegistration@@@std@@@std@@@std@@YAXPEAV-$.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::shared_ptr_ViewEventRegistration__std::allocator_std::shared_ptr_ViewEventRegistration_____::_Emplace_reallocate_std::shared_ptr_ViewEventRegistration__const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<std::shared_ptr<ViewEventRegistration>>>(
    *(_QWORD *)(a2 + 112),
    *(_QWORD *)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 16LL * *(_QWORD *)(a2 + 120));
  throw;
}
