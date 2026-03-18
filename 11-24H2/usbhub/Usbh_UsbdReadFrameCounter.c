/*
 * XREFs of Usbh_UsbdReadFrameCounter @ 0x14000835C
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x140007260 (UsbhHubDispatchPortEvent.c)
 *     UsbhReset1Complete @ 0x1400188C0 (UsbhReset1Complete.c)
 *     UsbhResetPort @ 0x140018C04 (UsbhResetPort.c)
 *     UsbhReset2Complete @ 0x140028D20 (UsbhReset2Complete.c)
 *     Usbh_PcLogEntry @ 0x14003515C (Usbh_PcLogEntry.c)
 *     UsbhResetPortTimerDpc @ 0x140047620 (UsbhResetPortTimerDpc.c)
 *     UsbhReset1Timeout @ 0x140058340 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x140058930 (UsbhReset2Timeout.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Usbh_UsbdReadFrameCounter(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  unsigned int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0;
  v4 = FdoExt(a1, a2, a3, a4);
  if ( !*(_QWORD *)(v4 + 4592) )
    return 0LL;
  (*(void (__fastcall **)(_QWORD, unsigned int *))(v4 + 4592))(*(_QWORD *)(v4 + 4560), &v6);
  return v6;
}
