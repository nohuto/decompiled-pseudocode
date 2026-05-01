/*
 * XREFs of ??1?$com_array@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAA@XZ @ 0x18023B41C
 * Callers:
 *     _SnapFlyoutHost::GetSuggestedWindowPositions_::_1_::dtor$2 @ 0x1806F8115 (_SnapFlyoutHost--GetSuggestedWindowPositions_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall winrt::com_array<winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition>::~com_array<winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition>(
        __int64 a1)
{
  winrt::com_array<winrt::WindowsUdk::Services::Iris::IrisCreative>::clear(a1);
}
