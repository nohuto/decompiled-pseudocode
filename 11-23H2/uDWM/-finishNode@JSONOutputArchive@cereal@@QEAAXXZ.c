/*
 * XREFs of ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800F2D20
 * Callers:
 *     ??$save@VJSONOutputArchive@cereal@@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@cereal@@YAXAEAVJSONOutputArchive@0@AEBV?$vector@VStoredFailureInfo@wil@@V?$allocator@VStoredFailureInfo@wil@@@std@@@std@@@Z @ 0x1800F0320 (--$save@VJSONOutputArchive@cereal@@VStoredFailureInfo@wil@@V-$allocator@VStoredFailureInfo@wil@@.c)
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800F2794 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 *     ?serialize@?$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@details@tip@@EEAAXAEAVJSONOutputArchive@cereal@@W4serialize_options@23@@Z @ 0x1800F6C90 (-serialize@-$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transition.c)
 * Callees:
 *     ?EndArray@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NI@Z @ 0x1800F15D8 (-EndArray@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@t.c)
 *     ?EndObject@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NI@Z @ 0x1800F16CC (-EndObject@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@.c)
 *     ?StartArray@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NXZ @ 0x1800F1B38 (-StartArray@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@.c)
 *     ?StartObject@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NXZ @ 0x1800F1BD4 (-StartObject@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@.c)
 */

void __fastcall cereal::JSONOutputArchive::finishNode(cereal::JSONOutputArchive *this)
{
  unsigned __int64 v2; // r8
  int v3; // edx
  int v4; // edx
  int v5; // edx
  bool v6; // zf

  v2 = *((_QWORD *)this + 61) - 1LL + *((_QWORD *)this + 60);
  v3 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 58) + 8 * ((*((_QWORD *)this + 59) - 1LL) & (v2 >> 2))) + 4 * (v2 & 3));
  if ( !v3 )
  {
    tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::StartObject((_QWORD **)this + 41);
    goto LABEL_9;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
LABEL_9:
    tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::EndObject((_QWORD **)this + 41);
    goto LABEL_10;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::StartArray((_QWORD **)this + 41);
    goto LABEL_7;
  }
  if ( v5 == 1 )
LABEL_7:
    tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::EndArray((_QWORD **)this + 41);
LABEL_10:
  v6 = (*((_QWORD *)this + 61))-- == 1LL;
  if ( v6 )
    *((_QWORD *)this + 60) = 0LL;
  v6 = (*((_QWORD *)this + 56))-- == 1LL;
  if ( v6 )
    *((_QWORD *)this + 55) = 0LL;
}
