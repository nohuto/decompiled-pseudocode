/*
 * XREFs of DbgSetDebugPrintCallback @ 0x1404F8150
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1408DA1EC (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x1408DA7E0 (EtwpDisableKernelTrace.c)
 * Callees:
 *     DbgpInsertDebugPrintCallback @ 0x1405DB648 (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1405DB724 (DbgpRemoveDebugPrintCallback.c)
 */

NTSTATUS __stdcall DbgSetDebugPrintCallback(PDEBUG_PRINT_CALLBACK DebugPrintCallback, BOOLEAN Enable)
{
  if ( !DebugPrintCallback )
    return -1073741811;
  if ( Enable == 1 )
    return DbgpInsertDebugPrintCallback();
  return DbgpRemoveDebugPrintCallback();
}
