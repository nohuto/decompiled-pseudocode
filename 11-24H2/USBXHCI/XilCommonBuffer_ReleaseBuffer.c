/*
 * XREFs of XilCommonBuffer_ReleaseBuffer @ 0x14001F74C
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x14007A300 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 *     Interrupter_ReleaseInterrupter @ 0x14007CAFC (Interrupter_ReleaseInterrupter.c)
 *     Interrupter_PrepareInterrupter @ 0x140082980 (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x14001F6A4 (CommonBuffer_ReleaseBuffer.c)
 */

void __fastcall XilCommonBuffer_ReleaseBuffer(__int64 a1, __int64 a2)
{
  CommonBuffer_ReleaseBuffer(a1, a2);
}
