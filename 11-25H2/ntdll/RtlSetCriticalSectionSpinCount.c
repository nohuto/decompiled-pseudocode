/*
 * XREFs of RtlSetCriticalSectionSpinCount @ 0x1800DD730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl RtlSetCriticalSectionSpinCount(PRTL_CRITICAL_SECTION CriticalSection, ULONG SpinCount)
{
  int v2; // eax
  ULONG v4; // r9d
  unsigned __int64 v5; // rcx
  ULONG result; // eax

  v2 = CriticalSection->SpinCount;
  v4 = v2 ^ (SpinCount ^ v2) & 0xFFFFFF;
  v5 = v4 & 0xFF000000;
  if ( NtCurrentPeb()->NumberOfProcessors != 1 )
    v5 = v4;
  result = v2 & 0xFFFFFF;
  CriticalSection->SpinCount = v5;
  return result;
}
