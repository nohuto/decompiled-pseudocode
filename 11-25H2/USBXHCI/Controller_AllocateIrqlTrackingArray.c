/*
 * XREFs of Controller_AllocateIrqlTrackingArray @ 0x14003FF84
 * Callers:
 *     Controller_Create @ 0x140074D44 (Controller_Create.c)
 *     Controller_WdfEvtDevicePrepareHardware @ 0x140079ED0 (Controller_WdfEvtDevicePrepareHardware.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     WPP_RECORDER_SF_P @ 0x140044B80 (WPP_RECORDER_SF_P.c)
 */

__int64 __fastcall Controller_AllocateIrqlTrackingArray(__int64 a1)
{
  unsigned int v2; // ebx
  ULONG ActiveProcessorCount; // eax
  __int64 Pool2; // rax
  int v5; // edx
  int v6; // r8d

  v2 = 0;
  Debug_FreAssertMsg(
    (__int64)"Controller_AllocateIrqlTrackingArray called without deallocating previous memory.",
    *(_QWORD *)(a1 + 1272) == 0LL,
    (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\controller.c",
    14238);
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  *(_DWORD *)(a1 + 1280) = ActiveProcessorCount;
  Pool2 = ExAllocatePool2(64LL, 2 * ActiveProcessorCount, 1229146200LL);
  *(_QWORD *)(a1 + 1272) = Pool2;
  if ( !Pool2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_P(*(_QWORD *)(a1 + 72), v5, v6, 339);
    return (unsigned int)-1073741670;
  }
  return v2;
}
