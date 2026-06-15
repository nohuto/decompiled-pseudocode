/*
 * XREFs of ?GetStaticMaskPC@SpatialAudio@@YA?AW4AudioObjectType@@AEBU_GUID@@@Z @ 0x1800A28C0
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
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MultiChannelDirectToEars@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180129644 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MultiChannelDirectToEars@@@details@wil@@Q.c)
 */

__int64 __fastcall SpatialAudio::GetStaticMaskPC(SpatialAudio *this, const struct _GUID *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v2 = *(_QWORD *)this - MICROSOFT_HRTF_SPATIAL_ENCODER;
  if ( *(_QWORD *)this == (_QWORD)MICROSOFT_HRTF_SPATIAL_ENCODER )
    v2 = *((_QWORD *)this + 1) - *((_QWORD *)&MICROSOFT_HRTF_SPATIAL_ENCODER + 1);
  if ( !v2 )
    return 1048574LL;
  v3 = *(_QWORD *)this - DOLBY_ATMOS_MAT_SPATIAL_ENCODER;
  if ( *(_QWORD *)this == (_QWORD)DOLBY_ATMOS_MAT_SPATIAL_ENCODER )
    v3 = *((_QWORD *)this + 1) - *((_QWORD *)&DOLBY_ATMOS_MAT_SPATIAL_ENCODER + 1);
  if ( !v3 )
    return 794622LL;
  v5 = *(_QWORD *)this - DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER;
  if ( *(_QWORD *)this == (_QWORD)DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER )
    v5 = *((_QWORD *)this + 1) - *((_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER + 1);
  if ( !v5 )
    return 1048574LL;
  v6 = *(_QWORD *)this - DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER;
  if ( *(_QWORD *)this == (_QWORD)DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER )
    v6 = *((_QWORD *)this + 1) - *((_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER + 1);
  if ( !v6 )
    return 1048574LL;
  v7 = *(_QWORD *)this - DTSX_HEADPHONES_SPATIAL_ENCODER;
  if ( *(_QWORD *)this == (_QWORD)DTSX_HEADPHONES_SPATIAL_ENCODER )
    v7 = *((_QWORD *)this + 1) - *((_QWORD *)&DTSX_HEADPHONES_SPATIAL_ENCODER + 1);
  if ( !v7 )
    return 1048574LL;
  v8 = *(_QWORD *)this - DTSX_TWOSPEAKER_SPATIAL_ENCODER;
  if ( *(_QWORD *)this == (_QWORD)DTSX_TWOSPEAKER_SPATIAL_ENCODER )
    v8 = *((_QWORD *)this + 1) - *((_QWORD *)&DTSX_TWOSPEAKER_SPATIAL_ENCODER + 1);
  if ( !v8 )
    return 1048574LL;
  v9 = *(_QWORD *)this - DTSX_HDMI_SPATIAL_ENCODER;
  if ( *(_QWORD *)this == (_QWORD)DTSX_HDMI_SPATIAL_ENCODER )
    v9 = *((_QWORD *)this + 1) - *((_QWORD *)&DTSX_HDMI_SPATIAL_ENCODER + 1);
  if ( !v9 )
    return 1048574LL;
  v10 = *(_QWORD *)this - MULTICHANNEL_SPATIAL_ENCODER;
  if ( *(_QWORD *)this == (_QWORD)MULTICHANNEL_SPATIAL_ENCODER )
    v10 = *((_QWORD *)this + 1) - *((_QWORD *)&MULTICHANNEL_SPATIAL_ENCODER + 1);
  if ( !v10 )
  {
    LOBYTE(a2) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultiChannelDirectToEars>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_MultiChannelDirectToEars>::GetImpl'::`2'::impl,
      a2,
      0LL);
    return 1048574LL;
  }
  return 262142LL;
}
