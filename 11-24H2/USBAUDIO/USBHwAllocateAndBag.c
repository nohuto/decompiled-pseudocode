/*
 * XREFs of USBHwAllocateAndBag @ 0x14002D688
 * Callers:
 *     USBHwCreateInterfaceList @ 0x14003526C (USBHwCreateInterfaceList.c)
 *     USBHwSelectAudioConfiguration @ 0x140035968 (USBHwSelectAudioConfiguration.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x14003626C (USBHwSelectStreamingMIDIInterface.c)
 *     USBParseGetMIDIJackStringFromDeviceID @ 0x14003798C (USBParseGetMIDIJackStringFromDeviceID.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x140037A94 (USBParseGetMIDIStreamingDatarange.c)
 *     USBParseGetMicArrayDescriptor @ 0x140037E60 (USBParseGetMicArrayDescriptor.c)
 *     USBParseGetUnitString @ 0x1400381B4 (USBParseGetUnitString.c)
 *     USBParseMixerUnit @ 0x140038920 (USBParseMixerUnit.c)
 *     USBType1AsyncEndpointInitialize @ 0x1400398FC (USBType1AsyncEndpointInitialize.c)
 *     USBMidiInPipePrimer @ 0x140039C68 (USBMidiInPipePrimer.c)
 *     USBType1Create1MsecBuffers @ 0x14003D374 (USBType1Create1MsecBuffers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall USBHwAllocateAndBag(PVOID *a1, unsigned int a2, __int64 a3, void *a4)
{
  NTSTATUS v6; // ebx
  void *Pool2; // rax

  v6 = -1073741670;
  Pool2 = (void *)ExAllocatePool2(a3, a2, 1096972357LL);
  *a1 = Pool2;
  if ( Pool2 )
  {
    v6 = KsAddItemToObjectBag(a4, Pool2, ExFreePool);
    if ( v6 < 0 )
      ExFreePool(*a1);
  }
  return (unsigned int)v6;
}
