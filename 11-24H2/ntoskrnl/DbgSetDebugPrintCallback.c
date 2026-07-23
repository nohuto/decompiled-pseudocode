/*
 * XREFs of DbgSetDebugPrintCallback @ 0x1404F7F00
 * Callers:
 *     EtwpEnableKernelTrace @ 0x14085ADEC (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x14085B3E0 (EtwpDisableKernelTrace.c)
 * Callees:
 *     DbgpInsertDebugPrintCallback @ 0x1405E4CE8 (DbgpInsertDebugPrintCallback.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1405E4DC4 (DbgpRemoveDebugPrintCallback.c)
 */

NTSTATUS __stdcall DbgSetDebugPrintCallback(PDEBUG_PRINT_CALLBACK DebugPrintCallback, BOOLEAN Enable)
{
  if ( !DebugPrintCallback )
    return -1073741811;
  if ( Enable == 1 )
    return DbgpInsertDebugPrintCallback();
  return DbgpRemoveDebugPrintCallback();
}
