/*
 * XREFs of _std::vector_HotkeyHandler::IntendedHotKeySnapInfo_std::allocator_HotkeyHandler::IntendedHotKeySnapInfo___::_Emplace_reallocate_HotkeyHandler::IntendedHotKeySnapInfo_const_&__::_1_::catch$0 @ 0x1806F71F5
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18004860C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@YAXPEAUIntendedHotKeySnapInfo@HotkeyHandler@@QEAU12@AEAV?$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@0@@Z @ 0x1805ACFC0 (--$_Destroy_range@V-$allocator@UIntendedHotKeySnapInfo@HotkeyHandler@@@std@@@std@@YAXPEAUIntende.c)
 */

void __fastcall __noreturn std::vector_HotkeyHandler::IntendedHotKeySnapInfo_std::allocator_HotkeyHandler::IntendedHotKeySnapInfo___::_Emplace_reallocate_HotkeyHandler::IntendedHotKeySnapInfo_const____::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<HotkeyHandler::IntendedHotKeySnapInfo>>(
    *(HotkeyHandler::IntendedHotKeySnapInfo **)(a2 + 112),
    *(HotkeyHandler::IntendedHotKeySnapInfo **)(a2 + 136));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), (const struct std::nothrow_t *)(56LL * *(_QWORD *)(a2 + 120)));
  throw;
}
