/*
 * XREFs of ?UnsafeUpdateMonitorInfo@ViewRectProvider@KeyboardHosting@@QEAAXAEBUMonitorInformation@2@00@Z @ 0x180488FB8
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180255CA0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18029730C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4MonitorInformation@KeyboardHosting@@QEAAAEAU01@AEBU01@@Z @ 0x180479F1C (--4MonitorInformation@KeyboardHosting@@QEAAAEAU01@AEBU01@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x18047A5A8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 */

void __fastcall KeyboardHosting::ViewRectProvider::UnsafeUpdateMonitorInfo(
        KeyboardHosting::ViewRectProvider *this,
        const struct KeyboardHosting::MonitorInformation *a2,
        const struct KeyboardHosting::MonitorInformation *a3,
        const struct KeyboardHosting::MonitorInformation *a4)
{
  const char *v8; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x147,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
      v8);
  KeyboardHosting::MonitorInformation::operator=((__int64)this + 16, (__int64)a2);
  KeyboardHosting::MonitorInformation::operator=((__int64)this + 184, (__int64)a3);
  KeyboardHosting::MonitorInformation::operator=((__int64)this + 352, (__int64)a4);
}
