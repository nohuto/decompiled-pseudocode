/*
 * XREFs of RtlStringCchCopyNW @ 0x14045EEEC
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x1405A3D00 (PiDevCfgParsePropertyKeyName.c)
 *     IopLogBlockedDriverEvent @ 0x14071046C (IopLogBlockedDriverEvent.c)
 *     SdbpSafeAllocAndConcatW @ 0x1408025DC (SdbpSafeAllocAndConcatW.c)
 *     SdbQueryDataExTagID @ 0x140802B2C (SdbQueryDataExTagID.c)
 *     EtwpCoverageSamplerQuery @ 0x1409454F0 (EtwpCoverageSamplerQuery.c)
 *     WmipBuildInstanceSet @ 0x1409B053C (WmipBuildInstanceSet.c)
 *     PiUEventNotifyUserMode @ 0x1409ECA04 (PiUEventNotifyUserMode.c)
 *     IopErrorLogThread @ 0x140A3FC00 (IopErrorLogThread.c)
 *     PiUEventHandleVetoEvent @ 0x140A8758C (PiUEventHandleVetoEvent.c)
 *     PoQueryProcessEnergyTrackingState @ 0x140A91254 (PoQueryProcessEnergyTrackingState.c)
 *     AslPathSplit @ 0x140AA151C (AslPathSplit.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyNW(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        STRSAFE_PCNZWCH pszSrc,
        size_t cchToCopy)
{
  size_t v4; // r10
  size_t v5; // r9
  signed __int64 v6; // r8
  wchar_t v7; // ax
  NTSTRSAFE_PWSTR v8; // rax
  NTSTATUS result; // eax

  v4 = cchDest;
  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    result = -1073741811;
    if ( !cchDest )
      return result;
LABEL_13:
    *pszDest = 0;
    return result;
  }
  if ( cchToCopy > 0x7FFFFFFE )
  {
    result = -1073741811;
    goto LABEL_13;
  }
  v5 = cchToCopy - cchDest;
  v6 = (char *)pszSrc - (char *)pszDest;
  do
  {
    if ( !(v5 + v4) )
      break;
    v7 = *(NTSTRSAFE_PWSTR)((char *)pszDest + v6);
    if ( !v7 )
      break;
    *pszDest++ = v7;
    --v4;
  }
  while ( v4 );
  v8 = pszDest - 1;
  if ( v4 )
    v8 = pszDest;
  *v8 = 0;
  return v4 == 0 ? 0x80000005 : 0;
}
