/*
 * XREFs of RtlStringCchCopyNW @ 0x140468EBC
 * Callers:
 *     PiDevCfgParsePropertyKeyName @ 0x1405A3500 (PiDevCfgParsePropertyKeyName.c)
 *     IopLogBlockedDriverEvent @ 0x1407067DC (IopLogBlockedDriverEvent.c)
 *     SdbpSafeAllocAndConcatW @ 0x1407F1FDC (SdbpSafeAllocAndConcatW.c)
 *     SdbQueryDataExTagID @ 0x1407F253C (SdbQueryDataExTagID.c)
 *     EtwpCoverageSamplerQuery @ 0x1408232B0 (EtwpCoverageSamplerQuery.c)
 *     PiUEventNotifyUserMode @ 0x14096D4D4 (PiUEventNotifyUserMode.c)
 *     WmipBuildInstanceSet @ 0x1409B7DA8 (WmipBuildInstanceSet.c)
 *     IopErrorLogThread @ 0x140A44600 (IopErrorLogThread.c)
 *     PiUEventHandleVetoEvent @ 0x140A8679C (PiUEventHandleVetoEvent.c)
 *     PoQueryProcessEnergyTrackingState @ 0x140A90964 (PoQueryProcessEnergyTrackingState.c)
 *     AslPathSplit @ 0x140AA155C (AslPathSplit.c)
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
