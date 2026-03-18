/*
 * XREFs of ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x140062E44
 * Callers:
 *     DwmAsyncZorderSprite @ 0x140027920 (DwmAsyncZorderSprite.c)
 *     DwmAsyncDestroySprite @ 0x140030804 (DwmAsyncDestroySprite.c)
 *     DwmAsyncChildStyleChange @ 0x140032044 (DwmAsyncChildStyleChange.c)
 *     xxxSimpleDoSyncPaint @ 0x1400477B0 (xxxSimpleDoSyncPaint.c)
 *     DwmChildRectChange @ 0x140048630 (DwmChildRectChange.c)
 *     GreUpdateSpriteVisRgn @ 0x1400617E0 (GreUpdateSpriteVisRgn.c)
 *     zzzLockDisplayAreaAndInvalidateDCCache @ 0x140061FD0 (zzzLockDisplayAreaAndInvalidateDCCache.c)
 *     DwmAsyncActivationChange @ 0x14006CCE0 (DwmAsyncActivationChange.c)
 *     UnlinkWindow @ 0x140075240 (UnlinkWindow.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1400872A4 (DwmAsyncSetCompositionAttribute.c)
 *     DwmAsyncOwnerChange @ 0x14009188C (DwmAsyncOwnerChange.c)
 *     ?GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HHK@Z @ 0x1400CBC4C (-GrepUpdateSpriteImpl@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXAEAVOPTAPIDCOBJ@@PEAUtagPOINT@@PEAUtagSIZE.c)
 *     DwmSyncDesktopSwitch @ 0x14010AB40 (DwmSyncDesktopSwitch.c)
 *     DwmAsyncChildZBandChange @ 0x1401573D4 (DwmAsyncChildZBandChange.c)
 *     DwmAsyncChildLink @ 0x1401854E0 (DwmAsyncChildLink.c)
 *     DwmAsyncChildUnlink @ 0x1401855A4 (DwmAsyncChildUnlink.c)
 *     DwmAsyncChildCreate @ 0x14018A710 (DwmAsyncChildCreate.c)
 *     DwmAsyncChildDestroy @ 0x14018A918 (DwmAsyncChildDestroy.c)
 *     DwmAsyncNotifySpriteMonitorChange @ 0x1401A7580 (DwmAsyncNotifySpriteMonitorChange.c)
 *     DwmAsyncCreateSprite @ 0x1401B807C (DwmAsyncCreateSprite.c)
 *     DwmAsyncDirtySprite @ 0x1401C4D94 (DwmAsyncDirtySprite.c)
 *     DwmAsyncProcessSurfaceComplete @ 0x1401DAF10 (DwmAsyncProcessSurfaceComplete.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1401E0C40 (DwmAsyncSendWindowArrangingData.c)
 *     DwmAsyncNotifyDisplayModeChange @ 0x140201D20 (DwmAsyncNotifyDisplayModeChange.c)
 *     DwmAsyncDesktopCreate @ 0x140268C14 (DwmAsyncDesktopCreate.c)
 *     DwmAsyncCancelRotationDelay @ 0x140323204 (DwmAsyncCancelRotationDelay.c)
 *     DwmAsyncNotifyRotationModeChange @ 0x140323960 (DwmAsyncNotifyRotationModeChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IncrementDWMWindowUniqueness(__int64 a1, __int64 a2, __int64 a3)
{
  return _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96) + 4648LL));
}
