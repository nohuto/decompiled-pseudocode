/*
 * XREFs of ??$process@H@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAH@Z @ 0x1800EFC2C
 * Callers:
 *     ??$process@V?$NameValuePair@AEA_N@cereal@@V12@V?$NameValuePair@AEAW4RotationState@Rotation@Private@Transitions@Udwm@winrt@@@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEA_N@1@0$$QEAV?$NameValuePair@AEAW4RotationState@Rotation@Private@Transitions@Udwm@winrt@@@1@@Z @ 0x1800F4370 (--$process@V-$NameValuePair@AEA_N@cereal@@V12@V-$NameValuePair@AEAW4RotationState@Rotation@Priva.c)
 *     ??$serialize@VJSONOutputArchive@cereal@@@_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@QEAAXAEAVJSONOutputArchive@cereal@@@Z @ 0x1800F466C (--$serialize@VJSONOutputArchive@cereal@@@_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@.c)
 * Callees:
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x1800F1954 (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800F3DC4 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<int>(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // esi
  __int64 v5; // rbx

  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(a1 + 32));
  v4 = *a2;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    v5 + 328,
    6LL);
  return tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteInt(
           v5 + 328,
           v4);
}
