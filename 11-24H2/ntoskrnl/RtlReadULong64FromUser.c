/*
 * XREFs of RtlReadULong64FromUser @ 0x1406FA06C
 * Callers:
 *     PoGetRequester @ 0x1404E12D0 (PoGetRequester.c)
 *     MmAllocateVirtualMemory @ 0x1409DB280 (MmAllocateVirtualMemory.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140ACFCF8 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     EtwpWriteUserEvent @ 0x140AD78A0 (EtwpWriteUserEvent.c)
 * Callees:
 *     ProbeForRead @ 0x1409A8C30 (ProbeForRead.c)
 */

__int64 __fastcall RtlReadULong64FromUser(volatile void *a1)
{
  ProbeForRead(a1, 8uLL, 1u);
  return *(_QWORD *)a1;
}
