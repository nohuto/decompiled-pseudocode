/*
 * XREFs of _winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::GetSnappableWindowList_::_1_::dtor$3 @ 0x1806F8D0F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$vector@U?$com_ptr@UIApplicationView@@@winrt@@V?$allocator@U?$com_ptr@UIApplicationView@@@winrt@@@std@@@std@@QEAA@XZ @ 0x1802D0B90 (--1-$vector@U-$com_ptr@UIApplicationView@@@winrt@@V-$allocator@U-$com_ptr@UIApplicationView@@@wi.c)
 */

void __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::DesktopSnapLayoutManager::GetSnappableWindowList_::_1_::dtor_3(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 72) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 72) &= ~1u;
    std::vector<winrt::com_ptr<IApplicationView>>::~vector<winrt::com_ptr<IApplicationView>>(*(_QWORD *)(a2 + 176));
  }
}
