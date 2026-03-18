/*
 * XREFs of RtlReadULongFromUser @ 0x1406FC468
 * Callers:
 *     PoGetRequester @ 0x1404EA35C (PoGetRequester.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140AD198C (PspWow64ReadOrWriteThreadCpuArea.c)
 * Callees:
 *     ProbeForRead @ 0x1409B18E0 (ProbeForRead.c)
 */

__int64 __fastcall RtlReadULongFromUser(unsigned int *a1)
{
  ProbeForRead(a1, 4uLL, 1u);
  return *a1;
}
