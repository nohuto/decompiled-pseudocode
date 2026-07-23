/*
 * XREFs of MmGetMaximumNonPagedPoolInBytes @ 0x1404AA3A8
 * Callers:
 *     EtwpGetSystemMaximumBufferCount @ 0x1409CF9AC (EtwpGetSystemMaximumBufferCount.c)
 *     ExEnableHandleTracing @ 0x140AB4D44 (ExEnableHandleTracing.c)
 * Callees:
 *     <none>
 */

__int64 MmGetMaximumNonPagedPoolInBytes()
{
  return qword_140E37698 << 12;
}
