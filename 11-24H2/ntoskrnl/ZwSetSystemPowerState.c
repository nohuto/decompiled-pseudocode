/*
 * XREFs of ZwSetSystemPowerState @ 0x1406AAB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetSystemPowerState(POWER_ACTION SystemAction, SYSTEM_POWER_STATE LightestSystemState, ULONG Flags)
{
  _disable();
  __readeflags();
  return KiServiceInternal(*(_QWORD *)&SystemAction);
}
