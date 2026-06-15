/*
 * XREFs of ?ConfigureSpatialAudioHrtfEncoder@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x180122898
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x18003C52C (-RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z.c)
 * Callees:
 *     ?GetMaxDynamicObjectCountPC@SpatialAudio@@YAGAEBU_GUID@@@Z @ 0x1800476EC (-GetMaxDynamicObjectCountPC@SpatialAudio@@YAGAEBU_GUID@@@Z.c)
 *     ?GetOverrideMaxDynamicObjectCount@@YAGAEBU_GUID@@G@Z @ 0x18005CDC0 (-GetOverrideMaxDynamicObjectCount@@YAGAEBU_GUID@@G@Z.c)
 *     ?GetStaticMaskPC@SpatialAudio@@YA?AW4AudioObjectType@@AEBU_GUID@@@Z @ 0x1800A6484 (-GetStaticMaskPC@SpatialAudio@@YA-AW4AudioObjectType@@AEBU_GUID@@@Z.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800AB328 (IsGetDefaultSpatialRenderingModePresent.c)
 */

__int64 __fastcall SpatialAudioEncoderProperties::ConfigureSpatialAudioHrtfEncoder(
        SpatialAudioEncoderProperties *this,
        struct _GUID *a2)
{
  const struct _GUID *v4; // rdx
  unsigned __int16 MaxDynamicObjectCountPC; // ax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int16 v14; // ax
  __int16 v16; // [rsp+30h] [rbp+8h] BYREF
  int v17; // [rsp+38h] [rbp+10h] BYREF

  *((_DWORD *)this + 179) = SpatialAudio::GetStaticMaskPC((SpatialAudio *)a2, a2);
  MaxDynamicObjectCountPC = SpatialAudio::GetMaxDynamicObjectCountPC((SpatialAudio *)a2, v4);
  *((_WORD *)this + 362) = MaxDynamicObjectCountPC;
  v6 = (__int128)*a2;
  *((_DWORD *)this + 180) = 1;
  *(_OWORD *)((char *)this + 700) = v6;
  *(_OWORD *)((char *)this + 726) = xmmword_1801916C0;
  *(_OWORD *)((char *)this + 742) = xmmword_1801916D0;
  *(_OWORD *)((char *)this + 758) = xmmword_1801916E0;
  *(_OWORD *)((char *)this + 774) = xmmword_1801916F0;
  *(_OWORD *)((char *)this + 790) = xmmword_180191700;
  *(_OWORD *)((char *)this + 806) = xmmword_180191710;
  *(_OWORD *)((char *)this + 822) = xmmword_180191720;
  *(_DWORD *)((char *)this + 838) = 0;
  *((_WORD *)this + 362) = GetOverrideMaxDynamicObjectCount(a2, MaxDynamicObjectCountPC);
  if ( IsGetDefaultSpatialRenderingModePresent() )
  {
    v17 = 0;
    v16 = 0;
    if ( (int)TryGetHrtfProcessingLimits(&v17, &v16) >= 0 )
    {
      *((_DWORD *)this + 179) = v17;
      *((_WORD *)this + 362) = v16;
    }
  }
  v7 = *(_OWORD *)((char *)this + 712);
  *(_OWORD *)((char *)this + 842) = *(_OWORD *)((char *)this + 696);
  v8 = *(_OWORD *)((char *)this + 728);
  *(_OWORD *)((char *)this + 858) = v7;
  v9 = *(_OWORD *)((char *)this + 744);
  *(_OWORD *)((char *)this + 874) = v8;
  v10 = *(_OWORD *)((char *)this + 760);
  *(_OWORD *)((char *)this + 890) = v9;
  v11 = *(_OWORD *)((char *)this + 776);
  *(_OWORD *)((char *)this + 906) = v10;
  v12 = *(_OWORD *)((char *)this + 792);
  *(_OWORD *)((char *)this + 922) = v11;
  v13 = *(_OWORD *)((char *)this + 824);
  *(_OWORD *)((char *)this + 938) = v12;
  v14 = *((_WORD *)this + 420);
  *(_OWORD *)((char *)this + 954) = *(_OWORD *)((char *)this + 808);
  *(_OWORD *)((char *)this + 970) = v13;
  *((_WORD *)this + 493) = v14;
  return 0LL;
}
