/*
 * XREFs of USBParseTerminalUnit @ 0x140042A90
 * Callers:
 *     USBParseConvertControlUnits @ 0x140036D20 (USBParseConvertControlUnits.c)
 * Callees:
 *     __security_check_cookie @ 0x14001C640 (__security_check_cookie.c)
 *     BusApiBuildTerminalFunctionUnit @ 0x140034AB8 (BusApiBuildTerminalFunctionUnit.c)
 *     USBParseGetMicArrayDescriptor @ 0x140038180 (USBParseGetMicArrayDescriptor.c)
 *     USBParseGetPinIndexForStreamingTerminal @ 0x1400382BC (USBParseGetPinIndexForStreamingTerminal.c)
 *     USBParseGetUnitString @ 0x1400384D4 (USBParseGetUnitString.c)
 *     USBParseCountOutputChannelsForUnit @ 0x140042740 (USBParseCountOutputChannelsForUnit.c)
 *     USBParseGetChannelConfigForUnit @ 0x1400428F8 (USBParseGetChannelConfigForUnit.c)
 */

__int64 __fastcall USBParseTerminalUnit(__int64 a1, unsigned __int8 *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r15d
  int PinIndexForStreamingTerminal; // r12d
  int MicArrayDescriptor; // ebx
  __int64 v8; // r14
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  _WORD *v11; // rsi
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  int ChannelConfigForUnit; // eax
  __int64 v16; // rdx
  int v18; // [rsp+60h] [rbp-9h] BYREF
  int v19; // [rsp+64h] [rbp-5h] BYREF
  int v20; // [rsp+68h] [rbp-1h] BYREF
  __int64 v21; // [rsp+70h] [rbp+7h] BYREF
  const WCHAR *v22; // [rsp+78h] [rbp+Fh] BYREF
  int v23; // [rsp+80h] [rbp+17h]

  v2 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  v22 = 0LL;
  PinIndexForStreamingTerminal = -1;
  v21 = 0LL;
  MicArrayDescriptor = 0;
  v8 = *(_QWORD *)(v2 + 72);
  v9 = *(_QWORD *)(v8 + 40) + *(unsigned __int16 *)(*(_QWORD *)(v8 + 40) + 2LL);
  v10 = *a2;
  if ( a2[2] == 2 )
  {
    if ( (unsigned __int8)v10 >= 0xCu && (unsigned __int64)&a2[v10] <= v9 )
    {
      v11 = a2 + 4;
      v18 = -1;
      if ( *((_WORD *)a2 + 2) == 517 )
      {
        MicArrayDescriptor = USBParseGetMicArrayDescriptor(a1, (__int64)a2, &v21);
        if ( MicArrayDescriptor == -1073741275 )
          MicArrayDescriptor = 0;
      }
      if ( MicArrayDescriptor < 0 )
        return (unsigned int)MicArrayDescriptor;
LABEL_13:
      MicArrayDescriptor = USBParseGetUnitString(a1, a2, &v22);
      if ( MicArrayDescriptor >= 0 )
      {
        v12 = a2[3];
        v13 = *(_QWORD *)(v8 + 48);
        v14 = *(_QWORD *)(v8 + 40);
        v20 = 0;
        v19 = 0;
        ChannelConfigForUnit = USBParseCountOutputChannelsForUnit(v14, v13, v12, &v20);
        MicArrayDescriptor = ChannelConfigForUnit;
        if ( ChannelConfigForUnit < 0 )
        {
          HIDWORD(v22) = 16;
        }
        else
        {
          ChannelConfigForUnit = USBParseGetChannelConfigForUnit(
                                   *(_QWORD *)(v8 + 40),
                                   *(_QWORD *)(v8 + 48),
                                   a2[3],
                                   &v19);
          MicArrayDescriptor = ChannelConfigForUnit;
          if ( ChannelConfigForUnit >= 0 )
          {
            if ( *v11 == 257 )
              PinIndexForStreamingTerminal = USBParseGetPinIndexForStreamingTerminal(v8, a2, 0);
            return (unsigned int)BusApiBuildTerminalFunctionUnit(
                                   a1,
                                   a2[3],
                                   v3,
                                   v20,
                                   v19,
                                   v3,
                                   &v18,
                                   v22,
                                   v21,
                                   (unsigned __int16)*v11,
                                   1,
                                   PinIndexForStreamingTerminal);
          }
          HIDWORD(v22) = 17;
        }
        LODWORD(v22) = 53974265;
        v23 = ChannelConfigForUnit;
        RtlLogUnexpectedCodepath(&v22, v16);
      }
      return (unsigned int)MicArrayDescriptor;
    }
    HIDWORD(v22) = 4;
  }
  else
  {
    if ( (unsigned __int8)v10 >= 9u && (unsigned __int64)&a2[v10] <= v9 )
    {
      v11 = a2 + 4;
      v18 = a2[7];
      v3 = 1;
      goto LABEL_13;
    }
    HIDWORD(v22) = 5;
  }
  LODWORD(v22) = 55059943;
  v23 = -1073741823;
  RtlLogUnexpectedCodepath(&v22, a2);
  return 3221225473LL;
}
