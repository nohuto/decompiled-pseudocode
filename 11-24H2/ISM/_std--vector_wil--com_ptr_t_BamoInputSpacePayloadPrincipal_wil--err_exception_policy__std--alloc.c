/*
 * XREFs of _std::vector_wil::com_ptr_t_BamoInputSpacePayloadPrincipal_wil::err_exception_policy__std::allocator_wil::com_ptr_t_BamoInputSpacePayloadPrincipal_wil::err_exception_policy_____::_Reallocate_0__::_1_::catch$0 @ 0x1801D3221
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001B0D0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x18009DCB6 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_BamoInputSpacePayloadPrincipal_wil::err_exception_policy__std::allocator_wil::com_ptr_t_BamoInputSpacePayloadPrincipal_wil::err_exception_policy_____::_Reallocate_0__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Deallocate<16,0>(*(char **)(a2 + 64), (const struct std::nothrow_t *)(8LL * **(_QWORD **)(a2 + 72)));
  throw;
}
