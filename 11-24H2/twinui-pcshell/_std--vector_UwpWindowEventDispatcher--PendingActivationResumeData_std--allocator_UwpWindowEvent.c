/*
 * XREFs of _std::vector_UwpWindowEventDispatcher::PendingActivationResumeData_std::allocator_UwpWindowEventDispatcher::PendingActivationResumeData___::_Emplace_reallocate_UwpWindowEventDispatcher::PendingActivationResumeData__::_1_::catch$1 @ 0x1806D4857
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std@@YAXPEAUPendingActivationResumeData@UwpWindowEventDispatcher@@QEAU12@AEAV?$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@0@@Z @ 0x18009B8B4 (--$_Destroy_range@V-$allocator@UPendingActivationResumeData@UwpWindowEventDispatcher@@@std@@@std.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_UwpWindowEventDispatcher::PendingActivationResumeData_std::allocator_UwpWindowEventDispatcher::PendingActivationResumeData___::_Emplace_reallocate_UwpWindowEventDispatcher::PendingActivationResumeData__::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<UwpWindowEventDispatcher::PendingActivationResumeData>>(
    *(char **)(a2 + 112),
    *(char **)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(32LL * *(_QWORD *)(a2 + 120)));
  throw;
}
