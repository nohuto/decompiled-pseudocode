/*
 * XREFs of ExStopRecordingIRTimerExpiries @ 0x140ABCE48
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14032DC2C (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     PoDiagTraceIRTimerSleepStudyRundown @ 0x1404D65C4 (PoDiagTraceIRTimerSleepStudyRundown.c)
 *     ExpGetIRTimerDesc @ 0x1404D9710 (ExpGetIRTimerDesc.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void ExStopRecordingIRTimerExpiries()
{
  _DWORD *v0; // rbx
  int v1; // ebp
  unsigned int i; // edi
  wchar_t **IRTimerDesc; // r14
  __int16 j; // si
  int v5; // ecx

  v0 = (_DWORD *)_InterlockedExchange64(&ExpIRTimerExpiryCounts, 0LL);
  if ( v0 )
  {
    v1 = 0;
    for ( i = 0; i < 0x14; ++i )
    {
      IRTimerDesc = ExpGetIRTimerDesc(i);
      for ( j = 0; (unsigned __int16)j < *((unsigned __int8 *)IRTimerDesc + 16); ++j )
      {
        v5 = v0[v1];
        if ( v5 )
          PoDiagTraceIRTimerSleepStudyRundown(v5, j, *IRTimerDesc);
        ++v1;
      }
    }
    ExFreePoolWithTag(v0, 0x69547845u);
  }
}
