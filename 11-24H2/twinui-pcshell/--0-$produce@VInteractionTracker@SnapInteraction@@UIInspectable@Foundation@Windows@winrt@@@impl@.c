/*
 * XREFs of ??0?$produce@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@@impl@winrt@@QEAA@XZ @ 0x18029A6D0
 * Callers:
 *     ??0?$producer@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x18029A6B8 (--0-$producer@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@X@imp.c)
 * Callees:
 *     ??0?$produce_base@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@X@impl@winrt@@QEAA@XZ @ 0x18029A6F4 (--0-$produce_base@VInteractionTracker@SnapInteraction@@UIInspectable@Foundation@Windows@winrt@@X.c)
 */

_QWORD *winrt::impl::produce<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable>::produce<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  winrt::impl::produce_base<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,void>::produce_base<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,void>();
  result = v0;
  *v0 = &winrt::impl::produce_base<SnapInteraction::InteractionTracker,winrt::Windows::Foundation::IInspectable,void>::`vftable';
  return result;
}
