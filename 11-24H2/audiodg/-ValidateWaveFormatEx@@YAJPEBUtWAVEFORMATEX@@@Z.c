/*
 * XREFs of ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x140039C18
 * Callers:
 *     ?ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x140007B58 (-ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z.c)
 *     ?ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x140039BD0 (-ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     ?IsValidControlData@ControlData_V1@@QEAAJXZ @ 0x140084760 (-IsValidControlData@ControlData_V1@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateWaveFormatEx(const struct tWAVEFORMATEX *a1)
{
  unsigned int v1; // r8d
  int nChannels; // r9d
  DWORD nSamplesPerSec; // r10d
  DWORD nAvgBytesPerSec; // r11d
  int nBlockAlign; // edi
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rax
  int v9; // edx
  unsigned __int16 v10; // ax
  __int16 v11; // bx
  bool v12; // zf
  int wBitsPerSample; // edx

  v1 = 0;
  if ( !a1 )
    return (unsigned int)-2147467261;
  nChannels = a1->nChannels;
  if ( !(_WORD)nChannels )
    return (unsigned int)-2147024809;
  nSamplesPerSec = a1->nSamplesPerSec;
  if ( !nSamplesPerSec )
    return (unsigned int)-2147024809;
  nAvgBytesPerSec = a1->nAvgBytesPerSec;
  if ( !nAvgBytesPerSec )
    return (unsigned int)-2147024809;
  nBlockAlign = a1->nBlockAlign;
  if ( !(_WORD)nBlockAlign || a1->cbSize > 0x400u )
    return (unsigned int)-2147024809;
  if ( ((a1->wFormatTag - 1) & 0xFFFD) == 0 )
  {
    if ( a1->cbSize )
      return (unsigned int)-2147024809;
    wBitsPerSample = a1->wBitsPerSample;
    if ( (wBitsPerSample & 7) != 0 || (unsigned __int16)nChannels > 2u )
      return (unsigned int)-2147024809;
    v12 = nAvgBytesPerSec == (nSamplesPerSec * wBitsPerSample * nChannels) >> 3;
    goto LABEL_25;
  }
  if ( a1->wFormatTag == 0xFFFE )
  {
    if ( a1->cbSize < 0x16u )
      return (unsigned int)-2147024809;
    v6 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) )
      v6 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
    if ( !v6 )
      goto LABEL_16;
    v7 = *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
    if ( *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2) )
      v7 = *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
    if ( !v7 )
    {
LABEL_16:
      v8 = *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 - *(_QWORD *)((char *)&a1[1].nSamplesPerSec + 2);
      if ( !v8 )
        v8 = *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 - *(_QWORD *)&a1[1].wBitsPerSample;
      v9 = a1->wBitsPerSample;
      if ( v8 )
      {
        v10 = v9 - 32;
        v11 = -33;
      }
      else
      {
        v11 = -25;
        v10 = v9 - 8;
      }
      if ( (v10 & (unsigned __int16)v11) != 0
        || !a1[1].wFormatTag
        || (unsigned __int16)v9 < a1[1].wFormatTag
        || nAvgBytesPerSec != (nSamplesPerSec * v9 * nChannels) >> 3 )
      {
        return (unsigned int)-2147024809;
      }
      v12 = nBlockAlign == v9 * nChannels / 8;
LABEL_25:
      if ( v12 )
        return v1;
      return (unsigned int)-2147024809;
    }
  }
  return v1;
}
