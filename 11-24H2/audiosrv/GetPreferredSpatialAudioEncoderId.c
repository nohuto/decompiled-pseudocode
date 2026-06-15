/*
 * XREFs of GetPreferredSpatialAudioEncoderId @ 0x1800A173C
 * Callers:
 *     ?EnumerateSpatialEncoders@CSpatialProperties@@AEAAIPEAVEffectPack@@AEBUSpatialAudioSettings@@W4SpatialRendererSelectionMode@@PEBUtWAVEFORMATEX@@3W4SpatialAudioPolicyFlags@@KPEAUSpatialAudioEncoderDescriptor@@PEAUTechIndexes@@@Z @ 0x18013B984 (-EnumerateSpatialEncoders@CSpatialProperties@@AEAAIPEAVEffectPack@@AEBUSpatialAudioSettings@@W4S.c)
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@2PEAUSpatialAudioRelatedGlobalSettings@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x18013C03C (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSetting.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioRelatedGlobalSettings@@_N@Z @ 0x18013EC20 (-SetSpatialAudioSettings@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBU.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall GetPreferredSpatialAudioEncoderId(_OWORD *a1, int a2, __int64 a3)
{
  __int64 v3; // rax

  *a1 = MICROSOFT_HRTF_SPATIAL_ENCODER;
  if ( !a2 )
    goto LABEL_7;
  if ( a2 == 3 && *(_DWORD *)a3 )
  {
    v3 = *(_QWORD *)(a3 + 28) - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( !v3 )
      v3 = *(_QWORD *)(a3 + 36) - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( v3 )
LABEL_7:
      *a1 = *(_OWORD *)(a3 + 28);
  }
  return a1;
}
