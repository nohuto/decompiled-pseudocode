/*
 * XREFs of RtlReadULong64FromUser @ 0x1406FC42C
 * Callers:
 *     PoGetRequester @ 0x1404EA35C (PoGetRequester.c)
 *     MmAllocateVirtualMemory @ 0x1409E14D0 (MmAllocateVirtualMemory.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140AD198C (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     ProbeForRead @ 0x1409B18E0 (ProbeForRead.c)
 */

__int64 __fastcall RtlReadULong64FromUser(volatile void *a1)
{
  ProbeForRead(a1, 8uLL, 1u);
  return *(_QWORD *)a1;
}
