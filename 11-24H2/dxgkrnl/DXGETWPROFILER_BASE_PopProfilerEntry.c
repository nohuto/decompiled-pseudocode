/*
 * XREFs of DXGETWPROFILER_BASE_PopProfilerEntry @ 0x14002F3E0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGETWPROFILER_BASE_PopProfilerEntry(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    if ( *(int *)(v1 + 52) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 211;
      result = DxgkLogInternalTriageEvent(
                 0LL,
                 262146LL,
                 0xFFFFFFFFLL,
                 L"m_ProfilerEntryCount > 0",
                 211LL,
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
