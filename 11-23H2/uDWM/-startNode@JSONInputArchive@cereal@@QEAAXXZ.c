/*
 * XREFs of ?startNode@JSONInputArchive@cereal@@QEAAXXZ @ 0x1800F3860
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1800F67B0 (-deserialize@-$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transiti.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180066200 (_CxxThrowException_0.c)
 *     ??$_Emplace_reallocate@PEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@PEBV12@@?$vector@VIterator@JSONInputArchive@cereal@@V?$allocator@VIterator@JSONInputArchive@cereal@@@std@@@std@@QEAAPEAVIterator@JSONInputArchive@cereal@@QEAV234@$$QEAPEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@1@Z @ 0x1800EF3E0 (--$_Emplace_reallocate@PEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAl.c)
 *     ??$emplace_back@PEBU?$GenericMember@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@PEBU12@@?$vector@VIterator@JSONInputArchive@cereal@@V?$allocator@VIterator@JSONInputArchive@cereal@@@std@@@std@@QEAA?A_T$$QEAPEBU?$GenericMember@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@0@Z @ 0x1800EFA5C (--$emplace_back@PEBU-$GenericMember@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocato.c)
 *     ?Begin@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEAAPEAV12@XZ @ 0x1800F14F0 (-Begin@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjso.c)
 *     ?End@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEAAPEAV12@XZ @ 0x1800F157C (-End@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@.c)
 *     ?MemberEnd@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAPEBU?$GenericMember@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@2@XZ @ 0x1800F18F8 (-MemberEnd@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapi.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x1800F336C (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x1800F3D58 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 */

void __fastcall cereal::JSONInputArchive::startNode(cereal::JSONInputArchive *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned int *v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rsi
  int v11; // eax
  unsigned int *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD pExceptionObject[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF
  __int64 v18; // [rsp+48h] [rbp+10h] BYREF

  cereal::JSONInputArchive::search(this);
  v2 = cereal::JSONInputArchive::Iterator::value(*((_QWORD *)this + 43) - 40LL);
  v3 = *((_QWORD *)this + 43) - 40LL;
  if ( *(_WORD *)(v2 + 14) == 4 )
  {
    v4 = (unsigned int *)cereal::JSONInputArchive::Iterator::value(v3);
    v5 = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::End(v4);
    v6 = *((_QWORD *)this + 43) - 40LL;
    v17 = v5;
    v7 = cereal::JSONInputArchive::Iterator::value(v6);
    v8 = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::Begin(v7);
    v9 = *((_QWORD *)this + 43);
    v18 = v8;
    if ( v9 == *((_QWORD *)this + 44) )
    {
      std::vector<cereal::JSONInputArchive::Iterator>::_Emplace_reallocate<tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>> const *,tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>> const *>(
        (__int64 *)this + 42,
        v9,
        &v18,
        &v17);
    }
    else
    {
      *(_DWORD *)(v9 + 32) = 0;
      v10 = v5 - v8;
      *(_QWORD *)(v9 + 24) = 0LL;
      *(_QWORD *)(v9 + 16) = v8;
      v11 = *(_DWORD *)(v9 + 32);
      if ( (v10 & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
        v11 = 2;
      *(_DWORD *)(v9 + 32) = v11;
      *((_QWORD *)this + 43) += 40LL;
    }
  }
  else
  {
    v12 = (unsigned int *)cereal::JSONInputArchive::Iterator::value(v3);
    v13 = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::MemberEnd(v12);
    v14 = *((_QWORD *)this + 43) - 40LL;
    v17 = v13;
    v15 = cereal::JSONInputArchive::Iterator::value(v14);
    if ( *(_WORD *)(v15 + 14) != 3 )
    {
      pExceptionObject[0] = &stdext::exception::`vftable';
      pExceptionObject[1] = "rapidjson";
      throw (stdext::exception *)pExceptionObject;
    }
    v18 = *(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFLL;
    std::vector<cereal::JSONInputArchive::Iterator>::emplace_back<tip_rapidjson::GenericMember<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>> const *,tip_rapidjson::GenericMember<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>> const *>(
      (__int64 *)this + 42,
      &v18,
      &v17);
  }
}
