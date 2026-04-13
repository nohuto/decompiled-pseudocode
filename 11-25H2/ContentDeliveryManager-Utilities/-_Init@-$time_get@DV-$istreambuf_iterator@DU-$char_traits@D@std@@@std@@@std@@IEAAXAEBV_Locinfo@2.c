/*
 * XREFs of ?_Init@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IEAAXAEBV_Locinfo@2@@Z @ 0x18001E8FC
 * Callers:
 *     ?_Getcat@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@SA_KPEAPEBVfacet@locale@2@PEBV42@@Z @ 0x18001D1B4 (-_Getcat@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@SA_KPEAPEBVfacet@.c)
 *     ?_Makexloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z @ 0x18001E940 (-_Makexloc@_Locimp@locale@std@@CAXAEBV_Locinfo@3@HPEAV123@PEBV23@@Z.c)
 * Callees:
 *     ??$_Getvals@D@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IEAAXDAEBV_Locinfo@1@@Z @ 0x18001BF3C (--$_Getvals@D@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@IEAAXDAEBV_L.c)
 *     _Getdateorder @ 0x180021BE0 (_Getdateorder.c)
 */

__int64 __fastcall std::time_get<char,std::istreambuf_iterator<char>>::_Init(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  try
  {
    std::time_get<char,std::istreambuf_iterator<char>>::_Getvals<char>(a1, 0LL, a2);
    result = Getdateorder(v3);
    *(_DWORD *)(a1 + 40) = result;
  }
  catch ( ... )
  {
    std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Tidy((void **)a1);
    throw;
  }
  return result;
}
