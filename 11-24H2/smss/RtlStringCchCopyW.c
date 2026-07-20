/*
 * XREFs of RtlStringCchCopyW @ 0x14001D9D4
 * Callers:
 *     BasepGetDirectoryRedirectionStatus @ 0x14001D3E0 (BasepGetDirectoryRedirectionStatus.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x14001DA4C (RtlStringCopyWorkerW.c)
 */

NTSTATUS __stdcall RtlStringCchCopyW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  NTSTATUS result; // eax

  if ( cchDest - 1 <= 0x7FFFFFFE )
    return RtlStringCopyWorkerW(pszDest, cchDest, (size_t *)pszSrc, pszSrc, 0x7FFFFFFEuLL);
  result = -1073741811;
  if ( cchDest )
    *pszDest = 0;
  return result;
}
