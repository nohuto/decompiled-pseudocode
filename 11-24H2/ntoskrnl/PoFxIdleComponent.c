/*
 * XREFs of PoFxIdleComponent @ 0x1403A8D20
 * Callers:
 *     PoFxIdleDevice @ 0x1402F11C4 (PoFxIdleDevice.c)
 *     PopFxHandleReportDevicePoweredOn @ 0x140497CE0 (PopFxHandleReportDevicePoweredOn.c)
 *     PoFxStartDevicePowerManagement @ 0x1404A5D50 (PoFxStartDevicePowerManagement.c)
 *     DifPoFxIdleComponentWrapper @ 0x140635980 (DifPoFxIdleComponentWrapper.c)
 * Callees:
 *     PopFxIdleComponent @ 0x1403A8D58 (PopFxIdleComponent.c)
 */

__int64 __fastcall PoFxIdleComponent(ULONG_PTR a1, ULONG_PTR a2)
{
  return PopFxIdleComponent(a1, a2);
}
