/*
 * XREFs of USBHwFreePipes @ 0x14003C254
 * Callers:
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x140035B24 (USBHwSelectStreamingAudioInterfaceSideband.c)
 *     USBCaptureClosePin @ 0x140039B60 (USBCaptureClosePin.c)
 *     USBHwSelectStreamingAudioInterface @ 0x14003BBEC (USBHwSelectStreamingAudioInterface.c)
 *     USBType1RenderClosePin @ 0x140042A30 (USBType1RenderClosePin.c)
 * Callees:
 *     <none>
 */

void __fastcall USBHwFreePipes(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 152LL);
  v2 = *(void **)(v1 + 72);
  if ( v2 )
  {
    ExFreePool(v2);
    *(_QWORD *)(v1 + 72) = 0LL;
  }
}
