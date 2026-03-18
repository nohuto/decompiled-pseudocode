/*
 * XREFs of ??1DWMSPRITEREF@@QEAA@XZ @ 0x1400278B8
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x14001C920 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x140023218 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     GreDwmNotifySpriteMonitorChange @ 0x1400258BC (GreDwmNotifySpriteMonitorChange.c)
 *     ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x14002778C (-vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z.c)
 *     GreHintSpriteShape @ 0x140027AF0 (GreHintSpriteShape.c)
 *     CreateOrGetRedirectionBitmap @ 0x14002CDD0 (CreateOrGetRedirectionBitmap.c)
 *     ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x14003040C (-GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z.c)
 *     GreGetSpriteAttributes @ 0x140038AC4 (GreGetSpriteAttributes.c)
 *     GreWindowLayoutComplete @ 0x1400873CC (GreWindowLayoutComplete.c)
 *     GreUpdateSpriteClipRgn @ 0x1400914A8 (GreUpdateSpriteClipRgn.c)
 *     GreTransferSpriteStateToDwmState @ 0x140169AB8 (GreTransferSpriteStateToDwmState.c)
 *     ?vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z @ 0x14016A8C8 (-vSpDwmMigrateSpriteLSurfReference@@YAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@PEAVSURFACE@@1@Z.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x14016AE00 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x14016B470 (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     GreGetWindowResizeDCompositionSynchronizationObject @ 0x1401BCA70 (GreGetWindowResizeDCompositionSynchronizationObject.c)
 *     GreIsWindowResizeInProgress @ 0x1401C90F0 (GreIsWindowResizeInProgress.c)
 *     GreWindowResizeComplete @ 0x1401DA938 (GreWindowResizeComplete.c)
 *     GreWindowResizeStarted @ 0x1401DAAE0 (GreWindowResizeStarted.c)
 *     GreWindowBeginLayoutUpdate @ 0x1401E2664 (GreWindowBeginLayoutUpdate.c)
 *     GreGetSprite @ 0x1401F89EC (GreGetSprite.c)
 *     CheckAndProcessSurfaceComplete @ 0x140220570 (CheckAndProcessSurfaceComplete.c)
 *     GreProtectSpriteContent @ 0x14022472C (GreProtectSpriteContent.c)
 *     ?GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHHHHHPEBG@Z @ 0x14032066C (-GreCreateSpriteInternal@@YAPEAXPEAUHDEV__@@PEAUHWND__@@PEAUtagRECT@@PEAUtagMINIWINDOWINFO@@KHHH.c)
 *     ?SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z @ 0x140320C58 (-SpDdCreateFullscreenSprite@@YAJAEAVXDCOBJ@@KPEAPEAXPEAPEAUHDC__@@@Z.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z @ 0x1403212B0 (-SpDdNotifyFullscreenSpriteUpdate@@YAJAEAVXDCOBJ@@PEAX@Z.c)
 *     GreCancelSynchronizedWindowResize @ 0x1403216AC (GreCancelSynchronizedWindowResize.c)
 *     GreConfirmWindowResizeCommit @ 0x140321770 (GreConfirmWindowResizeCommit.c)
 *     GreDeleteSpriteDelayDelete @ 0x140321830 (GreDeleteSpriteDelayDelete.c)
 * Callees:
 *     ?Detach@DWMSPRITEREF@@QEAAPEAVDWMSPRITE@@XZ @ 0x1401A17FC (-Detach@DWMSPRITEREF@@QEAAPEAVDWMSPRITE@@XZ.c)
 */

void __fastcall DWMSPRITEREF::~DWMSPRITEREF(DWMSPRITEREF *this)
{
  DWMSPRITEREF::Detach(this);
  PopThreadGuardedObject(this);
}
