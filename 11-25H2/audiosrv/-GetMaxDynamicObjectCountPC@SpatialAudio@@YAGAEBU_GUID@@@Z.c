/*
 * XREFs of ?GetMaxDynamicObjectCountPC@SpatialAudio@@YAGAEBU_GUID@@@Z @ 0x1800476EC
 * Callers:
 *     ?ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ @ 0x180046C10 (-ReloadProperties@SpatialAudioDevicePropertyReader@@UEAAJXZ.c)
 *     ?ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180121D20 (-ConfigureDolbyAtmosHeadphonesEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDolbyAtmosMATEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180121F14 (-ConfigureDolbyAtmosMATEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDolbyAtmosTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1801220F8 (-ConfigureDolbyAtmosTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxHdmi@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1801222EC (-ConfigureDtsxHdmi@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxHeadphones@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180122460 (-ConfigureDtsxHeadphones@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureDtsxTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x1801225E8 (-ConfigureDtsxTwoSpeaker@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureMultiChannel@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180122770 (-ConfigureMultiChannel@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180122898 (-ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1800ABC2C (memcmp_0.c)
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
