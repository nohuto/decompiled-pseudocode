/*
 * XREFs of CreateAudioMediaTypeFromUncompressedAudioFormat @ 0x1800AAAA0
 * Callers:
 *     ?TryOverrideDeviceGraphFormats@CBtLeAudioResourceManager@@UEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@AEAV?$com_ptr_t@UIAudioMediaType@@Uerr_returncode_policy@wil@@@wil@@233@Z @ 0x1800E4C40 (-TryOverrideDeviceGraphFormats@CBtLeAudioResourceManager@@UEAAJPEAVCEndpointCharacteristics@@W4_.c)
 * Callees:
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x1800AA284 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 */

HRESULT __stdcall CreateAudioMediaTypeFromUncompressedAudioFormat(
        const UNCOMPRESSEDAUDIOFORMAT *pUncompressedAudioFormat,
        IAudioMediaType **ppIAudioMediaType)
{
  WORD dwSamplesPerFrame; // cx
  DWORD fFramesPerSecond; // edx
  WORD v7; // cx
  bool v8; // cc
  WORD v9; // ax
  unsigned int v10; // edx
  GUID guidFormatType; // xmm0
  struct tWAVEFORMATEX v12; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v13[22]; // [rsp+42h] [rbp-1Eh] BYREF

  memset(v13, 0, sizeof(v13));
  if ( !pUncompressedAudioFormat )
    return -2147467261;
  dwSamplesPerFrame = pUncompressedAudioFormat->dwSamplesPerFrame;
  fFramesPerSecond = (int)pUncompressedAudioFormat->fFramesPerSecond;
  v12.wBitsPerSample = 8 * LOWORD(pUncompressedAudioFormat->dwBytesPerSampleContainer);
  v12.nChannels = dwSamplesPerFrame;
  v7 = dwSamplesPerFrame * LOWORD(pUncompressedAudioFormat->dwBytesPerSampleContainer);
  v12.nSamplesPerSec = fFramesPerSecond;
  v12.nBlockAlign = v7;
  v8 = pUncompressedAudioFormat->dwSamplesPerFrame <= 2;
  v12.nAvgBytesPerSec = fFramesPerSecond * v7;
  if ( v8
    && pUncompressedAudioFormat->dwValidBitsPerSample == 8 * pUncompressedAudioFormat->dwBytesPerSampleContainer
    && (*(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)&pUncompressedAudioFormat->guidFormatType.Data1
     && *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 == *(_QWORD *)pUncompressedAudioFormat->guidFormatType.Data4
     || *(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 == *(_QWORD *)&pUncompressedAudioFormat->guidFormatType.Data1
     && *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 == *(_QWORD *)pUncompressedAudioFormat->guidFormatType.Data4)
    && !pUncompressedAudioFormat->dwChannelMask )
  {
    if ( *(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 != *(_QWORD *)&pUncompressedAudioFormat->guidFormatType.Data1
      || (v9 = 1,
          *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 != *(_QWORD *)pUncompressedAudioFormat->guidFormatType.Data4) )
    {
      v9 = 3;
    }
    v12.wFormatTag = v9;
    v10 = 18;
    v12.cbSize = 0;
  }
  else
  {
    guidFormatType = pUncompressedAudioFormat->guidFormatType;
    v10 = 40;
    v12.wFormatTag = -2;
    v12.cbSize = 22;
    *(_WORD *)v13 = pUncompressedAudioFormat->dwValidBitsPerSample;
    *(_DWORD *)&v13[2] = pUncompressedAudioFormat->dwChannelMask;
    *(GUID *)&v13[6] = guidFormatType;
  }
  return CAudioMediaType::Create(&v12, v10, ppIAudioMediaType, pUncompressedAudioFormat->fFramesPerSecond, 0);
}
