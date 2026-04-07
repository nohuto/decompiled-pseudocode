/*
 * XREFs of ?StartObject@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NXZ @ 0x1800F1BD4
 * Callers:
 *     ?finishNode@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800F2D20 (-finishNode@JSONOutputArchive@cereal@@QEAAXXZ.c)
 *     ?writeName@JSONOutputArchive@cereal@@QEAAXXZ @ 0x1800F3DC4 (-writeName@JSONOutputArchive@cereal@@QEAAXXZ.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180066200 (_CxxThrowException_0.c)
 *     ??$Expand@ULevel@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@@?$Stack@VCrtAllocator@tip_rapidjson@@@internal@tip_rapidjson@@AEAAX_K@Z @ 0x1800EED3C (--$Expand@ULevel@-$Writer@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@.c)
 *     ?PrettyPrefix@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAAXW4Type@2@@Z @ 0x1800F1954 (-PrettyPrefix@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std.c)
 */

char __fastcall tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::StartObject(
        _QWORD **a1)
{
  __int64 v2; // rdx
  _QWORD *v3; // rax
  _QWORD pExceptionObject[3]; // [rsp+20h] [rbp-18h] BYREF

  tip_rapidjson::PrettyWriter<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::PrettyPrefix(
    a1,
    3);
  if ( a1[4] + 2 > a1[5] )
    tip_rapidjson::internal::Stack<tip_rapidjson::CrtAllocator>::Expand<tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::Level>((__int64 *)a1 + 1);
  v3 = a1[4];
  if ( v3 + 2 > a1[5] )
  {
    pExceptionObject[0] = &stdext::exception::`vftable';
    pExceptionObject[1] = "rapidjson";
    throw (stdext::exception *)pExceptionObject;
  }
  a1[4] = v3 + 2;
  LOBYTE(v2) = 123;
  *v3 = 0LL;
  *((_BYTE *)v3 + 8) = 0;
  std::ostream::put(**a1, v2);
  return 1;
}
