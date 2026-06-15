/*
 * XREFs of ?CopyToWaveFormatExtensible@@YAHPEAUWAVEFORMATEXTENSIBLE@@PEBUtWAVEFORMATEX@@@Z @ 0x180051480
 * Callers:
 *     ?GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSettings@@PEBUtWAVEFORMATEX@@2PEAUSpatialAudioRelatedGlobalSettings@@PEAUWAVEFORMATEXTENSIBLE@@PEA_N@Z @ 0x180132F2C (-GetAudioFormatForSpatialFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUSpatialAudioSetting.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CopyToWaveFormatExtensible(struct WAVEFORMATEXTENSIBLE *a1, const struct tWAVEFORMATEX *a2)
{
  int v2; // r8d
  __int64 result; // rax
  WORD nChannels; // r9
  WORD *p_nChannels; // r11
  WORD wBitsPerSample; // r9
  WORD *v7; // r10
  __int64 v8; // rax
  __int64 v9; // rax

  v2 = 0;
  if ( !a1 || !a2 )
    return 0LL;
  if ( a2->wFormatTag == 0xFFFE )
  {
    if ( a2->cbSize == 22 )
      goto LABEL_5;
    v8 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( !v8 )
      v8 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    if ( !v8 )
      goto LABEL_5;
    v9 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
    if ( !v9 )
      v9 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    if ( !v9 )
    {
LABEL_5:
      result = 1LL;
      *(_OWORD *)&a1->Format.wFormatTag = *(_OWORD *)&a2->wFormatTag;
      *(_OWORD *)&a1->Format.cbSize = *(_OWORD *)&a2->cbSize;
      *(_QWORD *)a1->SubFormat.Data4 = *(_QWORD *)&a2[1].wBitsPerSample;
      a1->Format.cbSize = 22;
      return result;
    }
    return 0LL;
  }
  if ( a2->cbSize && ((a2->wFormatTag - 1) & 0xFFFD) != 0 )
    return 0LL;
  nChannels = a2->nChannels;
  p_nChannels = &a2->nChannels;
  if ( nChannels != 1 )
  {
    if ( nChannels != 2 )
      return 0LL;
    p_nChannels = &a2->nChannels;
  }
  wBitsPerSample = a2->wBitsPerSample;
  v7 = &a2->nChannels;
  if ( wBitsPerSample != 8 )
  {
    v7 = &a2->nChannels;
    if ( wBitsPerSample != 16 )
    {
      v7 = &a2->nChannels;
      if ( wBitsPerSample != 24 )
      {
        v7 = p_nChannels;
        if ( wBitsPerSample != 32 )
          return 0LL;
      }
    }
  }
  *(_OWORD *)&a1->Format.wFormatTag = *(_OWORD *)&a2->wFormatTag;
  a1->Format.wFormatTag = -2;
  a1->Format.cbSize = 22;
  a1->Samples.wValidBitsPerSample = a2->wBitsPerSample;
  a1->SubFormat = GUID_00000000_0000_0010_8000_00aa00389b71;
  a1->SubFormat.Data1 = a2->wFormatTag;
  result = 1LL;
  LOBYTE(v2) = *v7 == 1;
  a1->dwChannelMask = v2 + 3;
  return result;
}
