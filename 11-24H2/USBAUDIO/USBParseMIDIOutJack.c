/*
 * XREFs of USBParseMIDIOutJack @ 0x140038710
 * Callers:
 *     USBParseConvertMIDIJacksAndElements @ 0x14002DAA4 (USBParseConvertMIDIJacksAndElements.c)
 * Callees:
 *     __security_check_cookie @ 0x14001BB10 (__security_check_cookie.c)
 *     BusApiBuildTerminalFunctionUnit @ 0x140034798 (BusApiBuildTerminalFunctionUnit.c)
 *     USBParseGetMIDIJackStringFromDeviceID @ 0x14003798C (USBParseGetMIDIJackStringFromDeviceID.c)
 *     USBParseGetPinIndexForStreamingTerminal @ 0x140037F9C (USBParseGetPinIndexForStreamingTerminal.c)
 *     USBParseGetUnitString @ 0x1400381B4 (USBParseGetUnitString.c)
 */

__int64 __fastcall USBParseMIDIOutJack(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v3; // rax
  __int64 v5; // r15
  __int64 v7; // r9
  unsigned __int64 v8; // rax
  unsigned int PinIndexForStreamingTerminal; // esi
  int UnitString; // edi
  const WCHAR *v11; // rbp
  int v12; // r15d
  __int64 Pool2; // rax
  int *v14; // r12
  unsigned int v15; // ecx
  __int64 v16; // r8
  int v17; // eax
  __int64 v19; // [rsp+60h] [rbp-48h] BYREF
  int v20; // [rsp+68h] [rbp-40h]

  v3 = *(_QWORD *)(a1 + 16);
  v19 = 0LL;
  v5 = a2;
  v7 = *(_QWORD *)(v3 + 72);
  v8 = *a3;
  if ( (unsigned __int8)v8 >= 6u )
  {
    a2 = a3[5];
    if ( v8 >= 2 * a2 + 7
      && (unsigned __int64)&a3[2 * a2 + 7] <= *(_QWORD *)(v7 + 40)
                                            + (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(v7 + 40) + 2LL) )
    {
      if ( a3[3] == 1 )
        PinIndexForStreamingTerminal = USBParseGetPinIndexForStreamingTerminal(v7, a3, 1);
      else
        PinIndexForStreamingTerminal = -1;
      UnitString = USBParseGetUnitString(a1, a3, &v19);
      if ( UnitString >= 0 )
      {
        v11 = (const WCHAR *)v19;
        if ( v19 || PinIndexForStreamingTerminal == -1 )
        {
LABEL_12:
          v12 = *(unsigned __int8 *)(v5 + 2) << 8;
          Pool2 = ExAllocatePool2(256LL, 4LL * a3[5], 1096972357LL);
          v14 = (int *)Pool2;
          UnitString = -1073741670;
          if ( Pool2 )
          {
            LOBYTE(v15) = a3[5];
            v16 = 0LL;
            if ( (_BYTE)v15 )
            {
              do
              {
                *(_DWORD *)(Pool2 + 4 * v16) = v12 | a3[2 * v16 + 6];
                v16 = (unsigned int)(v16 + 1);
                v15 = a3[5];
              }
              while ( (unsigned int)v16 < v15 );
            }
            v17 = 257;
            if ( a3[3] != 1 )
              v17 = 2305;
            UnitString = BusApiBuildTerminalFunctionUnit(
                           a1,
                           v12 | (unsigned int)a3[4],
                           1,
                           0,
                           0,
                           (unsigned __int8)v15,
                           v14,
                           v11,
                           0LL,
                           v17,
                           2,
                           PinIndexForStreamingTerminal);
            ExFreePool(v14);
          }
          return (unsigned int)UnitString;
        }
        UnitString = USBParseGetMIDIJackStringFromDeviceID(a1, PinIndexForStreamingTerminal, &v19);
        if ( UnitString >= 0 )
        {
          v11 = (const WCHAR *)v19;
          goto LABEL_12;
        }
      }
      return (unsigned int)UnitString;
    }
  }
  v19 = 0x203352AD3LL;
  v20 = -1073741438;
  RtlLogUnexpectedCodepath(&v19, a2);
  return 3221225858LL;
}
