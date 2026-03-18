/*
 * XREFs of AnFwConfigureProgressResources @ 0x140BA1CFC
 * Callers:
 *     BgpFwLibraryInitialize @ 0x140BA5400 (BgpFwLibraryInitialize.c)
 * Callees:
 *     KeInitializeEvent @ 0x140401B80 (KeInitializeEvent.c)
 *     BgpGetBitsPerPixel @ 0x140481498 (BgpGetBitsPerPixel.c)
 *     BgpGxRectangleSize @ 0x1404B7A7C (BgpGxRectangleSize.c)
 *     BgpTxtRegionSize @ 0x14068D4AC (BgpTxtRegionSize.c)
 *     BgpTxtCreateRegion @ 0x140BA2908 (BgpTxtCreateRegion.c)
 *     BgpFoGetFontHandle @ 0x140BA52B0 (BgpFoGetFontHandle.c)
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
  KeInitializeEvent(&stru_140E64D80, NotificationEvent, 1u);
  if ( !a1 || (a1[6] & 1) == 0 )
    return 0LL;
  if ( dword_140EEFF1C == 1 )
  {
    word_140E0ECB4 = 0;
    word_140E0ECA8 = -7936;
    word_140E0ECAC = -7818;
    word_140E0ECB0 = -7937;
  }
  if ( (int)BgpFoGetFontHandle(0LL) < 0 )
    return 0LL;
  v4[0] = HIDWORD(qword_140EEFF10);
  v4[1] = dword_140EEFF18;
  v6 = a1[5];
  v7 = 1;
  if ( (int)BgpTxtCreateRegion((_DWORD)a1, (int)a1 + 8, (unsigned int)v4, (int)a1 + 28, (__int64)&v8, 10) < 0 )
    return 0LL;
  BitsPerPixel = BgpGetBitsPerPixel();
  dword_140EEFDB4 = ((BgpGxRectangleSize(a1[3], a1[2], BitsPerPixel) + 15) & 0xFFFFFFF0) + 128;
  dword_140EEFDB0 = dword_140EEFDB4 * ((unsigned __int16)word_140E0ECAC - (unsigned __int16)word_140E0ECA8 + 1);
  dword_140EEFDB8 = BgpTxtRegionSize(v8);
  return v8;
}
