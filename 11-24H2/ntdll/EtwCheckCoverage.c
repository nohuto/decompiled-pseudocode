/*
 * XREFs of EtwCheckCoverage @ 0x18010B8D0
 * Callers:
 *     <none>
 * Callees:
 *     TelemetryCoverageCheckTableForCoverageInternal @ 0x18010B91C (TelemetryCoverageCheckTableForCoverageInternal.c)
 */

BOOLEAN __cdecl EtwCheckCoverage(PTELEMETRY_COVERAGE_POINT CoveragePoint)
{
  _BYTE *TelemetryCoverageHeader; // rcx
  int v4; // ebx
  __int64 v5; // r11

  TelemetryCoverageHeader = NtCurrentPeb()->TelemetryCoverageHeader;
  if ( !TelemetryCoverageHeader )
    return 0;
  if ( (TelemetryCoverageHeader[2] & 1) != 0 )
    return 0;
  v4 = *((_DWORD *)TelemetryCoverageHeader + 6);
  if ( !(unsigned int)TelemetryCoverageCheckTableForCoverageInternal(TelemetryCoverageHeader, CoveragePoint->Hash) )
    return 0;
  *(_DWORD *)(v5 + 12) = v4;
  return 1;
}
