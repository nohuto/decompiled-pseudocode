/*
 * XREFs of AnFwConfigureProgressResources @ 0x140BB1CFC
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140BB5400 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeInitializeEvent @ 0x140409D80 (KeInitializeEvent.c)
 *     BgpGetBitsPerPixel @ 0x1404822C8 (BgpGetBitsPerPixel.c)
 *     BgpGxRectangleSize @ 0x1404B7350 (BgpGxRectangleSize.c)
 *     BgpTxtRegionSize @ 0x1406987FC (BgpTxtRegionSize.c)
 *     BgpTxtCreateRegion @ 0x140BB2908 (BgpTxtCreateRegion.c)
 *     BgpFoGetFontHandle @ 0x140BB52B0 (BgpFoGetFontHandle.c)
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
  KeInitializeEvent(&stru_140E64FC0, NotificationEvent, 1u);
  if ( !a1 || (a1[6] & 1) == 0 )
    return 0LL;
  if ( dword_140EF01DC == 1 )
  {
    word_140E0EE20 = 0;
    word_140E0EE1C = -7936;
    word_140E0EEC8 = -7818;
    word_140E0EE24 = -7937;
  }
  if ( (int)BgpFoGetFontHandle(0LL) < 0 )
    return 0LL;
  v4[0] = HIDWORD(qword_140EF01D0);
  v4[1] = dword_140EF01D8;
  v6 = a1[5];
  v7 = 1;
  if ( (int)BgpTxtCreateRegion((_DWORD)a1, (int)a1 + 8, (unsigned int)v4, (int)a1 + 28, (__int64)&v8, 10) < 0 )
    return 0LL;
  BitsPerPixel = BgpGetBitsPerPixel();
  dword_140EF0074 = ((BgpGxRectangleSize(a1[3], a1[2], BitsPerPixel) + 15) & 0xFFFFFFF0) + 128;
  dword_140EF0070 = dword_140EF0074 * ((unsigned __int16)word_140E0EEC8 - (unsigned __int16)word_140E0EE1C + 1);
  dword_140EF0078 = BgpTxtRegionSize(v8);
  return v8;
}
