/*
 * XREFs of ??$process@AEAI@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAXAEAI@Z @ 0x1800EFABC
 * Callers:
 *     ??$process@V?$NameValuePair@AEAI@cereal@@V?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@?$OutputArchive@VJSONOutputArchive@cereal@@$0A@@cereal@@AEAAX$$QEAV?$NameValuePair@AEAI@1@$$QEAV?$NameValuePair@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@$$QEAV?$NameValuePair@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@1@@Z @ 0x1800EFD38 (--$process@V-$NameValuePair@AEAI@cereal@@V-$NameValuePair@AEAV-$basic_string@GU-$char_traits@G@s.c)
 *     ?data@?$test_common_data@$0A@@details@tip@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4serialize_options@23@@Z @ 0x1800F2794 (-data@-$test_common_data@$0A@@details@tip@@AEAA-AV-$basic_string@DU-$char_traits@D@std@@V-$alloc.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x1800F1954 (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 *     ?u32toa@internal@tip_rapidjson@@YAPEADIPEAD@Z @ 0x1800F3A08 (-u32toa@internal@tip_rapidjson@@YAPEADIPEAD@Z.c)
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800F3DC4 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 */

unsigned int *__fastcall cereal::OutputArchive<cereal::JSONOutputArchive,0>::process<unsigned int &>(
        __int64 a1,
        _DWORD *a2)
{
  __int64 v4; // rsi
  char *v5; // r8
  __int64 v6; // rdx
  char *v7; // rdi
  unsigned int *v8; // rbx
  unsigned int *result; // rax
  unsigned int v10[4]; // [rsp+20h] [rbp-28h] BYREF

  cereal::JSONOutputArchive::writeName(*(cereal::JSONOutputArchive **)(a1 + 32));
  LODWORD(a2) = *a2;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32LL);
  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    v4 + 328,
    6LL);
  v7 = tip_rapidjson::internal::u32toa((tip_rapidjson::internal *)(unsigned int)a2, (unsigned int)v10, v5);
  v8 = v10;
  for ( result = v10; v8 != (unsigned int *)v7; v8 = (unsigned int *)((char *)v8 + 1) )
  {
    LOBYTE(v6) = *(_BYTE *)v8;
    result = (unsigned int *)std::ostream::put(**(_QWORD **)(v4 + 328), v6);
  }
  return result;
}
