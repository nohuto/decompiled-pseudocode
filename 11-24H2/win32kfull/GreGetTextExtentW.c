/*
 * XREFs of GreGetTextExtentW @ 0x14007E5DC
 * Callers:
 *     xxxPSMGetTextExtent @ 0x14003D240 (xxxPSMGetTextExtent.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x14006B8A4 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     xxxDrawCaptionTemp @ 0x14007B5FC (xxxDrawCaptionTemp.c)
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x14007C284 (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z @ 0x14007DA3C (-NeedsEndEllipsis@@YAHPEAUHDC__@@PEBGPEAHPEAUDRAWTEXTDATA@@I3H@Z.c)
 *     GetCharDimensions @ 0x1401CDCAC (GetCharDimensions.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1402B5C10 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1402E9060 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1402ECC34 (xxxPSMTextOut.c)
 * Callees:
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400A3BBC (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ??0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400BB34C (--0UAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1400BB3F0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?GrepGetTextExtentW@@YAHAEAVUDCOBJ@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z @ 0x1400C0454 (-GrepGetTextExtentW@@YAHAEAVUDCOBJ@@PEAGHPEAUtagSIZE@@IW4EntryPoint@RFONTOBJ@@@Z.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14031D3AC (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 */

__int64 __fastcall GreGetTextExtentW(HDC a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebp
  __int64 SessionState; // rax
  unsigned int TextExtentW; // ebx
  _BYTE v11[64]; // [rsp+30h] [rbp-98h] BYREF
  _QWORD v12[10]; // [rsp+70h] [rbp-58h] BYREF

  v5 = a3;
  SessionState = W32GetSessionState(a1, a2, a3);
  EUDCCountRegion::EUDCCountRegion(
    (EUDCCountRegion *)v11,
    (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
  TextExtentW = 0;
  if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v11) )
  {
    UAPIDCOBJ::UAPIDCOBJ((UAPIDCOBJ *)v12, a1);
    if ( v12[0] )
      TextExtentW = GrepGetTextExtentW(v12, a2, v5, a4, 1, 1024);
    DCOBJ::~DCOBJ((DCOBJ *)v12);
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v11);
    return TextExtentW;
  }
  else
  {
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v11);
    return 0LL;
  }
}
