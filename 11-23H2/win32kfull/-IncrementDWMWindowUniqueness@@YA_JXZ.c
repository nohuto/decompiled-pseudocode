/*
 * XREFs of ?IncrementDWMWindowUniqueness@@YA_JXZ @ 0x1C00AA9BC
 * Callers:
 *     DwmAsyncChildLink @ 0x1C0021130 (DwmAsyncChildLink.c)
 *     DwmAsyncChildCreate @ 0x1C0021540 (DwmAsyncChildCreate.c)
 *     DwmAsyncChildDestroy @ 0x1C00216A8 (DwmAsyncChildDestroy.c)
 *     DwmAsyncChildUnlink @ 0x1C002174C (DwmAsyncChildUnlink.c)
 *     DwmAsyncDesktopCreate @ 0x1C002217C (DwmAsyncDesktopCreate.c)
 *     DwmAsyncDestroySprite @ 0x1C0026DAC (DwmAsyncDestroySprite.c)
 *     DwmAsyncDirtySprite @ 0x1C0027344 (DwmAsyncDirtySprite.c)
 *     DwmAsyncShowSprite @ 0x1C008A4E8 (DwmAsyncShowSprite.c)
 *     DwmSyncDesktopSwitch @ 0x1C008F218 (DwmSyncDesktopSwitch.c)
 *     DwmAsyncNotifyDisplayModeChange @ 0x1C009D2B0 (DwmAsyncNotifyDisplayModeChange.c)
 *     DwmAsyncCreateSprite @ 0x1C00AA528 (DwmAsyncCreateSprite.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C00AA6F0 (DwmAsyncSetCompositionAttribute.c)
 *     DwmAsyncChildZBandChange @ 0x1C00AA850 (DwmAsyncChildZBandChange.c)
 *     DwmAsyncOwnerChange @ 0x1C00AA8FC (DwmAsyncOwnerChange.c)
 *     DwmAsyncActivationChange @ 0x1C00E13EC (DwmAsyncActivationChange.c)
 *     DwmAsyncCancelRotationDelay @ 0x1C026BD3C (DwmAsyncCancelRotationDelay.c)
 *     DwmAsyncNotifyRotationModeChange @ 0x1C026C9E8 (DwmAsyncNotifyRotationModeChange.c)
 *     DwmAsyncProcessSurfaceComplete @ 0x1C026CB74 (DwmAsyncProcessSurfaceComplete.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C026CF28 (DwmAsyncSendWindowArrangingData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IncrementDWMWindowUniqueness(__int64 a1)
{
  return _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(SGDGetSessionState(a1) + 32) + 13248LL));
}
