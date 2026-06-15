/*
 * XREFs of ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioCrossProcessFormatCorruption@@@details@wil@@QEAA_NXZ @ 0x140085538
 * Callers:
 *     ?Initialize@?$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UControlData_V1@@@@UEAAJPEAUtWAVEFORMATEX@@IIIKI_J1W4__MIDL___MIDL_itf_audioengineendpointp_0000_0001_0001@@PEAUICrossProcessMemoryManager@@PEAUICrossProcessEventManager@@PEAPEAUICrossProcessMemory@@PEAPEAUICrossProcessEvent@@@Z @ 0x140053C50 (-Initialize@-$CCrossProcessBaseServerEndpoint@UStaticControlData_V1@@UVolatileControlData_V0@@UC.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioCrossProcessFormatCorruption@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x14008236C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioCrossProc.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioCrossProcessFormatCorruption@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x140084C60 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_AudioCrossProcessFormatCorrupti.c)
 */

char __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AudioCrossProcessFormatCorruption>::__private_IsEnabled(
        wil::details *a1)
{
  char v2; // bl
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AudioCrossProcessFormatCorruption>::GetCachedFeatureEnabledState(
    a1,
    &v6);
  v2 = v6 & 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_AudioCrossProcessFormatCorruption>::ReportUsage(
    a1,
    v6 & 1,
    v3,
    v4);
  return v2;
}
