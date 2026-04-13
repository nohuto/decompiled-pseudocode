/*
 * XREFs of _Getdateorder @ 0x180021BE0
 * Callers:
 *     ?_Init@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@IEAAXAEBV_Locinfo@2@@Z @ 0x180014A78 (-_Init@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@IEAAXAEBV_Locinfo@2.c)
 *     ?_Init@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@IEAAXAEBV_Locinfo@2@@Z @ 0x18001E8FC (-_Init@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@IEAAXAEBV_Locinfo@2.c)
 *     ?_Init@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@IEAAXAEBV_Locinfo@2@@Z @ 0x1800B36F8 (-_Init@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@IEAAXAEBV_Locinf.c)
 * Callees:
 *     _GetLocaleHandleById @ 0x18000DD64 (_GetLocaleHandleById.c)
 *     __crtGetLocaleInfoEx_Stub @ 0x18000DE0C (__crtGetLocaleInfoEx_Stub.c)
 */

__int64 Getdateorder()
{
  LCID LocaleHandleById; // eax
  unsigned int v1; // ebx
  int LCData; // [rsp+30h] [rbp+8h] BYREF

  LCData = 0;
  LocaleHandleById = GetLocaleHandleById(5);
  v1 = 2;
  _crtGetLocaleInfoEx_Stub(LocaleHandleById, 0x22u, (LPWSTR)&LCData, 2);
  if ( (_WORD)LCData != 48 )
  {
    if ( (_WORD)LCData == 49 )
    {
      return 1;
    }
    else
    {
      v1 = 0;
      if ( (_WORD)LCData == 50 )
        return 3;
    }
  }
  return v1;
}
