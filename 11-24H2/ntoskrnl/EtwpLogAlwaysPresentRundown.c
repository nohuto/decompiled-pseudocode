/*
 * XREFs of EtwpLogAlwaysPresentRundown @ 0x140A0F418
 * Callers:
 *     EtwpUpdateSelectedGroupMasks @ 0x14048A210 (EtwpUpdateSelectedGroupMasks.c)
 *     EtwpLogKernelTraceRundown @ 0x140A0EFB0 (EtwpLogKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 */

int __fastcall EtwpLogAlwaysPresentRundown(__int64 a1, unsigned int a2)
{
  if ( (_BYTE)KdDebuggerEnabled )
    EtwpLogKernelEvent(0LL, a1, a2, 0, 3898, 0x501802u);
  return EtwpLogKernelEvent(0LL, a1, a2, 0, 8, 0x501802u);
}
