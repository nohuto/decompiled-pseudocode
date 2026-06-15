/*
 * XREFs of ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x14007E9C0
 * Callers:
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x14007B6E0 (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 *     ?SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeatureStateCache@@W4wil_FeatureChangeTime@@I@Z @ 0x14007D798 (-SubscribeFeatureStateCacheToConfigurationChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_.c)
 *     ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x14007DA08 (-SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPT.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2511@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x140081FC4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2511@@@details@wi.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2602@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1400820FC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2602@@@details@wi.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2605@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x140082234 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_MediaQI2605@@@details@wi.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioCrossProcessFormatCorruption@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x14008236C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioCrossProc.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Ten2Loc@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1400824A4 (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Ten2Loc@@@details@wil@@A.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_TestAccPerf@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x1400825DC (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_TestAccPerf@@@details@wi.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureReportingCache@@@Z @ 0x1400849CC (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIPEAUwil_details_FeatureRep.c)
 * Callees:
 *     memcpy_s @ 0x1400436D4 (memcpy_s.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x14007E4FC (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 */

bool __fastcall wil::details_abi::heap_buffer::push_back(void **this, const void *a2, unsigned __int64 a3)
{
  bool result; // al

  result = wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)this, a3);
  if ( result )
  {
    memcpy_s(this[1], ((_BYTE *)this[2] - (_BYTE *)this[1]) & -(__int64)(this[1] < this[2]), a2, a3);
    this[1] = (char *)this[1] + a3;
    return 1;
  }
  return result;
}
