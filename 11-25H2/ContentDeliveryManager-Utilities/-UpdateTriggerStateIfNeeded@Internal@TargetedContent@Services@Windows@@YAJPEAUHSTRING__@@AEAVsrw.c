/*
 * XREFs of ?UpdateTriggerStateIfNeeded@Internal@TargetedContent@Services@Windows@@YAJPEAUHSTRING__@@AEAVsrwlock@wil@@V?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@W4TargetedContentTriggerState@2345@1@Z@std@@@Z @ 0x18008788C
 * Callers:
 *     _lambda_0f325790d88d3e0e1d8faff7704602cc_::operator() @ 0x18007AFB0 (_lambda_0f325790d88d3e0e1d8faff7704602cc_--operator().c)
 * Callees:
 *     ??1?$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z@std@@QEAA@XZ @ 0x18004C3D4 (--1-$function@$$A6AXPEAUITargetedContentTriggerInternal@Internal@TargetedContent@Services@Window.c)
 *     std::function_bool___cdecl(std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&)_::function_bool___cdecl(std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper_&)___lambda_06e77e5296b311cd39e114a3c1771c51___ @ 0x180082330 (std--function_bool___cdecl(std--shared_ptr_CreativeFramework--CommonHelper--ISettingsContainer__.c)
 *     _lambda_06e77e5296b311cd39e114a3c1771c51_::_lambda_06e77e5296b311cd39e114a3c1771c51_ @ 0x1800834DC (_lambda_06e77e5296b311cd39e114a3c1771c51_--_lambda_06e77e5296b311cd39e114a3c1771c51_.c)
 *     ?EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@V?$function@$$A6A_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@AEAVPropertySetHelper@Triggers@CreativeFramework@@@Z@6@@Z @ 0x180084C74 (-EnumerateAllTriggersInContainer@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VI.c)
 *     ?GetTriggerRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x1800857E8 (-GetTriggerRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$share.c)
 *     __security_check_cookie @ 0x1800B6A50 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Services::TargetedContent::Internal::UpdateTriggerStateIfNeeded(
        HSTRING a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r8
  _QWORD *v5; // rax
  __int64 v6; // rdi
  __int64 *TriggerRegistrationSettingsContainer; // rax
  const char *v8; // r9
  __int64 result; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v11[16]; // [rsp+38h] [rbp-60h] BYREF
  _BYTE v12[32]; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v13[3]; // [rsp+68h] [rbp-30h] BYREF
  __int64 v14; // [rsp+80h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v14 = a3;
  v10[0] = WindowsGetStringRawBuffer(a1, 0LL);
  v10[1] = v12;
  v5 = lambda_06e77e5296b311cd39e114a3c1771c51_::_lambda_06e77e5296b311cd39e114a3c1771c51_(v13, (__int64)v10, v4, a3);
  try
  {
    v6 = std::function_bool___cdecl_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper____::function_bool___cdecl_std::shared_ptr_CreativeFramework::CommonHelper::ISettingsContainer__CreativeFramework::Triggers::PropertySetHelper______lambda_06e77e5296b311cd39e114a3c1771c51___(
           (__int64)v12,
           (__int64)v5);
    TriggerRegistrationSettingsContainer = (__int64 *)Windows::Services::TargetedContent::Internal::GetTriggerRegistrationSettingsContainer((__int64)v11);
    Windows::Services::TargetedContent::Internal::EnumerateAllTriggersInContainer(
      TriggerRegistrationSettingsContainer,
      v6);
    std::function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>::~function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>(a3);
    result = 0LL;
  }
  catch ( ... )
  {
    LODWORD(v10[0]) = wil::details::in1diag3::Return_CaughtException(
                        retaddr,
                        (void *)0x255,
                        (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
                        v8);
    std::function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>::~function<void (Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal *,std::shared_ptr<ContentDeliveryManager::Background::CorrelationVectorWrapper>)>(v14);
    return LODWORD(v10[0]);
  }
  return result;
}
