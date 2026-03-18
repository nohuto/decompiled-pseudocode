/*
 * XREFs of CreateCompatiblePublicDC @ 0x1401EE788
 * Callers:
 *     xxxClientExtTextOutW @ 0x14003C3AC (xxxClientExtTextOutW.c)
 *     xxxClientLpkDrawTextEx @ 0x14007C3CC (xxxClientLpkDrawTextEx.c)
 *     xxxClientGetTextExtentPointW @ 0x14007CAC8 (xxxClientGetTextExtentPointW.c)
 *     xxxClientPSMTextOut @ 0x1402BC690 (xxxClientPSMTextOut.c)
 * Callees:
 *     GreCreateCompatibleBitmapEx @ 0x1400135CC (GreCreateCompatibleBitmapEx.c)
 *     GreExtGetObjectW @ 0x14001442C (GreExtGetObjectW.c)
 *     GreGetDCObject @ 0x1400191F4 (GreGetDCObject.c)
 *     GreBitBltInternal @ 0x14001970C (GreBitBltInternal.c)
 *     GreGetLayout @ 0x140037748 (GreGetLayout.c)
 *     GreSelectFont @ 0x1400377A0 (GreSelectFont.c)
 *     GreSetTextAlign @ 0x140038C8C (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1401F1C90 (GreGetTextAlign.c)
 *     GetDpiServerInfoForCurrentThread @ 0x1402F189C (GetDpiServerInfoForCurrentThread.c)
 */

HDC __fastcall CreateCompatiblePublicDC(HDC a1, HBITMAP *a2)
{
  HDC result; // rax
  __int64 CompatibleDC; // rax
  HDC v6; // rdi
  Gre::Base *DCObject; // rax
  HBITMAP CompatibleBitmap; // rax
  HBITMAP v9; // rbp
  __int64 DpiServerInfoForCurrentThread; // rax
  HFONT v11; // rbx
  int TextAlign; // eax
  int v13[8]; // [rsp+60h] [rbp-28h] BYREF

  memset(v13, 0, sizeof(v13));
  if ( (unsigned int)GreGetObjectOwner(a1, 1LL) )
    return a1;
  CompatibleDC = GreCreateCompatibleDC(a1);
  v6 = (HDC)CompatibleDC;
  if ( !CompatibleDC )
    return 0LL;
  if ( !(unsigned int)GreSetDCOwnerEx(CompatibleDC, 2147483650LL, 0LL, 0LL)
    || (DCObject = (Gre::Base *)GreGetDCObject(a1, 327680), !(unsigned int)GreExtGetObjectW(DCObject, 32LL, v13)) )
  {
    GreDeleteDC(v6);
    return 0LL;
  }
  CompatibleBitmap = GreCreateCompatibleBitmapEx(a1, v13[1], v13[2], 0, 0LL, 0LL);
  v9 = CompatibleBitmap;
  if ( !CompatibleBitmap || !(unsigned int)GreSetBitmapOwner(CompatibleBitmap, 2147483650LL) )
  {
    GreDeleteDC(v6);
    if ( v9 )
      GreDeleteObject(v9);
    return 0LL;
  }
  GreSelectBitmap(v6, v9);
  DpiServerInfoForCurrentThread = GetDpiServerInfoForCurrentThread();
  v11 = GreSelectFont(a1, *(HFONT *)(DpiServerInfoForCurrentThread + 24));
  GreSelectFont(a1, v11);
  GreSelectFont(v6, v11);
  TextAlign = GreGetTextAlign(a1);
  GreSetTextAlign(v6, TextAlign);
  if ( (GreGetLayout(a1) & 1) != 0 )
    GreSetLayout(v6, (unsigned int)(v13[1] - 1), 1LL);
  GreBitBltInternal(v6, 0, 0, v13[1], v13[2], a1, 0, 0, 0xCC0020u, 0, 0);
  result = v6;
  *a2 = v9;
  return result;
}
