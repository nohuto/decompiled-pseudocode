/*
 * XREFs of ?begin@?$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x18044D6D0
 * Callers:
 *     ?OnMoveSizeAttempted@ViewPresentationMediator@@UEAAXPEAUHWND__@@PEAUIApplicationView@@KK@Z @ 0x18044CFD0 (-OnMoveSizeAttempted@ViewPresentationMediator@@UEAAXPEAUHWND__@@PEAUIApplicationView@@KK@Z.c)
 *     ?OnShellTrackedWindowPosChanged@ViewPresentationMediator@@UEAAXPEAUHWND__@@PEAUIApplicationView@@HKUtagRECT@@@Z @ 0x18044D0E0 (-OnShellTrackedWindowPosChanged@ViewPresentationMediator@@UEAAXPEAUHWND__@@PEAUIApplicationView@.c)
 *     ?OnShowWindowPolicy@ViewPresentationMediator@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x18044D210 (-OnShowWindowPolicy@ViewPresentationMediator@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z.c)
 *     ?ShownWindowHidden@ViewPresentationMediator@@UEAAXPEAUHWND__@@@Z @ 0x18044D560 (-ShownWindowHidden@ViewPresentationMediator@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V?$ComPtr@UIWindowManagementShowMoveSizeEvents@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x18044CDD4 (--0Iterator@-$ObjectArrayAdapterImpl@UIWindowManagementShowMoveSizeEvents@@V-$ComPtr@UIWindowMan.c)
 */

__int64 __fastcall details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::begin(
        __int64 a1,
        __int64 a2)
{
  details::ObjectArrayAdapterImpl<IWindowManagementShowMoveSizeEvents,Microsoft::WRL::ComPtr<IWindowManagementShowMoveSizeEvents>>::Iterator::Iterator(
    a2,
    a1,
    0);
  return a2;
}
