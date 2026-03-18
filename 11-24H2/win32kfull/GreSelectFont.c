/*
 * XREFs of GreSelectFont @ 0x1400377A0
 * Callers:
 *     DrawFrameControl @ 0x1400373A4 (DrawFrameControl.c)
 *     xxxDrawState @ 0x14003A7F0 (xxxDrawState.c)
 *     xxxMenuDraw @ 0x14006938C (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x140069860 (xxxDrawMenuItem.c)
 *     xxxMNCompute @ 0x14006A318 (xxxMNCompute.c)
 *     ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x14006AC70 (-xxxMNItemSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAU.c)
 *     xxxMNInvertItem @ 0x14006BB74 (xxxMNInvertItem.c)
 *     xxxDrawCaptionTemp @ 0x14007B5FC (xxxDrawCaptionTemp.c)
 *     MNAllocMenuState @ 0x14009A738 (MNAllocMenuState.c)
 *     xxxSetNCFonts @ 0x140112490 (xxxSetNCFonts.c)
 *     ?UserReinitializeStockFonts@@YAXKH@Z @ 0x140152AA8 (-UserReinitializeStockFonts@@YAXKH@Z.c)
 *     _ServerFixupMenuDC @ 0x14015A1FC (_ServerFixupMenuDC.c)
 *     FinalUserInit @ 0x1401CD2B4 (FinalUserInit.c)
 *     CreateScaledFont @ 0x1401CD670 (CreateScaledFont.c)
 *     ValidateExternalLogFont @ 0x1401CDBB4 (ValidateExternalLogFont.c)
 *     MNSetupAnimationDC @ 0x1401CDE94 (MNSetupAnimationDC.c)
 *     ?xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z @ 0x1401EA0E8 (-xxxHotTrackMenu@@YAHPEAUtagWND@@IH@Z.c)
 *     CreateCompatiblePublicDC @ 0x1401EE788 (CreateCompatiblePublicDC.c)
 *     xxxDrawMenuBarUnderlines @ 0x1401FF370 (xxxDrawMenuBarUnderlines.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1402B5C10 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     SelectFont @ 0x1402EB250 (SelectFont.c)
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepSelectFont@@YAPEAUHFONT__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x140037860 (-GrepSelectFont@@YAPEAUHFONT__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 */

HFONT __fastcall GreSelectFont(HDC a1, HFONT a2)
{
  HFONT v3; // rbx
  _QWORD v5[15]; // [rsp+20h] [rbp-78h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v5, a1);
  v3 = 0LL;
  if ( v5[0] )
    v3 = GrepSelectFont((struct XDCOBJ *)v5, a2, 1);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v5);
  return v3;
}
