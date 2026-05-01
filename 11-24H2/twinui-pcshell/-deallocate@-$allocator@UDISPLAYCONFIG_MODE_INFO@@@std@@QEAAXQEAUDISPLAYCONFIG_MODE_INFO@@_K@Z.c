/*
 * XREFs of ?deallocate@?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@QEAAXQEAUDISPLAYCONFIG_MODE_INFO@@_K@Z @ 0x18036051C
 * Callers:
 *     _std::vector_GamepadButtonCollectionTracker_std::allocator_GamepadButtonCollectionTracker___::_Emplace_reallocate_GamepadButtonCollectionTracker_const_&__::_1_::catch$0 @ 0x1806E1E1C (_std--vector_GamepadButtonCollectionTracker_std--allocator_GamepadButtonCollectionTracker___--_E.c)
 *     _std::vector_DISPLAYCONFIG_MODE_INFO_std::allocator_DISPLAYCONFIG_MODE_INFO___::_Emplace_reallocate_DISPLAYCONFIG_MODE_INFO_const_&__::_1_::catch$0 @ 0x1806F9117 (_std--vector_DISPLAYCONFIG_MODE_INFO_std--allocator_DISPLAYCONFIG_MODE_INFO___--_Emplace_realloc.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<DISPLAYCONFIG_MODE_INFO>::deallocate(__int64 a1, void *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, (const struct std::nothrow_t *)(a3 << 6));
}
