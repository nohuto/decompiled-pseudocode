/*
 * XREFs of IsHrtfEncoder @ 0x18009F09C
 * Callers:
 *     ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAIPEAVEffectPack@@AEBUSpatialAudioSettings@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@3W4SpatialAudioPolicyFlags@@KPEAUSpatialAudioEncoderDescriptor@@PEAUTechIndexes@@@Z @ 0x18013B984 (-EnumerateSpatialEncoders@CSpatialProperties@@AEAAIPEAVEffectPack@@AEBUSpatialAudioSettings@@W4S.c)
 * Callees:
 *     <none>
 */

char __fastcall IsHrtfEncoder(_QWORD *a1)
{
  __int64 v1; // rdx
  char result; // al
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx

  v1 = *a1 - MICROSOFT_HRTF_SPATIAL_ENCODER;
  if ( *a1 == (_QWORD)MICROSOFT_HRTF_SPATIAL_ENCODER )
    v1 = a1[1] - *((_QWORD *)&MICROSOFT_HRTF_SPATIAL_ENCODER + 1);
  result = 0;
  if ( !v1 )
    return 1;
  v3 = *a1 - DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER;
  if ( *a1 == (_QWORD)DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER )
    v3 = a1[1] - *((_QWORD *)&DOLBY_ATMOS_HEADPHONES_SPATIAL_ENCODER + 1);
  if ( !v3 )
    return 1;
  v4 = *a1 - DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER;
  if ( *a1 == (_QWORD)DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER )
    v4 = a1[1] - *((_QWORD *)&DOLBY_ATMOS_TWOSPEAKER_SPATIAL_ENCODER + 1);
  if ( !v4 )
    return 1;
  v5 = *a1 - DTSX_HEADPHONES_SPATIAL_ENCODER;
  if ( *a1 == (_QWORD)DTSX_HEADPHONES_SPATIAL_ENCODER )
    v5 = a1[1] - *((_QWORD *)&DTSX_HEADPHONES_SPATIAL_ENCODER + 1);
  if ( !v5 )
    return 1;
  v6 = *a1 - DTSX_TWOSPEAKER_SPATIAL_ENCODER;
  if ( *a1 == (_QWORD)DTSX_TWOSPEAKER_SPATIAL_ENCODER )
    v6 = a1[1] - *((_QWORD *)&DTSX_TWOSPEAKER_SPATIAL_ENCODER + 1);
  if ( !v6 )
    return 1;
  return result;
}
