/*
 * XREFs of ?find_interface@?$implements@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180211650
 * Callers:
 *     <none>
 * Callees:
 *     ??$find@U?$find_iid_traits@VInteractionTracker@SnapInteraction@@@impl@winrt@@@?$interface_list@UIInspectable@Foundation@Windows@winrt@@UIApplicationViewChangeListener@@UIWindowSnappingEvents@@@impl@winrt@@SA?A_PAEBU?$find_iid_traits@VInteractionTracker@SnapInteraction@@@12@@Z @ 0x18059B9D4 (--$find@U-$find_iid_traits@VInteractionTracker@SnapInteraction@@@impl@winrt@@@-$int_ea_18059B9D4.c)
 */

__int64 __fastcall winrt::implements<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IWindowSnappingEvents>::find_interface(
        __int64 a1,
        __int64 a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v3[1] = a2;
  v3[0] = a1 - 24;
  return winrt::impl::interface_list<winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IWindowSnappingEvents>::find<winrt::impl::find_iid_traits<SnapInteraction::InteractionTracker>>(v3);
}
