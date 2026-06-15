/*
 * XREFs of _GetAudioVolumeNotificationData_::_1_::dtor$1 @ 0x1400959EC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GetAudioVolumeNotificationData_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA2>::~unique_ptr<AUDIO_VOLUME_NOTIFICATION_DATA2>((void **)(a2 + 128));
}
