/*
 * XREFs of XilCommonBuffer_ReleaseBuffer @ 0x140003428
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x14007A5F0 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 *     Interrupter_ReleaseInterrupter @ 0x14007CB60 (Interrupter_ReleaseInterrupter.c)
 *     Interrupter_PrepareInterrupter @ 0x140082C5C (Interrupter_PrepareInterrupter.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x1400034F4 (CommonBuffer_ReleaseBuffer.c)
 */

__int64 __fastcall XilCommonBuffer_ReleaseBuffer(__int64 a1)
{
  return CommonBuffer_ReleaseBuffer(a1);
}
