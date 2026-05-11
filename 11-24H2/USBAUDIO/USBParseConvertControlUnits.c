/*
 * XREFs of USBParseConvertControlUnits @ 0x140036A00
 * Callers:
 *     USBParseConvertUnitsToFunctionUnits @ 0x140036F10 (USBParseConvertUnitsToFunctionUnits.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 *     USBParseExtensionUnit @ 0x1400372D0 (USBParseExtensionUnit.c)
 *     USBParseFeatureUnit @ 0x140037500 (USBParseFeatureUnit.c)
 *     USBParseFindDescriptor @ 0x1400377CC (USBParseFindDescriptor.c)
 *     USBParseMixerUnit @ 0x140038920 (USBParseMixerUnit.c)
 *     USBParseProcessUnit @ 0x140038C60 (USBParseProcessUnit.c)
 *     USBParseSelectorUnit @ 0x140038F70 (USBParseSelectorUnit.c)
 *     USBParseGetAudioSpecificInterface @ 0x14003B61C (USBParseGetAudioSpecificInterface.c)
 *     USBParseTerminalUnit @ 0x140042740 (USBParseTerminalUnit.c)
 */

__int64 __fastcall USBParseConvertControlUnits(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rbp
  unsigned __int8 *AudioSpecificInterface; // rax
  unsigned __int8 *v8; // rsi
  unsigned __int8 *Descriptor; // rdi

  v4 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v6 = *(_QWORD *)(v5 + 40);
  AudioSpecificInterface = (unsigned __int8 *)USBParseGetAudioSpecificInterface(v6, *(_QWORD *)(v5 + 48), a3, 8LL);
  v8 = AudioSpecificInterface;
  if ( AudioSpecificInterface )
  {
    Descriptor = (unsigned __int8 *)USBParseFindDescriptor(
                                      v6,
                                      AudioSpecificInterface,
                                      *(unsigned __int16 *)(AudioSpecificInterface + 5),
                                      &AudioSpecificInterface[*AudioSpecificInterface]);
    while ( Descriptor )
    {
      if ( v4 < 0 )
        break;
      if ( (unsigned __int8)(Descriptor[2] - 2) <= 6u )
      {
        v4 = USBParseUnitMap[Descriptor[2]](a1, Descriptor);
        if ( v4 >= 0 )
          Descriptor = (unsigned __int8 *)USBParseFindDescriptor(
                                            v6,
                                            v8,
                                            *(unsigned __int16 *)(v8 + 5),
                                            &Descriptor[*Descriptor]);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741438;
  }
  return (unsigned int)v4;
}
