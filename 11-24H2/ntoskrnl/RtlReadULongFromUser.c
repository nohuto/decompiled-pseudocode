/*
 * XREFs of RtlReadULongFromUser @ 0x1406FA0A8
 * Callers:
 *     PoGetRequester @ 0x1404E12D0 (PoGetRequester.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140ACFCF8 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     NtSetInformationToken @ 0x140AD4280 (NtSetInformationToken.c)
 * Callees:
 *     ProbeForRead @ 0x1409A8C30 (ProbeForRead.c)
 */

__int64 __fastcall RtlReadULongFromUser(unsigned int *a1)
{
  ProbeForRead(a1, 4uLL, 1u);
  return *a1;
}
