/*
 * XREFs of USBParseGetMIDIStreamingEndpointDescriptor @ 0x140038078
 * Callers:
 *     USBParseGetMIDIStreamingDatarange @ 0x140037DB4 (USBParseGetMIDIStreamingDatarange.c)
 *     USBMidiInPipePrimer @ 0x140039F88 (USBMidiInPipePrimer.c)
 * Callees:
 *     __security_check_cookie @ 0x14001C640 (__security_check_cookie.c)
 *     USBParseFindDescriptorInConfiguration @ 0x14003BDFC (USBParseFindDescriptorInConfiguration.c)
 */

__int64 __fastcall USBParseGetMIDIStreamingEndpointDescriptor(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int8 *v4; // rsi
  unsigned __int8 *v7; // r9
  __int64 DescriptorInConfiguration; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned __int64 v13; // rax
  _DWORD v14[4]; // [rsp+20h] [rbp-48h] BYREF

  v4 = *(unsigned __int8 **)(a2 + 24);
  v7 = *(unsigned __int8 **)(*(_QWORD *)(a2 + 48) + 8LL * a3);
  DescriptorInConfiguration = USBParseFindDescriptorInConfiguration(a1, &v7[*v7], 37LL);
  v9 = DescriptorInConfiguration;
  if ( !DescriptorInConfiguration )
    return 0LL;
  v10 = *(unsigned __int8 *)(DescriptorInConfiguration + 3);
  if ( *(unsigned __int8 *)v9 < (unsigned __int64)(v10 + 4)
    || !(_BYTE)v10
    || v9 + v10 + 4 > a1 + (unsigned __int64)*(unsigned __int16 *)(a1 + 2) )
  {
    v14[0] = 53956371;
    v14[1] = 1;
    v14[2] = -1073741438;
    RtlLogUnexpectedCodepath(v14, v10 + 4);
    return 0LL;
  }
  v11 = a3 + 1;
  if ( (unsigned int)v11 < v4[4] )
  {
    if ( v9 < *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v11) )
      return v9;
    return 0LL;
  }
  v13 = USBParseFindDescriptorInConfiguration(a1, &v4[*v4], 4LL);
  if ( !v13 )
    return v9;
  return v9 & -(__int64)(v9 < v13);
}
