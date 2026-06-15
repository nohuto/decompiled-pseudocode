/*
 * XREFs of ApiSetQueryApiSetPresence_0 @ 0x1800AB756
 * Callers:
 *     IsWinStationIsSessionRemoteablePresent @ 0x1800AACA8 (IsWinStationIsSessionRemoteablePresent.c)
 *     IsWTSQuerySessionInformationWPresent @ 0x1800AAE24 (IsWTSQuerySessionInformationWPresent.c)
 *     IsAudioPolicyManagerExtension_OnDeviceFormatChangedPresent @ 0x1800AAFB4 (IsAudioPolicyManagerExtension_OnDeviceFormatChangedPresent.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800AB328 (IsGetDefaultSpatialRenderingModePresent.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ApiSetQueryApiSetPresence_0(__int64 a1, __int64 a2)
{
  return ApiSetQueryApiSetPresence(a1, a2);
}
