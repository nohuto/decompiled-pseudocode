/*
 * XREFs of DXGETWPROFILER_BASE_PopProfilerEntry @ 0x14002EDA0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

NTSTATUS __fastcall DXGETWPROFILER_BASE_PopProfilerEntry(__int64 a1)
{
  __int64 v1; // rbx
  NTSTATUS result; // eax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    if ( *(int *)(v1 + 52) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 213;
      result = DxgkLogInternalTriageEvent(
                 0LL,
                 262146,
                 0xFFFFFFFFLL,
                 L"m_ProfilerEntryCount > 0",
                 213LL,
                 0LL,
                 0LL,
                 0LL,
                 0LL);
    }
    if ( (*(_DWORD *)(v1 + 52))-- == 1 )
      *(_DWORD *)(v1 + 56) = -1;
    *(_QWORD *)(a1 + 8) = 0LL;
  }
  return result;
}
