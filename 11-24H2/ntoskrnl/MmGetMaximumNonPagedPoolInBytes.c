/*
 * XREFs of MmGetMaximumNonPagedPoolInBytes @ 0x1404AF9B8
 * Callers:
 *     EtwpGetSystemMaximumBufferCount @ 0x1408305C8 (EtwpGetSystemMaximumBufferCount.c)
 *     ExEnableHandleTracing @ 0x140AB9D28 (ExEnableHandleTracing.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumNonPagedPoolInBytes()
{
  return qword_140E37558 << 12;
}
