/*
 * XREFs of GreExtTextOutW @ 0x14007A7F4
 * Callers:
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x14003C16C (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 *     ?DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z @ 0x140079E7C (-DrawIt@@YAHPEAUHDC__@@PEAUtagRECT@@IG@Z.c)
 *     ?DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x14007A41C (-DrawBox@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z @ 0x14007A904 (-FlipUserTextOutW@@YAHPEAUHDC__@@HHPEBGH@Z.c)
 *     xxxDrawCaptionTemp @ 0x14007B5FC (xxxDrawCaptionTemp.c)
 *     ?DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z @ 0x14007BF14 (-DrawGrip@@YAHPEAUHDC__@@PEAUtagRECT@@I@Z.c)
 *     ?PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z @ 0x1402B5C10 (-PaintWatermark@@YAXPEAUHDC__@@PEBUtagRECT@@@Z.c)
 *     xxxPSMTextOut @ 0x1402ECC34 (xxxPSMTextOut.c)
 *     ?UserTextOutWInternal@@YAHPEAUHDC__@@HHPEBGIK@Z @ 0x1402F27D0 (-UserTextOutWInternal@@YAHPEAUHDC__@@HHPEBGIK@Z.c)
 * Callees:
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x14001A440 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14001A490 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1EUDCCountRegion@@QEAA@XZ @ 0x1400A3BBC (--1EUDCCountRegion@@QEAA@XZ.c)
 *     ?GrepExtTextOutW@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHPEAXKW4EntryPoint@RFONTOBJ@@@Z @ 0x140172E10 (-GrepExtTextOutW@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHPEAXKW4EntryP.c)
 *     ??0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z @ 0x14025B654 (--0EUDCCountRegion@@QEAA@AEAUGLOBALS@Font@Gre@@@Z.c)
 *     ?IsReady@EUDCCountRegion@@QEBA_NXZ @ 0x14031D3AC (-IsReady@EUDCCountRegion@@QEBA_NXZ.c)
 */

__int64 GreExtTextOutW(HDC a1, unsigned int a2, unsigned int a3, int a4, __int64 a5, __int64 a6, int a7, ...)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // ebx
  __int64 SessionState; // rax
  _BYTE v16[64]; // [rsp+60h] [rbp-B8h] BYREF
  _QWORD v17[14]; // [rsp+A0h] [rbp-78h] BYREF
  va_list va; // [rsp+158h] [rbp+40h] BYREF

  va_start(va, a7);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v17, a1);
  v13 = 0;
  if ( v17[0] )
  {
    SessionState = W32GetSessionState(v11, v10, v12);
    EUDCCountRegion::EUDCCountRegion(
      (EUDCCountRegion *)v16,
      (struct Gre::Font::GLOBALS *)(*(_QWORD *)(SessionState + 96) + 4872LL));
    if ( EUDCCountRegion::IsReady((EUDCCountRegion *)v16) )
      v13 = *(_DWORD *)GrepExtTextOutW(va, v17, a2, a3, a4, a5, a6, a7, 0LL, 0LL, 0, 1025);
    EUDCCountRegion::~EUDCCountRegion((EUDCCountRegion *)v16);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v17);
    return v13;
  }
  else
  {
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v17);
    return 0LL;
  }
}
