/*
 * XREFs of EtwpLogAlwaysPresentRundown @ 0x140A16238
 * Callers:
 *     EtwpUpdateSelectedGroupMasks @ 0x14048FBCC (EtwpUpdateSelectedGroupMasks.c)
 *     EtwpLogKernelTraceRundown @ 0x140A15DD0 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140257180 (EtwpLogKernelEvent.c)
 */

int __fastcall EtwpLogAlwaysPresentRundown(__int64 a1, unsigned int a2)
{
  if ( (_BYTE)KdDebuggerEnabled )
    EtwpLogKernelEvent(0LL, a1, a2, 0, 3898, 0x501802u);
  return EtwpLogKernelEvent(0LL, a1, a2, 0, 8, 0x501802u);
}
