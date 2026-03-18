/*
 * XREFs of FreezeThawTimers @ 0x1C0080360
 * Callers:
 *     <none>
 * Callees:
 *     ??0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C008A93C (--0CAutoPushLockSh@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C014083C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??1CAutoPushLockSh@@QEAA@XZ @ 0x1C014E9C2 (--1CAutoPushLockSh@@QEAA@XZ.c)
 */

__int64 FreezeThawTimers()
{
  return gtmrListHead;
}
