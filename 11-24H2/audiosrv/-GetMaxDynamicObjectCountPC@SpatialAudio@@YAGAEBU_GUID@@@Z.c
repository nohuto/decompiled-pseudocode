/*
 * XREFs of ?GetMaxDynamicObjectCountPC@SpatialAudio@@YAGAEBU_GUID@@@Z @ 0x180038D9C
 * Callers:
 *     ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x1800382C0 (-ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ.c)
 *     ?ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1801299C0 (-ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDolbyAtmosMATEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180129BB4 (-ConfigureDolbyAtmosMATEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDolbyAtmosTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180129D98 (-ConfigureDolbyAtmosTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxHdmi@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180129F8C (-ConfigureDtsxHdmi@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxHeadphones@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012A100 (-ConfigureDtsxHeadphones@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012A288 (-ConfigureDtsxTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureMultiChannel@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012A410 (-ConfigureMultiChannel@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18012A538 (-ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1800A7F1C (memcmp_0.c)
 */

__int64 __fastcall SpatialAudio::GetMaxDynamicObjectCountPC(SpatialAudio *this, const struct _GUID *a2)
{
  if ( *(_OWORD *)this == MICROSOFT_HRTF_SPATIAL_ENCODER )
    return 128LL;
  if ( *(_OWORD *)this == DOLBY_ATMOS_MAT_SPATIAL_ENCODER )
    return 20LL;
  if ( *(_OWORD *)this == DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER
    || *(_OWORD *)this == DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER
    || *(_OWORD *)this == DTSX_HEADPHONES_SPATIAL_ENCODER
    || *(_OWORD *)this == DTSX_TWOSPEAKER_SPATIAL_ENCODER )
  {
    return 128LL;
  }
  if ( *(_OWORD *)this == DTSX_HDMI_SPATIAL_ENCODER )
    return 32LL;
  memcmp_0(this, &MULTICHANNEL_SPATIAL_ENCODER, 0x10uLL);
  return 0LL;
}
