/*
 * XREFs of ?IsCompressedSpatialFormat@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x18002C8CC
 * Callers:
 *     ?IsFormatSupportedOnHostConnector@EffectPack@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x18002C520 (-IsFormatSupportedOnHostConnector@EffectPack@@QEAA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 *     ?DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180037D2C (-DeriveDevicePipeFormatFromConnectorFormat@EffectPack@@QEAAJU_GUID@@W4__MIDL___MIDL_itf_audioeng.c)
 *     ?CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEBU4@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x18007B544 (-CreateSaDevice@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MID.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2KPEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x1800B94A0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAU.c)
 *     _lambda_2d17c7b0a2fd240c2934c03e6d818fe2_::operator() @ 0x180130B7C (_lambda_2d17c7b0a2fd240c2934c03e6d818fe2_--operator().c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002EFA0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 */

char __fastcall IsCompressedSpatialFormat(const struct tWAVEFORMATEX *a1)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  DWORD *p_nSamplesPerSec; // rcx
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  if ( a1 && (int)ValidateWaveFormatEx(a1) >= 0 && a1->wFormatTag == 0xFFFE )
  {
    v2 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000000c_0cea_0010_8000_00aa00389b71.Data1;
    if ( !v2 )
      v2 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000000c_0cea_0010_8000_00aa00389b71.Data4;
    if ( !v2 )
      goto LABEL_32;
    v3 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000010c_0cea_0010_8000_00aa00389b71.Data1;
    if ( !v3 )
      v3 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000010c_0cea_0010_8000_00aa00389b71.Data4;
    if ( !v3 )
      goto LABEL_32;
    v4 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000030c_0cea_0010_8000_00aa00389b71.Data1;
    if ( !v4 )
      v4 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000030c_0cea_0010_8000_00aa00389b71.Data4;
    if ( !v4 )
      goto LABEL_32;
    v5 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000070c_0cea_0010_8000_00aa00389b71.Data1;
    if ( !v5 )
      v5 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000070c_0cea_0010_8000_00aa00389b71.Data4;
    if ( v5 )
    {
      p_nSamplesPerSec = &a1->nSamplesPerSec;
    }
    else
    {
LABEL_32:
      p_nSamplesPerSec = &a1->nSamplesPerSec;
      if ( a1->nSamplesPerSec == 192000 && a1->nChannels == 8 && a1->wBitsPerSample == 16 )
        return 1;
    }
    v7 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000000b_0cea_0010_8000_00aa00389b71.Data1;
    if ( !v7 )
      v7 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000000b_0cea_0010_8000_00aa00389b71.Data4;
    if ( !v7 )
      goto LABEL_22;
    v9 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000010b_0cea_0010_8000_00aa00389b71.Data1;
    if ( !v9 )
      v9 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000010b_0cea_0010_8000_00aa00389b71.Data4;
    if ( !v9 )
      goto LABEL_22;
    v10 = *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) - *(_QWORD *)&GUID_0000030b_0cea_0010_8000_00aa00389b71.Data1;
    if ( !v10 )
      v10 = *(_QWORD *)&a1[1].wBitsPerSample - *(_QWORD *)GUID_0000030b_0cea_0010_8000_00aa00389b71.Data4;
    if ( !v10 )
    {
LABEL_22:
      if ( *p_nSamplesPerSec == 192000 && a1->nChannels == 8 && a1->wBitsPerSample == 16 )
        return 1;
    }
  }
  return 0;
}
