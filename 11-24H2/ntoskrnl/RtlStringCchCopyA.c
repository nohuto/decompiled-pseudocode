/*
 * XREFs of RtlStringCchCopyA @ 0x140458158
 * Callers:
 *     EtwpCoverageAddToStringBuffer @ 0x140458118 (EtwpCoverageAddToStringBuffer.c)
 *     CarCopyRuleViolationDetails @ 0x140616580 (CarCopyRuleViolationDetails.c)
 *     EtwpCoverageRecordAtHighIrql @ 0x14064F7A0 (EtwpCoverageRecordAtHighIrql.c)
 *     WheaHwErrorReportSetSectionNameDeviceDriver @ 0x14065C220 (WheaHwErrorReportSetSectionNameDeviceDriver.c)
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x14065C3D0 (WheaReportFatalHwErrorDeviceDriverEx.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x14065C4F0 (WheaReportHwErrorDeviceDriverEx.c)
 *     WheapInitErrorReportDeviceDriver @ 0x14065C848 (WheapInitErrorReportDeviceDriver.c)
 *     WheapCreateRecordFromGenericErrorData @ 0x14065D7A4 (WheapCreateRecordFromGenericErrorData.c)
 *     WheaRemoveErrorSourceDeviceDriver @ 0x1407C6FD0 (WheaRemoveErrorSourceDeviceDriver.c)
 *     AslpFileQueryExportName @ 0x14080F898 (AslpFileQueryExportName.c)
 *     HalpInitGenericErrorSourceEntry @ 0x140B4DCD8 (HalpInitGenericErrorSourceEntry.c)
 *     HalpInitGenericErrorSourceEntryV2 @ 0x140B4DF40 (HalpInitGenericErrorSourceEntryV2.c)
 *     EmpParseStrings @ 0x140C17670 (EmpParseStrings.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyA(NTSTRSAFE_PSTR pszDest, size_t cchDest, NTSTRSAFE_PCSTR pszSrc)
{
  size_t v3; // r9
  signed __int64 v4; // r8
  char v5; // al
  NTSTRSAFE_PSTR v6; // rax
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
    v4 = pszSrc - pszDest;
    do
    {
      if ( !(v3 + cchDest) )
        break;
      v5 = pszDest[v4];
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
