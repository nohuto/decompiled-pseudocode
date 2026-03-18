/*
 * XREFs of RtlReadULong64FromUser @ 0x1406F0A78
 * Callers:
 *     PoGetRequester @ 0x1404E911C (PoGetRequester.c)
 *     MmAllocateVirtualMemory @ 0x1409E25F0 (MmAllocateVirtualMemory.c)
 * Callees:
 *     ProbeForRead @ 0x1409CC640 (ProbeForRead.c)
 */

__int64 __fastcall RtlReadULong64FromUser(volatile void *a1)
{
  ProbeForRead(a1, 8uLL, 1u);
  return *(_QWORD *)a1;
}
