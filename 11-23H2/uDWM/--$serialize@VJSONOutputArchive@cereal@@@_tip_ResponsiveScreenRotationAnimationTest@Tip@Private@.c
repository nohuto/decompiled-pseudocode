/*
 * XREFs of ??$serialize@VJSONOutputArchive@cereal@@@_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x1800F466C
 * Callers:
 *     ?serialize@?$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x1800F6C90 (-serialize@-$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transition.c)
 * Callees:
 *     ??$process@H@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAH@Z @ 0x1800EFC2C (--$process@H@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAH@Z.c)
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V?$NameValuePair@AEAW4RotationState@Rotation@Private@Transitions@Udwm@winrt@@@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@0$$QEAV?$NameValuePair@AEAW4RotationState@Rotation@Private@Transitions@Udwm@winrt@@@1@@Z @ 0x1800F4370 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V-$NameValuePair@AEAW4RotationState@Rotation@Priva.c)
 */

__int64 __fastcall Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest::serialize<cereal::JSONOutputArchive>(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  _QWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v6[2]; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v7[3]; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a2 + 32);
  v5[0] = "currentState";
  v5[1] = a1 + 16;
  v6[0] = "stateCompleted";
  v6[1] = a1 + 13;
  v7[0] = "visualsDeleted";
  v7[1] = a1 + 12;
  v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v3 + 408) = "transitionType";
  v8 = *(_DWORD *)(a1 + 8);
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<int>(
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 32LL) + 32LL),
    &v8);
  return cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<bool &>,cereal::NameValuePair<bool &>,cereal::NameValuePair<enum winrt::Udwm::Transitions::Private::Rotation::RotationState &>>(
           *(_QWORD *)(v2 + 32),
           v7,
           v6,
           (__int64)v5);
}
