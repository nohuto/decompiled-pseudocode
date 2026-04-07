/*
 * XREFs of ??$save@VJSONOutputArchive@cereal@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@4@@cereal@@YAXAEAVJSONOutputArchive@0@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z @ 0x1800F0260
 * Callers:
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800F2794 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 * Callees:
 *     ?String@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NPEBDI_N@Z @ 0x1800F1C70 (-String@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip.c)
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800F3DC4 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 */

__int64 __fastcall cereal::save<cereal::JSONOutputArchive,std::string,std::allocator<std::string>>(
        __int64 a1,
        __int64 **a2)
{
  _QWORD *v3; // r9
  __int64 result; // rax
  __int64 *v5; // rsi
  __int64 *i; // rdi
  __int64 v7; // rbx
  __int64 *v8; // rdx

  v3 = *(_QWORD **)(*(_QWORD *)(a1 + 32) + 32LL);
  result = *(_QWORD *)(v3[58] + 8 * ((v3[59] - 1LL) & ((unsigned __int64)(v3[61] - 1LL + v3[60]) >> 2)));
  *(_DWORD *)(result + 4LL * ((*((_DWORD *)v3 + 122) - 1 + *((_DWORD *)v3 + 120)) & 3)) = 2;
  v5 = a2[1];
  for ( i = *a2; i != v5; i += 4 )
  {
    v7 = *(_QWORD *)(a1 + 32);
    cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v7 + 32));
    v8 = i;
    if ( (unsigned __int64)i[3] >= 0x10 )
      v8 = (__int64 *)*i;
    result = tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::String(
               *(_QWORD *)(*(_QWORD *)(v7 + 32) + 32LL) + 328LL,
               v8,
               *((unsigned int *)i + 4));
  }
  return result;
}
