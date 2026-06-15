/*
 * XREFs of IsSpatialOnlyFormat @ 0x18007754C
 * Callers:
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@2PEAUSpatialAudioRelatedGlobalSettings@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x180132F2C (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSetting.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x180133E1C (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEAU.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@PEAH@Z @ 0x180135110 (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatial.c)
 *     ?SetSpatialAudioSettings@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioRelatedGlobalSettings@@_N@Z @ 0x18013615C (-SetSpatialAudioSettings@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBU.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     IsGetDefaultSpatialRenderingModePresent @ 0x1800AB328 (IsGetDefaultSpatialRenderingModePresent.c)
 */

char __fastcall IsSpatialOnlyFormat(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 i; // rcx
  __int64 v11; // rax
  unsigned int v12; // edi
  unsigned int j; // ecx
  __int64 v14; // rax
  _QWORD v16[2]; // [rsp+20h] [rbp-50h]
  int v17; // [rsp+40h] [rbp-30h]
  int v18; // [rsp+44h] [rbp-2Ch]
  int v19; // [rsp+48h] [rbp-28h]
  int v20; // [rsp+4Ch] [rbp-24h]
  int v21; // [rsp+50h] [rbp-20h]
  int v22; // [rsp+54h] [rbp-1Ch]
  int v23; // [rsp+58h] [rbp-18h]
  int v24; // [rsp+5Ch] [rbp-14h]

  v4 = 0;
  v6 = 4;
  v17 = 268;
  v18 = 1051882;
  v19 = -1442840448;
  v20 = 1905997824;
  v21 = 12;
  v22 = 1051882;
  v23 = -1442840448;
  v24 = 1905997824;
  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(
                          a1,
                          a2,
                          a3,
                          a4,
                          0x100CEA0000070CLL,
                          0x719B3800AA000080LL,
                          0x100CEA0000030CLL,
                          0x719B3800AA000080LL)
    && (unsigned int)IsDolbyMatSupportedByAudioDriver() )
  {
    v6 = 3;
  }
  for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
  {
    v7 = 2LL * (unsigned int)i;
    v11 = v16[2 * (unsigned int)i] - *a1;
    if ( !v11 )
      v11 = v16[2 * (unsigned int)i + 1] - a1[1];
    if ( !v11 )
      return 1;
  }
  v12 = 2;
  if ( (unsigned __int8)IsGetDefaultSpatialRenderingModePresent(
                          i,
                          v7,
                          v8,
                          v9,
                          0x100CEA0000010BLL,
                          0x719B3800AA000080LL,
                          0x100CEA0000000BLL,
                          0x719B3800AA000080LL)
    && (unsigned int)IsDtsXSupportedByAudioDriver() )
  {
    v12 = 1;
  }
  for ( j = 0; j < v12; ++j )
  {
    v14 = v16[2 * j] - *a1;
    if ( !v14 )
      v14 = v16[2 * j + 1] - a1[1];
    if ( !v14 )
      return 1;
  }
  return v4;
}
