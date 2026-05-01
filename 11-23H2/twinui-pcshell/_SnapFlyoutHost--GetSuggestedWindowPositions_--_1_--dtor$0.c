/*
 * XREFs of _SnapFlyoutHost::GetSuggestedWindowPositions_::_1_::dtor$0 @ 0x18067A9FE
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V?$allocator@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@@std@@@std@@QEAA@XZ @ 0x18065EF98 (--1-$vector@USuggestedWindowPosition@Shell@UI@WindowsUdk@winrt@@V-$allocator@USuggestedWindowPos.c)
 */

void __fastcall SnapFlyoutHost::GetSuggestedWindowPositions_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    std::vector<winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition>::~vector<winrt::WindowsUdk::UI::Shell::SuggestedWindowPosition>(*(_QWORD *)(a2 + 104));
  }
}
