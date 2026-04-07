/*
 * XREFs of ?search@Iterator@JSONInputArchive@cereal@@QEAAXPEBD@Z @ 0x1800F3250
 * Callers:
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x1800F336C (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x180066200 (_CxxThrowException_0.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@QEBD$$QEAV10@@Z @ 0x1800EECD8 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@QEBD@Z @ 0x1800F0700 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@QEBD@Z.c)
 *     ?GetString@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAPEBDXZ @ 0x1800F17FC (-GetString@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapi.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall cereal::JSONInputArchive::Iterator::search(cereal::JSONInputArchive::Iterator *this, const char *a2)
{
  size_t v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rbx
  const char *String; // r15
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD pExceptionObject[2]; // [rsp+20h] [rbp-88h] BYREF
  _QWORD v12[4]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v13[4]; // [rsp+50h] [rbp-58h] BYREF

  v4 = -1LL;
  do
    ++v4;
  while ( a2[v4] );
  v5 = 0LL;
  v6 = *(_QWORD *)this;
  if ( *(_QWORD *)this == *((_QWORD *)this + 1) )
  {
LABEL_9:
    v9 = std::string::string(v12, (__int64)a2);
    v10 = std::operator+<char>(v13, (__int64)"JSON missing:", v9);
    if ( v10[3] >= 0x10uLL )
      v10 = (_QWORD *)*v10;
    pExceptionObject[1] = v10;
    pExceptionObject[0] = &cereal::Exception::`vftable';
    throw (cereal::Exception *)pExceptionObject;
  }
  while ( 1 )
  {
    String = (const char *)tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetString(v6);
    if ( !strncmp(a2, String, v4) )
    {
      v8 = -1LL;
      do
        ++v8;
      while ( String[v8] );
      if ( v8 == v4 )
        break;
    }
    v6 += 32LL;
    ++v5;
    if ( v6 == *((_QWORD *)this + 1) )
      goto LABEL_9;
  }
  *((_QWORD *)this + 3) = v5;
}
