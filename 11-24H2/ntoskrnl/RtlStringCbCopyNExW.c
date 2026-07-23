/*
 * XREFs of RtlStringCbCopyNExW @ 0x140483DC0
 * Callers:
 *     _CmGetDeviceRegPropWorker @ 0x1408C37A0 (_CmGetDeviceRegPropWorker.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyNExW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cbDest,
        STRSAFE_PCNZWCH pszSrc,
        size_t cbToCopy,
        NTSTRSAFE_PWSTR *ppszDestEnd,
        size_t *pcbRemaining,
        ULONG dwFlags)
{
  size_t v8; // r10
  size_t v9; // r9
  NTSTATUS result; // eax
  NTSTRSAFE_PWSTR v11; // rax
  __int64 v12; // r10
  wchar_t v13; // ax
  NTSTRSAFE_PWSTR v14; // rdx
  size_t v15; // r9
  signed __int64 v16; // r8

  v8 = cbDest >> 1;
  if ( (cbDest >> 1) - 1 > 0x7FFFFFFE )
    return -1073741811;
  v9 = cbToCopy >> 1;
  if ( v9 >= 0x7FFFFFFF )
  {
    result = -1073741811;
    *pszDest = 0;
LABEL_4:
    if ( cbDest )
      *pszDest = 0;
    return result;
  }
  v15 = v9 - v8;
  v16 = (char *)pszSrc - (char *)pszDest;
  v14 = pszDest;
  do
  {
    if ( !(v15 + v8) )
      break;
    v13 = *(NTSTRSAFE_PWSTR)((char *)v14 + v16);
    if ( !v13 )
      break;
    *v14++ = v13;
    --v8;
  }
  while ( v8 );
  v11 = v14 - 1;
  if ( v8 )
    v11 = v14;
  v12 = -(__int64)v8;
  *v11 = 0;
  result = v12 == 0 ? 0x80000005 : 0;
  if ( !v12 )
    goto LABEL_4;
  return result;
}
