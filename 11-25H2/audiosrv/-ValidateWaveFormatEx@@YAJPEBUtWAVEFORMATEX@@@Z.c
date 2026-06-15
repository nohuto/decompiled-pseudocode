/*
 * XREFs of ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180033D60
 * Callers:
 *     ?RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18002BE70 (-RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVE.c)
 *     ?IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x180031680 (-IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x1800342A8 (-IsStreamFormatSupportedForMixFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@U_GUID@@W4__MIDL.c)
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71___ @ 0x180043A2C (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180045618 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___ @ 0x180045978 (CEndpointCharacteristics--GetDefaultFormat__lambda_53e50f4d36d820af02fa3fa8c2905d02___.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180045C54 (CEndpointCharacteristics--GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180087A70 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatialAudioRelatedGlobalSettings@@PEBUtWAVEFORMATEX@@PEAH@Z @ 0x180135110 (-ProcessPropertyChange@CSpatialProperties@@QEAAXPEAVEffectPack@@AEBU_tagpropertykey@@PEAUSpatial.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180136D7C (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@P.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateWaveFormatEx(const struct tWAVEFORMATEX *a1)
{
  unsigned int v1; // r8d
  int nChannels; // r10d
  DWORD nSamplesPerSec; // r11d
  DWORD nAvgBytesPerSec; // ebx
  int nBlockAlign; // edi
  WORD cbSize; // dx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  WORD v10; // ax
  WORD wBitsPerSample; // dx
  WORD wFormatTag; // ax
  int v14; // edx

  v1 = 0;
  if ( a1 )
  {
    nChannels = a1->nChannels;
    if ( (_WORD)nChannels )
    {
      nSamplesPerSec = a1->nSamplesPerSec;
      if ( nSamplesPerSec )
      {
        nAvgBytesPerSec = a1->nAvgBytesPerSec;
        if ( nAvgBytesPerSec )
        {
          nBlockAlign = a1->nBlockAlign;
          if ( (_WORD)nBlockAlign )
          {
            cbSize = a1->cbSize;
            if ( cbSize <= 0x400u )
            {
              if ( ((a1->wFormatTag - 1) & 0xFFFD) != 0 )
              {
                if ( a1->wFormatTag != 0xFFFE )
                  return v1;
                if ( cbSize >= 0x16u )
                {
                  v7 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
                     - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
                  if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec
                                                                                                + 2) )
                    v7 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
                  if ( v7 )
                  {
                    v8 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1
                       - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
                    if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec
                                                                                                  + 2) )
                      v8 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
                    if ( v8 )
                      return v1;
                  }
                  v9 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1
                     - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
                  if ( !v9 )
                    v9 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
                  if ( !v9 )
                  {
                    wBitsPerSample = a1->wBitsPerSample;
                    if ( ((wBitsPerSample - 8) & 0xFFE7) != 0 )
                      return (unsigned int)-2147024809;
                    goto LABEL_20;
                  }
                  v10 = a1->wBitsPerSample;
                  wBitsPerSample = v10;
                  if ( v10 == 32 || v10 == 64 )
                  {
LABEL_20:
                    wFormatTag = a1[1].wFormatTag;
                    if ( wFormatTag
                      && wBitsPerSample >= wFormatTag
                      && nAvgBytesPerSec == (nSamplesPerSec * wBitsPerSample * nChannels) >> 3
                      && nBlockAlign == wBitsPerSample * nChannels / 8 )
                    {
                      return v1;
                    }
                  }
                }
              }
              else if ( !cbSize )
              {
                v14 = a1->wBitsPerSample;
                if ( (v14 & 7) == 0
                  && (unsigned __int16)nChannels <= 2u
                  && nAvgBytesPerSec == (nSamplesPerSec * v14 * nChannels) >> 3 )
                {
                  return v1;
                }
              }
            }
          }
        }
      }
    }
    return (unsigned int)-2147024809;
  }
  return 2147500035LL;
}
