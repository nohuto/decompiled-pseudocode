/*
 * XREFs of USBParseMIDIInJack @ 0x1400388C0
 * Callers:
 *     USBParseConvertMIDIJacksAndElements @ 0x14002DAA4 (USBParseConvertMIDIJacksAndElements.c)
 * Callees:
 *     __security_check_cookie @ 0x14001C640 (__security_check_cookie.c)
 *     BusApiBuildTerminalFunctionUnit @ 0x140034AB8 (BusApiBuildTerminalFunctionUnit.c)
 *     USBParseGetMIDIJackStringFromDeviceID @ 0x140037CAC (USBParseGetMIDIJackStringFromDeviceID.c)
 *     USBParseGetPinIndexForStreamingTerminal @ 0x1400382BC (USBParseGetPinIndexForStreamingTerminal.c)
 *     USBParseGetUnitString @ 0x1400384D4 (USBParseGetUnitString.c)
 */

__int64 __fastcall USBParseMIDIInJack(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v3; // rax
  __int64 v7; // r9
  unsigned int PinIndexForStreamingTerminal; // edi
  __int64 result; // rax
  const WCHAR *v10; // rcx
  int v11; // r8d
  __int64 v12; // [rsp+60h] [rbp-38h] BYREF
  int v13; // [rsp+68h] [rbp-30h]

  v3 = *(_QWORD *)(a1 + 16);
  v12 = 0LL;
  v7 = *(_QWORD *)(v3 + 72);
  if ( *a3 < 6u
    || (unsigned __int64)(a3 + 6) > *(_QWORD *)(v7 + 40)
                                  + (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(v7 + 40) + 2LL) )
  {
    v12 = 0x103352AD3LL;
    v13 = -1073741438;
    RtlLogUnexpectedCodepath(&v12, a2);
    return 3221225858LL;
  }
  else
  {
    if ( a3[3] == 1 )
      PinIndexForStreamingTerminal = USBParseGetPinIndexForStreamingTerminal(v7, a3, 1);
    else
      PinIndexForStreamingTerminal = -1;
    result = USBParseGetUnitString(a1, a3, &v12);
    if ( (int)result >= 0 )
    {
      v10 = (const WCHAR *)v12;
      if ( !v12 && PinIndexForStreamingTerminal != -1 )
      {
        result = USBParseGetMIDIJackStringFromDeviceID(a1, PinIndexForStreamingTerminal, &v12);
        if ( (int)result < 0 )
          return result;
        v10 = (const WCHAR *)v12;
      }
      v11 = 257;
      if ( a3[3] != 1 )
        v11 = 2305;
      return BusApiBuildTerminalFunctionUnit(
               a1,
               (*(unsigned __int8 *)(a2 + 2) << 8) | (unsigned int)a3[4],
               0,
               0,
               0,
               0,
               0LL,
               v10,
               0LL,
               v11,
               2,
               PinIndexForStreamingTerminal);
    }
  }
  return result;
}
