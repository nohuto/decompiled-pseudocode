/*
 * XREFs of GreBitBltInternal @ 0x14001970C
 * Callers:
 *     xxxCompositedPaint @ 0x140032604 (xxxCompositedPaint.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x140036838 (-UT_InvertCaret@@YAXXZ.c)
 *     ?BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z @ 0x140039ADC (-BltOldRedirectionBitsToNewBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@1PEBUtagBITMAP@@2HH@Z.c)
 *     UpdateSpriteArea @ 0x14003A40C (UpdateSpriteArea.c)
 *     xxxRealDrawMenuItem @ 0x14003B17C (xxxRealDrawMenuItem.c)
 *     BltColor @ 0x14003BFF0 (BltColor.c)
 *     xxxClientExtTextOutW @ 0x14003C3AC (xxxClientExtTextOutW.c)
 *     xxxDrawCaptionBar @ 0x14006E51C (xxxDrawCaptionBar.c)
 *     MNAnimate @ 0x14006F328 (MNAnimate.c)
 *     ?_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z @ 0x140077F7C (-_InternalGetIconInfo@@YA_NPEAUtagCURSOR@@PEAU_ICONINFO@@PEAU_UNICODE_STRING@@2PEAK_N@Z.c)
 *     _DrawIconEx @ 0x140078A10 (_DrawIconEx.c)
 *     BitBltSysBmp @ 0x14007B288 (BitBltSysBmp.c)
 *     xxxClientLpkDrawTextEx @ 0x14007C3CC (xxxClientLpkDrawTextEx.c)
 *     xxxClientGetTextExtentPointW @ 0x14007CAC8 (xxxClientGetTextExtentPointW.c)
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x140096308 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     CreateSpb @ 0x1400980B0 (CreateSpb.c)
 *     StopFade @ 0x1401EE440 (StopFade.c)
 *     CreateCompatiblePublicDC @ 0x1401EE788 (CreateCompatiblePublicDC.c)
 *     ?DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z @ 0x1401FFBD8 (-DrawCaptionIcon@@YAXPEAUHDC__@@PEAUtagRECT@@PEAUtagCURSOR@@PEAUHBRUSH__@@I@Z.c)
 *     NtUserBitBltSysBmp @ 0x140204940 (NtUserBitBltSysBmp.c)
 *     RecolorDeskPattern @ 0x1402055C0 (RecolorDeskPattern.c)
 *     ?zzzBltValidBits@@YA?AW4BltBitsResult@@PEAUtagSMWP@@@Z @ 0x14022C6A8 (-zzzBltValidBits@@YA-AW4BltBitsResult@@PEAUtagSMWP@@@Z.c)
 *     xxxPrintWindow @ 0x14023A30C (xxxPrintWindow.c)
 *     xxxSnapWindow @ 0x1402641A0 (xxxSnapWindow.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x14026564C (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     RestoreSpb @ 0x1402AF460 (RestoreSpb.c)
 *     xxxClientPSMTextOut @ 0x1402BC690 (xxxClientPSMTextOut.c)
 *     ?xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z @ 0x1402DDA44 (-xxxAnimateCaption@@YAXPEAUtagWND@@PEAUHDC__@@PEAUtagRECT@@2@Z.c)
 *     ?DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z @ 0x1402E8A4C (-DrawMenuItemCheckMark@@YAHPEAUHDC__@@PEAUtagITEM@@H@Z.c)
 * Callees:
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x14001980C (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@AEAVXDCOBJ@@@Z @ 0x14001A56C (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@AEAVXDCOBJ@@@Z.c)
 *     ?GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z @ 0x14001A5E0 (-GrepBitBltImpl@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHKKK@Z.c)
 */

__int64 __fastcall GreBitBltInternal(
        HDC a1,
        int a2,
        int a3,
        int a4,
        int a5,
        HDC a6,
        int a7,
        int a8,
        unsigned int a9,
        unsigned int a10,
        unsigned int a11)
{
  unsigned int v14; // ebx
  _QWORD v16[14]; // [rsp+60h] [rbp-F8h] BYREF
  _BYTE v17[128]; // [rsp+D0h] [rbp-88h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v16, a1);
  OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v17, a6, (struct XDCOBJ *)v16);
  v14 = 0;
  if ( v16[0] )
    v14 = GrepBitBltImpl((struct XDCOBJ *)v16, a2, a3, a4, a5, (struct OPTAPIDCOBJ *)v17, a7, a8, a9, a10, a11);
  else
    EngSetLastError(6u);
  OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v17);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v16);
  return v14;
}
