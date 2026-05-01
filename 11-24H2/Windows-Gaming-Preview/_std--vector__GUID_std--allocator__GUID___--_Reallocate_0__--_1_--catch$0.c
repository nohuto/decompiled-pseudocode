/*
 * XREFs of _std::vector__GUID_std::allocator__GUID___::_Reallocate_0__::_1_::catch$0 @ 0x1800438D7
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180002E20 (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@U_GUID@@@std@@QEAAXQEAU_GUID@@_K@Z @ 0x180016DB8 (-deallocate@-$allocator@U_GUID@@@std@@QEAAXQEAU_GUID@@_K@Z.c)
 */

void __fastcall __noreturn std::vector__GUID_std::allocator__GUID___::_Reallocate_0__::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<_GUID>::deallocate(a1, *(void **)(a2 + 64), **(_QWORD **)(a2 + 72));
  throw;
}
