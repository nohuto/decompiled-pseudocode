/*
 * XREFs of GetOemBitmapInfoForDpi @ 0x1C007684C
 * Callers:
 *     BitBltSysBmp @ 0x1C0076710 (BitBltSysBmp.c)
 *     xxxDrawMenuBarUnderlines @ 0x1C00A3B00 (xxxDrawMenuBarUnderlines.c)
 *     xxxDrawCaptionBar @ 0x1C00E2158 (xxxDrawCaptionBar.c)
 *     NtUserBitBltSysBmp @ 0x1C01CC510 (NtUserBitBltSysBmp.c)
 *     NtUserGetOemBitmapSize @ 0x1C01D21B0 (NtUserGetOemBitmapSize.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x1C022AF60 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1C022B0F4 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1C0232B64 (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     MNDrawArrow @ 0x1C0233DA4 (MNDrawArrow.c)
 *     xxxDrawMenuItem @ 0x1C02343FC (xxxDrawMenuItem.c)
 *     xxxRealDrawMenuItem @ 0x1C0236080 (xxxRealDrawMenuItem.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C02375AC (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1C0237A2C (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     xxxMNCompute @ 0x1C0237FB0 (xxxMNCompute.c)
 * Callees:
 *     ?EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z @ 0x1C00768E8 (-EnsureOemBitmapInfoForDpiSlot@@YAXPEAUOEMBITMAPSET@@I@Z.c)
 *     GetDpiCacheSlot @ 0x1C00EB0D0 (GetDpiCacheSlot.c)
 */

char *__fastcall GetOemBitmapInfoForDpi(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  unsigned int v3; // r11d
  struct OEMBITMAPSET *v4; // rbx
  unsigned int v5; // r11d
  __int64 CurrentProcessWin32Process; // rax

  v2 = (int)a1;
  v3 = a2;
  if ( !a2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v3 = *(unsigned __int16 *)(CurrentProcessWin32Process + 284);
  }
  v4 = (struct OEMBITMAPSET *)((char *)&gOemBitmapSet + 760 * (unsigned int)GetDpiCacheSlot(v3));
  EnsureOemBitmapInfoForDpiSlot(v4, v5);
  return (char *)v4 + 8 * v2 + 16;
}
