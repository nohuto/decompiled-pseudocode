/*
 * XREFs of RtlStringCchCopyExW @ 0x14001ECF0
 * Callers:
 *     NtPnpGetDeviceInterfaceList @ 0x14001E410 (NtPnpGetDeviceInterfaceList.c)
 * Callees:
 *     RtlStringCopyWorkerW_0 @ 0x14001EDB0 (RtlStringCopyWorkerW_0.c)
 */

NTSTATUS __stdcall RtlStringCchCopyExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        NTSTRSAFE_PCWSTR pszSrc,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcchRemaining,
        ULONG dwFlags)
{
  NTSTATUS result; // eax
  size_t v10; // rdx
  wchar_t *v11; // r8
  size_t v12; // [rsp+20h] [rbp-28h]
  size_t pcchNewDestLength[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( cchDest - 1 <= 0x7FFFFFFE )
  {
    pcchNewDestLength[0] = 0LL;
    result = RtlStringCopyWorkerW_0(pszDest, cchDest, pcchNewDestLength, pszSrc, v12);
    v10 = cchDest - pcchNewDestLength[0];
    v11 = &pszDest[pcchNewDestLength[0]];
    if ( result >= 0
      || ((v10 = cchDest & 0x7FFFFFFFFFFFFFFFLL, (cchDest & 0x7FFFFFFFFFFFFFFFLL) == 0)
        ? (v10 = cchDest - pcchNewDestLength[0])
        : (v11 = pszDest, *pszDest = 0),
          result == -2147483643) )
    {
      if ( ppszDestEnd )
        *ppszDestEnd = v11;
      if ( pcchRemaining )
        *pcchRemaining = v10;
    }
  }
  else
  {
    result = -1073741811;
    if ( cchDest )
      *pszDest = 0;
  }
  return result;
}
