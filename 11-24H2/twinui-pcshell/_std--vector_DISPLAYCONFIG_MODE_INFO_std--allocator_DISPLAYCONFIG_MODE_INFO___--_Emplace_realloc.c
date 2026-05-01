/*
 * XREFs of _std::vector_DISPLAYCONFIG_MODE_INFO_std::allocator_DISPLAYCONFIG_MODE_INFO___::_Emplace_reallocate_DISPLAYCONFIG_MODE_INFO_const_&__::_1_::catch$0 @ 0x1806F9117
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?deallocate@?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@QEAAXQEAUDISPLAYCONFIG_MODE_INFO@@_K@Z @ 0x18036051C (-deallocate@-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@QEAAXQEAUDISPLAYCONFIG_MODE_INFO@@_K@Z.c)
 */

void __fastcall __noreturn std::vector_DISPLAYCONFIG_MODE_INFO_std::allocator_DISPLAYCONFIG_MODE_INFO___::_Emplace_reallocate_DISPLAYCONFIG_MODE_INFO_const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::allocator<DISPLAYCONFIG_MODE_INFO>::deallocate(a1, *(void **)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
