/*
 * XREFs of ?GetCaretScaleFactor@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAI@Z @ 0x180485830
 * Callers:
 *     <none>
 * Callees:
 *     ?GetScaleFactor@MonitorInformation@KeyboardHosting@@QEBA?AW4DEVICE_SCALE_FACTOR@@XZ @ 0x18047A280 (-GetScaleFactor@MonitorInformation@KeyboardHosting@@QEBA-AW4DEVICE_SCALE_FACTOR@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x18047A5A8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::GetCaretScaleFactor(RTL_SRWLOCK *this, unsigned int *a2)
{
  unsigned int ScaleFactor; // eax

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
    ScaleFactor = KeyboardHosting::MonitorInformation::GetScaleFactor(this + 69);
  else
    ScaleFactor = (unsigned int)this[74].Ptr;
  *a2 = ScaleFactor;
  return 0LL;
}
