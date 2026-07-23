/*
 * XREFs of RtlCopyToUser @ 0x1406FA008
 * Callers:
 *     VslQueryRuntimeAttestationReport @ 0x14070DA00 (VslQueryRuntimeAttestationReport.c)
 *     NtQueryInformationJobObject @ 0x140ACACA0 (NtQueryInformationJobObject.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x140ACFCF8 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     SeQueryHSTIResults @ 0x140AEBC6C (SeQueryHSTIResults.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     ProbeForRead @ 0x1409A8C30 (ProbeForRead.c)
 */

void *__fastcall RtlCopyToUser(void *a1, void *Src, size_t Size)
{
  void *result; // rax

  result = 0LL;
  if ( Size )
  {
    ProbeForRead(a1, Size, 1u);
    return RtlCopyVolatileMemory(a1, Src, Size);
  }
  return result;
}
