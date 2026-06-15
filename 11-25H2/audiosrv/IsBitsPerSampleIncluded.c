/*
 * XREFs of IsBitsPerSampleIncluded @ 0x180139254
 * Callers:
 *     GetSupportedFormat @ 0x180138F60 (GetSupportedFormat.c)
 *     ?IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1KPEAIPEA_NPEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180139A10 (-IsTechnologySupported@CSpatialAudioTechHRTF@@UEBA_NPEAUIAudioEndpointInfo@@PEBUtWAVEFORMATEX@@1.c)
 * Callees:
 *     <none>
 */

char __fastcall IsBitsPerSampleIncluded(_WORD *a1)
{
  _WORD *v1; // rdx
  unsigned int v2; // r8d

  v1 = &unk_180192A12;
  v2 = 0;
  while ( *(v1 - 1) != *a1 || *v1 != a1[1] )
  {
    ++v2;
    v1 += 2;
    if ( v2 >= 4 )
      return 0;
  }
  return 1;
}
