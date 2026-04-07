/*
 * XREFs of ?_Calculate_growth@?$vector@VIterator@JSONInputArchive@cereal@@V?$allocator@VIterator@JSONInputArchive@cereal@@@std@@@std@@AEBA_K_K@Z @ 0x1800F219C
 * Callers:
 *     ??$_Emplace_reallocate@PEBU?$GenericMember@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@PEBU12@@?$vector@VIterator@JSONInputArchive@cereal@@V?$allocator@VIterator@JSONInputArchive@cereal@@@std@@@std@@QEAAPEAVIterator@JSONInputArchive@cereal@@QEAV234@$$QEAPEBU?$GenericMember@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@1@Z @ 0x1800EF2A4 (--$_Emplace_reallocate@PEBU-$GenericMember@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtA.c)
 *     ??$_Emplace_reallocate@PEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@PEBV12@@?$vector@VIterator@JSONInputArchive@cereal@@V?$allocator@VIterator@JSONInputArchive@cereal@@@std@@@std@@QEAAPEAVIterator@JSONInputArchive@cereal@@QEAV234@$$QEAPEBV?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@1@Z @ 0x1800EF3E0 (--$_Emplace_reallocate@PEBV-$GenericValue@U-$UTF8@D@tip_rapidjson@@V-$MemoryPoolAllocator@VCrtAl.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall std::vector<cereal::JSONInputArchive::Iterator>::_Calculate_growth(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r9

  result = 0x666666666666666LL;
  v3 = (0xCCCCCCCCCCCCCCCDuLL * ((__int64)(a1[2] - *a1) >> 3)) >> 1;
  if ( 0xCCCCCCCCCCCCCCCDuLL * ((__int64)(a1[2] - *a1) >> 3) <= 0x666666666666666LL - v3 )
  {
    result = v3 - 0x3333333333333333LL * ((__int64)(a1[2] - *a1) >> 3);
    if ( result < a2 )
      return a2;
  }
  return result;
}
