/*
 * XREFs of GetNvmeHostVersion @ 0x14006E6D4
 * Callers:
 *     NvmeAdapterFabricRegisterDeregisterHost @ 0x1400E2A38 (NvmeAdapterFabricRegisterDeregisterHost.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x14006FCDC (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

NTSTATUS __fastcall GetNvmeHostVersion(NTSTRSAFE_PSTR pszDest)
{
  _OSVERSIONINFOW VersionInformation; // [rsp+30h] [rbp-138h] BYREF

  memset_0(&VersionInformation.dwMajorVersion, 0, 0x118uLL);
  VersionInformation.dwOSVersionInfoSize = 284;
  RtlGetVersion(&VersionInformation);
  return RtlStringCchPrintfA(
           pszDest,
           0x40uLL,
           "%d.%d",
           VersionInformation.dwMajorVersion,
           VersionInformation.dwMinorVersion);
}
