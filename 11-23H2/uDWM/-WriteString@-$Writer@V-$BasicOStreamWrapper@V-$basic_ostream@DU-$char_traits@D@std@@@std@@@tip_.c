/*
 * XREFs of ?WriteString@?$Writer@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@IEAA_NPEBDI@Z @ 0x1800F1E6C
 * Callers:
 *     ?String@?$PrettyWriter@V?$BasicOStreamWrapper@V?$basic_ostream@DU?$char_traits@D@std@@@std@@@tip_rapidjson@@U?$UTF8@D@2@U32@VCrtAllocator@2@$01@tip_rapidjson@@QEAA_NPEBDI_N@Z @ 0x1800F1C70 (-String@-$PrettyWriter@V-$BasicOStreamWrapper@V-$basic_ostream@DU-$char_traits@D@std@@@std@@@tip.c)
 * Callees:
 *     <none>
 */

char __fastcall tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteString(
        __int64 **a1,
        unsigned __int8 *a2,
        unsigned int a3)
{
  unsigned __int64 v4; // r14
  unsigned __int8 *v5; // rbp
  __int64 v6; // rdx
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx

  v4 = a3;
  v5 = a2;
  LOBYTE(a2) = 34;
  std::ostream::put(**a1, a2);
  v7 = 0LL;
  while ( v7 < v4 )
  {
    v8 = *v5++;
    ++v7;
    v9 = **a1;
    if ( `tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteString'::`2'::escape[v8] )
    {
      LOBYTE(v6) = 92;
      std::ostream::put(v9, v6);
      LOBYTE(v10) = `tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteString'::`2'::escape[v8];
      std::ostream::put(**a1, v10);
      if ( `tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteString'::`2'::escape[v8] == 117 )
      {
        LOBYTE(v6) = 48;
        std::ostream::put(**a1, v6);
        LOBYTE(v11) = 48;
        std::ostream::put(**a1, v11);
        LOBYTE(v12) = `tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteString'::`2'::hexDigits[(unsigned __int64)(unsigned int)v8 >> 4];
        std::ostream::put(**a1, v12);
        LOBYTE(v6) = `tip_rapidjson::Writer<tip_rapidjson::BasicOStreamWrapper<std::ostream>,tip_rapidjson::UTF8<char>,tip_rapidjson::UTF8<char>,tip_rapidjson::CrtAllocator,2>::WriteString'::`2'::hexDigits[v8 & 0xF];
        v9 = **a1;
        goto LABEL_7;
      }
    }
    else
    {
      LOBYTE(v6) = v8;
LABEL_7:
      std::ostream::put(v9, v6);
    }
  }
  LOBYTE(v6) = 34;
  std::ostream::put(**a1, v6);
  return 1;
}
