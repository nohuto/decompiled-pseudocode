/*
 * XREFs of RtlStringCbCopyW @ 0x1400338A8
 * Callers:
 *     NvmeDumpCreateDumpDriverInfo @ 0x14019F4E0 (NvmeDumpCreateDumpDriverInfo.c)
 *     NvmeNativeDumpCreateDumpDriverInfo @ 0x1401A08A8 (NvmeNativeDumpCreateDumpDriverInfo.c)
 *     RaidAdapterCreateDriverInfo @ 0x1401BB2C0 (RaidAdapterCreateDriverInfo.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1400338E4 (RtlStringCopyWorkerW.c)
 */

NTSTATUS __stdcall RtlStringCbCopyW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v3; // rdx
  NTSTATUS result; // eax
  size_t v5; // [rsp+20h] [rbp-18h]

  v3 = cbDest >> 1;
  if ( v3 - 1 <= 0x7FFFFFFE )
    return RtlStringCopyWorkerW(pszDest, v3, (size_t *)pszSrc, pszSrc, v5);
  result = -1073741811;
  if ( v3 )
    *pszDest = 0;
  return result;
}
