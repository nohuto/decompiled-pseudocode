/*
 * XREFs of UsbhReset2CycleDevice @ 0x1C004E400
 * Callers:
 *     <none>
 * Callees:
 *     UsbhCancelResetTimeout @ 0x1C00015A0 (UsbhCancelResetTimeout.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C0003BCC (UsbhReleaseEnumBusLockEx.c)
 *     UsbhAssertBusLock @ 0x1C00367A4 (UsbhAssertBusLock.c)
 *     UsbhPortCycle @ 0x1C004D4D0 (UsbhPortCycle.c)
 */

__int64 __fastcall UsbhReset2CycleDevice(__int64 a1, __int64 a2, __int64 a3)
{
  UsbhCancelResetTimeout(a1, a2, 1);
  UsbhAssertBusLock(a1);
  UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  return UsbhPortCycle(a1, a2, a3);
}
