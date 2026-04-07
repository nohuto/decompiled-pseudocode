/*
 * XREFs of ?Begin@?$GenericValue@U?$UTF8@D@tip_rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@tip_rapidjson@@@2@@tip_rapidjson@@QEAAPEAV12@XZ @ 0x1800F14F0
 * Callers:
 *     ?startNode@JSONInputArchive@cereal@@QEAAXXZ @ 0x1800F3860 (-startNode@JSONInputArchive@cereal@@QEAAXXZ.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x180066200 (_CxxThrowException_0.c)
 */

__int64 __fastcall tip_rapidjson::GenericValue<tip_rapidjson::UTF8<char>,tip_rapidjson::MemoryPoolAllocator<tip_rapidjson::CrtAllocator>>::Begin(
        __int64 a1)
{
  _QWORD pExceptionObject[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_WORD *)(a1 + 14) != 4 )
  {
    pExceptionObject[0] = &stdext::exception::`vftable';
    pExceptionObject[1] = "rapidjson";
    throw (stdext::exception *)pExceptionObject;
  }
  return *(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFLL;
}
