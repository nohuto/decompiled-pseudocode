/*
 * XREFs of ?UnregisterTask@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800B6178
 * Callers:
 *     ?UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTriggerInternal@1234@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180082268 (-UnRegisterTriggerTask@Internal@TargetedContent@Services@Windows@@YAJPEAUITargetedContentTrigger.c)
 *     ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800B58A8 (-RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgro.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180059B44 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_7779f375762769ec339d0b17f2cf373b___ @ 0x1800B4D54 (CreativeFramework--CommonHelper--EnumerateRegisteredTasks__lambda_7779f375762769ec339d0b17f2cf37.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CreativeFramework::CommonHelper::UnregisterTask(__int64 a1, __int64 a2)
{
  std::_Ref_count_base *v3; // rcx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h]

  v6 = a2;
  v5 = a1;
  v4[0] = &v5;
  v4[1] = a2;
  CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_7779f375762769ec339d0b17f2cf373b___((__int64)v4);
  v3 = *(std::_Ref_count_base **)(a2 + 8);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
}
