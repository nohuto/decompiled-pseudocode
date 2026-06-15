/*
 * XREFs of ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@W4AEC_LOOPBACK_SELECTION_MODE@@@std@@QEAA@XZ @ 0x1800A34A0
 * Callers:
 *     __dynamic_initializer_for__AECLoopbackSelectionModeStringValues___::_1_::dtor$0 @ 0x18016FC25 (__dynamic_initializer_for__AECLoopbackSelectionModeStringValues___--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>::~pair<std::wstring const,enum AEC_LOOPBACK_SELECTION_MODE>(
        __int64 a1,
        __int64 a2)
{
  std::wstring::_Tidy_deallocate(a1, a2);
}
