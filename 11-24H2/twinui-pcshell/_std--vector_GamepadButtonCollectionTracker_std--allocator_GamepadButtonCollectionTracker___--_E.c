/*
 * XREFs of _std::vector_GamepadButtonCollectionTracker_std::allocator_GamepadButtonCollectionTracker___::_Emplace_reallocate_GamepadButtonCollectionTracker_const_&__::_1_::catch$0 @ 0x1806E1E1C
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@YAXPEAUGamepadButtonCollectionTracker@@QEAU1@AEAV?$allocator@UGamepadButtonCollectionTracker@@@0@@Z @ 0x180342FEC (--$_Destroy_range@V-$allocator@UGamepadButtonCollectionTracker@@@std@@@std@@YAXPEAUGamepadButton.c)
 *     ?deallocate@?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@QEAAXQEAUDISPLAYCONFIG_MODE_INFO@@_K@Z @ 0x18036051C (-deallocate@-$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@QEAAXQEAUDISPLAYCONFIG_MODE_INFO@@_K@Z.c)
 */

void __fastcall __noreturn std::vector_GamepadButtonCollectionTracker_std::allocator_GamepadButtonCollectionTracker___::_Emplace_reallocate_GamepadButtonCollectionTracker_const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx

  std::_Destroy_range<std::allocator<GamepadButtonCollectionTracker>>(
    *(GamepadButtonCollectionTracker **)(a2 + 112),
    *(GamepadButtonCollectionTracker **)(a2 + 136));
  std::allocator<DISPLAYCONFIG_MODE_INFO>::deallocate(v3, *(void **)(a2 + 32), *(_QWORD *)(a2 + 120));
  throw;
}
