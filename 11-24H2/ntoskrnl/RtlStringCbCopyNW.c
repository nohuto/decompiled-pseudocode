/*
 * XREFs of RtlStringCbCopyNW @ 0x1403D9E84
 * Callers:
 *     PopDiagTraceIrpFinish @ 0x140377E10 (PopDiagTraceIrpFinish.c)
 *     PopDiagGetDriverName @ 0x1403D9940 (PopDiagGetDriverName.c)
 *     PopDiagTraceDeviceAcquireIrp @ 0x1403D9D34 (PopDiagTraceDeviceAcquireIrp.c)
 *     PopDiagTraceDIrpAfterSx @ 0x1403D9F9C (PopDiagTraceDIrpAfterSx.c)
 *     HalpMcEnumerateAndSetPatchConfig @ 0x1405594B8 (HalpMcEnumerateAndSetPatchConfig.c)
 *     IopCheckIfNotNativeDriver @ 0x140711C94 (IopCheckIfNotNativeDriver.c)
 *     PiUEventGetProcessImagePath @ 0x140724B20 (PiUEventGetProcessImagePath.c)
 *     AslPathWildcardFindFirst @ 0x14080A0A4 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x14080A69C (AslPathWildcardFindNext.c)
 *     LocalConvertSidToStringSidW @ 0x140861E34 (LocalConvertSidToStringSidW.c)
 *     AuthzBasepCopyoutClaimAttributes @ 0x140A074F4 (AuthzBasepCopyoutClaimAttributes.c)
 *     AuthzBasepCopyoutClaimAttributeValues @ 0x140A0767C (AuthzBasepCopyoutClaimAttributeValues.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCopyNW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, STRSAFE_PCNZWCH pszSrc, size_t cbToCopy)
{
  size_t v4; // rdx
  size_t v5; // r9
  size_t v6; // r9
  signed __int64 v7; // r10
  wchar_t v8; // ax
  NTSTRSAFE_PWSTR v9; // rax

  v4 = cbDest >> 1;
  if ( v4 - 1 > 0x7FFFFFFE )
    return -1073741811;
  v5 = cbToCopy >> 1;
  if ( v5 > 0x7FFFFFFE )
  {
    *pszDest = 0;
    return -1073741811;
  }
  v6 = v5 - v4;
  v7 = (char *)pszSrc - (char *)pszDest;
  do
  {
    if ( !(v6 + v4) )
      break;
    v8 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v7);
    if ( !v8 )
      break;
    *pszDest++ = v8;
    --v4;
  }
  while ( v4 );
  v9 = pszDest - 1;
  if ( v4 )
    v9 = pszDest;
  *v9 = 0;
  return v4 == 0 ? 0x80000005 : 0;
}
