/*
 * XREFs of ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x1800319B0
 * Callers:
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@_N@Z @ 0x180030038 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@_N@Z.c)
 *     ?DerivePeriodicityForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@PEAUIAudioStreamInfo@@KW4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@1U_GUID@@55_N6_J7PEAUIProcessSubmixProxy@@PEA_J99@Z @ 0x180030A00 (-DerivePeriodicityForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@PEAUtWAVEFORMATEX@@PEAUIA.c)
 *     ?IsFormatSupportedOnHostConnector@EffectPack@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800312D4 (-IsFormatSupportedOnHostConnector@EffectPack@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 *     _lambda_53e50f4d36d820af02fa3fa8c2905d02_::operator() @ 0x1800317DC (_lambda_53e50f4d36d820af02fa3fa8c2905d02_--operator().c)
 *     ?GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEA_J@Z @ 0x180031D9C (-GetMinProcessingPeriodForExclusiveMode@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     AudioServerGetDevicePeriod @ 0x1800380C0 (AudioServerGetDevicePeriod.c)
 *     AudioServerGetSharedModeEnginePeriod @ 0x180038600 (AudioServerGetSharedModeEnginePeriod.c)
 *     ?ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180076C00 (-ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x1800B9CE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 *     ?ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x18012B1FC (-ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengine.c)
 *     ?GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEAUSpatialAudioSettings@@@Z @ 0x180133E1C (-GetSpatialFormatForAudioFormat@CSpatialProperties@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@PEAU.c)
 *     ?SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@PEAUWAVEFORMATEXTENSIBLE@@@Z @ 0x180136D7C (-SetSpatialAudioSettingsInternal@CSpatialProperties@@AEAAJPEAVEffectPack@@_NPEBUtWAVEFORMATEX@@P.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800ABC2C (memcmp_0.c)
 */

__int64 __fastcall CompareWaveFormat(const struct tWAVEFORMATEX *a1, const struct tWAVEFORMATEX *a2)
{
  unsigned int v2; // ebx
  WORD cbSize; // r10
  __int16 v4; // r8
  int v5; // eax
  int wFormatTag; // r11d
  __int16 v7; // r9
  __int16 v8; // di
  __int128 v9; // xmm1
  __int64 v10; // xmm0_8
  int v11; // ecx
  __int16 v12; // si
  int v13; // r11d
  int v14; // eax
  WORD v15; // r10
  __int128 v16; // xmm1
  __int64 v17; // xmm0_8
  int v18; // eax
  __int16 v19; // r11
  int v20; // r10d
  __int16 v21; // dx
  __int64 v22; // rax
  WORD nChannels; // r10
  __int128 v25; // xmm0
  WORD v26; // r10
  WORD wBitsPerSample; // r14
  __int128 v28; // xmm0
  __int64 v29; // r10
  __int64 v30; // r10
  __int64 v31; // r8
  __int64 v32; // r8
  _BYTE Buf2[40]; // [rsp+28h] [rbp-19h] BYREF
  _BYTE Buf1[40]; // [rsp+50h] [rbp+Fh] BYREF

  v2 = 0;
  if ( !a1 )
    return a2 == 0LL;
  if ( a2 )
  {
    cbSize = a1->cbSize;
    v4 = -2;
    v5 = 0;
    wFormatTag = a1->wFormatTag;
    memset(Buf1, 0, sizeof(Buf1));
    memset(Buf2, 0, sizeof(Buf2));
    if ( (_WORD)wFormatTag == 0xFFFE )
    {
      v7 = 22;
      if ( cbSize == 22 )
        goto LABEL_5;
      v29 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
      if ( !v29 )
        v29 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
      if ( !v29 )
        goto LABEL_5;
      v30 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
      if ( !v30 )
        v30 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
      if ( v30 )
      {
        v8 = *(_WORD *)&Buf1[16];
      }
      else
      {
LABEL_5:
        v8 = 22;
        v5 = 1;
        v9 = *(_OWORD *)&a1->cbSize;
        *(_OWORD *)Buf1 = *(_OWORD *)&a1->wFormatTag;
        v10 = *(_QWORD *)&a1[1].wBitsPerSample;
        *(_OWORD *)&Buf1[16] = v9;
        *(_WORD *)&Buf1[16] = 22;
        *(_QWORD *)&Buf1[32] = v10;
      }
      if ( !v5 )
        return v2;
      v11 = *(_DWORD *)&Buf1[20];
      v12 = *(_WORD *)Buf1;
    }
    else
    {
      if ( cbSize && (((_WORD)wFormatTag - 1) & 0xFFFD) != 0 )
        return v2;
      nChannels = a1->nChannels;
      if ( (unsigned __int16)(nChannels - 1) > 1u || ((a1->wBitsPerSample - 8) & 0xFFE7) != 0 )
        return v2;
      v25 = *(_OWORD *)&a1->wFormatTag;
      *(_WORD *)&Buf1[18] = a1->wBitsPerSample;
      v7 = 22;
      *(_WORD *)&Buf1[16] = 22;
      *(_OWORD *)Buf1 = v25;
      *(_WORD *)Buf1 = -2;
      v11 = (nChannels == 1) + 3;
      *(GUID *)&Buf1[24] = GUID_00000000_0000_0010_8000_00aa00389b71;
      v12 = -2;
      *(_DWORD *)&Buf1[24] = wFormatTag;
      v8 = 22;
    }
    v13 = a2->wFormatTag;
    v14 = 0;
    v15 = a2->cbSize;
    if ( (_WORD)v13 != 0xFFFE )
    {
      if ( v15 && (((_WORD)v13 - 1) & 0xFFFD) != 0 )
        return v2;
      v26 = a2->nChannels;
      if ( (unsigned __int16)(v26 - 1) > 1u )
        return v2;
      wBitsPerSample = a2->wBitsPerSample;
      if ( ((wBitsPerSample - 8) & 0xFFE7) != 0 )
        return v2;
      v28 = *(_OWORD *)&a2->wFormatTag;
      *(_WORD *)&Buf2[16] = 22;
      *(_WORD *)&Buf2[18] = wBitsPerSample;
      *(_OWORD *)Buf2 = v28;
      *(_WORD *)Buf2 = -2;
      v18 = (v26 == 1) + 3;
      *(GUID *)&Buf2[24] = GUID_00000000_0000_0010_8000_00aa00389b71;
      *(_DWORD *)&Buf2[24] = v13;
      goto LABEL_13;
    }
    if ( v15 == 22 )
      goto LABEL_10;
    v31 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1;
    if ( !v31 )
      v31 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4;
    if ( !v31 )
      goto LABEL_10;
    v32 = *(_QWORD *)((char *)&a2[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1;
    if ( !v32 )
      v32 = *(_QWORD *)&a2[1].wBitsPerSample - *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4;
    if ( v32 )
    {
      v7 = *(_WORD *)&Buf2[16];
    }
    else
    {
LABEL_10:
      v14 = 1;
      v16 = *(_OWORD *)&a2->cbSize;
      *(_OWORD *)Buf2 = *(_OWORD *)&a2->wFormatTag;
      v17 = *(_QWORD *)&a2[1].wBitsPerSample;
      *(_OWORD *)&Buf2[16] = v16;
      *(_WORD *)&Buf2[16] = 22;
      *(_QWORD *)&Buf2[32] = v17;
    }
    if ( v14 )
    {
      v18 = *(_DWORD *)&Buf2[20];
      v4 = *(_WORD *)Buf2;
LABEL_13:
      if ( *(_WORD *)&Buf1[2] )
      {
        v19 = *(_WORD *)&Buf2[2];
      }
      else
      {
        v19 = 0;
        *(_WORD *)&Buf2[2] = 0;
        *(_DWORD *)&Buf2[8] = 0;
        *(_WORD *)&Buf2[12] = 0;
      }
      if ( *(_DWORD *)&Buf1[4] )
      {
        v20 = *(_DWORD *)&Buf2[4];
      }
      else
      {
        v20 = 0;
        *(_QWORD *)&Buf2[4] = 0LL;
      }
      if ( *(_WORD *)&Buf1[14] )
      {
        v21 = *(_WORD *)&Buf2[14];
      }
      else
      {
        v21 = 0;
        *(_DWORD *)&Buf2[12] = 0;
      }
      if ( !v11 )
        v18 = 0;
      *(_DWORD *)&Buf2[20] = v18;
      if ( !v12 )
      {
        v4 = 0;
        *(_WORD *)Buf2 = 0;
      }
      if ( !v19 )
      {
        *(_WORD *)&Buf1[2] = 0;
        *(_DWORD *)&Buf1[8] = 0;
        *(_WORD *)&Buf1[12] = 0;
      }
      if ( !v20 )
        *(_QWORD *)&Buf1[4] = 0LL;
      if ( !v21 )
        *(_DWORD *)&Buf1[12] = 0;
      if ( !v18 )
        v11 = 0;
      *(_DWORD *)&Buf1[20] = v11;
      if ( !v4 )
        *(_WORD *)Buf1 = 0;
      v22 = *(_QWORD *)&Buf1[24] - *(_QWORD *)&Buf2[24];
      if ( *(_QWORD *)&Buf1[24] == *(_QWORD *)&Buf2[24] )
        v22 = *(_QWORD *)&Buf1[32] - *(_QWORD *)&Buf2[32];
      if ( !v22 && v7 == v8 && !memcmp_0(Buf1, Buf2, 0x28uLL) )
        return 1;
    }
  }
  return v2;
}
