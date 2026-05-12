/*
 * XREFs of RtlStringCchCopyW @ 0x1400368AC
 * Callers:
 *     StorCreateSystemLogEntry @ 0x14008F060 (StorCreateSystemLogEntry.c)
 *     NvmeAdapterGetStorageSerialNumberProperty @ 0x140199DF0 (NvmeAdapterGetStorageSerialNumberProperty.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1401B86B4 (RaidGetStorageAdapterSerialNumberProperty.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyW(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v3; // r9
  signed __int64 v4; // r10
  wchar_t v5; // ax
  NTSTRSAFE_PWSTR v6; // rax
  NTSTATUS result; // eax

  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    result = -1073741811;
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v3 = 2147483646 - cchDest;
    v4 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !(v3 + cchDest) )
        break;
      v5 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v4);
      if ( !v5 )
        break;
      *pszDest++ = v5;
      --cchDest;
    }
    while ( cchDest );
    v6 = pszDest - 1;
    if ( cchDest )
      v6 = pszDest;
    *v6 = 0;
    return cchDest == 0 ? 0x80000005 : 0;
  }
  return result;
}
