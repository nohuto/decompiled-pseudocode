/*
 * XREFs of ?ConfigureDolbyAtmosMATEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180129BB4
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x18003D18C (-RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z.c)
 * Callees:
 *     ?GetMaxDynamicObjectCountPC@SpatialAudio@@YAGAEBU_GUID@@@Z @ 0x180038D9C (-GetMaxDynamicObjectCountPC@SpatialAudio@@YAGAEBU_GUID@@@Z.c)
 *     ?GetStaticMaskPC@SpatialAudio@@YA?AW4AudioObjectType@@AEBU_GUID@@@Z @ 0x1800A28C0 (-GetStaticMaskPC@SpatialAudio@@YA-AW4AudioObjectType@@AEBU_GUID@@@Z.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800A7618 (IsGetDefaultSpatialRenderingModePresent.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::ConfigureDolbyAtmosMATEncoder(
        SpatialAudioEncoderProperties *this,
        struct _GUID *a2)
{
  const struct _GUID *v4; // rdx
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int16 v13; // ax
  __int16 v15; // [rsp+30h] [rbp+8h] BYREF
  int v16; // [rsp+38h] [rbp+10h] BYREF

  *((_DWORD *)this + 179) = SpatialAudio::GetStaticMaskPC((SpatialAudio *)a2, a2);
  *((_WORD *)this + 362) = SpatialAudio::GetMaxDynamicObjectCountPC((SpatialAudio *)a2, v4);
  v5 = (__int128)*a2;
  *((_DWORD *)this + 180) = 1;
  *(_OWORD *)((char *)this + 700) = v5;
  *(_OWORD *)((char *)this + 726) = xmmword_18019BDF0;
  *(_OWORD *)((char *)this + 742) = xmmword_18019BE00;
  *(_OWORD *)((char *)this + 758) = xmmword_18019BE10;
  *(_OWORD *)((char *)this + 774) = xmmword_18019BE20;
  *(_OWORD *)((char *)this + 790) = xmmword_18019BE30;
  *(_OWORD *)((char *)this + 806) = xmmword_18019BE40;
  *(_OWORD *)((char *)this + 822) = xmmword_18019BE50;
  *(_DWORD *)((char *)this + 838) = 0;
  if ( IsGetDefaultSpatialRenderingModePresent() )
  {
    v16 = 0;
    v15 = 0;
    if ( (int)TryGetPlatformSpecificProcessingLimitsForSpatialFormat(&DOLBY_ATMOS_MAT_SPATIAL_ENCODER, &v16, &v15) >= 0 )
    {
      *((_DWORD *)this + 179) = v16;
      *((_WORD *)this + 362) = v15;
    }
  }
  v6 = *(_OWORD *)((char *)this + 712);
  *(_OWORD *)((char *)this + 842) = *(_OWORD *)((char *)this + 696);
  v7 = *(_OWORD *)((char *)this + 728);
  *(_OWORD *)((char *)this + 858) = v6;
  v8 = *(_OWORD *)((char *)this + 744);
  *(_OWORD *)((char *)this + 874) = v7;
  v9 = *(_OWORD *)((char *)this + 760);
  *(_OWORD *)((char *)this + 890) = v8;
  v10 = *(_OWORD *)((char *)this + 776);
  *(_OWORD *)((char *)this + 906) = v9;
  v11 = *(_OWORD *)((char *)this + 792);
  *(_OWORD *)((char *)this + 922) = v10;
  v12 = *(_OWORD *)((char *)this + 824);
  *(_OWORD *)((char *)this + 938) = v11;
  v13 = *((_WORD *)this + 420);
  *(_OWORD *)((char *)this + 954) = *(_OWORD *)((char *)this + 808);
  *(_OWORD *)((char *)this + 970) = v12;
  *((_WORD *)this + 493) = v13;
  *(_OWORD *)((char *)this + 872) = xmmword_18019BE70;
  *(_OWORD *)((char *)this + 888) = xmmword_18019BE80;
  *(_OWORD *)((char *)this + 904) = xmmword_18019BE90;
  *(_OWORD *)((char *)this + 920) = xmmword_18019BEA0;
  *(_OWORD *)((char *)this + 936) = xmmword_18019BEB0;
  *(_OWORD *)((char *)this + 952) = xmmword_18019BEC0;
  *(_OWORD *)((char *)this + 968) = xmmword_18019BED0;
  *((_DWORD *)this + 246) = 1;
  return 0LL;
}
