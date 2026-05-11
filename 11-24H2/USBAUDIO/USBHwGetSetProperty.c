/*
 * XREFs of USBHwGetSetProperty @ 0x14003B870
 * Callers:
 *     USBHwGetSetMemory @ 0x1400358F0 (USBHwGetSetMemory.c)
 *     USBCntrlGetSetGEQ @ 0x140039470 (USBCntrlGetSetGEQ.c)
 *     USBCntrlGetSetProcessingUnitValue @ 0x1400397D0 (USBCntrlGetSetProcessingUnitValue.c)
 *     USBCntrlMuxSource @ 0x140039850 (USBCntrlMuxSource.c)
 *     USBCntrlGetSetMixerLevels @ 0x14003B3C0 (USBCntrlGetSetMixerLevels.c)
 *     USBType1SetSampleRate @ 0x14003B560 (USBType1SetSampleRate.c)
 *     USBHwGetSetShort @ 0x14003B700 (USBHwGetSetShort.c)
 *     USBHwGetSetByte @ 0x14003B7C0 (USBHwGetSetByte.c)
 * Callees:
 *     USBHwSubmitUrbToUsbdSynch @ 0x14003C0BC (USBHwSubmitUrbToUsbdSynch.c)
 */

__int64 __fastcall USBHwGetSetProperty(
        __int64 a1,
        USHORT a2,
        ULONG a3,
        UCHAR a4,
        __int16 a5,
        __int16 a6,
        __int16 a7,
        __int16 a8,
        void *a9,
        ULONG a10)
{
  unsigned int v14; // edi
  __int64 v15; // rbp
  struct _URB *v16; // rax
  struct _URB *v17; // rbx

  v14 = -1073741670;
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v16 = (struct _URB *)ExAllocateFromNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)(v15 + 64));
  v17 = v16;
  if ( v16 )
  {
    v16->UrbHeader.Function = a2;
    v16->UrbHeader.Length = 136;
    v16->UrbControlTransfer.TransferBufferLength = a10;
    v16->UrbSelectInterface.Interface.InterfaceHandle = a9;
    v16->UrbControlFeatureRequest.FeatureSelector = a6 | (a5 << 8);
    v16->UrbControlDescriptorRequest.LanguageId = a8 | (a7 << 8);
    v16->UrbSelectConfiguration.Interface.InterfaceHandle = 0LL;
    v16->UrbControlTransfer.SetupPacket[0] = 0;
    v16->UrbControlTransfer.SetupPacket[1] = a4;
    v16->UrbPipeRequest.Reserved = a3;
    v16->UrbControlTransfer.UrbLink = 0LL;
    v14 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(a1 + 40), v16, 0LL);
    ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)(v15 + 64), v17);
  }
  return v14;
}
