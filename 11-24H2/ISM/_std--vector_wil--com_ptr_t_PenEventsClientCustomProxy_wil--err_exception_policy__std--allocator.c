/*
 * XREFs of _std::vector_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy__std::allocator_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy__const_&__::_1_::catch$1 @ 0x1801D2D42
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1800647B0 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VAsyncStringPrincipal@@Uerr_exception_policy@wil@@@w.c)
 *     _CxxThrowException_0 @ 0x18009DCB6 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy__std::allocator_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy_____::_Emplace_reallocate_wil::com_ptr_t_PenEventsClientCustomProxy_wil::err_exception_policy__const____::_1_::catch_1(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<wil::com_ptr_t<AsyncStringPrincipal,wil::err_exception_policy>>>(
    *(__int64 **)(a2 + 112),
    *(__int64 **)(a2 + 136));
  std::_Deallocate<16,0>(*(char **)(a2 + 32), (const struct std::nothrow_t *)(8LL * *(_QWORD *)(a2 + 120)));
  throw;
}
