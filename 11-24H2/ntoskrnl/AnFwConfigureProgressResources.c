/*
 * XREFs of AnFwConfigureProgressResources @ 0x140BB3CFC
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140BB7400 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeInitializeEvent @ 0x140402260 (KeInitializeEvent.c)
 *     BgpGetBitsPerPixel @ 0x14047D508 (BgpGetBitsPerPixel.c)
 *     BgpGxRectangleSize @ 0x1404B1B30 (BgpGxRectangleSize.c)
 *     BgpTxtRegionSize @ 0x14069987C (BgpTxtRegionSize.c)
 *     BgpTxtCreateRegion @ 0x140BB4908 (BgpTxtCreateRegion.c)
 *     BgpFoGetFontHandle @ 0x140BB72B0 (BgpFoGetFontHandle.c)
 */

__int64 __fastcall AnFwConfigureProgressResources(int *a1)
{
  int BitsPerPixel; // eax
  _DWORD v4[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+50h] [rbp-18h]
  int v7; // [rsp+54h] [rbp-14h]
  __int64 v8; // [rsp+70h] [rbp+8h] BYREF

  v8 = 0LL;
  v5 = 0LL;
  KeInitializeEvent(&stru_140E65140, NotificationEvent, 1u);
  if ( !a1 || (a1[6] & 1) == 0 )
    return 0LL;
  if ( dword_140EF03FC == 1 )
  {
    word_140E0EF90 = 0;
    word_140E0EF8C = -7936;
    word_140E0EF88 = -7818;
    word_140E0EEEC = -7937;
  }
  if ( (int)BgpFoGetFontHandle(0LL) < 0 )
    return 0LL;
  v4[0] = HIDWORD(qword_140EF03F0);
  v4[1] = dword_140EF03F8;
  v6 = a1[5];
  v7 = 1;
  if ( (int)BgpTxtCreateRegion((_DWORD)a1, (int)a1 + 8, (unsigned int)v4, (int)a1 + 28, (__int64)&v8, 10) < 0 )
    return 0LL;
  BitsPerPixel = BgpGetBitsPerPixel();
  dword_140EF0294 = ((BgpGxRectangleSize(a1[3], a1[2], BitsPerPixel) + 15) & 0xFFFFFFF0) + 128;
  dword_140EF0290 = dword_140EF0294 * ((unsigned __int16)word_140E0EF88 - (unsigned __int16)word_140E0EF8C + 1);
  dword_140EF0298 = BgpTxtRegionSize(v8);
  return v8;
}
