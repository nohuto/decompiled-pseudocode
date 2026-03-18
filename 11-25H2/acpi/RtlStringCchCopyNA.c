/*
 * XREFs of RtlStringCchCopyNA @ 0x140025B80
 * Callers:
 *     ACPIGetProcessorIDWide @ 0x14004D5C8 (ACPIGetProcessorIDWide.c)
 *     ACPIGetConvertToHardwareIDWide @ 0x14004DEF0 (ACPIGetConvertToHardwareIDWide.c)
 *     LoadDDB @ 0x14006B644 (LoadDDB.c)
 *     DumpObject @ 0x14006BA88 (DumpObject.c)
 *     ProcessLoadTable @ 0x14006FA50 (ProcessLoadTable.c)
 *     AMLILoadDDB @ 0x1400C8044 (AMLILoadDDB.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyNA(NTSTRSAFE_PSTR pszDest, size_t cchDest, STRSAFE_PCNZCH pszSrc, size_t cchToCopy)
{
  size_t v4; // r9
  signed __int64 v5; // r8
  char v6; // al
  NTSTRSAFE_PSTR v7; // rax
  NTSTATUS result; // eax

  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    if ( !cchDest )
      return -1073741811;
LABEL_13:
    *pszDest = 0;
    return -1073741811;
  }
  if ( cchToCopy > 0x7FFFFFFE )
    goto LABEL_13;
  v4 = cchToCopy - cchDest;
  v5 = pszSrc - pszDest;
  do
  {
    if ( !(v4 + cchDest) )
      break;
    v6 = pszDest[v5];
    if ( !v6 )
      break;
    *pszDest++ = v6;
    --cchDest;
  }
  while ( cchDest );
  v7 = pszDest - 1;
  if ( cchDest )
    v7 = pszDest;
  *v7 = 0;
  result = -2147483643;
  if ( cchDest )
    return 0;
  return result;
}
