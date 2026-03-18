/*
 * XREFs of MmGetMaximumNonPagedPoolInBytes @ 0x1404AEB18
 * Callers:
 *     EtwpGetSystemMaximumBufferCount @ 0x140A39034 (EtwpGetSystemMaximumBufferCount.c)
 *     ExEnableHandleTracing @ 0x140AB59E8 (ExEnableHandleTracing.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumNonPagedPoolInBytes()
{
  return qword_140E37318 << 12;
}
