/*
 * XREFs of ?IgnoreDriverFormatChangeNotifications@CBtLeAudioResourceManager@@WCBI@EAA_NXZ @ 0x1800F2120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBtLeAudioResourceManager::IgnoreDriverFormatChangeNotifications(__int64 a1)
{
  return CSpatialAudioTechHRTF::HasSupportedChannelMasks((CSpatialAudioTechHRTF *)(a1 - 536));
}
