/*
 * XREFs of ??$process@V?$NameValuePair@AEAI@cereal@@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@@Z @ 0x1800EFD38
 * Callers:
 *     ??$process@V?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@cereal@@V?$NameValuePair@AEAI@2@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@0@Z @ 0x1800EFF84 (--$process@V-$NameValuePair@AEAV-$basic_string@DU-$char_traits@D@std@@V-$allocator@_ea_1800EFF84.c)
 * Callees:
 *     ??$process@AEAI@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z @ 0x1800EFABC (--$process@AEAI@-$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z.c)
 *     ??$process@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800EFB68 (--$process@AEAV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@-$OutputArchive@VJS.c)
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800F3DC4 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 */

__int64 __fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<cereal::NameValuePair<unsigned int &>,cereal::NameValuePair<std::wstring &>,cereal::NameValuePair<std::string &>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        _QWORD *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 *v12; // rdi
  __int64 v13; // r8

  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v7 + 408) = *(_QWORD *)a2;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned int &>(
    *(_QWORD *)(v7 + 32),
    *(_DWORD **)(a2 + 8));
  v8 = *(_QWORD *)(a1 + 32);
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 32) + 32LL) + 32LL);
  *(_QWORD *)(v9 + 408) = *a3;
  cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<std::wstring &>(*(_QWORD *)(v9 + 32));
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 32) + 32LL) + 32LL);
  v11 = *(_QWORD *)(v10 + 32);
  *(_QWORD *)(v10 + 408) = *a4;
  v12 = (__int64 *)a4[1];
  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(v11 + 32));
  v13 = *((unsigned int *)v12 + 4);
  if ( (unsigned __int64)v12[3] >= 0x10 )
    v12 = (__int64 *)*v12;
  return tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::String(
           *(_QWORD *)(*(_QWORD *)(v11 + 32) + 32LL) + 328LL,
           v12,
           v13);
}
