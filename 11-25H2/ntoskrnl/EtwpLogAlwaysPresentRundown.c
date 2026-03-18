/*
 * XREFs of EtwpLogAlwaysPresentRundown @ 0x140A11E5C
 * Callers:
 *     EtwpUpdateSelectedGroupMasks @ 0x1404904F4 (EtwpUpdateSelectedGroupMasks.c)
 *     EtwpLogKernelTraceRundown @ 0x140A119F4 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1402561B0 (EtwpLogKernelEvent.c)
 */

int __fastcall EtwpLogAlwaysPresentRundown(__int64 a1, unsigned int a2)
{
  if ( (_BYTE)KdDebuggerEnabled )
    EtwpLogKernelEvent(0LL, a1, a2, 0, 0xF3Au, 0x501802u);
  return EtwpLogKernelEvent(0LL, a1, a2, 0, 8u, 0x501802u);
}
