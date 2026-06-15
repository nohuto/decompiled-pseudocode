/*
 * XREFs of ?IgnoreDriverFormatChangeNotifications@CBtLeAudioResourceManager@@WBNI@EAA_NXZ @ 0x1800ED0C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CBtLeAudioResourceManager::IgnoreDriverFormatChangeNotifications(__int64 a1)
{
  return CSpatialAudioTechHRTF::HasSupportedChannelMasks((CSpatialAudioTechHRTF *)(a1 - 472));
}
