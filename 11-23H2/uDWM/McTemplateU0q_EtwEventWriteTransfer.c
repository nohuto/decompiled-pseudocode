/*
 * XREFs of McTemplateU0q_EtwEventWriteTransfer @ 0x18000DB8C
 * Callers:
 *     ?ValidateVisual@CThumbnailVisual@@UEAAJXZ @ 0x18000CB80 (-ValidateVisual@CThumbnailVisual@@UEAAJXZ.c)
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800264FC (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 *     ?OnNotifyRoundTripReply@CLivePreview@@QEAA_NI@Z @ 0x1800566FC (-OnNotifyRoundTripReply@CLivePreview@@QEAA_NI@Z.c)
 *     ?UpdateTransition@CContactStationaryVisual@@MEAAJXZ @ 0x18006C4B0 (-UpdateTransition@CContactStationaryVisual@@MEAAJXZ.c)
 *     ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x18006D254 (-UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ.c)
 *     ?ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x1800B14D4 (-ProcessTouchContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_.c)
 *     ?Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_N@Z @ 0x1800B2710 (-Start@CContactStationaryVisual@@QEAAJW4STATIONARY_ANIMATION_TYPE@1@PEBUtagPOINT@@PEBUtagRECT@@_.c)
 *     ?Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z @ 0x1800BFB90 (-Start@CFlickVisual@@QEAAJPEBUtagPOINT@@W4FLICK_TYPE@@I@Z.c)
 *     ?Stop@CFlickVisual@@UEAAXXZ @ 0x1800C0010 (-Stop@CFlickVisual@@UEAAXXZ.c)
 *     ??1CPenBarrelKeyVisual@@MEAA@XZ @ 0x1800CCB40 (--1CPenBarrelKeyVisual@@MEAA@XZ.c)
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800CCFF4 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 *     ?Stop@CPenPressHoldVisual@@UEAAXXZ @ 0x1800CD1E0 (-Stop@CPenPressHoldVisual@@UEAAXXZ.c)
 *     ?Stop@CScreenRotation@@QEAAX_N0@Z @ 0x1800D7C74 (-Stop@CScreenRotation@@QEAAX_N0@Z.c)
 *     ?SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z @ 0x1800E8790 (-SetETWAnimation@CTouchPressHoldVisual@@AEAAXW4TPHANIM@1@@Z.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18003CC40 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 */

__int64 __fastcall McTemplateU0q_EtwEventWriteTransfer(__int64 a1, int a2, int a3)
{
  _QWORD v4[3]; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]
  int v7; // [rsp+80h] [rbp+18h] BYREF

  v7 = a3;
  v4[2] = &v7;
  v6 = 0;
  v5 = 4;
  return McGenEventWrite_EtwEventWriteTransfer(
           (unsigned int)&Microsoft_Windows_Dwm_Udwm_Provider_Context,
           a2,
           a3,
           2,
           (__int64)v4);
}
