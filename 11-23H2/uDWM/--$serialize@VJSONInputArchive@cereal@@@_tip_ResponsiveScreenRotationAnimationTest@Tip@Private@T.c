/*
 * XREFs of ??$serialize@VJSONInputArchive@cereal@@@_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@QEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1800F449C
 * Callers:
 *     ?deserialize@?$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transitions@Udwm@@@details@tip@@EEAAXAEAVJSONInputArchive@cereal@@@Z @ 0x1800F67B0 (-deserialize@-$test_merged_data@U_tip_ResponsiveScreenRotationAnimationTest@Tip@Private@Transiti.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180066200 (_CxxThrowException_0.c)
 *     ?GetInt@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEBAHXZ @ 0x1800F17B8 (-GetInt@-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAllocator@tip_rapidjs.c)
 *     ?search@JSONInputArchive@cereal@@AEAAXXZ @ 0x1800F336C (-search@JSONInputArchive@cereal@@AEAAXXZ.c)
 *     ?value@Iterator@JSONInputArchive@cereal@@QEAAAEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@XZ @ 0x1800F3D58 (-value@Iterator@JSONInputArchive@cereal@@QEAAAEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$Memo.c)
 */

__int64 __fastcall Udwm::Transitions::Private::Tip::_tip_ResponsiveScreenRotationAnimationTest::serialize<cereal::JSONInputArchive>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  cereal::JSONInputArchive *v5; // rbx
  _BYTE *v6; // rax
  int Int; // eax
  __int64 v8; // rax
  cereal::JSONInputArchive *v9; // rbx
  __int16 v10; // cx
  __int64 v11; // rax
  cereal::JSONInputArchive *v12; // rbx
  __int16 v13; // cx
  __int64 v14; // rax
  cereal::JSONInputArchive *v15; // rbx
  _BYTE *v16; // rax
  __int64 result; // rax
  void **pExceptionObject; // [rsp+20h] [rbp-18h] BYREF
  const char *v19; // [rsp+28h] [rbp-10h]

  v4 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  *(_QWORD *)(v4 + 304) = "transitionType";
  v5 = *(cereal::JSONInputArchive **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 32LL) + 32LL) + 32LL);
  cereal::JSONInputArchive::search(v5);
  v6 = (_BYTE *)cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v5 + 43) - 40LL);
  Int = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetInt(v6);
  ++*(_QWORD *)(*((_QWORD *)v5 + 43) - 16LL);
  *(_DWORD *)(a1 + 8) = Int;
  v8 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  *(_QWORD *)(v8 + 304) = "visualsDeleted";
  v9 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v8 + 32) + 32LL);
  cereal::JSONInputArchive::search(v9);
  v10 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v9 + 43) - 40LL) + 14);
  if ( (v10 & 8) == 0 )
  {
    pExceptionObject = &stdext::exception::`vftable';
    v19 = "rapidjson";
    throw (stdext::exception *)&pExceptionObject;
  }
  *(_BYTE *)(a1 + 12) = v10 == 10;
  ++*(_QWORD *)(*((_QWORD *)v9 + 43) - 16LL);
  v11 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  *(_QWORD *)(v11 + 304) = "stateCompleted";
  v12 = *(cereal::JSONInputArchive **)(*(_QWORD *)(v11 + 32) + 32LL);
  cereal::JSONInputArchive::search(v12);
  v13 = *(_WORD *)(cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v12 + 43) - 40LL) + 14);
  if ( (v13 & 8) == 0 )
  {
    pExceptionObject = &stdext::exception::`vftable';
    v19 = "rapidjson";
    throw (stdext::exception *)&pExceptionObject;
  }
  *(_BYTE *)(a1 + 13) = v13 == 10;
  ++*(_QWORD *)(*((_QWORD *)v12 + 43) - 16LL);
  v14 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 32LL);
  *(_QWORD *)(v14 + 304) = "currentState";
  v15 = *(cereal::JSONInputArchive **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 32) + 32LL) + 32LL) + 32LL);
  cereal::JSONInputArchive::search(v15);
  v16 = (_BYTE *)cereal::JSONInputArchive::Iterator::value(*((_QWORD *)v15 + 43) - 40LL);
  result = tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::GetInt(v16);
  ++*(_QWORD *)(*((_QWORD *)v15 + 43) - 16LL);
  *(_DWORD *)(a1 + 16) = result;
  return result;
}
