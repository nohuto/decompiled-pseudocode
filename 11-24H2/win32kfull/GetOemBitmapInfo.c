/*
 * XREFs of GetOemBitmapInfo @ 0x14007B520
 * Callers:
 *     xxxRealDrawMenuItem @ 0x14003B17C (xxxRealDrawMenuItem.c)
 *     xxxDrawMenuItem @ 0x140069860 (xxxDrawMenuItem.c)
 *     xxxMNCompute @ 0x14006A318 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x14006AC70 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x14006B8A4 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     BitBltSysBmp @ 0x14007B288 (BitBltSysBmp.c)
 *     xxxDrawMenuBarUnderlines @ 0x1401FF370 (xxxDrawMenuBarUnderlines.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1401FFBD8 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     ?BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z @ 0x140204794 (-BltMe4Times@@YAXIHHPEAUHDC__@@PEAUtagCURSOR@@I@Z.c)
 *     NtUserBitBltSysBmp @ 0x140204940 (NtUserBitBltSysBmp.c)
 *     NtUserGetOemBitmapSize @ 0x140296B30 (NtUserGetOemBitmapSize.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1402E8A4C (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 *     MNDrawArrow @ 0x1402E9214 (MNDrawArrow.c)
 * Callees:
 *     GetDpiForSystem @ 0x140079854 (GetDpiForSystem.c)
 *     GetOemBitmapInfoForDpi @ 0x14007B544 (GetOemBitmapInfoForDpi.c)
 */

__int64 __fastcall GetOemBitmapInfo(__int64 a1)
{
  unsigned int v1; // ebx
  unsigned int DpiForSystem; // eax

  v1 = a1;
  DpiForSystem = GetDpiForSystem(a1);
  return GetOemBitmapInfoForDpi(v1, DpiForSystem);
}
