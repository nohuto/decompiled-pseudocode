/*
 * XREFs of ?QueryInterface@?$produce_base@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@UEAAHAEBUguid@3@PEAPEAX@Z @ 0x1802BD630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce_base<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,void>::QueryInterface(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v3; // rax

  v3 = a1 + 8;
  if ( !a1 )
    v3 = 24LL;
  return winrt::impl::root_implements<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,IApplicationViewChangeListener,IWindowSnappingEvents>::query_interface(
           v3,
           a2,
           a3);
}
