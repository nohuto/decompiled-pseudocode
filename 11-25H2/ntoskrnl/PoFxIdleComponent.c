/*
 * XREFs of PoFxIdleComponent @ 0x14034C3C0
 * Callers:
 *     PopFxHandleReportDevicePoweredOn @ 0x140356360 (PopFxHandleReportDevicePoweredOn.c)
 *     PoFxIdleDevice @ 0x140477718 (PoFxIdleDevice.c)
 *     PoFxStartDevicePowerManagement @ 0x1404AA2A0 (PoFxStartDevicePowerManagement.c)
 *     DifPoFxIdleComponentWrapper @ 0x14062B400 (DifPoFxIdleComponentWrapper.c)
 * Callees:
 *     PopFxIdleComponent @ 0x14034C3F8 (PopFxIdleComponent.c)
 */

__int64 __fastcall PoFxIdleComponent(ULONG_PTR a1, ULONG_PTR a2)
{
  return PopFxIdleComponent(a1, a2);
}
